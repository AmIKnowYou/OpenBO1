//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cl_serverStatusList''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cl_serverStatusList''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cl_serverStatusScoreBoardList''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cl_serverStatusScoreBoardList''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetLastRconAddress() -> struct netadr_t*
{
  return Zynamic::Forward<struct netadr_t* ()>(L"CL_GetLastRconAddress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetServerInfo(struct serverInfo_t* server, const char* info, int ping) -> void
{
  return Zynamic::Forward<void (struct serverInfo_t*, const char*, int)>(L"CL_SetServerInfo")(server, info, ping);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerInfoPacket(class bdSecurityID* secID, struct msg_t* msg, int time) -> void
{
  return Zynamic::Forward<void (class bdSecurityID*, struct msg_t*, int)>(L"CL_ServerInfoPacket")(secID, msg, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Connect(struct serverInfo_t* server) -> void
{
  return Zynamic::Forward<void (struct serverInfo_t*)>(L"CL_Connect")(server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConnectHackDW() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ConnectHackDW")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Connect_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Connect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PC_SignInLive() -> void
{
  return Zynamic::Forward<void ()>(L"CL_PC_SignInLive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PC_RequireLiveSignin() -> void
{
  return Zynamic::Forward<void ()>(L"CL_PC_RequireLiveSignin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitServerInfo(struct serverInfo_t* server, struct netadr_t adr) -> void
{
  return Zynamic::Forward<void (struct serverInfo_t*, struct netadr_t)>(L"CL_InitServerInfo")(server, adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RawPingSetupBuffer(void* const buffer, const int buffersize, const unsigned char opcode, const class bdSecurityID* secID) -> int
{
  return Zynamic::Forward<int (void* const, const int, const unsigned char, const class bdSecurityID*)>(L"CL_RawPingSetupBuffer")(buffer, buffersize, opcode, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RawPingServer(struct serverInfo_t* server, unsigned char opcode) -> void
{
  return Zynamic::Forward<void (struct serverInfo_t*, unsigned char)>(L"CL_RawPingServer")(server, opcode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServersResponsePacket(class MatchMakingInfo* mminfo, int numResults, bool geo) -> void
{
  return Zynamic::Forward<void (class MatchMakingInfo*, int, bool)>(L"CL_ServersResponsePacket")(mminfo, numResults, geo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FindServers_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FindServers_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LanSessions_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_LanSessions_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LanConnect_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_LanConnect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RconInit() -> void
{
  return Zynamic::Forward<void ()>(L"CL_RconInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RconLogin() -> void
{
  return Zynamic::Forward<void ()>(L"CL_RconLogin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RconLogout() -> void
{
  return Zynamic::Forward<void ()>(L"CL_RconLogout")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RconHost() -> void
{
  return Zynamic::Forward<void ()>(L"CL_RconHost")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Rcon_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Rcon_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetServerStatus(class bdSecurityID* secID) -> struct serverStatusInfoResponse_s*
{
  return Zynamic::Forward<struct serverStatusInfoResponse_s* (class bdSecurityID*)>(L"CL_GetServerStatus")(secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetServerStatusScoreBoard(class bdSecurityID* secID) -> struct serverStatusInfoResponse_s*
{
  return Zynamic::Forward<struct serverStatusInfoResponse_s* (class bdSecurityID*)>(L"CL_GetServerStatusScoreBoard")(secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerStatus(char* serversecurityID, char* serverStatusString, int maxLen) -> int
{
  return Zynamic::Forward<int (char*, char*, int)>(L"CL_ServerStatus")(serversecurityID, serverStatusString, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerStatusScoreBoard(char* serversecurityID, char* serverStatusString, int maxLen) -> int
{
  return Zynamic::Forward<int (char*, char*, int)>(L"CL_ServerStatusScoreBoard")(serversecurityID, serverStatusString, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerStatusScoreBoardResponse(struct msg_t* msg, class bdSecurityID* secID) -> void
{
  return Zynamic::Forward<void (struct msg_t*, class bdSecurityID*)>(L"CL_ServerStatusScoreBoardResponse")(msg, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerStatusResponse(struct msg_t* msg, class bdSecurityID* secID) -> void
{
  return Zynamic::Forward<void (struct msg_t*, class bdSecurityID*)>(L"CL_ServerStatusResponse")(msg, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ResetPlayerMuting(int muteClientIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ResetPlayerMuting")(muteClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MutePlayer(int localClientNum, int muteClientIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_MutePlayer")(localClientNum, muteClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsPlayerMuted(int localClientNum, int muteClientIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CL_IsPlayerMuted")(localClientNum, muteClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ClearMutedList() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ClearMutedList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FinishMotdDownload() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FinishMotdDownload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WWWDownload() -> void
{
  return Zynamic::Forward<void ()>(L"CL_WWWDownload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Prestige_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Prestige_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Platform_RegisterCommands() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Platform_RegisterCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RequestCACValidateSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"CL_RequestCACValidateSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RequestCACValidateFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"CL_RequestCACValidateFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateServerMatches(unsigned __int64 uid) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64)>(L"CL_CACValidateServerMatches")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateHandleNACK(unsigned __int64 uid) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"CL_CACValidateHandleNACK")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateHandleOK(unsigned __int64 uid) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"CL_CACValidateHandleOK")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateHandleBad(unsigned __int64 uid) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"CL_CACValidateHandleBad")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RequestCACValidate(unsigned __int64 serverId) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64)>(L"CL_RequestCACValidate")(serverId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateInProgress() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_CACValidateInProgress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidateRequest_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CACValidateRequest_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PrestigeRequest() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_PrestigeRequest")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidate_IsTimedOut() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_CACValidate_IsTimedOut")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CACValidate_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CACValidate_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_quickmatchCandidates''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_quickmatchCandidates''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_quickMatchServers''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_quickMatchServers''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatchConnect_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatchConnect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_InProgress() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_QuickMatch_InProgress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_FindSessionsSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"CL_QuickMatch_FindSessionsSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_FindSessionsFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"CL_QuickMatch_FindSessionsFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_Start(int servertype, const char* mapname, int playlist, int minPlayers, int maxPlayers, int maxPing) -> void
{
  return Zynamic::Forward<void (int, const char*, int, int, int, int)>(L"CL_QuickMatch_Start")(servertype, mapname, playlist, minPlayers, maxPlayers, maxPing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickWager_Start() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickWager_Start")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatch_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickWager_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickWager_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_InitDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatch_InitDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_Init() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatch_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_ServerMatches(class MatchMakingInfo* server) -> bool
{
  return Zynamic::Forward<bool (class MatchMakingInfo*)>(L"CL_QuickMatch_ServerMatches")(server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_PingServers() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatch_PingServers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_GoodSessionFound() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_QuickMatch_GoodSessionFound")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_ShouldChooseSession() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_QuickMatch_ShouldChooseSession")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_PingResponse(class bdSecurityID* secID, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (class bdSecurityID*, struct msg_t*)>(L"CL_QuickMatch_PingResponse")(secID, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_CompareServers(const void* sv1, const void* sv2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CL_QuickMatch_CompareServers")(sv1, sv2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_ChooseSession() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_QuickMatch_ChooseSession")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_QuickMatch_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"CL_QuickMatch_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LongNameForShortName(const char* shortname) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"CL_LongNameForShortName")(shortname);
}

#endif // __UNIMPLEMENTED__
