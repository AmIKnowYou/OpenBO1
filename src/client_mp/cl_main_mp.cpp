//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cls''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cls''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_main() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cl_main")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddReliableCommand(int localClientNum, const char* cmd) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CL_AddReliableCommand")(localClientNum, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AnimateUI_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_AnimateUI_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShowContextualItemUI_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShowContextualItemUI_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DemoMemoryPoolAllocate(struct clientConnection_t* clc, int size) -> void*
{
  return Zynamic::Forward<void* (struct clientConnection_t*, int)>(L"CL_DemoMemoryPoolAllocate")(clc, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DemoMemoryPoolDeallocate(struct clientConnection_t* clc, int size) -> void
{
  return Zynamic::Forward<void (struct clientConnection_t*, int)>(L"CL_DemoMemoryPoolDeallocate")(clc, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetClientArchiveCount(int start, int end) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CL_GetClientArchiveCount")(start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoClientArchive(int demoFile, unsigned char msgType, const struct ClientArchiveData* archive, int index) -> void
{
  return Zynamic::Forward<void (int, unsigned char, const struct ClientArchiveData*, int)>(L"CL_WriteDemoClientArchive")(demoFile, msgType, archive, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoClientArchiveToMemory(const struct clientActive_t* cl, struct ClientArchiveData* archive, int index) -> void
{
  return Zynamic::Forward<void (const struct clientActive_t*, struct ClientArchiveData*, int)>(L"CL_WriteDemoClientArchiveToMemory")(cl, archive, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteNewDemoClientArchive(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteNewDemoClientArchive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteNewDemoClientArchiveToMemory(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteNewDemoClientArchiveToMemory")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteAllDemoClientArchive(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteAllDemoClientArchive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteAllDemoClientArchiveToMemory(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteAllDemoClientArchiveToMemory")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoMessage(int localClientNum, struct msg_t* msg, int headerBytes) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int)>(L"CL_WriteDemoMessage")(localClientNum, msg, headerBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoMessageToMemory(int localClientNum, struct msg_t* msg, int headerBytes) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int)>(L"CL_WriteDemoMessageToMemory")(localClientNum, msg, headerBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoFromContinuousStateBuffer(int localClientNum, int continuousStateBufferIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_WriteDemoFromContinuousStateBuffer")(localClientNum, continuousStateBufferIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteDemoEpilog(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteDemoEpilog")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ToggleDemoRecording_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ToggleDemoRecording_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_StopRecord_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_StopRecord_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Record_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Record_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteInitialStateToDemo(int demoFile, unsigned char type, int serverMessageSequence, unsigned char* compressedBuf, int compressedBufSize) -> void
{
  return Zynamic::Forward<void (int, unsigned char, int, unsigned char*, int)>(L"CL_WriteInitialStateToDemo")(demoFile, type, serverMessageSequence, compressedBuf, compressedBufSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteUncompressedDemoInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteUncompressedDemoInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DemoCompleted(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_DemoCompleted")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ReadDemoClientArchive(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ReadDemoClientArchive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ReadDemoNetworkPacket(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ReadDemoNetworkPacket")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ReadDemoMessage(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ReadDemoMessage")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PlayDemo_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_PlayDemo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_NextDemo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_NextDemo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownDevGui() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownDevGui")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownHunkUsers() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownHunkUsers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownAll() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownDemo() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownDemo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MapLoading(const char* mapname, bool map_restart) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"CL_MapLoading")(mapname, map_restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ResetSkeletonCache(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ResetSkeletonCache")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ClearStaticDownload() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ClearStaticDownload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateProfileAfterGame(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_UpdateProfileAfterGame")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ClearState(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ClearState")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UploadStatsForController(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"CL_UploadStatsForController")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Disconnect(int localClientNum, bool deactivateClient) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CL_Disconnect")(localClientNum, deactivateClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CanNotConnect(int localClientNum, const char* msg) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CL_CanNotConnect")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ForwardCommandToServer(int localClientNum, const char* string) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CL_ForwardCommandToServer")(localClientNum, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto strtrm(char* str) -> char*
{
  return Zynamic::Forward<char* (char*)>(L"strtrm")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_BuildMd5StrFromCDKey(char* md5Str) -> void
{
  return Zynamic::Forward<void (char*)>(L"CL_BuildMd5StrFromCDKey")(md5Str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ForwardToServer_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ForwardToServer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Setenv_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Setenv_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DisconnectLocalClient(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_DisconnectLocalClient")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Disconnect_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Disconnect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Reconnect_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Reconnect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SendPureChecksums(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_SendPureChecksums")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Vid_Restart_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Vid_Restart_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Snd_Restart_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Snd_Restart_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_OpenedIWDList_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_OpenedIWDList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ReferencedIWDList_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ReferencedIWDList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Configstrings_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Configstrings_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Clientinfo_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Clientinfo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadMapLoadscreen(const char* mapname) -> void
{
  return Zynamic::Forward<void (const char*)>(L"LoadMapLoadscreen")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WasMapAlreadyLoaded(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_WasMapAlreadyLoaded")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DownloadsComplete(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_DownloadsComplete")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_BeginDownload(const char* localName, const char* remoteName) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"CL_BeginDownload")(localName, remoteName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_NextDownload(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_NextDownload")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitDownloads(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_InitDownloads")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CheckForResend(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_CheckForResend")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DisconnectError(const char* message) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CL_DisconnectError")(message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DisconnectPacket(int localClientNum, struct netadr_t from, const char* reason) -> void
{
  return Zynamic::Forward<void (int, struct netadr_t, const char*)>(L"CL_DisconnectPacket")(localClientNum, from, reason);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_HandleVoiceTypePacket(int localClientNum, struct msg_t* msg) -> bool
{
  return Zynamic::Forward<bool (int, struct msg_t*)>(L"CL_HandleVoiceTypePacket")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SteamServerAuth(unsigned __int64 serverSteamID) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"CL_SteamServerAuth")(serverSteamID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DispatchConnectionlessPacket(int localClientNum, struct netadr_t from, struct msg_t* msg, int time) -> bool
{
  return Zynamic::Forward<bool (int, struct netadr_t, struct msg_t*, int)>(L"CL_DispatchConnectionlessPacket")(localClientNum, from, msg, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConnectionlessPacket(int localClientNum, struct netadr_t from, struct msg_t* msg, int time) -> bool
{
  return Zynamic::Forward<bool (int, struct netadr_t, struct msg_t*, int)>(L"CL_ConnectionlessPacket")(localClientNum, from, msg, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllocatePerLocalClientMemory(int maxLocalClients, int maxClients, unsigned int flags) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int)>(L"AllocatePerLocalClientMemory")(maxLocalClients, maxClients, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AllocatePerLocalClientMemory(const char* mapname, unsigned int flags) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"CL_AllocatePerLocalClientMemory")(mapname, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FreePerLocalClientMemory() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FreePerLocalClientMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitLoad(const char* mapname, const char* gametype) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"CL_InitLoad")(mapname, gametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PacketEvent(int localClientNum, struct netadr_t from, struct msg_t* msg, int time, bool connectionlesss_packets_only) -> bool
{
  return Zynamic::Forward<bool (int, struct netadr_t, struct msg_t*, int, bool)>(L"CL_PacketEvent")(localClientNum, from, msg, time, connectionlesss_packets_only);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerTimedOut(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ServerTimedOut")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CheckTimeout(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_CheckTimeout")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CheckUserinfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_CheckUserinfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateInGameState(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_UpdateInGameState")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceTransmit(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_VoiceTransmit")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Client_SendVoiceData(int bytes, char* enc_buffer) -> int
{
  return Zynamic::Forward<int (int, char*)>(L"Client_SendVoiceData")(bytes, enc_buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_SendVoiceData() -> bool
{
  return Zynamic::Forward<bool ()>(L"Voice_SendVoiceData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceFrame(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_VoiceFrame")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RunOncePerClientFrame(int localClientNum, int msec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_RunOncePerClientFrame")(localClientNum, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Frame(int localClientNum, int msec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_Frame")(localClientNum, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsClientLocal(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_IsClientLocal")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseBadPacket_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ParseBadPacket_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownRef() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownRef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownWorld() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetupViewport() -> void
{
  return Zynamic::Forward<void ()>(L"CL_SetupViewport")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetupViewport_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_SetupViewport_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitRenderer() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownRenderer(int destroyWindow) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ShutdownRenderer")(destroyWindow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DevGuiDvar_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_DevGuiDvar_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DevGuiCmd_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_DevGuiCmd_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DevGuiOpen_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_DevGuiOpen_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitDevGui() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitDevGui")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_StartHunkUsers() -> void
{
  return Zynamic::Forward<void ()>(L"CL_StartHunkUsers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ScaledMilliseconds() -> int
{
  return Zynamic::Forward<int ()>(L"CL_ScaledMilliseconds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupGfxConfig(struct GfxConfiguration* config) -> void
{
  return Zynamic::Forward<void (struct GfxConfiguration*)>(L"SetupGfxConfig")(config);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitRef() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitRef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitDedicated() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitDedicated")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_startSingleplayer_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_startSingleplayer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawLogo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_DrawLogo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_StopLogo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_StopLogo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PlayLogo_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_PlayLogo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_StopLogoOrCinematic(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_StopLogoOrCinematic")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShouldAllowInGameMenu(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_ShouldAllowInGameMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ToggleMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ToggleMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_OpenScriptMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_OpenScriptMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ReadFromDisk() -> bool
{
  return Zynamic::Forward<bool ()>(L"Playlist_ReadFromDisk")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PauseGame(bool state) -> void
{
  return Zynamic::Forward<void (bool)>(L"CL_PauseGame")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CmdReadFromDisk() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_CmdReadFromDisk")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CmdSetCategoryFilter() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_CmdSetCategoryFilter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CmdSetPrevPlaylist() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_CmdSetPrevPlaylist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CmdGetPrevPlaylist() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_CmdGetPrevPlaylist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CmdGetOldCustomName() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CmdGetOldCustomName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CmdSetNewCustomName() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CmdSetNewCustomName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ResetStats_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ResetStats_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitOnceForAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitOnceForAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Init(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_Init")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Shutdown(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_Shutdown")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetServerList(int source, struct serverInfo_t** servers, int** count) -> bool
{
  return Zynamic::Forward<bool (int, struct serverInfo_t**, int**)>(L"CL_GetServerList")(source, servers, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateDirtyPings(int localClientNum, int source) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CL_UpdateDirtyPings")(localClientNum, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShowIP_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShowIP_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetServerIPAddress() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"CL_GetServerIPAddress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetupForNewServerMap(int localClientNum, const char* pszMapName, const char* pszGametype) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*)>(L"CL_SetupForNewServerMap")(localClientNum, pszMapName, pszGametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsServerLoadingMap() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_IsServerLoadingMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsWaitingOnServerToLoadMap(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_IsWaitingOnServerToLoadMap")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetWaitingOnServerToLoadMap(int localClientNum, bool waiting) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CL_SetWaitingOnServerToLoadMap")(localClientNum, waiting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SyncGpu(function* WorkCallback) -> void
{
  return Zynamic::Forward<void (function *)>(L"CL_SyncGpu")(WorkCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextPhysical(const char* text, int maxChars, struct Font_s* font, float x, float y, float w, float xScale, float yScale, const float* color, int style) -> void
{
  return Zynamic::Forward<void (const char*, int, struct Font_s*, float, float, float, float, float, const float*, int)>(L"CL_DrawTextPhysical")(text, maxChars, font, x, y, w, xScale, yScale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextPhysicalWithEffects(const char* text, int maxChars, struct Font_s* font, float x, float y, float w, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{
  return Zynamic::Forward<void (const char*, int, struct Font_s*, float, float, float, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int)>(L"CL_DrawTextPhysicalWithEffects")(text, maxChars, font, x, y, w, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawText(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, float, const float*, int)>(L"CL_DrawText")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, xScale, yScale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextWithEffects(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, float rotation, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, float, int, int, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int)>(L"CL_DrawTextWithEffects")(scrPlace, text, maxChars, font, x, y, rotation, horzAlign, vertAlign, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextWithCOD7TypeWriterEffects(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, float rotation, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, float, int, int, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int)>(L"CL_DrawTextWithCOD7TypeWriterEffects")(scrPlace, text, maxChars, font, x, y, rotation, horzAlign, vertAlign, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextWithRedactEffects(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, int fxRedactDecayStartTime, int fxRedactDecayDuration) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int, int, int)>(L"CL_DrawTextWithRedactEffects")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, fxRedactDecayStartTime, fxRedactDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextPhysicalWithCOD7DecodeEffects(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{
  return Zynamic::Forward<void (const char*, int, struct Font_s*, float, float, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int)>(L"CL_DrawTextPhysicalWithCOD7DecodeEffects")(text, maxChars, font, x, y, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextPhysicalWithRedactEffects(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, int fxRedactDecayStartTime, int fxRedactDecayDuration) -> void
{
  return Zynamic::Forward<void (const char*, int, struct Font_s*, float, float, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int, int, int)>(L"CL_DrawTextPhysicalWithRedactEffects")(text, maxChars, font, x, y, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, fxRedactDecayStartTime, fxRedactDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextWithPopInEffects(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, float rotation, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, float, int, int, float, float, const float*, int, const float*, struct Material*, struct Material*, int, int, int, int)>(L"CL_DrawTextWithPopInEffects")(scrPlace, text, maxChars, font, x, y, rotation, horzAlign, vertAlign, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextRotate(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, float rotation, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, float, int, int, float, float, const float*, int)>(L"CL_DrawTextRotate")(scrPlace, text, maxChars, font, x, y, rotation, horzAlign, vertAlign, xScale, yScale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextPhysicalWithCursor(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style, int cursorPos, char cursor) -> void
{
  return Zynamic::Forward<void (const char*, int, struct Font_s*, float, float, float, float, const float*, int, int, char)>(L"CL_DrawTextPhysicalWithCursor")(text, maxChars, font, x, y, xScale, yScale, color, style, cursorPos, cursor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawTextWithCursor(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const float* color, int style, int cursorPos, char cursor) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, float, const float*, int, int, char)>(L"CL_DrawTextWithCursor")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, xScale, yScale, color, style, cursorPos, cursor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShouldDisplayHud(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_ShouldDisplayHud")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsUIActive(const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"CL_IsUIActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RegisterFont(const char* fontName, int imageTrack) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const char*, int)>(L"CL_RegisterFont")(fontName, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMapCenter() -> float*
{
  return Zynamic::Forward<float* ()>(L"CL_GetMapCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FilterChar(unsigned char input[0x3]) -> int
{
  return Zynamic::Forward<int (unsigned char[0x3])>(L"CL_FilterChar")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SanitizeClanName() -> void
{
  return Zynamic::Forward<void ()>(L"CL_SanitizeClanName")();
}

#endif // __UNIMPLEMENTED__
