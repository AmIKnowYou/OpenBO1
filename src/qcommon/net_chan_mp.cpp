//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto NET_AdrToString(struct netadr_t a) -> const char*
{
  return Zynamic::Forward<const char* (struct netadr_t)>(L"NET_AdrToString")(a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_AdrToStringDW(struct netadr_t a) -> const char*
{
  return Zynamic::Forward<const char* (struct netadr_t)>(L"NET_AdrToStringDW")(a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_PrepProfiling(struct netProfileInfo_t* prof) -> void
{
  return Zynamic::Forward<void (struct netProfileInfo_t*)>(L"NetProf_PrepProfiling")(prof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_AddPacket(struct netProfileStream_t* pProfStream, int iSize, int bFragment) -> void
{
  return Zynamic::Forward<void (struct netProfileStream_t*, int, int)>(L"NetProf_AddPacket")(pProfStream, iSize, bFragment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_NewSendPacket(struct netchan_t* pChan, int iSize, int bFragment) -> void
{
  return Zynamic::Forward<void (struct netchan_t*, int, int)>(L"NetProf_NewSendPacket")(pChan, iSize, bFragment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_NewRecievePacket(struct netchan_t* pChan, int iSize, int bFragment) -> void
{
  return Zynamic::Forward<void (struct netchan_t*, int, int)>(L"NetProf_NewRecievePacket")(pChan, iSize, bFragment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_UpdateStatistics(struct netProfileStream_t* pStream) -> void
{
  return Zynamic::Forward<void (struct netProfileStream_t*)>(L"NetProf_UpdateStatistics")(pStream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Net_DumpProfile_f() -> void
{
  return Zynamic::Forward<void ()>(L"Net_DumpProfile_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Net_GetQPort_f() -> void
{
  return Zynamic::Forward<void ()>(L"Net_GetQPort_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Net_SetQPort_f() -> void
{
  return Zynamic::Forward<void ()>(L"Net_SetQPort_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Net_DisplayProfile(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Net_DisplayProfile")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_net_chan() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_net_chan")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Init(int port) -> void
{
  return Zynamic::Forward<void (int)>(L"Netchan_Init")(port);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Setup(enum netsrc_t sock, struct netchan_t* chan, struct netadr_t adr, int qport, char* outgoingBuffer, int outgoingBufferSize, char* incomingBuffer, int incomingBufferSize) -> void
{
  return Zynamic::Forward<void (enum netsrc_t, struct netchan_t*, struct netadr_t, int, char*, int, char*, int)>(L"Netchan_Setup")(sock, chan, adr, qport, outgoingBuffer, outgoingBufferSize, incomingBuffer, incomingBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_TransmitFragment(struct netchan_t* chan, int fragmentLength, int fragmentIndex, int maxFragmentIndex) -> int
{
  return Zynamic::Forward<int (struct netchan_t*, int, int, int)>(L"Netchan_TransmitFragment")(chan, fragmentLength, fragmentIndex, maxFragmentIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_TransmitNextFragment(struct netchan_t* chan) -> bool
{
  return Zynamic::Forward<bool (struct netchan_t*)>(L"Netchan_TransmitNextFragment")(chan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Transmit(struct netchan_t* chan, int length, const unsigned char* data, bool reliable_fragments) -> bool
{
  return Zynamic::Forward<bool (struct netchan_t*, int, const unsigned char*, bool)>(L"Netchan_Transmit")(chan, length, data, reliable_fragments);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Process(struct netchan_t* chan, struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct netchan_t*, struct msg_t*)>(L"Netchan_Process")(chan, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareBaseAdrSigned(struct netadr_t* a, struct netadr_t* b, bool skipLocalClient) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, struct netadr_t*, bool)>(L"NET_CompareBaseAdrSigned")(a, b, skipLocalClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareBaseAdr(struct netadr_t a, struct netadr_t b) -> int
{
  return Zynamic::Forward<int (struct netadr_t, struct netadr_t)>(L"NET_CompareBaseAdr")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareAdrSigned(struct netadr_t* a, struct netadr_t* b) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, struct netadr_t*)>(L"NET_CompareAdrSigned")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareAdr(struct netadr_t a, struct netadr_t b) -> int
{
  return Zynamic::Forward<int (struct netadr_t, struct netadr_t)>(L"NET_CompareAdr")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_IsLocalAddress(struct netadr_t adr) -> int
{
  return Zynamic::Forward<int (struct netadr_t)>(L"NET_IsLocalAddress")(adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SetNetAdrLoopbackIP(struct netadr_t* src) -> void
{
  return Zynamic::Forward<void (struct netadr_t*)>(L"NET_SetNetAdrLoopbackIP")(src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetClientPacket(struct netadr_t* net_from, struct msg_t* net_message) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, struct msg_t*)>(L"NET_GetClientPacket")(net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetLoopPacket_Real(enum netsrc_t sock, struct netadr_t* net_from, struct msg_t* net_message) -> int
{
  return Zynamic::Forward<int (enum netsrc_t, struct netadr_t*, struct msg_t*)>(L"NET_GetLoopPacket_Real")(sock, net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetLoopPacket(enum netsrc_t sock, struct netadr_t* net_from, struct msg_t* net_message) -> int
{
  return Zynamic::Forward<int (enum netsrc_t, struct netadr_t*, struct msg_t*)>(L"NET_GetLoopPacket")(sock, net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SendLoopPacket(enum netsrc_t sock, int length, const void* data, struct netadr_t to) -> void
{
  return Zynamic::Forward<void (enum netsrc_t, int, const void*, struct netadr_t)>(L"NET_SendLoopPacket")(sock, length, data, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_DeferPacketToClient(struct netadr_t* net_from, struct msg_t* net_message) -> void
{
  return Zynamic::Forward<void (struct netadr_t*, struct msg_t*)>(L"NET_DeferPacketToClient")(net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetDeferredClientPacket(struct netadr_t* net_from, struct msg_t* net_message) -> bool
{
  return Zynamic::Forward<bool (struct netadr_t*, struct msg_t*)>(L"NET_GetDeferredClientPacket")(net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SendPacket(enum netsrc_t sock, int length, const void* data, struct netadr_t to) -> bool
{
  return Zynamic::Forward<bool (enum netsrc_t, int, const void*, struct netadr_t)>(L"NET_SendPacket")(sock, length, data, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandPrint(enum netsrc_t sock, struct netadr_t adr, const char* data) -> bool
{
  return Zynamic::Forward<bool (enum netsrc_t, struct netadr_t, const char*)>(L"NET_OutOfBandPrint")(sock, adr, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandData(enum netsrc_t sock, struct netadr_t adr, const unsigned char* format, int len) -> bool
{
  return Zynamic::Forward<bool (enum netsrc_t, struct netadr_t, const unsigned char*, int)>(L"NET_OutOfBandData")(sock, adr, format, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandVoiceData(enum netsrc_t sock, struct netadr_t adr, unsigned char* format, int len) -> int
{
  return Zynamic::Forward<int (enum netsrc_t, struct netadr_t, unsigned char*, int)>(L"NET_OutOfBandVoiceData")(sock, adr, format, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_StringToAdr(const char* s, struct netadr_t* a) -> int
{
  return Zynamic::Forward<int (const char*, struct netadr_t*)>(L"NET_StringToAdr")(s, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Int64ToString(__int64 int64, char* str) -> void
{
  return Zynamic::Forward<void (__int64, char*)>(L"Int64ToString")(int64, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToInt64(const char* str) -> __int64
{
  return Zynamic::Forward<__int64 (const char*)>(L"StringToInt64")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XUIDToString(const unsigned __int64* xuid, char* str) -> void
{
  return Zynamic::Forward<void (const unsigned __int64*, char*)>(L"XUIDToString")(xuid, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToXUID(const char* str, unsigned __int64* xuid) -> void
{
  return Zynamic::Forward<void (const char*, unsigned __int64*)>(L"StringToXUID")(str, xuid);
}

#endif // __UNIMPLEMENTED__
