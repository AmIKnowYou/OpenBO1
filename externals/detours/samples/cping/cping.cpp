//////////////////////////////////////////////////////////////////////////////
//
//	Module:		cping.exe - COM Ping
//	File:		cping.cpp
//
//	Copyright:	1996-2001, Microsoft Corporation
//
//  Microsoft Research Detours Package, Version 1.5 (Build 46)
//
#define INITGUID
#define _RPCRT4_
#include <objbase.h>
#include <objidl.h>
#include <ocidl.h>
#include <olectl.h>
#include <shellapi.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <rpc.h>
#include <rpcdcep.h>
#include <detours.h>
#include "iping.h"

#define BE_VERBOSE
////////////////////////////////////////////////////////// Assertion Handling.
//
#pragma warning(disable:4127)   // Many of our asserts are constants.

#ifndef _DEFINED_ASMBREAK_
#define _DEFINED_ASMBREAK_
#define ASMBREAK()	__asm { int 3 }
//#define ASMBREAK()	DebugBreak()
#endif	// _DEFINED_ASMBREAK_

#ifndef NODEBUG
#undef ASSERT
VOID PingAssertMessage(CONST PCHAR szMsg, CONST PCHAR szFile, ULONG nLine);
#define ASSERT(x)   \
do { if (!((int)(x))) { PingAssertMessage(#x, __FILE__, __LINE__); ASMBREAK(); }} while (0)
;
#else	// NODEBUG
#undef ASSERT
#define ASSERT(x)
#endif	// NODEBUG

//////////////////////////////////////////////////////////////////////////////

LONGLONG __declspec(naked) __stdcall PingLoadCycleCount(VOID)
{
    __asm _emit 0x0f;
    __asm _emit 0x31;
    __asm ret;
}

#define arrayof(x)		(sizeof(x)/sizeof(x[0]))
#define	wcssize(x)		((wcslen(x) + 1) * sizeof(WCHAR))
#define	strsize(x)		((strlen(x) + 1) * sizeof(CHAR))

extern "C" {
	ULONG WINAPI iping_DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);
	HRESULT STDAPICALLTYPE iping_DllRegisterServer(void);
	HRESULT STDAPICALLTYPE iping_DllUnregisterServer(void);
	HRESULT STDAPICALLTYPE iping_DllGetClassObject(REFCLSID rclsid,
                                                   REFIID riid, PVOID *ppv);
	HRESULT STDAPICALLTYPE iping_DllCanUnloadNow(void);
}

STDAPI PingMessage(PCSTR msg, ...);

///////////////////////////////////////////////////////////////////// Globals.

FILE *				g_fpLog = NULL;
void *				g_pBuffer = NULL;
WCHAR				g_wzServerName[128];
WCHAR				g_wzClientName[128];
ULONG				g_cbBufferMax = 262144;
double				g_dCyclesPerSecond = 0.0;
double				g_dMsPerCycle = 0.0;
double				g_dLatency = 0.0;
BOOL 				g_fSummarize = TRUE;
ULONG				g_nFixedToClient = 0;
ULONG				g_nFixedToServer = 0;

//////////////////////////////////////////////////////////////////////////////
//
static CHAR s_szMessageBuf[2048];

STDAPI PingMessage(PCSTR msg, ...)
{
	double d = 0.0;										// Required for FP support
    (void)d;
	va_list args;

	va_start(args, msg);
	vsprintf(s_szMessageBuf, msg, args);
	
	// OutputDebugStringA(s_szMessageBuf);

	fwrite(s_szMessageBuf, 1, strlen(s_szMessageBuf), stdout);
	fflush(stdout);
	return S_FALSE;
}

VOID PingAssertMessage(CONST PCHAR szMsg, CONST PCHAR szFile, ULONG nLine)
{
	PingMessage("%08lx ASSERT(%s) failed in %s, line %d.\n",
                GetCurrentThreadId(), szMsg, szFile, nLine);
	printf("ASSERT(%s) failed in %s, line %d.\n", szMsg, szFile, nLine);
}

BOOLEAN CheckResult(HRESULT hr, PCSTR pszMsg, ...)
{
	if (FAILED(hr)) {
		va_list args;
		
		va_start(args, pszMsg);
		vsprintf(s_szMessageBuf, pszMsg, args);
		
		printf("  %-57.57s -> %08lx\n", s_szMessageBuf, hr);
		return FALSE;
	}
	return TRUE;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
#define NTSYSAPI			DECLSPEC_IMPORT
#define NTAPI				__stdcall
#define NTSTATUS			LONG
#define PIO_APC_ROUTINE		PVOID

typedef struct 
{
	NTSTATUS	Status;
	LONG		Information;
} *PIO_STATUS_BLOCK;

NTSTATUS (NTAPI *s_pNtWaitForSingleObject)(HANDLE Handle,
										   BOOLEAN Alertable,
										   PLARGE_INTEGER Timeout) = NULL;

NTSTATUS (NTAPI *s_pNtDeviceIoControlFile)(HANDLE FileHandle,
										   HANDLE Event,
										   PIO_APC_ROUTINE ApcRoutine,
										   PVOID ApcContext,
										   PIO_STATUS_BLOCK IoStatusBlock,
										   ULONG IoControlCode,
										   PVOID InputBuffer,
										   ULONG InputBufferLength,
										   PVOID OutputBuffer,
										   ULONG OutputBufferLength) = NULL;

NTSTATUS (NTAPI *s_pReal_NtWaitForSingleObject)(HANDLE Handle,
                                                BOOLEAN Alertable,
                                                PLARGE_INTEGER Timeout) = NULL;

NTSTATUS (NTAPI *s_pReal_NtDeviceIoControlFile)(HANDLE FileHandle,
                                                HANDLE Event,
                                                PIO_APC_ROUTINE ApcRoutine,
                                                PVOID ApcContext,
                                                PIO_STATUS_BLOCK IoStatusBlock,
                                                ULONG IoControlCode,
                                                PVOID InputBuffer,
                                                ULONG InputBufferLength,
                                                PVOID OutputBuffer,
                                                ULONG OutputBufferLength) = NULL;

//////////////////////////////////////////////////////////////////////////////
//
static LONG 	s_nInCall = 0;
static LONG 	s_nInIRpc = 0;
static ULONG	s_nThread = 0;

enum {
	E_MinValue = 0,
	E_Sleep = 1,
	
	E_Proxy,
	
	E_I_RpcGetBuffer,
	E_I_RpcSendReceive,
	E_I_RpcFreeBuffer,
	E_I_RpcSend,
	E_I_RpcReceive,
	E_I_RpcFreePipeBuffer,
	E_I_RpcReallocPipeBuffer,
	E_I_RpcRequestMutex,
	E_I_RpcClearMutex,
	E_I_RpcAllocate,
	E_I_RpcFree,
	E_I_RpcPauseExecution,
	E_I_RpcMonitorAssociation,
	E_I_RpcStopMonitorAssociation,

	E_Recv,
	E_RecvFrom,
	E_NtWaitForSingleObject,
	E_NtDeviceIoControlFileRecv,
	E_NtDeviceIoControlFile,

	E_Send,
	E_SendTo,
	E_NtDeviceIoControlFileSend,
	
	E_DCOM,
	E_RPC,
	E_UDP,
	E_NET,

	E_MaxValue,
	
	E_DcomBeg = E_Proxy,
	E_DcomEnd = E_Proxy,

	E_RpcBeg = E_I_RpcGetBuffer,
	E_RpcEnd = E_I_RpcStopMonitorAssociation,
	
	E_UdpBeg = E_Send,
	E_UdpEnd = E_NtDeviceIoControlFileSend,
	
	E_NetBeg = E_Recv,
	E_NetEnd = E_NtDeviceIoControlFile,
};

PCHAR s_rszRouteNames[E_MaxValue] =
{
	"<NULL>",
	"Sleep",
	"Proxy",
	"I_RpcGetBuffer",
	"I_RpcSendReceive",
	"I_RpcFreeBuffer",
	"I_RpcSend",
	"I_RpcReceive",
	"I_RpcFreePipeBuffer",
	"I_RpcReallocPipeBuffer",
	"I_RpcRequestMutex",
	"I_RpcClearMutex",
	"I_RpcAllocate",
	"I_RpcFree",
	"I_RpcPauseExecution",
	"I_RpcMonitorAssociation",
	"I_RpcStopMonitorAssociation",
	"Recv",
	"RecvFrom",
	"NtWaitForSingleObject",
	"NtDeviceIoControlRecv",
	"NtDeviceIoControlFile",
	"Send",
	"SendTo",
	"NtDeviceIoControlSend",
	"DCOM",
	"RPC",
	"UDP/TCP (Send Only)",
	"NET",
};

LONGLONG 	s_rllCycles[E_MaxValue];
LONGLONG 	s_rllTotals[E_MaxValue];
LONG		s_rllCounts[E_MaxValue];

class CRouteTime 
{
  public:
	inline CRouteTime(LONG nRoute)
        {
            if (s_nInCall && GetCurrentThreadId() == s_nThread) {
                LONGLONG llBeg;
                m_nOldRoute = s_nRoute;
                m_llOldMinus = s_llMinus;
			
                s_nRoute = m_nRoute = nRoute;

                s_rllCounts[m_nRoute]++;
                s_llMinus = 0;
                ASSERT(m_nRoute != m_nOldRoute);
			
                llBeg = PingLoadCycleCount();
                m_llBeg = llBeg;
            }
            else {
                m_nRoute = 0;
            }
        }
	
	inline ~CRouteTime()
        {
            if (m_nRoute) {
                LONGLONG llEnd = PingLoadCycleCount();
                llEnd -= m_llBeg;
                s_rllTotals[m_nRoute] += llEnd;
                s_rllCycles[m_nRoute] += llEnd - s_llMinus;
                s_nRoute = m_nOldRoute;
                s_llMinus = m_llOldMinus + llEnd;
            }
        }

	inline BOOL Routed()
        {
            return m_nRoute;
        }
	
  public:
	ULONG		m_nRoute;
	ULONG		m_nOldRoute;
	LONGLONG	m_llBeg;
	LONGLONG	m_llOldMinus;
	static ULONG	s_nRoute;
	static LONGLONG	s_llMinus;
};

ULONG		CRouteTime::s_nRoute = 0;
LONGLONG	CRouteTime::s_llMinus = 0;

VOID ZeroCycles(VOID)
{
	for (ULONG n = 0; n < E_MaxValue; n++) {
		s_rllCycles[n] = 0;
		s_rllTotals[n] = 0;
		s_rllCounts[n] = 0;
	}
}

VOID DumpCycles(LONG nRoute)
{
	if (s_rllCycles[nRoute] != 0 || s_rllTotals[nRoute] != 0) {
		printf(";;   %-21.21s %10I64d %8.3fms %10I64d %8.3fms :%6d\n",
			   s_rszRouteNames[nRoute],
			   s_rllCycles[nRoute], (double)s_rllCycles[nRoute] * g_dMsPerCycle,
			   s_rllTotals[nRoute], (double)s_rllTotals[nRoute] * g_dMsPerCycle,
			   s_rllCounts[nRoute]);
	}
}

VOID SummarizeCycles(VOID)
{
	for (ULONG n = E_DCOM; n <= E_NET; n++) {
		s_rllCycles[n] = 0;
		s_rllTotals[n] = 0;
		s_rllCounts[n] = 0;
	}
	
	for (n = E_DcomBeg; n <= E_DcomEnd; n++) {
		s_rllCycles[E_DCOM] += s_rllCycles[n];
		s_rllTotals[E_DCOM] += s_rllTotals[n];
	}
	for (n = E_RpcBeg; n <= E_RpcEnd; n++) {
		s_rllCycles[E_RPC] += s_rllCycles[n];
		s_rllTotals[E_RPC] += s_rllTotals[n];
	}
	for (n = E_UdpBeg; n <= E_UdpEnd; n++) {
		s_rllCycles[E_UDP] += s_rllCycles[n];
		s_rllTotals[E_UDP] += s_rllTotals[n];
	}
	for (n = E_NetBeg; n <= E_NetEnd; n++) {
		s_rllCycles[E_NET] += s_rllCycles[n];
		s_rllTotals[E_NET] += s_rllTotals[n];
	}

#ifdef BE_VERBOSE	
	printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
		   "::::::::::::::::::\n");
	printf(":: Protocol Cycles:\n");
	DumpCycles(E_DCOM);
	DumpCycles(E_RPC);
	DumpCycles(E_UDP);
	DumpCycles(E_NET);
#endif	
	
	s_rllCycles[E_DCOM] /= s_rllCounts[E_DCOM];
	s_rllCycles[E_RPC] /= s_rllCounts[E_DCOM];
	s_rllCycles[E_UDP] /= s_rllCounts[E_DCOM];
	s_rllCycles[E_NET] /= s_rllCounts[E_DCOM];
	s_rllTotals[E_DCOM] /= s_rllCounts[E_DCOM];
	s_rllTotals[E_RPC] /= s_rllCounts[E_DCOM];
	s_rllTotals[E_UDP] /= s_rllCounts[E_DCOM];
	s_rllTotals[E_NET] /= s_rllCounts[E_DCOM];
	
#ifdef BE_VERBOSE
	printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
		   "::::::::::::::::::\n");
	printf(":: Protocol Cycles Per DCOM Call:\n");
	DumpCycles(E_DCOM);
	DumpCycles(E_RPC);
	DumpCycles(E_UDP);
	DumpCycles(E_NET);
#endif	

	for (n = 0; n < E_DCOM; n++) {
		s_rllCycles[n] = 0;
		s_rllTotals[n] = 0;
		s_rllCounts[n] = 0;
	}
}

#pragma warning(disable:4100)   // Trampolines don't use formal parameters.

//////////////////////////////////////////////////////////////////////////////
//
// To re-route you need three things:
//	1) DETOUR_TRAMPOLINE:
//		Name of function to be re-routed
//		Prototype of original function (the base) trampoline function (Real_*).
// 	2) Instrumentation function. (Catch_*)
//	3) Insert instrumentation in the function (modify the binary):
//		DetourFunctionWithTrampoline((PBYTE)Real_Sleep, (PBYTE)Catch_Sleep);
//
DETOUR_TRAMPOLINE(VOID WINAPI Real_Sleep(DWORD dwMilliseconds),
                  Sleep);
DETOUR_TRAMPOLINE(int WSAAPI Real_send(SOCKET s,
                                       const char * buf, int len, int flags),
                  send);
DETOUR_TRAMPOLINE(int WSAAPI Real_sendto(SOCKET s,
                                         const char * buf, int len, int flags,
                                         const struct sockaddr * to, int tolen),
                  sendto);
DETOUR_TRAMPOLINE(int WSAAPI Real_recv(SOCKET s, char * buf, int len, int flags),
                  recv);
DETOUR_TRAMPOLINE(int WSAAPI Real_recvfrom(SOCKET s,char * buf, int len, int flags,
                                           struct sockaddr * from, int * fromlen),
                  recvfrom);

DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcGetBuffer(RPC_MESSAGE * Message),
                  I_RpcGetBuffer);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcSendReceive(RPC_MESSAGE * Message),
                  I_RpcSendReceive);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcFreeBuffer(RPC_MESSAGE * Message),
                  I_RpcFreeBuffer);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcSend(PRPC_MESSAGE Message),
                  I_RpcSend);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcReceive(PRPC_MESSAGE Message,
                                    unsigned int Size),
                  I_RpcReceive);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcFreePipeBuffer(RPC_MESSAGE * Message),
                  I_RpcFreePipeBuffer);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcReallocPipeBuffer(PRPC_MESSAGE Msg,
                                              unsigned int Size),
                  I_RpcReallocPipeBuffer);
DETOUR_TRAMPOLINE(void RPC_ENTRY
                  Real_I_RpcRequestMutex(I_RPC_MUTEX * Mutex),
                  I_RpcRequestMutex);
DETOUR_TRAMPOLINE(void RPC_ENTRY
                  Real_I_RpcClearMutex(I_RPC_MUTEX Mutex),
                  I_RpcClearMutex);
DETOUR_TRAMPOLINE(void * RPC_ENTRY
                  Real_I_RpcAllocate(unsigned int Size),
                  I_RpcAllocate);
DETOUR_TRAMPOLINE(void RPC_ENTRY
                  Real_I_RpcFree(void * Object),
                  I_RpcFree);
DETOUR_TRAMPOLINE(void RPC_ENTRY
                  Real_I_RpcPauseExecution(unsigned long Milliseconds),
                  I_RpcPauseExecution);

#if _MSC_VER < 1300
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcMonitorAssociation(RPC_BINDING_HANDLE Handle,
                                               PRPC_RUNDOWN RundownRoutine,
                                               void * Context),
                  I_RpcMonitorAssociation);
DETOUR_TRAMPOLINE(RPC_STATUS RPC_ENTRY
                  Real_I_RpcStopMonitorAssociation(RPC_BINDING_HANDLE Handle),
                  I_RpcStopMonitorAssociation);
#endif

//////////////////////////////////////////////////////////////////////////////
//
static VOID WINAPI Catch_Sleep(DWORD dwMilliseconds)
{
	CRouteTime rt(E_Sleep);
	Real_Sleep(dwMilliseconds);
}

static int WSAAPI Catch_send(SOCKET s, const char * buf, int len, int flags)
{
	CRouteTime rt(E_Send);
	return Real_send(s, buf, len, flags);
}

#if 0
static int WSAAPI Catch_recv(SOCKET s, char * buf, int len, int flags)
{
	CRouteTime rt(E_Recv);
	return recv(s, buf, len, flags);
}

static int WSAAPI Catch_recvfrom(SOCKET s,char * buf, int len, int flags,
								 struct sockaddr * from, int * fromlen)
{
	CRouteTime rt(E_RecvFrom);
	return recvfrom(s, buf, len, flags, from, fromlen);
}

static VOID DumpStack(PCHAR pszDesc, PULONG pStack)
{
	printf("%-15.15s:", pszDesc);
	for (ULONG n = 0; n < 6; n++) {
		__try {
			printf(" %08x", pStack[1]);
			pStack = (PULONG)pStack[0];
		} __except(EXCEPTION_EXECUTE_HANDLER) {
			n = 8;
		}
	}
	printf("\n");
}
#endif

static NTSTATUS NTAPI Catch_NtWaitForSingleObject(HANDLE Handle,
												  BOOLEAN Alertable,
												  PLARGE_INTEGER Timeout)
{
	CRouteTime rt(E_NtWaitForSingleObject);
	if (rt.Routed()) {
		//printf("WaitForSingle(%d, %I64d)\n", Alertable, Timeout->QuadPart);
	}
	
#ifdef INCLUDE_THIS	
	if (rt.Routed()) {
		PULONG pStack = NULL;
		
		__asm mov pStack, ebp;
		DumpStack("NtWaitForSingle", pStack);
	}
#endif	
	return s_pReal_NtWaitForSingleObject(Handle, Alertable, Timeout);
}

#define IO_CONTROL_AFD_SEND_DATAGRAM		0x12023
#define IO_CONTROL_AFD_SEND					0x1201f
#define IO_CONTROL_AFD_RECV_DATAGRAM		0x1201b
#define IO_CONTROL_AFD_RECV					0x12017

static NTSTATUS NTAPI Catch_NtDeviceIoControlFile(HANDLE FileHandle,
                                                  HANDLE Event,
                                                  PIO_APC_ROUTINE ApcRoutine,
                                                  PVOID ApcContext,
                                                  PIO_STATUS_BLOCK IoStatusBlock,
                                                  ULONG IoControlCode,
                                                  PVOID InputBuffer,
                                                  ULONG InputBufferLength,
                                                  PVOID OutputBuffer,
                                                  ULONG OutputBufferLength)
{
	if (IoControlCode == IO_CONTROL_AFD_SEND_DATAGRAM ||
		IoControlCode == IO_CONTROL_AFD_SEND) {
		CRouteTime rt(E_NtDeviceIoControlFileSend);
		NTSTATUS NtStatus = s_pReal_NtDeviceIoControlFile(FileHandle,
                                                          Event,
                                                          ApcRoutine,
                                                          ApcContext,
                                                          IoStatusBlock,
                                                          IoControlCode,
                                                          InputBuffer,
                                                          InputBufferLength,
                                                          OutputBuffer,
                                                          OutputBufferLength);
		if (NtStatus == STATUS_PENDING) {
			LARGE_INTEGER li;
			li.QuadPart = INFINITE;
			s_pReal_NtWaitForSingleObject(Event, FALSE, &li);
			NtStatus = IoStatusBlock->Status;
		}
		return NtStatus;
	}
	else if (IoControlCode == IO_CONTROL_AFD_RECV_DATAGRAM ||
			 IoControlCode == IO_CONTROL_AFD_RECV) {
		CRouteTime rt(E_NtDeviceIoControlFileRecv);
		return s_pReal_NtDeviceIoControlFile(FileHandle,
                                             Event,
                                             ApcRoutine,
                                             ApcContext,
                                             IoStatusBlock,
                                             IoControlCode,
                                             InputBuffer,
                                             InputBufferLength,
                                             OutputBuffer,
                                             OutputBufferLength);
	}
	else {
		CRouteTime rt(E_NtDeviceIoControlFile);
		if (rt.Routed()) {
			printf("IoControlCode: %08lx\n", IoControlCode);
			__asm int 3;
		}
		return s_pReal_NtDeviceIoControlFile(FileHandle,
                                             Event,
                                             ApcRoutine,
                                             ApcContext,
                                             IoStatusBlock,
                                             IoControlCode,
                                             InputBuffer,
                                             InputBufferLength,
                                             OutputBuffer,
                                             OutputBufferLength);
	}
}


static RPC_STATUS RPC_ENTRY Catch_I_RpcGetBuffer(RPC_MESSAGE * Message)
{
	CRouteTime rt(E_I_RpcGetBuffer);
	return Real_I_RpcGetBuffer(Message);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcSendReceive(RPC_MESSAGE * Message)
{
	CRouteTime rt(E_I_RpcSendReceive);
	return Real_I_RpcSendReceive(Message);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcFreeBuffer(RPC_MESSAGE * Message)
{
	CRouteTime rt(E_I_RpcFreeBuffer);
	return Real_I_RpcFreeBuffer(Message);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcSend(PRPC_MESSAGE Message)
{
	CRouteTime rt(E_I_RpcSend);
	return Real_I_RpcSend(Message);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcReceive(PRPC_MESSAGE Message, unsigned int Size)
{
	CRouteTime rt(E_I_RpcReceive);
	return Real_I_RpcReceive(Message, Size);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcFreePipeBuffer(RPC_MESSAGE * Message)
{
	CRouteTime rt(E_I_RpcFreePipeBuffer);
	return Real_I_RpcFreePipeBuffer(Message);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcReallocPipeBuffer(PRPC_MESSAGE Message,
                                                         unsigned int NewSize)
{
	CRouteTime rt(E_I_RpcReallocPipeBuffer);
	return Real_I_RpcReallocPipeBuffer(Message, NewSize);
}

static void RPC_ENTRY Catch_I_RpcRequestMutex(I_RPC_MUTEX * Mutex)
{
	CRouteTime rt(E_I_RpcRequestMutex);
	Real_I_RpcRequestMutex(Mutex);
}

static void RPC_ENTRY Catch_I_RpcClearMutex(I_RPC_MUTEX Mutex)
{
	CRouteTime rt(E_I_RpcClearMutex);
	Real_I_RpcClearMutex(Mutex);
}

static void * RPC_ENTRY Catch_I_RpcAllocate(unsigned int Size)
{
	CRouteTime rt(E_I_RpcAllocate);
	return Real_I_RpcAllocate(Size);
}

static void RPC_ENTRY Catch_I_RpcFree(void * Object)
{
	CRouteTime rt(E_I_RpcFree);
	Real_I_RpcFree(Object);
}

static void RPC_ENTRY Catch_I_RpcPauseExecution(unsigned long Milliseconds)
{
	CRouteTime rt(E_I_RpcPauseExecution);
	Real_I_RpcPauseExecution(Milliseconds);
}

#if _MSC_VER < 1300
static RPC_STATUS RPC_ENTRY Catch_I_RpcMonitorAssociation(RPC_BINDING_HANDLE Handle,
                                                          PRPC_RUNDOWN RundownRoutine,
                                                          void * Context)
{
	CRouteTime rt(E_I_RpcMonitorAssociation);
	return Real_I_RpcMonitorAssociation(Handle, RundownRoutine, Context);
}

static RPC_STATUS RPC_ENTRY Catch_I_RpcStopMonitorAssociation(RPC_BINDING_HANDLE Handle)
{
	CRouteTime rt(E_I_RpcStopMonitorAssociation);
	return Real_I_RpcStopMonitorAssociation(Handle);
}
#endif

static STDMETHODIMP Catch_IPing_Ping(IPing *pip)
{
	HRESULT hr;
	InterlockedIncrement(&s_nInCall);
	{
		CRouteTime rt(E_Proxy);
		hr = pip->Ping();
	}
	InterlockedDecrement(&s_nInCall);
	return hr;
}

static STDMETHODIMP Catch_IPing_PingToServer(IPing *pip, LPSTR pszString)
{
	HRESULT hr;
	InterlockedIncrement(&s_nInCall);
	{
		CRouteTime rt(E_Proxy);
		hr = pip->PingToServer(pszString);
	}
	InterlockedDecrement(&s_nInCall);
	return hr;
}

static STDMETHODIMP Catch_IPing_PingToClient(IPing *pip, LPSTR *ppszString)
{
	HRESULT hr;
	InterlockedIncrement(&s_nInCall);
	{
		CRouteTime rt(E_Proxy);
		hr = pip->PingToClient(ppszString);
	}
	InterlockedDecrement(&s_nInCall);
	return hr;
}

#if 0
static STDMETHODIMP Catch_IPing_PingToClientSize(IPing *pip, ULONG cbOut)
{
	return pip->PingToClientSize(cbOut);
}
#endif

//////////////////////////////////////////////////////////////////////////////
//
HRESULT RerouteEntryPoints(VOID)
{
	s_pNtWaitForSingleObject
		= ((NTSTATUS (NTAPI *)(HANDLE,
							   BOOLEAN,
							   PLARGE_INTEGER))
		   DetourFindFunction("ntdll.dll", "NtWaitForSingleObject"));
	s_pReal_NtWaitForSingleObject
		= ((NTSTATUS (NTAPI *)(HANDLE,
							   BOOLEAN,
							   PLARGE_INTEGER))
		   DetourFunction((PBYTE)s_pNtWaitForSingleObject,
						  (PBYTE)Catch_NtWaitForSingleObject));

	s_pNtDeviceIoControlFile
		= ((NTSTATUS (NTAPI *)(HANDLE,
							   HANDLE,
							   PIO_APC_ROUTINE,
							   PVOID,
							   PIO_STATUS_BLOCK,
							   ULONG,
							   PVOID,
							   ULONG,
							   PVOID,
							   ULONG))
		   DetourFindFunction("ntdll.dll", "NtDeviceIoControlFile"));
	s_pReal_NtDeviceIoControlFile
		= ((NTSTATUS (NTAPI *)(HANDLE,
							   HANDLE,
							   PIO_APC_ROUTINE,
							   PVOID,
							   PIO_STATUS_BLOCK,
							   ULONG,
							   PVOID,
							   ULONG,
							   PVOID,
							   ULONG))
		   DetourFunction((PBYTE)s_pNtDeviceIoControlFile,
						  (PBYTE)Catch_NtDeviceIoControlFile));
	
	DetourFunctionWithTrampoline((PBYTE)Real_Sleep,
								 (PBYTE)Catch_Sleep);
	DetourFunctionWithTrampoline((PBYTE)Real_send,
								 (PBYTE)Catch_send);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcGetBuffer,
								 (PBYTE)Catch_I_RpcGetBuffer);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcSendReceive,
								 (PBYTE)Catch_I_RpcSendReceive);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcFreeBuffer,
								 (PBYTE)Catch_I_RpcFreeBuffer);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcSend,
								 (PBYTE)Catch_I_RpcSend);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcReceive,
								 (PBYTE)Catch_I_RpcReceive);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcFreePipeBuffer,
								 (PBYTE)Catch_I_RpcFreePipeBuffer);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcReallocPipeBuffer,
								 (PBYTE)Catch_I_RpcReallocPipeBuffer);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcRequestMutex,
								 (PBYTE)Catch_I_RpcRequestMutex);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcClearMutex,
								 (PBYTE)Catch_I_RpcClearMutex);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcAllocate,
								 (PBYTE)Catch_I_RpcAllocate);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcFree,
								 (PBYTE)Catch_I_RpcFree);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcPauseExecution,
								 (PBYTE)Catch_I_RpcPauseExecution);
#if _MSC_VER < 1300
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcMonitorAssociation,
								 (PBYTE)Catch_I_RpcMonitorAssociation);
	DetourFunctionWithTrampoline((PBYTE)Real_I_RpcStopMonitorAssociation,
								 (PBYTE)Catch_I_RpcStopMonitorAssociation);
#endif    
	
	return 0;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////// Classes.

class CNetPingFactory : public IClassFactory
{
  public:
	CNetPingFactory();
	~CNetPingFactory();
	
    // IUnknown
    STDMETHODIMP    QueryInterface(REFIID riid, void** ppv);
    STDMETHODIMP_(ULONG) AddRef(void);
    STDMETHODIMP_(ULONG) Release(void);

    // IClassFactory
    STDMETHODIMP    CreateInstance(LPUNKNOWN punkOuter, REFIID iid, void **ppv);
    STDMETHODIMP    LockServer(BOOL fLock);

  public:
	static HRESULT	InitSystem(VOID);
	static HRESULT	FiniSystem(VOID);
	
	static HRESULT	InitObject(VOID);
	static HRESULT	FiniObject(VOID);
	
	static HRESULT	Lock(BOOL fLock);

	static HRESULT	Wait(VOID);
	
  private:
	LONG			m_cRef;
	
	static HANDLE	s_hevtDone;
	static LONG		s_nObjects;
	static LONG		s_nLocks;
};

class CNetPingObject : public IPing
{
  public:
    CNetPingObject();
    ~CNetPingObject();

    // IUnknown
    STDMETHODIMP    QueryInterface(REFIID iid, void **ppv);
    STDMETHODIMP_(ULONG) AddRef(void);
    STDMETHODIMP_(ULONG) Release(void);

	// IPing
	STDMETHODIMP	Ping();
	STDMETHODIMP	PingToServer(LPSTR pszString);
	STDMETHODIMP	PingToClient(LPSTR *ppszString);
	STDMETHODIMP	PingToClientSize(ULONG cbOut);
	
  private:
    LONG        m_cRef;
	ULONG		m_cbLast;
	ULONG		m_cbOut;
};

/////////////////////////////////////////////////////////////////////// GUIDs.

DEFINE_GUID(CLSID_NetPingObject,
			0xdecdbeed, 0xd1ac, 0x11d1, 0x96, 0xbc, 0x00, 0xaa, 0x00, 0x57, 0x3f, 0xb0);

/////////////////////////////////////////////////////////// Initialize String.
//
void InitializeString(LPSTR pszString, LONG cbSize)
{
	ASSERT(cbSize >= 1);
	
	while (cbSize-- > 1) {
		*pszString++ = '+';
	}
	*pszString = '\0';
}

BOOL GetKeyValue(HKEY hRootKey, PWCHAR pwzKey, PWCHAR pwzValueName, PWCHAR pwzValue,
				 DWORD cbValue)
{
    HKEY        hKey;
    WCHAR       wzKey[256];

    wcscpy(wzKey, pwzKey);
	
    if (RegOpenKeyEx(hRootKey, wzKey, 0, KEY_READ, &hKey) != NO_ERROR) {
      abort:
		pwzValue[0] = '\0';
		return FALSE;
	}

	DWORD nType = 0;
	cbValue -= sizeof(WCHAR);
	if (RegQueryValueEx(hKey, pwzValueName, 0, &nType, (PBYTE)pwzValue, &cbValue)
		!= NO_ERROR || nType != REG_SZ) {
		
		RegCloseKey(hKey);
		goto abort;
	}

	RegCloseKey(hKey);

	cbValue /= sizeof(WCHAR);
	pwzValue[cbValue] = L'\0';

    return TRUE;
}

static BOOLEAN SetKeyAndValue(HKEY hRootKey,
							  PWCHAR pszKey, PWCHAR pszSubkey,
							  PWCHAR pszValueName, PWCHAR pszValue)
{
    HKEY        hKey;
    WCHAR       szKey[256];

    wcscpy(szKey, pszKey);

    if (pszSubkey != NULL) {
		wcscat(szKey, L"\\");
		wcscat(szKey, pszSubkey);
	}

    if (RegCreateKeyEx(hRootKey, szKey, 0, NULL, REG_OPTION_NON_VOLATILE,
					   KEY_ALL_ACCESS, NULL, &hKey, NULL) != ERROR_SUCCESS) {
        return FALSE;
	}

    if (pszValue != NULL) {
		RegSetValueEx(hKey, pszValueName, 0, REG_SZ,
					  (BYTE *)pszValue, wcssize(pszValue));
	}
    RegCloseKey(hKey);
    return TRUE;
}

static BOOLEAN SetKeyAndValue(HKEY hRootKey,
							  PWCHAR pszKey, PWCHAR pszSubkey,
							  PWCHAR pszValueName,
							  PBYTE pbData, ULONG cbData)
{
    HKEY        hKey;
    WCHAR       szKey[256];

    wcscpy(szKey, pszKey);

    if (pszSubkey != NULL) {
		wcscat(szKey, L"\\");
		wcscat(szKey, pszSubkey);
	}

    if (RegCreateKeyEx(hRootKey, szKey, 0, NULL, REG_OPTION_NON_VOLATILE,
					   KEY_ALL_ACCESS, NULL, &hKey, NULL) != ERROR_SUCCESS) {
        return FALSE;
	}

    if (pbData != NULL) {
		RegSetValueEx(hKey, pszValueName, 0, REG_BINARY, pbData, cbData);
	}
    RegCloseKey(hKey);
    return TRUE;
}

static void Register(void)
{
	
	WCHAR wzModule[256];
	WCHAR wzName[256];
	WCHAR wzValue[256];
	WCHAR wzClass[48];
	WCHAR wzKey[256];
	PWCHAR pwz;
	
	BYTE rgEveryone[] = {
		0x01,0x00,0x04,0x80,0x34,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x14,0x00,0x00,0x00,0x02,0x00,0x20,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x18,0x00,
		0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x01,0x05,0x00,0x00,0x00,0x00,0x00,0x05,0x15,0x00,0x00,0x00,
		0xa0,0x65,0xcf,0x7e,0x78,0x4b,0x9b,0x5f,0xe7,0x7c,0x87,0x70,0x32,0x7f,0x00,0x00,
		0x01,0x05,0x00,0x00,0x00,0x00,0x00,0x05,0x15,0x00,0x00,0x00,0xa0,0x65,0xcf,0x7e,
		0x78,0x4b,0x9b,0x5f,0xe7,0x7c,0x87,0x70,0x32,0x7f,0x00,0x00
	};
	
	GetModuleFileName(NULL, wzModule, sizeof(wzModule)/sizeof(WCHAR));
	if ((pwz = wcsrchr(wzModule, '\\')) != NULL) {
		wcscpy(wzName, pwz + 1);
	}
	else if ((pwz = wcsrchr(wzModule, ':')) != NULL) {
		wcscpy(wzName, pwz + 1);
	}
	else {
		wcscpy(wzName, wzModule);
	}
	// printf("Server: %ls / %ls\n", wzModule, wzName);

	StringFromGUID2(CLSID_NetPingObject, wzClass, arrayof(wzClass));
	// printf("  Class: %ls\n", wzClass);
	wcscpy(wzKey, L"CLSID\\");
	wcscat(wzKey, wzClass);
		
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, NULL, L"COM Ping Network Server");
	wsprintf(wzValue, L"%ls /s", wzModule);
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, L"LocalServer32", NULL, wzValue);
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, L"LaunchPermission", NULL, L"Y");
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, L"AppID", wzClass);

	wcscpy(wzKey, L"AppID\\");
	wcscat(wzKey, wzClass);
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, NULL, L"COM Ping Network Server");
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, L"RunAs", L"Interactive User");
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, L"AccessPermission",
				   rgEveryone, sizeof(rgEveryone));
	
	wcscpy(wzKey, L"AppID\\");
	wcscat(wzKey, wzName);
	SetKeyAndValue(HKEY_CLASSES_ROOT, wzKey, NULL, L"AppID", wzClass);

	/////////////////////////////////////////////////// Register Proxy & Stub.
	//
	HRESULT hr = iping_DllRegisterServer();
	if (FAILED(hr)) {
		CheckResult(hr, "IPing_DllRegisterServer");
	}

	//////////////////////////////////////////////// Register Processor Speed.
	//
	DWORD	cycles = 0;

	wcscpy(wzKey, L"Software\\Microsoft\\Detours\\ProcessorCycles");

	if (GetKeyValue(HKEY_LOCAL_MACHINE, wzKey, NULL, wzValue, sizeof(wzValue))) {
		cycles = _wtoi(wzValue);
		
		printf("[Recorded Cycles/Second: %ld]\n", cycles);
	}

	if (cycles  < 10000) {
		LONGLONG llBeg;
		LONGLONG llEnd;

		printf("[Calibrating Processors...]\r"); fflush(stdout);

		LARGE_INTEGER liBeg;
		LARGE_INTEGER liEnd;
		LARGE_INTEGER liBrk;
		LARGE_INTEGER liFrq;
		
		QueryPerformanceFrequency(&liFrq);
		QueryPerformanceCounter(&liBeg);
		llBeg = PingLoadCycleCount();
		liBrk.QuadPart = liBeg.QuadPart + liFrq.QuadPart * 5;
		do {
			QueryPerformanceCounter(&liEnd);
			llEnd = PingLoadCycleCount();
		} while (liEnd.QuadPart < liBrk.QuadPart);

		double secs = (double)(liEnd.QuadPart - liBeg.QuadPart) / (double)liFrq.QuadPart;
		double clks = (double)(llEnd - llBeg);
		double cycs = clks / secs;

		cycles = (DWORD)cycs;
		printf("[Measured Cycles/Second: %ld]          \n", cycles);

		swprintf(wzValue, L"%d", cycles);
		
		SetKeyAndValue(HKEY_LOCAL_MACHINE, wzKey, NULL, NULL, wzValue);
	}
}

void Unregister(void)
{
	///////////////////////////////////////////////// Unregister Proxy & Stub.
	//
	HRESULT hr = iping_DllUnregisterServer();
	if (FAILED(hr)) {
		CheckResult(hr, "IPing_DllUnregisterServer");
	}
}

//////////////////////////////////////////////////////////////////////////////
//
HRESULT GetClockInfo(LONGLONG *pllCyclesPerSecond)
{
	WCHAR 	wzKey[512];
	WCHAR 	wzValue[128];
	LONG	cbValue;

	////////////////////////////////////////////////////////// Check Registry.

	cbValue = sizeof(wzValue);
	wcscpy(wzKey, L"Software\\Microsoft\\Detours\\ProcessorCycles");

	if (RegQueryValue(HKEY_LOCAL_MACHINE, wzKey, wzValue, &cbValue) == NO_ERROR) {
		*pllCyclesPerSecond = _wtoi(wzValue);
		return S_OK;
	}
	*pllCyclesPerSecond = 1000000;
	return E_FAIL;
}

///////////////////////////////////////////////////////// CNetPingFactory.
//
LONG	CNetPingFactory::s_nObjects = 0;
LONG	CNetPingFactory::s_nLocks = 0;
HANDLE	CNetPingFactory::s_hevtDone = NULL;

CNetPingFactory::CNetPingFactory()
{
	m_cRef = 1;
}


CNetPingFactory::~CNetPingFactory()
{
	m_cRef = 0;
}

ULONG CNetPingFactory::AddRef(void)
{
	return InterlockedIncrement(&m_cRef);
}

ULONG CNetPingFactory::Release(void)
{
	if (InterlockedDecrement(&m_cRef) == 0) {
		delete this;
		return 0;
	}
	return 1;
}

HRESULT CNetPingFactory::InitSystem(VOID)
{
	s_nObjects = 0;
	s_nLocks = 0;

	s_hevtDone = CreateEvent(NULL, FALSE, FALSE, NULL);
	if (s_hevtDone == NULL) {
		HRESULT hr = HRESULT_FROM_WIN32(GetLastError());
		CheckResult(hr, "Server: CreateEvent");
		exit(hr);
	}
	
	return S_OK;
}

HRESULT CNetPingFactory::FiniSystem(VOID)
{
	if (s_hevtDone != NULL) {
		CloseHandle(s_hevtDone);
		s_hevtDone = NULL;
	}
	return S_OK;
}


HRESULT CNetPingFactory::InitObject(VOID)
{
	InterlockedIncrement(&s_nObjects);
	return S_OK;
}

HRESULT CNetPingFactory::FiniObject(VOID)
{
	if (InterlockedDecrement(&s_nObjects) == 0 && s_nLocks == 0)
		SetEvent(s_hevtDone);
	return S_OK;
}

HRESULT CNetPingFactory::Lock(BOOL fLock)
{
	if (fLock) {
		InterlockedIncrement(&s_nLocks);
	}
	
	else {
		if (InterlockedDecrement(&s_nLocks) == 0 && s_nObjects == 0)
			SetEvent(s_hevtDone);
	}
	return S_OK;
}

HRESULT CNetPingFactory::Wait(VOID)
{
	DWORD dwWaitResult;
	MSG msg;

	for (;;) {
		dwWaitResult = MsgWaitForMultipleObjects(1, &s_hevtDone,
												 FALSE, INFINITE,
												 QS_ALLINPUT);
		
		if (dwWaitResult == WAIT_OBJECT_0) {
			ResetEvent(s_hevtDone);
            break;
		}
		
		while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);			
			DispatchMessage(&msg);
		}
	}
    return S_OK;
}
	
STDMETHODIMP CNetPingFactory::QueryInterface(REFIID riid, void** ppv)
{
    if (ppv == NULL)
        return E_INVALIDARG;
    if (riid == IID_IClassFactory || riid == IID_IUnknown) {
        *ppv = (IClassFactory *) this;
        AddRef();
        return S_OK;
	}
    *ppv = NULL;
    return E_NOINTERFACE;
}

HRESULT CNetPingFactory::LockServer (BOOL fLock)
{
	return Lock(fLock);
}

STDMETHODIMP CNetPingFactory::CreateInstance(LPUNKNOWN punkOuter,
											 REFIID riid, void** ppv)
{
    LPUNKNOWN   punk;
    HRESULT     hr;

    *ppv = NULL;

    if (punkOuter != NULL)
        return CLASS_E_NOAGGREGATION;

	printf("  Server: IClassFactory:CreateInstance\n");

    punk = new CNetPingObject;
    if (punk == NULL)
        return E_OUTOFMEMORY;

    hr = punk->QueryInterface(riid, ppv);
    punk->Release();
    return hr;
}	

/////////////////////////////////////////////////////////////// CNetPingObject.
//
CNetPingObject::CNetPingObject()
{
	m_cRef = 1;
	m_cbLast = ~0u;
	m_cbOut = 2;
	CNetPingFactory::InitObject();
}

CNetPingObject::~CNetPingObject()
{
	CNetPingFactory::FiniObject();
}

STDMETHODIMP CNetPingObject::QueryInterface(REFIID riid, void** ppv)
{
    if (ppv == NULL)
        return E_INVALIDARG;
    if (riid == IID_IUnknown || riid == IID_IPing) {
        *ppv = (IPing *) this;
        AddRef();
        return S_OK;
	}
    *ppv = NULL;
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CNetPingObject::AddRef(void)
{
	return InterlockedIncrement(&m_cRef);
}

STDMETHODIMP_(ULONG) CNetPingObject::Release(void)
{
	if (InterlockedDecrement(&m_cRef) == 0) {
		delete this;
		return 0;
	}
	return 1;
}

STDMETHODIMP CNetPingObject::Ping()
{
	return S_OK;
}

STDMETHODIMP CNetPingObject::PingToServer(LPSTR pszString)
{
	return S_OK;
}

STDMETHODIMP CNetPingObject::PingToClient(LPSTR *ppszString)
{
	LPSTR pszString = (LPSTR)CoTaskMemAlloc(m_cbOut);
	if (pszString == NULL)
		return E_OUTOFMEMORY;

	CopyMemory(pszString, g_pBuffer, m_cbOut);
	*ppszString = pszString;

	return S_OK;
}

STDMETHODIMP CNetPingObject::PingToClientSize(ULONG cbOut)
{
	if (cbOut < 1) {
		return E_INVALIDARG;
	}
	
	InitializeString((LPSTR)g_pBuffer, cbOut);
	m_cbOut = cbOut;
	return S_OK;
}

//////////////////////////////////////////////////////////////////////////////
//
class CSampleRecord
{
  public:
	DOUBLE		m_dTime;
	FILETIME	m_nWhen;
	LONG		m_cbToClient;
	LONG		m_cbToServer;
	DOUBLE		m_dDcom;
	DOUBLE		m_dRpc;
	DOUBLE		m_dUdp;
	DOUBLE		m_dNet;

  protected:
	static LONG	s_cbToClient;
	static LONG	s_cbToServer;

  public:
	CSampleRecord();
	CSampleRecord(IPing *pIPing, LONG cbToClient, LONG cbToServer);

	HRESULT		Measure(IPing *pIPing, LONG cbToClient, LONG cbToServer);
	HRESULT		Write(FILE *fp);

	double		GetTime() 			{ return m_dTime; }
	FILETIME	GetWhen() 			{ return m_nWhen; }
	LONG		GetToClient() 		{ return m_cbToClient; }
	LONG		GetToServer() 		{ return m_cbToServer; }

};

//////////////////////////////////////////////////////////////////////////////
//
LONG CSampleRecord::s_cbToClient = 0;
LONG CSampleRecord::s_cbToServer = 0;

//////////////////////////////////////////////////////////////////////////////
//
CSampleRecord::CSampleRecord()
{
	m_dTime = 0;
	m_dDcom = 0;
	m_dRpc = 0;
	m_dUdp = 0;
	m_dNet = 0;
}

CSampleRecord::CSampleRecord(IPing *pIPing, LONG cbToClient, LONG cbToServer)
{
	Measure(pIPing, cbToClient, cbToServer);
}

HRESULT CSampleRecord::Measure(IPing *pIPing, LONG cbToClient, LONG cbToServer)
{
	HRESULT hr;
	LONGLONG llBeg;
	LONGLONG llEnd;

	GetSystemTimeAsFileTime(&m_nWhen);
	m_cbToClient = cbToClient;
	m_cbToServer = cbToServer;
	
	if (cbToClient == 0 && cbToServer == 0) {
		llBeg = PingLoadCycleCount();
		hr = Catch_IPing_Ping(pIPing);
		llEnd = PingLoadCycleCount();
	}
	else if (cbToClient) {
		if (s_cbToClient != cbToClient) {
			hr = pIPing->PingToClientSize(cbToClient);
			s_cbToClient = cbToClient;
		}
		
		LPSTR pszString = NULL;
		
		llBeg = PingLoadCycleCount();
		hr = Catch_IPing_PingToClient(pIPing, &pszString);
		llEnd = PingLoadCycleCount();
		
		LONG cb = strlen(pszString) + 1;
		ASSERT(cb == cbToClient);
		
		if (pszString) {
			CoTaskMemFree(pszString);
			pszString = NULL;
		}
	}
	else {
		if (s_cbToServer != cbToServer) {
			InitializeString((LPSTR)g_pBuffer, cbToServer);
			s_cbToServer = cbToServer;
		}
		
		llBeg = PingLoadCycleCount();
		hr = Catch_IPing_PingToServer(pIPing, (LPSTR)g_pBuffer);
		llEnd = PingLoadCycleCount();
	}

	if (FAILED(hr)) {
		fprintf(g_fpLog, ";; Operation failed: %08lx\n", hr);
		fflush(g_fpLog);
        if (FAILED(hr)) {
            exit(999);
        }
		
		m_dTime = -1.0;
		return hr;
	}

	if (g_fSummarize) {
		SummarizeCycles();
		m_dDcom = (double)s_rllCycles[E_DCOM] * g_dMsPerCycle;
		m_dRpc = (double)s_rllCycles[E_RPC] * g_dMsPerCycle;
		m_dUdp = (double)s_rllCycles[E_UDP] * g_dMsPerCycle;
		m_dNet = (double)s_rllCycles[E_NET] * g_dMsPerCycle;
	}
	
	m_dTime = (double)(llEnd - llBeg) * g_dMsPerCycle;
	
	return S_OK;
}

HRESULT CSampleRecord::Write(FILE *fp)
{
	SYSTEMTIME	st;
	FILETIME ft;

	FileTimeToLocalFileTime(&m_nWhen, &ft);
	FileTimeToSystemTime(&ft, &st);
	
	fprintf(fp, "%02d/%02d %2d:%02d:%02d %6d %d %6.3f [ %6.3f %6.3f %6.3f %6.3f ]\n",
			st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond,
			m_cbToClient, m_cbToServer, m_dTime,
			m_dDcom, m_dRpc, m_dUdp, m_dNet);

	return S_OK;
}

//////////////////////////////////////////////////////////////////////////////
//
double NetTest(HKEY hNetwork, IPing *pIPing,
			   BOOLEAN fToClient, LONG cbPacket, LONG nCount)
{
	//////////////////////////////////////////////////////////////////// ToClient.
	//
	double msAvg = 0.0;
	double msMin = 1.0e12;
	double msMax = 0.0;
	ULONG nMax = 999;
	ULONG nMin = 999;

	if (fToClient)
		printf(">Client %6d %6d ", cbPacket, nCount);
	else
		printf(">Server %6d %6d ", cbPacket, nCount);

	for (LONG n = 0; n < nCount; n++) {
		double ms;
		
		if (fToClient) {
			ms = CSampleRecord(pIPing, cbPacket, 0).GetTime();
		}
		else {
			ms = CSampleRecord(pIPing, 0, cbPacket).GetTime();
		}

		if (ms < 0)
			break;

		if (msMin > ms) {
			msMin = ms;
			nMin = n;
		}
		if (msMax < ms) {
			msMax = ms;
			nMax = n;
		}
		msAvg += ms;
	}
	
	if (nCount)
		msAvg /= nCount;

	if (cbPacket == 0)
		g_dLatency = msMin;

	double mbps = (double)cbPacket / msMin;
	mbps *= 8.0 * 1000.0 / 1024.0 / 1024.0;
	
	double mbps2 = (double)cbPacket / (msMin - g_dLatency);
	mbps2 *= 8.0 * 1000.0 / 1024.0 / 1024.0;
	if (cbPacket == 0)
		mbps2 = 0;

	if (hNetwork != NULL) {
		WCHAR wzKey[64];
		WCHAR wzLatency[64];
		
		if (fToClient)
			swprintf(wzKey, L"ToClient\\%d", cbPacket);
		else
			swprintf(wzKey, L"ToServer\\%d", cbPacket);
		
		swprintf(wzLatency, L"%I64d", msAvg);
		
		RegSetValue(hNetwork, wzKey, REG_SZ, wzLatency, wcssize(wzLatency));
	}
	
	printf("%8.3f %8.3f %8.3f %9.4f %8.3f %9.4f%3d\n",
		   msMin, 
		   msAvg, 
		   msMax,
		   mbps,
		   msMin - g_dLatency,
		   mbps2,
		   nMax);
	return mbps;
}

//////////////////////////////////////////////////////////////////////// main.

static WCHAR 	wzServers[32][64];
static int		nServers = 0;

void Sample_Fixed(IPing *pIPing)
{
	CSampleRecord csrRecords[512];
	LONG nRecords = 0;
	HRESULT hr;

	double dAvg = 0;
	double dMin = 500000.0;
	double dMax = 0.0;
	double dMinDcom = dMin;
	double dMinRpc = dMin;
	double dMinUdp = dMin;
	double dMinNet = dMin;
	
	for (int i = 0; i < 512; i++) {
		CSampleRecord& csr = csrRecords[nRecords++];
		
		hr = csr.Measure(pIPing, g_nFixedToClient, g_nFixedToServer);
		double d = csr.GetTime();
		if (dMin > d)
			dMin = d;
		if (dMax < d)
			dMax = d;
		if (dMinDcom > csr.m_dDcom)
			dMinDcom = csr.m_dDcom;
		if (dMinRpc > csr.m_dRpc)
			dMinRpc = csr.m_dRpc;
		if (dMinUdp > csr.m_dUdp)
			dMinUdp = csr.m_dUdp;
		if (dMinNet > csr.m_dNet)
			dMinNet = csr.m_dNet;
		dAvg += d;
	}
	
	dAvg /= 512;
	printf("size: %d, min: %.3f, max: %.3f avg: %.3f [ %8.3f %8.3f %8.3f %8.3f ]\n",
		   g_nFixedToClient, dMin, dMax, dAvg, dMinDcom, dMinRpc, dMinUdp, dMinNet);
	for (int n = 0; n < nRecords; n++)
		csrRecords[n].Write(g_fpLog);
}

void Sample_Simple(IPing *pIPing)
{
	CSampleRecord csrRecords[512];
	LONG nRecords = 0;
	HRESULT hr;
					
	for (int cb = 0; cb < 64000; cb = cb ? cb << 1 : 32) {
		double n[5];
					
		for (int i = 0; i < 5; i++) {
			CSampleRecord& csr = csrRecords[nRecords++];
						
			hr = csr.Measure(pIPing, cb, 0);
			n[i] = csr.GetTime();
		}
		
		double nAvg = 0;
		double nApx = 0;
		double nMin = n[0];
		double nMax = n[0];
					
		for (i = 0; i < 5; i++) {
			if (nMin > n[i])
				nMin = n[i];
			if (nMax < n[i])
				nMax = n[i];
			nAvg += n[i];
		}
		nApx = nAvg - nMax;
		nAvg /= 5;
		nApx /= 4;
		printf("min: %8.3f ms (%6d) %7.3f%7.3f%7.3f%7.3f%7.3f:%8.3f%8.3f\n",
			   nMin, cb, n[0], n[1], n[2], n[3], n[4], nAvg, nApx);
#ifdef INCLUDE_THIS		
		if (nMin > 300)
			break;
#endif		
	}
	for (int n = 0; n < nRecords; n++)
		csrRecords[n].Write(g_fpLog);
}

void Sample_More(IPing *pIPing)
{
	CSampleRecord csrRecords[64];
	LONG nRecords = 0;
					
	for (int cb = 0; cb < 64000; cb = cb ? cb << 1 : 32) {
		for (int i = 0; i < 64; i++) {
			CSampleRecord& csr = csrRecords[nRecords++];
						
			csr.Measure(pIPing, cb, 0);
		}
					
		double nAvg = 0;
		double nMin = csrRecords[0].GetTime();
		double nMax = csrRecords[0].GetTime();
					
		for (i = 0; i < 64; i++) {
			double n = csrRecords[i].GetTime();
			
			if (nMin > n)
				nMin = n;
			if (nMax < n)
				nMax = n;
			nAvg += n;
		}
		nAvg /= i;
		printf("min: %8.3f ms (%6d) : %8.3f %8.3f\n",
			   nMin, cb, nMax, nAvg);
		
		for (int n = 0; n < nRecords; n++)
			csrRecords[n].Write(g_fpLog);
		nRecords = 0;
	}
}

void Sample_Less(IPing *pIPing)
{
	CSampleRecord csrRecords[16];
	LONG nRecords = 0;
					
	for (int cb = 0; cb < 64000; cb = cb ? cb << 1 : 16) {
		for (int i = 0; i < 16; i++) {
			CSampleRecord& csr = csrRecords[nRecords++];
						
			csr.Measure(pIPing, cb, 0);
		}
					
		double nAvg = 0;
		double nMin = csrRecords[0].GetTime();
		double nMax = csrRecords[0].GetTime();
					
		for (i = 0; i < 16; i++) {
			double n = csrRecords[i].GetTime();
			
			if (nMin > n)
				nMin = n;
			if (nMax < n)
				nMax = n;
			nAvg += n;
		}
		nAvg /= i;
		printf("min: %8.3f ms (%6d) : %8.3f %8.3f\n",
			   nMin, cb, nMax, nAvg);
		
		for (int n = 0; n < nRecords; n++)
			csrRecords[n].Write(g_fpLog);
		nRecords = 0;
	}
}

void Sample_Profile(IPing *pIPing)
{
	CSampleRecord csrRecords[64];

	double dbZero = 0;
		
	printf("\nPacket_Size_ Min_Latency Max_Latency Avg_Latency "
		   "Relative_Bnd ___Bandwidth\n");

	for (int cb = 0; cb < 256 * 1024;) {
		for (int n = 0; n < 64; n++) {
			CSampleRecord& csr = csrRecords[n];
			csr.Measure(pIPing, cb, 0);
		}
					
		double dbAvg = 0;
		double dbMin = csrRecords[0].GetTime();
		double dbMax = csrRecords[0].GetTime();
		LONG nMin = 0;
		LONG nMax = 0;
					
		for (n = 0; n < 64; n++) {
			double db = csrRecords[n].GetTime();
			
			if (dbMin > db) {
				dbMin = db;
				nMin = n;
			}
			if (dbMax < db) {
				dbMax = db;
				nMax = n;
			}
			dbAvg += db;
		}
		dbAvg /= n;
		if (cb == 0) {
			dbZero = dbMin;
		}

		double dbBnd = 0;
		if (dbMin > dbZero) {
			dbBnd = ((8 * cb) * 1000.0) / (1024 * 1024);
			dbBnd /= dbMin - dbZero;
		}
		double dbReal = ((8 * cb) * 1000.0) / (1024 * 1024) / dbMin;
		
		printf("%6d bytes %9.3fms %9.3fms %9.3fms %8.3fMbps %8.3fMbps\r",
			   cb, dbMin, dbMax, dbAvg, dbBnd, dbReal);

		csrRecords[nMin].Write(g_fpLog);

		if (cb < 2048) {
			cb++;
		}
		else if (cb < 4096) {
			cb += 2;
		}
		else if (cb < 8192)
			cb += 8;
		else if (cb < 16384)
			cb += 32;
		else
			cb += 128;
	}
}

//////////////////////////////////////////////////////////////////////////////
//
class CInit
{
  public:
	CInit(HINSTANCE hinst)
        {
            m_hinst = hinst;
		
            AllocConsole();

            // initialize COM for free-threading
            HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
            if (FAILED(hr)) {
                CheckResult(hr, "CoInitializeEx");
                exit(hr);
            }
		
            ULONG ul = iping_DllMain(m_hinst, DLL_PROCESS_ATTACH, NULL);
            ASSERT(ul);
        }
	
	~CInit()
        {
            ULONG ul = iping_DllMain(m_hinst, DLL_PROCESS_DETACH, NULL);
            ASSERT(ul);
	
            CoUninitialize();
        }
	
  private:
	HINSTANCE	m_hinst;
};

class CInitStub
{
  public:
	CInitStub()
        {
            m_dwRegister = ~0u;
		
            IClassFactory *pClassFactory = NULL;
            HRESULT hr = iping_DllGetClassObject(IID_IPing,
                                                 IID_IUnknown,
                                                 (void **)&pClassFactory);
            if (FAILED(hr)) {
                CheckResult(hr, "IPing_DllGetClassObject");
                ASSERT(SUCCEEDED(hr));
            }

            if (pClassFactory) {
                hr = CoRegisterClassObject(IID_IPing,
                                           pClassFactory,
                                           CLSCTX_SERVER,
                                           REGCLS_MULTIPLEUSE,
                                           &m_dwRegister);
                if (FAILED(hr)) {
                    ASSERT(SUCCEEDED(hr));
                    CheckResult(hr, "CoRegisterClassObject(IID_IPing)\n");
                }
                pClassFactory->Release();
                pClassFactory = NULL;
            }
        }
	
	~CInitStub()
        {
            if (m_dwRegister != ~0u) {
                CoRevokeClassObject(m_dwRegister);
                m_dwRegister = ~0u;
            }
        }

  private:
	DWORD		m_dwRegister;
};

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
int __cdecl main(void)
{
	CInit cinit(GetModuleHandle(NULL));
	int argc;
	WCHAR **argv = CommandLineToArgvW(GetCommandLineW(), &argc);

	HRESULT hr;
	BOOLEAN	fUnreg = FALSE;
	BOOLEAN fNeedHelp = FALSE;
	BOOLEAN fServer = FALSE;
	BOOLEAN fLong = FALSE;
	BOOLEAN fProfile = FALSE;
	BOOLEAN fInstrument = TRUE;
	BOOLEAN fFixed = FALSE;

	s_nThread = GetCurrentThreadId();

	printf("Ping Network Server: [" __DATE__ " " __TIME__ "]\n");
	for (int arg = 1; arg < argc; arg++) {
		if (argv[arg][0] == '-' || argv[arg][0] == '/') {
			WCHAR *argn = argv[arg] + 1;
			WCHAR *argp = argn;
			while (*argp && *argp != ':')
				argp++;
			if (*argp == ':')
				*argp++ = '\0';
			
			switch (argn[0]) {

              case 'f':									// Fixed
              case 'F':
				fFixed = TRUE;
				g_nFixedToClient = _wtoi(argp);
				g_nFixedToServer = 0;
				break;
				
              case 'i':
              case 'I':									// Instrument
				fInstrument = !fInstrument;
				break;

              case 'n':									// Null
              case 'N':
				fFixed = TRUE;
				g_nFixedToClient = g_nFixedToServer = 0;
				break;
				
              case 'l':									// Long-term loop
              case 'L':
				fLong = !fLong;
				break;
				
              case 'p':									// Profile Network
              case 'P':
				fProfile = !fProfile;
				break;
				
              case 's':									// Server
              case 'S':
				fServer = !fServer;
				break;
					
              case 'u':									// Unregister
              case 'U':
				fUnreg = !fUnreg;
				break;

              case 'x':									// Xtract Data
              case 'X':
				g_fSummarize = !g_fSummarize;
				break;
				
              case '?':									// Help
				fNeedHelp = TRUE;
				break;

              case '\0':									// Local Host
				wcscpy(wzServers[nServers++], L"localhost");
				ASSERT(nServers <= 32);
				break;
				
              default:
				fNeedHelp = TRUE;
				printf("Bad argument: %ls\n", argv[arg]);
				break;
			}
		}
		else {
			wcscpy(wzServers[nServers++], argv[arg]);
			ASSERT(nServers <= 32);
		}
	}
	if (argc == 1 || (nServers == 0 && !fUnreg && !fServer))
		fNeedHelp = TRUE;
	
	if (fNeedHelp) {
		printf("Usage:\n"
			   "    cping [options] [hosts]  ..or.. cping [options] /s\n"
			   "Options:\n"
			   "    /u      : Unregister.\n"
			   "    /s      : Act as a server, waiting for clients.\n"
			   "    /?      : Display this help screen.\n"
			   "Client Options:\n"
			   "    /l      : Long-term loop test.                (Default: %3s)\n"
			   "    /p      : Profile test.                       (Default: %3s)\n"
			   "    /n      : Null (0 length) test.               (Default: Off)\n"
			   "    /f:size : Fixed sized packets.                (Default: %3s)\n"
			   "    /x      : Xtract detailed DCOM/RPC/NET data.  (Default: %3s)\n"
			   "    /i      : Toggle instrumentation.             (Default: %3s)\n",
			   fLong 		? "On" : "Off",
			   fProfile 	? "On" : "Off",
			   fFixed 		? "On" : "Off",
			   g_fSummarize ? "Off" : "Off",
			   fInstrument	? "On" : "Off");
		
		exit(1);
	}

	//////////////////////////////////////////////////////////////////////////
	if (fUnreg) {
		Unregister();
	}
	else {
		//////////////////////////////////////////////////////////////////////////////
		//
		CInitStub cinitstub;
	
		// Register in the registry.
		Register();

		if (fInstrument) {
			RerouteEntryPoints();
		}
			
		LONGLONG llCycles;
		hr = GetClockInfo(&llCycles);
		ASSERT(SUCCEEDED(hr));
		g_dCyclesPerSecond = (double)llCycles;
		g_dMsPerCycle = (double)1000.0 / (double)llCycles;

		g_pBuffer = CoTaskMemAlloc(g_cbBufferMax);
		ASSERT(g_pBuffer);
	
		if (fServer) {
			// register the class-object with OLE
			CNetPingFactory::InitSystem();

			CNetPingFactory *pClassFactory = new CNetPingFactory;

			printf("Registering.\n");
			DWORD dwRegister;
			hr = CoRegisterClassObject(CLSID_NetPingObject, pClassFactory,
									   CLSCTX_SERVER, REGCLS_MULTIPLEUSE, &dwRegister);
			printf("Releasing Registered.\n");
			pClassFactory->Release();
			if (FAILED(hr)) {
				CheckResult(hr, "Server: CoRegisterClassObject");
				ASSERT(SUCCEEDED(hr));
			}

			printf("  Server: Waiting   <<<Press Ctrl-C to stop.>>>\n");

			while (fServer) {
				CNetPingFactory::Wait();
			}

			hr = CoRevokeClassObject(dwRegister);
			if (FAILED(hr)) {
				CheckResult(hr, "Server: CoRevokeClassObject");
				ASSERT(SUCCEEDED(hr));
			}

			CNetPingFactory::FiniSystem();
		}
		else if (nServers) {
			LONGLONG llBeg;
			LONGLONG llEnd;
			COSERVERINFO csi;
			MULTI_QI mq;

			//////////////////////////////////////////////////////////////////
			//
			g_fpLog = fopen("cping.dat", "a+");
			printf("Processor Speed: %.0f MHz\n", g_dCyclesPerSecond / 1000000.0);

			DWORD dwSize = arrayof(g_wzClientName);
			GetComputerName(g_wzClientName, &dwSize);
			
			if (g_fpLog) {
				fprintf(g_fpLog, ";;; %ls - %.0f MHz\n",
						g_wzClientName,
						g_dCyclesPerSecond / 1000000.0);
			}
		
			for (int n = 0; n < nServers; n++) {
				if (g_wzServerName[0] == '\\' && g_wzServerName[1] == '\\') {
					wcscpy(g_wzServerName, wzServers[n] + 2);
				}
				else
					wcscpy(g_wzServerName, wzServers[n]);
			
				printf("Server: %ls->%ls\n", g_wzClientName, g_wzServerName);

				if (g_fpLog) {
					fprintf(g_fpLog, ";; %ls %ls\n", g_wzClientName, g_wzServerName);
				}

				ZeroMemory(&csi, sizeof(csi));
				csi.pwszName = wzServers[n];
			
				// create a remote instance of the object on the argv[1] machine
				mq.pIID = &IID_IPing;
				mq.pItf = NULL;
				mq.hr = S_OK;
				llBeg = PingLoadCycleCount();
				hr = CoCreateInstanceEx(CLSID_NetPingObject, NULL, CLSCTX_SERVER,
										&csi, 1, &mq);
				llEnd = PingLoadCycleCount();
				
				printf("  CoCreateInstanceEx: %0.4f seconds (%lu ticks)\n",
					   (double)(llEnd - llBeg)/(double)llCycles,
					   (ULONG)(llEnd - llBeg));
			
				CheckResult(mq.hr, "CoCreateInstanceEx [mq]");
				CheckResult(hr, "CoCreateInstanceEx");

				if (FAILED(hr)) {
					CheckResult(hr, "CoCreateInstanceEx");
					continue;
				}

				//////////////////////////////////////////////////////////////////
				//
				IPing *pIPing = (IPing *)mq.pItf;

				hr = pIPing->Ping();
				if (FAILED(hr)) {
					CheckResult(hr, "Ping");
				}
				ASSERT(SUCCEEDED(hr));
				hr = Catch_IPing_Ping(pIPing);
				if (FAILED(hr)) {
					CheckResult(hr, "Ping");
				}
				ASSERT(SUCCEEDED(hr));
				ZeroCycles();

				if (fFixed) {
					Sample_Fixed(pIPing);
				}
				else if (fProfile) {
					Sample_Profile(pIPing);
				}
				else {
					Sample_Simple(pIPing);
					if (fLong) {
						for (;;) {
							Sample_More(pIPing);

							for (int j = 0; j < 5; j++) {
								Sleep(20000);
								Sample_Simple(pIPing);
							}
							Sleep(20000);
					
							for (int i = 0; i < 18; i++) {
								Sample_Less(pIPing);
						
								for (int j = 0; j < 3; j++) {
									Sleep(20000);
									Sample_Simple(pIPing);
								}
								Sleep(20000);
							}
						}
					}
				}
			
				pIPing->Release();
			}

			if (g_fpLog) {
				fclose(g_fpLog);
				g_fpLog = NULL;
			}
		}

		if (g_pBuffer) {
			CoTaskMemFree(g_pBuffer);
			g_pBuffer = NULL;
		}

		Sleep(2);
		
		if (fInstrument && !g_fSummarize && s_rllCounts[E_Proxy]) {
			printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
				   "::::::::::::::::::\n");
			printf(":: Instrumented Cycles:     _____Function Time__  "
				   "________Total Time__ : Count\n");
			for (LONG n = E_DCOM; n < E_MaxValue; n++) {
				s_rllCycles[n] = 0;
				s_rllTotals[n] = 0;
				s_rllCounts[n] = 0;
			}
			
			for (n = E_MinValue + 1; n < E_MaxValue; n++) {
				DumpCycles(n);
			}

			printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
				   "::::::::::::::::::\n");
			printf(":: Protocol Cycles:\n");
			for (n = E_DcomBeg; n <= E_DcomEnd; n++) {
				s_rllCycles[E_DCOM] += s_rllCycles[n];
				s_rllTotals[E_DCOM] += s_rllTotals[n];
				s_rllCounts[E_DCOM] += s_rllCounts[n];
			}
			for (n = E_RpcBeg; n <= E_RpcEnd; n++) {
				s_rllCycles[E_RPC] += s_rllCycles[n];
				s_rllTotals[E_RPC] += s_rllTotals[n];
				s_rllCounts[E_RPC] += s_rllCounts[n];
			}
			for (n = E_UdpBeg; n <= E_UdpEnd; n++) {
				s_rllCycles[E_UDP] += s_rllCycles[n];
				s_rllTotals[E_UDP] += s_rllTotals[n];
				s_rllCounts[E_UDP] += s_rllCounts[n];
			}
			for (n = E_NetBeg; n <= E_NetEnd; n++) {
				s_rllTotals[E_NET] += s_rllCycles[n];
				s_rllCycles[E_NET] += s_rllTotals[n];
				s_rllCounts[E_NET] += s_rllCounts[n];
			}
			DumpCycles(E_DCOM);
			DumpCycles(E_RPC);
			DumpCycles(E_UDP);
			DumpCycles(E_NET);
			
			printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
				   "::::::::::::::::::\n");
			printf(":: Protocol Cycles Per DCOM Call:\n");
			s_rllCycles[E_DCOM] /= s_rllCounts[E_DCOM];
			s_rllCycles[E_RPC] /= s_rllCounts[E_DCOM];
			s_rllCycles[E_UDP] /= s_rllCounts[E_DCOM];
			s_rllCycles[E_NET] /= s_rllCounts[E_DCOM];
			
			s_rllTotals[E_DCOM] /= s_rllCounts[E_DCOM];
			s_rllTotals[E_RPC] /= s_rllCounts[E_DCOM];
			s_rllTotals[E_UDP] /= s_rllCounts[E_DCOM];
			s_rllTotals[E_NET] /= s_rllCounts[E_DCOM];
			
			DumpCycles(E_DCOM);
			DumpCycles(E_RPC);
			DumpCycles(E_UDP);
			DumpCycles(E_NET);
		}
	}
	return 0;
}

//
///////////////////////////////////////////////////////////////// End of File.
