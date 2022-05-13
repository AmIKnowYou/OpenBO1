//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_HandleDWChallengeResponse(struct netadr_t from, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"SV_HandleDWChallengeResponse")(from, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetChallenge(struct netadr_t from) -> void
{
  return Zynamic::Forward<void (struct netadr_t)>(L"SV_GetChallenge")(from);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CacheClientStatChange(int clientNum, struct ddlState_t* searchState, char* buffer) -> void
{
  return Zynamic::Forward<void (int, struct ddlState_t*, char*)>(L"SV_CacheClientStatChange")(clientNum, searchState, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetClientDIntStat(int clientNum, struct ddlState_t* searchState, unsigned int value) -> void
{
  return Zynamic::Forward<void (int, struct ddlState_t*, unsigned int)>(L"SV_SetClientDIntStat")(clientNum, searchState, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetClientDStringStat(int clientNum, struct ddlState_t* searchState, const char* value) -> void
{
  return Zynamic::Forward<void (int, struct ddlState_t*, const char*)>(L"SV_SetClientDStringStat")(clientNum, searchState, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetClientDInt64Stat(int clientNum, struct ddlState_t* searchState, unsigned __int64 value) -> void
{
  return Zynamic::Forward<void (int, struct ddlState_t*, unsigned __int64)>(L"SV_SetClientDInt64Stat")(clientNum, searchState, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientDIntStat(int clientNum, struct ddlState_t* searchState) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, struct ddlState_t*)>(L"SV_GetClientDIntStat")(clientNum, searchState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientDStringStat(int clientNum, struct ddlState_t* searchState) -> const char*
{
  return Zynamic::Forward<const char* (int, struct ddlState_t*)>(L"SV_GetClientDStringStat")(clientNum, searchState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientDInt64Stat(int clientNum, struct ddlState_t* searchState) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (int, struct ddlState_t*)>(L"SV_GetClientDInt64Stat")(clientNum, searchState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UploadStats(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_UploadStats")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UploadStats() -> void
{
  return Zynamic::Forward<void ()>(L"SV_UploadStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SteamAuthClientRequest(struct netadr_t to, unsigned __int64 serverSteamID) -> void
{
  return Zynamic::Forward<void (struct netadr_t, unsigned __int64)>(L"SV_SteamAuthClientRequest")(to, serverSteamID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SteamAuthClient(struct netadr_t from, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"SV_SteamAuthClient")(from, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsTempBannedGuid(int guid) -> int
{
  return Zynamic::Forward<int (int)>(L"SV_IsTempBannedGuid")(guid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsBannedGuid(int guid) -> int
{
  return Zynamic::Forward<int (int)>(L"SV_IsBannedGuid")(guid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FindFreeTempBanSlot() -> int
{
  return Zynamic::Forward<int ()>(L"SV_FindFreeTempBanSlot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BanGuidBriefly(int guid) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_BanGuidBriefly")(guid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BanClient(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_BanClient")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UnbanClient(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"SV_UnbanClient")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateSplitscreenStateForAddr(struct netadr_t addr) -> void
{
  return Zynamic::Forward<void (struct netadr_t)>(L"SV_UpdateSplitscreenStateForAddr")(addr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeClient(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_FreeClient")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeClients() -> void
{
  return Zynamic::Forward<void ()>(L"SV_FreeClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DirectConnect(struct netadr_t from) -> void
{
  return Zynamic::Forward<void (struct netadr_t)>(L"SV_DirectConnect")(from);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeClientScriptPers() -> void
{
  return Zynamic::Forward<void ()>(L"SV_FreeClientScriptPers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendDisconnect(struct client_t* client, int state, const char* reason, bool translationForReason, const char* clientName) -> void
{
  return Zynamic::Forward<void (struct client_t*, int, const char*, bool, const char*)>(L"SV_SendDisconnect")(client, state, reason, translationForReason, clientName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DropClient(struct client_t* drop, const char* reason, bool tellThem, bool writeStats) -> void
{
  return Zynamic::Forward<void (struct client_t*, const char*, bool, bool)>(L"SV_DropClient")(drop, reason, tellThem, writeStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DelayDropClient(struct client_t* drop, const char* reason) -> void
{
  return Zynamic::Forward<void (struct client_t*, const char*)>(L"SV_DelayDropClient")(drop, reason);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ConfigStringIsConstant(const int configStringNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"SV_ConfigStringIsConstant")(configStringNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendClientGameState(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_SendClientGameState")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClientEnterWorld(struct client_t* client, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct usercmd_s*)>(L"SV_ClientEnterWorld")(client, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Download_Clear(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_Download_Clear")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CloseDownload(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_CloseDownload")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_StopDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_StopDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DoneDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_DoneDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RetransmitDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_RetransmitDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_NextDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_NextDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BeginDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_BeginDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WWWDownLoad_Clear(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_WWWDownLoad_Clear")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WWWDownload_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_WWWDownload_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WWWRedirectClient(struct client_t* cl, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_WWWRedirectClient")(cl, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteDownloadErrorMessage(struct client_t* cl, struct msg_t* msg, const char* errorMessage) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*, const char*)>(L"SV_WriteDownloadErrorMessage")(cl, msg, errorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteDownloadToClient(struct client_t* cl, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_WriteDownloadToClient")(cl, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Disconnect_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_Disconnect_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_VerifyIwds_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_VerifyIwds_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ResetPureClient_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_ResetPureClient_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_StringToLower(const char* source, char* dest, int size) -> void
{
  return Zynamic::Forward<void (const char*, char*, int)>(L"SV_StringToLower")(source, dest, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ValidateName(struct client_t* newcl, const char* name) -> bool
{
  return Zynamic::Forward<bool (struct client_t*, const char*)>(L"SV_ValidateName")(newcl, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SanitizeName(const char* name, char* sanitizedName, int size) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, int)>(L"SV_SanitizeName")(name, sanitizedName, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UserinfoChanged(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_UserinfoChanged")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateUserinfo_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_UpdateUserinfo_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MutePlayer_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_MutePlayer_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UnmutePlayer_f(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_UnmutePlayer_f")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ExecuteClientCommand(struct client_t* cl, const char* s, int clientOK, int fromOldServer) -> void
{
  return Zynamic::Forward<void (struct client_t*, const char*, int, int)>(L"SV_ExecuteClientCommand")(cl, s, clientOK, fromOldServer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClientCommand(struct client_t* cl, struct msg_t* msg, int fromOldServer) -> int
{
  return Zynamic::Forward<int (struct client_t*, struct msg_t*, int)>(L"SV_ClientCommand")(cl, msg, fromOldServer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ProcessClientCommands(struct client_t* cl, struct msg_t* msg, int fromOldServer, int* lastCommand) -> int
{
  return Zynamic::Forward<int (struct client_t*, struct msg_t*, int, int*)>(L"SV_ProcessClientCommands")(cl, msg, fromOldServer, lastCommand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClientThink(struct client_t* cl, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct usercmd_s*)>(L"SV_ClientThink")(cl, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UserMove(struct client_t* cl, struct msg_t* msg, int delta) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*, int)>(L"SV_UserMove")(cl, msg, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ExecuteClientMessage(struct client_t* cl, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_ExecuteClientMessage")(cl, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddTestClient() -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* ()>(L"SV_AddTestClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsTestClient(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SV_IsTestClient")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsDemoClient(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SV_IsDemoClient")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddDemoClient() -> bool
{
  return Zynamic::Forward<bool ()>(L"SV_AddDemoClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RemoveDemoClient() -> void
{
  return Zynamic::Forward<void ()>(L"SV_RemoveDemoClient")();
}

#endif // __UNIMPLEMENTED__
