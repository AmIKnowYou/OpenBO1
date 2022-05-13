//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DL_VPrintf(const char* fmt, char* argptr) -> int
{
  return Zynamic::Forward<int (const char*, char*)>(L"DL_VPrintf")(fmt, argptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto terminate_handler(struct _HTRequest* request, struct _HTResponse* response, void* param, int status) -> int
{
  return Zynamic::Forward<int (struct _HTRequest*, struct _HTResponse*, void*, int)>(L"terminate_handler")(request, response, param, status);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HTAlertCallback_progress(struct _HTRequest* request, enum _HTAlertOpcode op, int msgnum, const char* dfault, void* input, struct _HTAlertPar* reply) -> int
{
  return Zynamic::Forward<int (struct _HTRequest*, enum _HTAlertOpcode, int, const char*, void*, struct _HTAlertPar*)>(L"HTAlertCallback_progress")(request, op, msgnum, dfault, input, reply);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HTAlertCallback_confirm(struct _HTRequest* request, enum _HTAlertOpcode op, int msgnum, const char* dfault, void* input, struct _HTAlertPar* reply) -> int
{
  return Zynamic::Forward<int (struct _HTRequest*, enum _HTAlertOpcode, int, const char*, void*, struct _HTAlertPar*)>(L"HTAlertCallback_confirm")(request, op, msgnum, dfault, input, reply);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HTAlertCallback_prompt(struct _HTRequest* request, enum _HTAlertOpcode op, int msgnum, const char* dfault, void* input, struct _HTAlertPar* reply) -> int
{
  return Zynamic::Forward<int (struct _HTRequest*, enum _HTAlertOpcode, int, const char*, void*, struct _HTAlertPar*)>(L"HTAlertCallback_prompt")(request, op, msgnum, dfault, input, reply);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_CancelDownload() -> void
{
  return Zynamic::Forward<void ()>(L"DL_CancelDownload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_InitDownload() -> void
{
  return Zynamic::Forward<void ()>(L"DL_InitDownload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_BeginDownload(const char* localName, const char* remoteName, int debug) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int)>(L"DL_BeginDownload")(localName, remoteName, debug);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_DownloadLoop() -> enum dlStatus_t
{
  return Zynamic::Forward<enum dlStatus_t ()>(L"DL_DownloadLoop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_InProgress() -> bool
{
  return Zynamic::Forward<bool ()>(L"DL_InProgress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DL_DLIsMotd() -> bool
{
  return Zynamic::Forward<bool ()>(L"DL_DLIsMotd")();
}

#endif // __UNIMPLEMENTED__
