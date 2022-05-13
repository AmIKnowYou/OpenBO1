//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto LAN_AddServer(int source, const char* name, const char* address) -> int
{
  return Zynamic::Forward<int (int, const char*, const char*)>(L"LAN_AddServer")(source, name, address);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerAddressString(int source, int n, char* buf, int buflen) -> void
{
  return Zynamic::Forward<void (int, int, char*, int)>(L"LAN_GetServerAddressString")(source, n, buf, buflen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerSecurityId(int source, int n, char* buf, int buflen) -> void
{
  return Zynamic::Forward<void (int, int, char*, int)>(L"LAN_GetServerSecurityId")(source, n, buf, buflen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_ResetPings(int source) -> void
{
  return Zynamic::Forward<void (int)>(L"LAN_ResetPings")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerCount(int source) -> int
{
  return Zynamic::Forward<int (int)>(L"LAN_GetServerCount")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_WaitServerResponse(int source) -> int
{
  return Zynamic::Forward<int (int)>(L"LAN_WaitServerResponse")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerInfo(int source, int n, char* buf, int buflen) -> void
{
  return Zynamic::Forward<void (int, int, char*, int)>(L"LAN_GetServerInfo")(source, n, buf, buflen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerPing(int source, int n) -> int
{
  return Zynamic::Forward<int (int, int)>(L"LAN_GetServerPing")(source, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerPtr(int source, int n) -> struct serverInfo_t*
{
  return Zynamic::Forward<struct serverInfo_t* (int, int)>(L"LAN_GetServerPtr")(source, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_CleanHostname(const char* hostName, char* cleanHostName) -> void
{
  return Zynamic::Forward<void (const char*, char*)>(L"LAN_CleanHostname")(hostName, cleanHostName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_CompareHostname(const char* hostName1, const char* hostName2) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"LAN_CompareHostname")(hostName1, hostName2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_CompareServers(int source, int sortKey, int sortDir, int s1, int s2) -> int
{
  return Zynamic::Forward<int (int, int, int, int, int)>(L"LAN_CompareServers")(source, sortKey, sortDir, s1, s2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_MarkServerDirty(int source, int n, int dirty) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"LAN_MarkServerDirty")(source, n, dirty);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_ServerIsDirty(int source, int n) -> int
{
  return Zynamic::Forward<int (int, int)>(L"LAN_ServerIsDirty")(source, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_UpdateDirtyPings(int localClientNum, int source) -> int
{
  return Zynamic::Forward<int (int, int)>(L"LAN_UpdateDirtyPings")(localClientNum, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerStatus(char* serverSecurityID, char* serverStatus, int maxLen) -> int
{
  return Zynamic::Forward<int (char*, char*, int)>(L"LAN_GetServerStatus")(serverSecurityID, serverStatus, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LAN_GetServerStatusScoreBoard(char* serverSecurityID, char* serverStatus, int maxLen) -> int
{
  return Zynamic::Forward<int (char*, char*, int)>(L"LAN_GetServerStatusScoreBoard")(serverSecurityID, serverStatus, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CLUI_SetPbClStatus(int status) -> void
{
  return Zynamic::Forward<void (int)>(L"CLUI_SetPbClStatus")(status);
}

#endif // __UNIMPLEMENTED__
