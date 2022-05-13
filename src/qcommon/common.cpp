//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_LiveAllocate(const unsigned int size) -> void*
{
  return Zynamic::Forward<void* (const unsigned int)>(L"Com_LiveAllocate")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LiveDeallocate(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"Com_LiveDeallocate")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LiveRealloc(void* ptr, unsigned int size) -> void*
{
  return Zynamic::Forward<void* (void*, unsigned int)>(L"Com_LiveRealloc")(ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LiveCalloc(unsigned int num, unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int)>(L"Com_LiveCalloc")(num, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_common() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_common")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_IsRunningMenuLevel(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Com_IsRunningMenuLevel")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_IsMenuLevel(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Com_IsMenuLevel")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_BeginRedirect(char* buffer, unsigned int buffersize, function* flush) -> void
{
  return Zynamic::Forward<void (char*, unsigned int, function *)>(L"Com_BeginRedirect")(buffer, buffersize, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_EndRedirect() -> void
{
  return Zynamic::Forward<void ()>(L"Com_EndRedirect")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_OpenLogFile() -> void
{
  return Zynamic::Forward<void ()>(L"Com_OpenLogFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LogPrintMessage(int channel, const char* msg) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Com_LogPrintMessage")(channel, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PrintMessage(int channel, const char* msg, int error) -> void
{
  return Zynamic::Forward<void (int, const char*, int)>(L"Com_PrintMessage")(channel, msg, error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Printf(int channel, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"Com_Printf")(channel, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DPrintf(int channel, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"Com_DPrintf")(channel, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PrintError(int channel, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"Com_PrintError")(channel, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PrintWarning(int channel, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"Com_PrintWarning")(channel, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ShutdownInternal(const char* finalmsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_ShutdownInternal")(finalmsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Shutdown(const char* finalmsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_Shutdown")(finalmsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ClearTempMemory() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ClearTempMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitDynamicRender() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitDynamicRender")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitDynamicMemorySystems() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitDynamicMemorySystems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ShutdownDynamicMemorySystems() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ShutdownDynamicMemorySystems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetTimeScale() -> float
{
  return Zynamic::Forward<float ()>(L"Com_GetTimeScale")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetTimeScale(float timescale) -> void
{
  return Zynamic::Forward<void (float)>(L"Com_SetTimeScale")(timescale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ErrorIsNotice(const char* errorMessage) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Com_ErrorIsNotice")(errorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetLocalizedErrorMessage(const char* localizedErrorMessage, const char* titleToken) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"Com_SetLocalizedErrorMessage")(localizedErrorMessage, titleToken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetErrorMessage(const char* errorMessage) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_SetErrorMessage")(errorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ErrorCleanup() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ErrorCleanup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PrintStackTrace() -> void
{
  return Zynamic::Forward<void ()>(L"Com_PrintStackTrace")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ErrorAbort() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ErrorAbort")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Error(enum errorParm_t code, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (enum errorParm_t, const char*, ...)>(L"Com_Error")(code, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CheckError() -> void
{
  return Zynamic::Forward<void ()>(L"Com_CheckError")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Quit_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Quit_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseCommandLine(char* commandLine) -> void
{
  return Zynamic::Forward<void (char*)>(L"Com_ParseCommandLine")(commandLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SafeMode() -> int
{
  return Zynamic::Forward<int ()>(L"Com_SafeMode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ForceSafeMode() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ForceSafeMode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_StartupProcessSetCommand(int lineIndex, const char* match) -> bool
{
  return Zynamic::Forward<bool (int, const char*)>(L"Com_StartupProcessSetCommand")(lineIndex, match);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_StartupVariable(const char* match) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_StartupVariable")(match);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AddStartupCommands() -> void
{
  return Zynamic::Forward<void ()>(L"Com_AddStartupCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_Print(const char* s) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Info_Print")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AllocEvent(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Com_AllocEvent")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_FreeClipboardData(char* text) -> void
{
  return Zynamic::Forward<void (char*)>(L"Sys_FreeClipboardData")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PacketEventLoop(int localClientNum, struct msg_t* netmsg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Com_PacketEventLoop")(localClientNum, netmsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DispatchClientPacketEvent(struct netadr_t adr, struct msg_t* netmsg) -> void
{
  return Zynamic::Forward<void (struct netadr_t, struct msg_t*)>(L"Com_DispatchClientPacketEvent")(adr, netmsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ClientPacketEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ClientPacketEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ServerPacketEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ServerPacketEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_EventLoop() -> void
{
  return Zynamic::Forward<void ()>(L"Com_EventLoop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Error_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Error_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Freeze_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Freeze_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Crash_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Crash_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Assert_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Assert_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ClearCDKey() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ClearCDKey")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConvertRegKeytoDWKey(char* key, int size) -> void
{
  return Zynamic::Forward<void (char*, int)>(L"CL_ConvertRegKeytoDWKey")(key, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ReadCDKey() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ReadCDKey")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ConfigureChecksum(const char* csv, int filesize) -> int
{
  return Zynamic::Forward<int (const char*, int)>(L"Com_ConfigureChecksum")(csv, filesize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_HasConfigureFileChanged() -> bool
{
  return Zynamic::Forward<bool ()>(L"Com_HasConfigureFileChanged")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GpuStringCompare(const char* wild, const char* s) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"Com_GpuStringCompare")(wild, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DoesGpuStringMatch(const char* find, const char* ref) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"Com_DoesGpuStringMatch")(find, ref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetConfigureDvarNames(const char** text, char* dvarNames[0x32]) -> int
{
  return Zynamic::Forward<int (const char**, char*[0x32])>(L"Com_GetConfigureDvarNames")(text, dvarNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetConfigureDvarValues(int dvarCount, const char** text, char* dvarValues[0x32]) -> void
{
  return Zynamic::Forward<void (int, const char**, char*[0x32])>(L"Com_GetConfigureDvarValues")(dvarCount, text, dvarValues);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetConfigureDvars(int dvarCount, const char* dvarNames[0x32], const char* dvarValues[0x32]) -> void
{
  return Zynamic::Forward<void (int, const char*[0x32], const char*[0x32])>(L"Com_SetConfigureDvars")(dvarCount, dvarNames, dvarValues);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetRecommendedCpu(int localClientNum, const struct SysInfo* info, const char** text) -> bool
{
  return Zynamic::Forward<bool (int, const struct SysInfo*, const char**)>(L"Com_SetRecommendedCpu")(localClientNum, info, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetRecommendedGpu(const struct SysInfo* info, const char** text) -> bool
{
  return Zynamic::Forward<bool (const struct SysInfo*, const char**)>(L"Com_SetRecommendedGpu")(info, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetRecommended(int localClientNum, int restart) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Com_SetRecommended")(localClientNum, restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CheckSetRecommended(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_CheckSetRecommended")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetScriptSettings() -> void
{
  return Zynamic::Forward<void ()>(L"Com_SetScriptSettings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto COM_PlayIntroMovies() -> void
{
  return Zynamic::Forward<void ()>(L"COM_PlayIntroMovies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_RunAutoExec(int localClientNum, int controllerIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Com_RunAutoExec")(localClientNum, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ExecStartupConfigs(int localClientNum, const char* configFile) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Com_ExecStartupConfigs")(localClientNum, configFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_StartupConfigs(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_StartupConfigs")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitCodeXAssets() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitCodeXAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitUI3DCallback() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitUI3DCallback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitUIAndCommonXAssets() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitUIAndCommonXAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CalculateStreamBuffer() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Com_CalculateStreamBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Init_Try_Block_Function(char* commandLine) -> void
{
  return Zynamic::Forward<void (char*)>(L"Com_Init_Try_Block_Function")(commandLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Init(char* commandLine, bool isFreshBoot) -> void
{
  return Zynamic::Forward<void (char*, bool)>(L"Com_Init")(commandLine, isFreshBoot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteConfigToFile(int localClientNum, const char* filename) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Com_WriteConfigToFile")(localClientNum, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteKeyConfigToFile(int localClientNum, const char* filename) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Com_WriteKeyConfigToFile")(localClientNum, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteDefaultsToFile(const char* filename) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_WriteDefaultsToFile")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteConfiguration(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_WriteConfiguration")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteConfig_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_WriteConfig_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteKeyConfig_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_WriteKeyConfig_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SaveKeys_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_SaveKeys_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_RestoreKeys_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_RestoreKeys_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_WriteDefaults_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_WriteDefaults_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetTimescaleForSnd() -> float
{
  return Zynamic::Forward<float ()>(L"Com_GetTimescaleForSnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ModifyMsec(int msec) -> int
{
  return Zynamic::Forward<int (int)>(L"Com_ModifyMsec")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Statmon() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Statmon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AdjustMaxFPS(int* maxFPS) -> void
{
  return Zynamic::Forward<void (int*)>(L"Com_AdjustMaxFPS")(maxFPS);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UpdateMenu() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UpdateMenu")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Frame_Try_Block_Function() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Frame_Try_Block_Function")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetLevelSharedFastFile(const char* mapName) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"Com_GetLevelSharedFastFile")(mapName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadCommonFastFile() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadCommonFastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadUiFastFile() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadUiFastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadMapLoadingScreenFastFile(const char* mapName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadMapLoadingScreenFastFile")(mapName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UnloadLevelFastFiles() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UnloadLevelFastFiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadLevelFastFiles(const char* mapName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadLevelFastFiles")(mapName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadFrontEnd() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadFrontEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UnloadFrontEnd() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UnloadFrontEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AssetLoadUI(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_AssetLoadUI")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_StartHunkUsers() -> void
{
  return Zynamic::Forward<void ()>(L"Com_StartHunkUsers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ResetFrametime() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ResetFrametime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CheckSyncFrame() -> void
{
  return Zynamic::Forward<void ()>(L"Com_CheckSyncFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CloseLogfiles() -> void
{
  return Zynamic::Forward<void ()>(L"Com_CloseLogfiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LogFileOpen() -> bool
{
  return Zynamic::Forward<bool ()>(L"Com_LogFileOpen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Close() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Close")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_Clear(struct field_t* edit) -> void
{
  return Zynamic::Forward<void (struct field_t*)>(L"Field_Clear")(edit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Restart() -> void
{
  return Zynamic::Forward<void ()>(L"Com_Restart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MT_AllocAnimTree(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"MT_AllocAnimTree")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_XAnimCreateSmallTree(struct XAnim_s* anims) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct XAnim_s*)>(L"Com_XAnimCreateSmallTree")(anims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_XAnimFreeSmallTree(struct XAnimTree_s* animtree) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*)>(L"Com_XAnimFreeSmallTree")(animtree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetWeaponInfoMemory(int source) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_SetWeaponInfoMemory")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_FreeWeaponInfoMemory(int source) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_FreeWeaponInfoMemory")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AddToString(const char* add, char* msg, int len, int maxlen, int mayAddQuotes) -> int
{
  return Zynamic::Forward<int (const char*, char*, int, int, int)>(L"Com_AddToString")(add, msg, len, maxlen, mayAddQuotes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetDecimalDelimiter() -> char
{
  return Zynamic::Forward<char ()>(L"Com_GetDecimalDelimiter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalizedFloatToString(float f, char* buffer, unsigned int maxlen, unsigned int numDecimalPlaces) -> void
{
  return Zynamic::Forward<void (float, char*, unsigned int, unsigned int)>(L"Com_LocalizedFloatToString")(f, buffer, maxlen, numDecimalPlaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SyncThreads() -> void
{
  return Zynamic::Forward<void ()>(L"Com_SyncThreads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DisplayName(const char* name, const char* clanAbbrev, int type) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*, int)>(L"Com_DisplayName")(name, clanAbbrev, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CS_DisplayName(const struct clientState_s* cs, int type) -> const char*
{
  return Zynamic::Forward<const char* (const struct clientState_s*, int)>(L"CS_DisplayName")(cs, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetPrivateClients() -> int
{
  return Zynamic::Forward<int ()>(L"Com_GetPrivateClients")();
}

#endif // __UNIMPLEMENTED__
