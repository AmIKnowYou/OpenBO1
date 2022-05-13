//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_CheckMapExists(const char* map) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"SV_CheckMapExists")(map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetPlayerByName() -> struct client_t*
{
  return Zynamic::Forward<struct client_t* ()>(L"SV_GetPlayerByName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetPlayerByNum() -> struct client_t*
{
  return Zynamic::Forward<struct client_t* ()>(L"SV_GetPlayerByNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetMapBaseName(const char* mapname) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SV_GetMapBaseName")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShowLoadErrorsSummary(const char* mapName, unsigned int count) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"ShowLoadErrorsSummary")(mapName, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Map_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Map_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ReconnectClients(int savepersist) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_ReconnectClients")(savepersist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MapRestart(int fast_restart) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_MapRestart")(fast_restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MapRestart_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_MapRestart_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FastRestart_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_FastRestart_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapRotationToken() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"UI_GetMapRotationToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MapRotate_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_MapRotate_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_KickClient(struct client_t* cl, char* playerName, int maxPlayerNameLen, const char* reason) -> int
{
  return Zynamic::Forward<int (struct client_t*, char*, int, const char*)>(L"SV_KickClient")(cl, playerName, maxPlayerNameLen, reason);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_KickUser_f(char* playerName, int maxPlayerNameLen) -> int
{
  return Zynamic::Forward<int (char*, int)>(L"SV_KickUser_f")(playerName, maxPlayerNameLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_KickClient_f(char* playerName, int maxPlayerNameLen) -> int
{
  return Zynamic::Forward<int (char*, int)>(L"SV_KickClient_f")(playerName, maxPlayerNameLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TempBan_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_TempBan_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Ban_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Ban_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RankUpClient(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_RankUpClient")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RankUp_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_RankUp_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BanNum_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_BanNum_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Unban_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Unban_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Drop_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Drop_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DropNum_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DropNum_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TempBanNum_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_TempBanNum_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Status_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Status_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AssembleConSayMessage(int firstArg, char* text, int sizeofText) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"SV_AssembleConSayMessage")(firstArg, text, sizeofText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ConSay_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ConSay_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TeamStatus_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_TeamStatus_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ConTell_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ConTell_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Heartbeat_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Heartbeat_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Serverinfo_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Serverinfo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Systeminfo_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Systeminfo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DumpUser_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DumpUser_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_KillServer_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_KillServer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ScriptUsage_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ScriptUsage_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_StringUsage_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_StringUsage_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetPerk_f() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetPerk_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddOperatorCommands() -> void
{
  return Zynamic::Forward<void ()>(L"SV_AddOperatorCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddDedicatedCommands() -> void
{
  return Zynamic::Forward<void ()>(L"SV_AddDedicatedCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RemoveDedicatedCommands() -> void
{
  return Zynamic::Forward<void ()>(L"SV_RemoveDedicatedCommands")();
}

#endif // __UNIMPLEMENTED__
