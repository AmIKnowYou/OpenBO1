//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_win_net() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_win_net")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_ErrorString() -> char*
{
  return Zynamic::Forward<char* ()>(L"NET_ErrorString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StringToSockaddr(const char* s, struct sockaddr* sadr) -> int
{
  return Zynamic::Forward<int (const char*, struct sockaddr*)>(L"Sys_StringToSockaddr")(s, sadr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SockadrToNetadr(struct sockaddr* s, struct netadr_t* a) -> void
{
  return Zynamic::Forward<void (struct sockaddr*, struct netadr_t*)>(L"SockadrToNetadr")(s, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StringToAdr(const char* s, struct netadr_t* a) -> int
{
  return Zynamic::Forward<int (const char*, struct netadr_t*)>(L"Sys_StringToAdr")(s, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetPacket(struct netadr_t* net_from, struct msg_t* net_message) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, struct msg_t*)>(L"Sys_GetPacket")(net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SendPacket(int length, const void* data, struct netadr_t to) -> bool
{
  return Zynamic::Forward<bool (int, const void*, struct netadr_t)>(L"Sys_SendPacket")(length, data, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsLANAddress_IgnoreSubnet(struct netadr_t adr) -> int
{
  return Zynamic::Forward<int (struct netadr_t)>(L"Sys_IsLANAddress_IgnoreSubnet")(adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsLANAddress(struct netadr_t adr) -> int
{
  return Zynamic::Forward<int (struct netadr_t)>(L"Sys_IsLANAddress")(adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ShowIP() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ShowIP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OpenIP() -> void
{
  return Zynamic::Forward<void ()>(L"NET_OpenIP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwPlatformInit(class bdNetStartParams& params) -> int
{
  return Zynamic::Forward<int (class bdNetStartParams&)>(L"dwPlatformInit")(params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetDvars() -> int
{
  return Zynamic::Forward<int ()>(L"NET_GetDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SocketPool_Init() -> void
{
  return Zynamic::Forward<void ()>(L"NET_SocketPool_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CheckForNATOverflow() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_CheckForNATOverflow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SocketPool_GetPacket(struct netadr_t* net_from, struct msg_t* net_message) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, struct msg_t*)>(L"Sys_SocketPool_GetPacket")(net_from, net_message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Config(int enableNetworking) -> void
{
  return Zynamic::Forward<void (int)>(L"NET_Config")(enableNetworking);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Restart() -> void
{
  return Zynamic::Forward<void ()>(L"NET_Restart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Select(unsigned int socket) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"NET_Select")(socket);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_TCPIPSocket(char* net_interface, int port, int type) -> int
{
  return Zynamic::Forward<int (char*, int, int)>(L"NET_TCPIPSocket")(net_interface, port, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_InitDebugStreams() -> void
{
  return Zynamic::Forward<void ()>(L"NET_InitDebugStreams")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_InitDebug() -> void
{
  return Zynamic::Forward<void ()>(L"NET_InitDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Init() -> void
{
  return Zynamic::Forward<void ()>(L"NET_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DebugSocketError(const char* message) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Sys_DebugSocketError")(message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_Listen_f() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_Listen_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsRemoteDebugServer() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_IsRemoteDebugServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StartRemoteDebugServer() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_StartRemoteDebugServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsRemoteDebugClient() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_IsRemoteDebugClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_Connect_f() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_Connect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_ShutdownDebug() -> void
{
  return Zynamic::Forward<void ()>(L"NET_ShutdownDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RestartDebug() -> void
{
  return Zynamic::Forward<void ()>(L"NET_RestartDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SendDebugReadBytesInternal() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SendDebugReadBytesInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SendDebugReadBytes(int read) -> void
{
  return Zynamic::Forward<void (int)>(L"Sys_SendDebugReadBytes")(read);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ReadDebugSocketData(void* buffer, int len, int blocking) -> int
{
  return Zynamic::Forward<int (void*, int, int)>(L"Sys_ReadDebugSocketData")(buffer, len, blocking);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ReadDebugSocketInt() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_ReadDebugSocketInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ReadDebugSocketString() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Sys_ReadDebugSocketString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DebugCanSend() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_DebugCanSend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DebugSend(int channel, const char* buf, int len, const char* name) -> void
{
  return Zynamic::Forward<void (int, const char*, int, const char*)>(L"Sys_DebugSend")(channel, buf, len, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WriteDebugSocketData(const void* buffer, int len) -> void
{
  return Zynamic::Forward<void (const void*, int)>(L"Sys_WriteDebugSocketData")(buffer, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WriteDebugSocketInt(int value) -> void
{
  return Zynamic::Forward<void (int)>(L"Sys_WriteDebugSocketInt")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_FlushDebugSocketData() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_FlushDebugSocketData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DebugSocketReady(int channel) -> int
{
  return Zynamic::Forward<int (int)>(L"Sys_DebugSocketReady")(channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WriteDebugSocketMessageType(unsigned char type) -> void
{
  return Zynamic::Forward<void (unsigned char)>(L"Sys_WriteDebugSocketMessageType")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_EndWriteDebugSocket() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_EndWriteDebugSocket")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WriteDebugSocketString(const void* text) -> void
{
  return Zynamic::Forward<void (const void*)>(L"Sys_WriteDebugSocketString")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ReadDebugSocketMessageType(unsigned char* type, int blocking) -> int
{
  return Zynamic::Forward<int (unsigned char*, int)>(L"Sys_ReadDebugSocketMessageType")(type, blocking);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_UpdateDebugSocket() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_UpdateDebugSocket")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AckDebugSocket() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_AckDebugSocket")();
}

#endif // __UNIMPLEMENTED__
