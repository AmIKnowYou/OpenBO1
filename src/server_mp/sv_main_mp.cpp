//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_svs''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_svs''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_sv''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_sv''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_sv_main() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_sv_main")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ExpandNewlines(char* in) -> char*
{
  return Zynamic::Forward<char* (char*)>(L"SV_ExpandNewlines")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsFirstTokenEqual(const char* str1, const char* str2) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"SV_IsFirstTokenEqual")(str1, str2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CanReplaceServerCommand(struct client_t* client, const char* cmd) -> int
{
  return Zynamic::Forward<int (struct client_t*, const char*)>(L"SV_CanReplaceServerCommand")(client, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CullIgnorableServerCommands(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_CullIgnorableServerCommands")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddServerCommand(struct client_t* client, enum svscmd_type type, const char* cmd) -> void
{
  return Zynamic::Forward<void (struct client_t*, enum svscmd_type, const char*)>(L"SV_AddServerCommand")(client, type, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendServerCommand(struct client_t* cl, enum svscmd_type type, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (struct client_t*, enum svscmd_type, const char*, ...)>(L"SV_SendServerCommand")(cl, type, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FindClientByAddress(struct netadr_t from, int qport) -> struct client_t*
{
  return Zynamic::Forward<struct client_t* (struct netadr_t, int)>(L"SV_FindClientByAddress")(from, qport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_VoicePacket(struct netadr_t from, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"SV_VoicePacket")(from, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SVC_Status(struct netadr_t from, class bdSecurityID* secID) -> void
{
  return Zynamic::Forward<void (struct netadr_t, class bdSecurityID*)>(L"SVC_Status")(from, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SVC_StatusScoreBoard(struct netadr_t from, class bdSecurityID* secID) -> void
{
  return Zynamic::Forward<void (struct netadr_t, class bdSecurityID*)>(L"SVC_StatusScoreBoard")(from, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SVC_Info(struct netadr_t from, class bdSecurityID* secID, bool quick) -> void
{
  return Zynamic::Forward<void (struct netadr_t, class bdSecurityID*, bool)>(L"SVC_Info")(from, secID, quick);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ConnectionlessPacket(struct netadr_t from, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"SV_ConnectionlessPacket")(from, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketEvent(struct netadr_t from, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"SV_PacketEvent")(from, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CalcPings() -> void
{
  return Zynamic::Forward<void ()>(L"SV_CalcPings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeClientScriptId(struct client_t* cl) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_FreeClientScriptId")(cl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CheckTimeouts() -> void
{
  return Zynamic::Forward<void ()>(L"SV_CheckTimeouts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CheckPaused() -> int
{
  return Zynamic::Forward<int ()>(L"SV_CheckPaused")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PostFrame(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_PostFrame")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdatePerformanceFrame(int time) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_UpdatePerformanceFrame")(time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RunFrame() -> void
{
  return Zynamic::Forward<void ()>(L"SV_RunFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateBots() -> void
{
  return Zynamic::Forward<void ()>(L"SV_UpdateBots")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitThreadVariables() -> void
{
  return Zynamic::Forward<void ()>(L"SV_InitThreadVariables")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RunEventLoop() -> void
{
  return Zynamic::Forward<void ()>(L"SV_RunEventLoop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ServerThread(unsigned int threadContext) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SV_ServerThread")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitServerThread() -> void
{
  return Zynamic::Forward<void ()>(L"SV_InitServerThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WakeServer() -> void
{
  return Zynamic::Forward<void ()>(L"SV_WakeServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WaitServer() -> void
{
  return Zynamic::Forward<void ()>(L"SV_WaitServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitSnapshot() -> void
{
  return Zynamic::Forward<void ()>(L"SV_InitSnapshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_KillLocalServer() -> void
{
  return Zynamic::Forward<void ()>(L"SV_KillLocalServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CheckOverflow() -> bool
{
  return Zynamic::Forward<bool ()>(L"SV_CheckOverflow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PreFrame() -> void
{
  return Zynamic::Forward<void ()>(L"SV_PreFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FrameInternal(int controllerIndex, int msec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SV_FrameInternal")(controllerIndex, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Frame(int controllerIndex, int msec) -> int
{
  return Zynamic::Forward<int (int, int)>(L"SV_Frame")(controllerIndex, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllowPackets(const bool allow) -> void
{
  return Zynamic::Forward<void (const bool)>(L"SV_AllowPackets")(allow);
}

#endif // __UNIMPLEMENTED__
