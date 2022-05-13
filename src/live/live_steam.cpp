//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SteamAPIDebugTextHook(int severity, const char* pchDebugText) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"SteamAPIDebugTextHook")(severity, pchDebugText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_TestFriends_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_TestFriends_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Quit(bool showErrorMessage) -> void
{
  return Zynamic::Forward<void (bool)>(L"LiveSteam_Quit")(showErrorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_CheckAccess() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_CheckAccess")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_IsInitialized() -> bool
{
  return Zynamic::Forward<bool ()>(L"LiveSteam_IsInitialized")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_IsClientSignedInLocally() -> bool
{
  return Zynamic::Forward<bool ()>(L"LiveSteam_IsClientSignedInLocally")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_IsClientSignedInOnline() -> bool
{
  return Zynamic::Forward<bool ()>(L"LiveSteam_IsClientSignedInOnline")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetClientIDAsXUID() -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 ()>(L"LiveSteam_GetClientIDAsXUID")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetCountryCode() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"LiveSteam_GetCountryCode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetUid() -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 ()>(L"LiveSteam_GetUid")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShellExecuteThredProc(void* lpParam) -> unsigned long
{
  return Zynamic::Forward<unsigned long (void*)>(L"ShellExecuteThredProc")(lpParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_LaunchOtherApp(const char* cmd) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"LiveSteam_LaunchOtherApp")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_ShowStore() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_ShowStore")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_CreateSteamAppIdFile() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_CreateSteamAppIdFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_PopOverlayForSteamID(unsigned __int64 steamID) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"LiveSteam_PopOverlayForSteamID")(steamID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Init() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_SteamP2P''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_SteamP2P''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_CheckForP2PMessages() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_CheckForP2PMessages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_SendP2PMessage(unsigned __int64 uid, unsigned char* payload, unsigned int payloadsize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned char*, unsigned int)>(L"LiveSteam_SendP2PMessage")(uid, payload, payloadsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_RunCallbacks() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_RunCallbacks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetClientPersonaName(bool shortName) -> const char*
{
  return Zynamic::Forward<const char* (bool)>(L"LiveSteam_GetClientPersonaName")(shortName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_DWUserNameFromSteamID(char* dwUserName) -> bool
{
  return Zynamic::Forward<bool (char*)>(L"LiveSteam_DWUserNameFromSteamID")(dwUserName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_AuthRequestTicket(const void* authBlob, unsigned int authBlobSize) -> bool
{
  return Zynamic::Forward<bool (const void*, unsigned int)>(L"LiveSteam_AuthRequestTicket")(authBlob, authBlobSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_AuthGetRequestedTicket(void* ticketBuf, const unsigned int ticketBufSize, unsigned int* ticketSize) -> bool
{
  return Zynamic::Forward<bool (void*, const unsigned int, unsigned int*)>(L"LiveSteam_AuthGetRequestedTicket")(ticketBuf, ticketBufSize, ticketSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Client_ConnectToSteamServer(unsigned __int64 serverID, void* authBlob, unsigned int bufferSize) -> int
{
  return Zynamic::Forward<int (unsigned __int64, void*, unsigned int)>(L"LiveSteam_Client_ConnectToSteamServer")(serverID, authBlob, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Client_SteamDisconnect() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Client_SteamDisconnect")();
}

#endif // __UNIMPLEMENTED__
