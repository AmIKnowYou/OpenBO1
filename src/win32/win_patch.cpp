//  SPDX-License-Identifier: GPL-3.0-or-later
//! @brief   Legacies patches written in the early days of OpenBO1.
//! @warning Extremely dangerous and untested. They are only temporary and will be removed as soon as the game works without them.

#include "win_patch.h"

auto Sys_Patch() -> void
{
  XAssetPatch(ASSET_TYPE_MENULIST, 164);
  XAssetPatch(ASSET_TYPE_EMBLEMSET, 4);
  XAssetPatch(ASSET_TYPE_STRINGTABLE, 576);
  XAssetPatch(ASSET_TYPE_FX, 500);

  LazyPatch(0x006D194B);          // void __cdecl Com_PrintMessage(int channel, const char *msg, int error)
  LazyPatch(0x006D24D7);          // void Com_Error(errorParm_t code, const char *fmt, ...)
  LazyPatch(0x006D4246, 0x90, 2); // void __cdecl Com_Init(char *commandLine)
  LazyPatch(0x006D42EA, 0x90, 2); // Conflict: void __usercall Com_Init(int@<ebx>, int@<edi>, int@<esi>, char *commandLine)
  LazyPatch(0x006D6972, 0x90, 2); // DWORD Com_Frame_Try_Block_Function()
  LazyPatch(0x006D6C66, 0x90, 6); // Conflict: DWORD Com_Frame_Try_Block_Function()
  LazyPatch(0x006DFD99);          // void __cdecl track_z_free(int type, void *pos, int overhead)
  LazyPatch(0x0070F654);          // scr_player_sprinttime ?
  LazyPatch(0x007101B2);          // void __cdecl SV_Startup(int controllerIndex)
  LazyPatch(0x0071020B);          // void __cdecl SV_Startup(int controllerIndex)
  LazyPatch(0x00712DED);          // void SV_SendServerCommand(client_t *cl, svscmd_type type, const char *fmt, ...)
  LazyPatch(0x00716827);          // void __cdecl SV_MasterHeartbeat(int controllerIndex)
  LazyPatch(0x0071BDC0);          // void __cdecl SV_AddModifiedStats(int clientNum)
  LazyPatch(0x0073E836);          // char __cdecl UI_Gametype_ReadFromMemFile(MemoryFile *memFile)
  LazyPatch(0x00740BFB);          // void __cdecl UI_Gametype_FileShareDownloadComplete(dwFileShareReadFileTask *task)
  LazyPatch(0x007841D9);          // void __thiscall UIViewer::AddPlayerToScene(UIViewer *this, const UIViewer::PlayerParams *playerParams, const UIViewer::WeaponParams *weapParams, bool locked)
  LazyPatch(0x007D3EE4);          // BOOL __cdecl KeyValueToField(unsigned __int8 *pStruct, const cspField_t *pField, const char *pszKeyValue, const int iMaxFieldTypes, int (__cdecl *parseSpecialFieldType)(unsigned __int8 *, const char *, const int, const int), void (__cdecl *parseStrcpy)(unsigned __int8 *, const char *))
//LazyPatch(0x007D9EE1);          // BUG: It skip the console message loop; sysEvent_t *__cdecl Win_GetEvent(sysEvent_t *result)
  LazyPatch(0x007DB72D);          // int __stdcall WinMain(HINSTANCE__ *hInstance, HINSTANCE__ *hPrevInstance, char *lpCmdLine, int nCmdShow)
  LazyPatch(0x009372DE);          // void __cdecl SND_Init()
  LazyPatch(0x00962FDD);          // void __cdecl Live_FileShare_Read_f()
  LazyPatch(0x0096F93E);          // PCacheEntry *__cdecl PCache_GetEntry(int controllerIndex, unsigned __int64 xuid)
  LazyPatch(0x0097E07C);          // void __thiscall CSteamAchievements::CSteamAchievements(CSteamAchievements *this, Achievement_t *Achievements, int NumAchievements)
  LazyPatch(0x0097EC85);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0097EDA2);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0098CB1B);          // TaskRecord *__cdecl SV_CACValidateReadCAC(unsigned __int64 client, unsigned __int8 *cacblob, unsigned int cacsize)
  LazyPatch(0x0098CEFC);          // TaskRecord *__cdecl SV_CACValidateReadGlobal(unsigned __int64 client, unsigned __int8 *globalblob, unsigned int globalblobsize)
  LazyPatch(0x0068D437);          // int __cdecl ConsoleCommand()
  LazyPatch(0x006D1F4F);          // void __cdecl Com_Shutdown(const char *finalmsg)
  LazyPatch(0x006D4D23);          // void __cdecl Com_Init_Try_Block_Function(char *commandLine)
  LazyPatch(0x006D4D8F, 0x90, 2); // void __cdecl Com_Init_Try_Block_Function(char *commandLine)
  LazyPatch(0x006D66B3);          // void __cdecl Com_LoadFrontEnd()
  LazyPatch(0x006D68C7);          // void __cdecl Com_Frame()
  LazyPatch(0x006D69EC, 0x90, 6); // DWORD Com_Frame_Try_Block_Function()
  LazyPatch(0x006E0735);          // void __cdecl track_hunk_alloc(int size, int pos, const char *name, int type)
  LazyPatch(0x00703CDC);          // void __cdecl SV_Map_f()
  LazyPatch(0x007077C4);          // void __cdecl SV_DirectConnect(netadr_t from)
  LazyPatch(0x007083D2);          // void __cdecl SV_DropClient(client_t *drop, const char *reason, bool tellThem, bool writeStats)
  LazyPatch(0x0071065F);          // void __cdecl __noreturn SV_SpawnServer(int controllerIndex, const char *server, int mapIsPreloaded)
  LazyPatch(0x00711693);          // void __cdecl SV_Init()
  LazyPatch(0x00712186);          // void __cdecl SV_Shutdown(const char *finalmsg)
  LazyPatch(0x007121F2);          // void __cdecl SV_Shutdown(const char *finalmsg)
  LazyPatch(0x00713FA6);          // void __cdecl SVC_Info(netadr_t from, bdSecurityID *secID, bool quick)
  LazyPatch(0x00714410);          // void __cdecl SV_ConnectionlessPacket(netadr_t from, msg_t *msg)
  LazyPatch(0x007166EF);          // bool __cdecl SV_HasInfoChanged()
  LazyPatch(0x00716815);          // void __cdecl SV_MasterHeartbeat(int controllerIndex)
  LazyPatch(0x00716BBC);          // void __cdecl SV_MasterHeartbeat(int controllerIndex)
  LazyPatch(0x0076567F);          // int __cdecl Item_ListBox_Viewmax(const int localClientNum, int contextIndex, itemDef_s *item)
  LazyPatch(0x007DB717);          // int __stdcall WinMain(HINSTANCE__ *hInstance, HINSTANCE__ *hPrevInstance, char *lpCmdLine, int nCmdShow)
  LazyPatch(0x007DCA8A);          // int __cdecl dwPlatformInit(bdNetStartParams *params)
  LazyPatch(0x007DE9F1);          // LRESULT __stdcall ConWndProc(HWND__ *hWnd, unsigned int uMsg, unsigned int wParam, int lParam)
  LazyPatch(0x00931104);          // bool __cdecl SND_ShouldInit()
  LazyPatch(0x0096D683);          // void __cdecl LiveNews_PopulateFriendNews(int controllerIndex, unsigned __int64 xuid, char *name)
  LazyPatch(0x0096E04F);          // void __cdecl LiveNews_GetOwnNews(int controllerIndex)
  LazyPatch(0x00978364);          // unsigned int __cdecl LiveStats_GetPlayerStat(const char *statsList, const char *statName, char *buffer)
  LazyPatch(0x0097E13A);          // void __thiscall CSteamAchievements::CSteamAchievements(CSteamAchievements *this, Achievement_t *Achievements, int NumAchievements)
  LazyPatch(0x0097EC26);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0097ED43);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0097FD63);          // void __thiscall LiveSteamP2P::LiveSteamP2P(LiveSteamP2P *this)
  LazyPatch(0x0098D9DB);          // void __cdecl SV_FetchWADDeferred()
  LazyPatch(0x0099119B);          // void __cdecl PC_InitSigninState()
  LazyPatch(0x00994876);          // void __cdecl SocketRouter_EmergencyFrame()
  LazyPatch(0x00A74410);          // void __cdecl RB_StandardDrawCommands(const GfxViewInfo *viewInfo)
  LazyPatch(0x00A7A2D7);          // void __cdecl R_IssueRenderCommands(unsigned int type)
  LazyPatch(0x00A7CD10);          // const dvar_s *R_UpdateFrontEndDvarOptions()
  LazyPatch(0x00AA64F4);          // void __cdecl R_StreamUpdateAabbNode_r_0_(int aabbTreeNode, const float *viewPos, float maxDistSq, float *distanceScale)
  LazyPatch(0x00AB7687, 0xEB, 1); // Assert: void __cdecl RB_RenderCommandFrame(const void *data)
  LazyPatch(0x0050BE4C);          // void __cdecl UI_SetLocalVarStringByName(const char *inputName, const char *inputValue, int localClientNum)
  LazyPatch(0x00562ADD);          // void __cdecl CL_AllocatePerLocalClientMemory()
  LazyPatch(0x0058F0FA);          // void __cdecl DB_Sleep(int msec)
  LazyPatch(0x00594EED);          // void __cdecl DB_LoadFastFilesForPC()
  LazyPatch(0x00594F5C);          // void __cdecl DB_LoadFastFilesForPC()
  LazyPatch(0x00596766);          // int __cdecl DevGui_CreateMenu()
  LazyPatch(0x0059EE14);          // void __cdecl dwLogOnComplete()
  LazyPatch(0x005A0203);          // void __cdecl DWDedicatedLogon()
  LazyPatch(0x005A1005);          // taskCompleteResults __cdecl dwUpdateSessionComplete(overlappedTask *const task)
  LazyPatch(0x0060D57B, 0xEB, 1); // Conflict: void __cdecl PlayerCmd_IsLocalToHost(scr_entref_t entref)
  LazyPatch(0x0061155E);          // void __cdecl G_Say(gentity_s *ent, gentity_s *target, int mode, const char *chatText)
  LazyPatch(0x0066F4E2);          // void __usercall VEH_Teleport(NitrousVehicle *a1@<ebp>, gentity_s *pSelf, float *origin, float *angles, float *vel)
  LazyPatch(0x0066F56A);          // void __usercall VEH_Teleport(NitrousVehicle *a1@<ebp>, gentity_s *pSelf, float *origin, float *angles, float *vel)
  LazyPatch(0x006CD654);          // int __cdecl Com_ControllerIndexes_GetPrimary()
  LazyPatch(0x006D4104, 0x90, 9); // void __cdecl Com_InitUIAndCommonXAssets()
  LazyPatch(0x006D433B);          // void Com_ErrorCleanup()
  LazyPatch(0x006D49B8);          // void __cdecl Com_Init_Try_Block_Function(char *commandLine)
  LazyPatch(0x006D5003);          // int COM_PlayIntroMovies()
  LazyPatch(0x006D5240);          // void Com_InitDvars()
  LazyPatch(0x006D5A85);          // void __cdecl Com_WriteConfigToFile(int localClientNum, const char *filename)
  LazyPatch(0x006D5BE8);          // void __cdecl Com_WriteKeyConfigToFile(int localClientNum, const char *filename)
  LazyPatch(0x006D5DC6);          // int Com_LoadUiFastFile()
  LazyPatch(0x006D5F04);          // void __cdecl Com_LoadMapLoadingScreenFastFile()
  LazyPatch(0x006D6E20, 0x90, 2); // DWORD Com_Frame_Try_Block_Function()
  LazyPatch(0x006D6FCC);          // int __cdecl Com_ModifyMsec(int msec)
  LazyPatch(0x006DD966);          // char __cdecl GDT_RemoteXModelUpdate(const char *in)
  LazyPatch(0x006DDDBC);          // char __cdecl GDT_RemoteMaterialUpdate(const char *in)
  LazyPatch(0x006E2F63);          // float (*__cdecl MSG_GetMapCenter())[3]
  LazyPatch(0x006F5873);          // int __cdecl Sys_WaitRenderer()
  LazyPatch(0x00703AF4);          // void __cdecl SV_AddOperatorCommands()
  LazyPatch(0x00707816);          // void __cdecl SV_DirectConnect(netadr_t from)
  LazyPatch(0x0070F5F8);          // scr_player_sprinttime ?
  LazyPatch(0x007101D3);          // void __cdecl SV_Startup(int controllerIndex)
  LazyPatch(0x00710C43);          // void __cdecl __noreturn SV_SpawnServer(int controllerIndex, const char *server, int mapIsPreloaded)
  LazyPatch(0x00711908);          // void __cdecl SV_Init()
  LazyPatch(0x00713D2B);          // void __cdecl SVC_Info(netadr_t from, bdSecurityID *secID, bool quick)
  LazyPatch(0x00716B81);          // void __cdecl SV_MasterHeartbeat(int controllerIndex)
  LazyPatch(0x007179A3);          // void __cdecl SV_MatchEnd()
  LazyPatch(0x0073EB54);          // bool __cdecl UI_Gametype_IsUsingCustom()
  LazyPatch(0x00752954);          // void __cdecl UI_DrawConnectScreen(int localClientNum)
  LazyPatch(0x007631D3);          // void __cdecl Script_Play()
  LazyPatch(0x00776974);          // void __cdecl UI_SetLoadingScreenMaterial()
  LazyPatch(0x0078691C);          // BOOL __cdecl PickAabbSplitPlane(float (*mins)[3], float (*maxs)[3], int *remap, int count, int *chosenAxis, float *chosenDist)
  LazyPatch(0x00786952);          // BOOL __cdecl PickAabbSplitPlane(float (*mins)[3], float (*maxs)[3], int *remap, int count, int *chosenAxis, float *chosenDist)
  LazyPatch(0x007949C4);          // void __cdecl CanRenderClip(const int localClientNum, itemDef_s *item, OperandStack *dataStack)
  LazyPatch(0x007A79C6);          // void __cdecl FS_Restart(int localClientNum, int checksumFeed)
  LazyPatch(0x007D3F55);          // BOOL __cdecl KeyValueToField(unsigned __int8 *pStruct, const cspField_t *pField, const char *pszKeyValue, const int iMaxFieldTypes, int (__cdecl *parseSpecialFieldType)(unsigned __int8 *, const char *, const int, const int), void (__cdecl *parseStrcpy)(unsigned __int8 *, const char *))
  LazyPatch(0x007D99CE);          // void __noreturn Sys_Error(const char *error, ...)
  LazyPatch(0x007DB6C5);          // int __stdcall WinMain(HINSTANCE__ *hInstance, HINSTANCE__ *hPrevInstance, char *lpCmdLine, int nCmdShow)
  LazyPatch(0x00962F8E);          // void __cdecl Live_FileShare_Read_f()
  LazyPatch(0x00969484);          // char __cdecl LB_SetGametypeDvar()
  LazyPatch(0x0096B7DC);          // char *__cdecl LB_FeederItemText(const int localClientNum, int index, int column, Material **material)
  LazyPatch(0x00972873);          // bool __cdecl Session_IsHost()
  LazyPatch(0x00974D49);          // char __cdecl LiveStats_GetIntPlayerStatInternal(int *outInt, int pathDepth, const char **statName, char *buffer)
  LazyPatch(0x00975290);          // char __cdecl LiveStats_SetIntPlayerStatInternal(const int controllerIndex, int pathDepth, const char **path, char *buffer, unsigned int statValue)
  LazyPatch(0x00977735);          // unsigned int __cdecl LiveStats_GetItemStat(ddlState_t *searchStateStats, const char *statMember, char *buffer)
  LazyPatch(0x0097D576);          // void __cdecl LiveSteam_CheckAccess()
  LazyPatch(0x0097DA0D);          // void __cdecl LiveSteam_Init()
  LazyPatch(0x0097DDBD);          // void __cdecl LiveSteam_Frame()
  LazyPatch(0x0097E0DB);          // void __thiscall CSteamAchievements::CSteamAchievements(CSteamAchievements *this, Achievement_t *Achievements, int NumAchievements)
  LazyPatch(0x0097EBC7);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0097ECE4);          // void __thiscall LiveSteamServer::LiveSteamServer(LiveSteamServer *this)
  LazyPatch(0x0097FA7E);          // void __thiscall CCallback<LiveSteamServer,SteamServersConnected_t,1>::Register(CCallback<LiveSteamServer,SteamServersConnected_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, SteamServersConnected_t *))
  LazyPatch(0x0097FAEE);          // void __thiscall CCallback<LiveSteamServer,SteamServersDisconnected_t,1>::Register(CCallback<LiveSteamServer,SteamServersDisconnected_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, SteamServersDisconnected_t *))
  LazyPatch(0x0097FB5E);          // void __thiscall CCallback<LiveSteamServer,GSPolicyResponse_t,1>::Register(CCallback<LiveSteamServer,GSPolicyResponse_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, GSPolicyResponse_t *))
  LazyPatch(0x0097FBCE);          // void __thiscall CCallback<LiveSteamServer,GSClientApprove_t,1>::Register(CCallback<LiveSteamServer,GSClientApprove_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, GSClientApprove_t *))
  LazyPatch(0x0097FC4E);          // void __thiscall CCallback<LiveSteamServer,GSClientDeny_t,1>::Register(CCallback<LiveSteamServer,GSClientDeny_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, GSClientDeny_t *))
  LazyPatch(0x0097FCCE);          // void __thiscall CCallback<LiveSteamServer,GSClientKick_t,1>::Register(CCallback<LiveSteamServer,GSClientKick_t,1> *this, LiveSteamServer *pObj, void (__thiscall *func)(LiveSteamServer *this, GSClientKick_t *))
  LazyPatch(0x0098142A);          // TaskRecord *__cdecl LiveStorage_ReadDWFileByUserID(const int controllerIndex, dwFileOperationInfo *fileInfo, unsigned __int64 xuidLocal)
  LazyPatch(0x009818D6);          // void __cdecl LiveStorage_GetServerTimeComplete()
  LazyPatch(0x00983858);          // void __cdecl LiveStorage_FileShare_ReadListingSuccess(TaskRecord *task)
  LazyPatch(0x0098517C);          // void __cdecl LiveStorage_FileShare_WriteSummarySuccess(TaskRecord *task)
  LazyPatch(0x00986BD1);          // char __cdecl LiveStorage_Init()
  LazyPatch(0x00987B06);          // void LiveStorage_ProcessOnlineWAD()
  LazyPatch(0x00987FB6);          // void LiveStorage_InitCustomClassesNames()
  LazyPatch(0x0098971A);          // void __thiscall SV_CommitClientLeaderboards(void *this)
  LazyPatch(0x0098B0B6);          // void __cdecl SV_DWWriteClientStats(client_t *client)
  LazyPatch(0x0098C6B6);          // void __cdecl SV_CACValidateWriteCAC(unsigned __int64 client, unsigned __int8 *cacblob, unsigned int cacsize)
  LazyPatch(0x0098C896);          // void __cdecl SV_CACValidateWriteGlobal(unsigned __int64 client, unsigned __int8 *globalblob, unsigned int globalsize)
  LazyPatch(0x00991484);          // void __cdecl Live_Frame()

  // VM
  {
    // void __cdecl SV_Startup(int controllerIndex)
    {
      const char* opcode = "\xE9\x98\x00\x00\x00";
      for (int i = 0; i < 5; i++)
        memset(reinterpret_cast<void*>(0x007101B9 + i), *opcode++, 5);
    }

    // bool Assert_MyHandler(const char *filename, int line, int type, const char *fmt, ...)
    {
      const char* opcode = "\xB8\x01\x00\x00\x00\xC3";
      for (int i = 0; i < 6; i++)
        memset(reinterpret_cast<void*>(0x00788720 + i), *opcode++, 6);
    }

    memset(reinterpret_cast<void*>(0x00AA36B2), 0x75, 1); // bool __cdecl R_StreamUpdate_FindImageAndOptimize(const float *viewPos)
    memset(reinterpret_cast<void*>(0x00AA4562), 0x74, 1); // void __cdecl R_StreamUpdatePerClient(const float *viewPos)
    memset(reinterpret_cast<void*>(0x006D1C7B), 0x90, 5); // void Com_DPrintf(int channel, const char *fmt, ...)
    memset(reinterpret_cast<void*>(0x007179E0), 0xC3, 1); // void __cdecl SV_SysLog_LogMessage(int severity, const char *msg)
    memset(reinterpret_cast<void*>(0x00ABA1E0), 0xC3, 1); // void __cdecl R_StreamAlloc_InitTempImages()
    memset(reinterpret_cast<void*>(0x00789E50), 0xC3, 1); // void __cdecl Expression_Free(ExpressionStatement *statement)
    memset(reinterpret_cast<void*>(0x0093BB39), 0x90, 5); // void __cdecl SND_PatchApply(const SndPatch *patch)
    memset(reinterpret_cast<void*>(0x00708A8F), 0x74, 1); // void __cdecl SV_SendClientGameState(client_t *client)
    memset(reinterpret_cast<void*>(0x00708A9E), 0xEB, 1); // void __cdecl SV_SendClientGameState(client_t *client)
    memset(reinterpret_cast<void*>(0x008BDCF9), 0x90, 2); // void __cdecl RuntimeError(scriptInstance_t inst, const char *codePos, unsigned int index, const char *msg, const char *dialogMessage)
    memset(reinterpret_cast<void*>(0x008BDCFF), 0x90, 2); // void __cdecl RuntimeError(scriptInstance_t inst, const char *codePos, unsigned int index, const char *msg, const char *dialogMessage)
    memset(reinterpret_cast<void*>(0x008B8396), 0x90, 2); // void __cdecl Scr_EndLoadScripts(scriptInstance_t inst)
    memset(reinterpret_cast<void*>(0x008BD8EB), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BD7E5), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BDA6B), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BDA23), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BDAFC), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BD74F), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BD785), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BD835), 0x90, 5); // void CompileError(scriptInstance_t inst, unsigned int sourcePos, const char *msg, ...)
    memset(reinterpret_cast<void*>(0x008BDEB0), 0xC3, 1); // void __cdecl RuntimeErrorInternal(scriptInstance_t inst, int channel, const char *codePos, unsigned int index, const char *msg)
    memset(reinterpret_cast<void*>(0x008DC190), 0xEB, 1); // unsigned __int16 __cdecl Scr_ExecEntThreadNum(scriptInstance_t inst, int entnum, unsigned int classnum, int handle, unsigned int paramcount, unsigned int localClientNum)

    DetourFunction(reinterpret_cast<unsigned char*>(0x004F27F0), reinterpret_cast<unsigned char*>(&CScr_GetFunction));
    DetourFunction(reinterpret_cast<unsigned char*>(0x004FB030), reinterpret_cast<unsigned char*>(&CScr_GetMethod));
    DetourFunction(reinterpret_cast<unsigned char*>(0x004FE300), reinterpret_cast<unsigned char*>(&CScr_GetFunctionProjectSpecific));
    DetourFunction(reinterpret_cast<unsigned char*>(0x004FF150), reinterpret_cast<unsigned char*>(&CScr_GetMethodProjectSpecific));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00919AC0), reinterpret_cast<unsigned char*>(&Actor_GetMethod));
    DetourFunction(reinterpret_cast<unsigned char*>(0x0060F9A0), reinterpret_cast<unsigned char*>(&Player_GetMethod));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00660A50), reinterpret_cast<unsigned char*>(&Scr_GetFunction));
  }

  // SV
  {
    memset(reinterpret_cast<void*>(0x0098032B), 0xCC, 1); // TaskRecord* __cdecl LiveStorage_ReadPlayerGlobalBlob()
    memset(reinterpret_cast<void*>(0x00980386), 0xCC, 1); // TaskRecord* __cdecl LiveStorage_ReadPlayerGlobalBlob()
    memset(reinterpret_cast<void*>(0x0098AA96), 0xCC, 1); // TaskRecord* __cdecl LiveStorage_ReadPlayerGlobalBlob()
    memset(reinterpret_cast<void*>(0x0098AAD9), 0xCC, 1); // TaskRecord* __cdecl LiveStorage_ReadPlayerGlobalBlob()
    memset(reinterpret_cast<void*>(0x00987570), 0x74, 1); // TaskRecord *__cdecl LiveStorage_FetchOnlineWAD(const int controllerIndex)

    *reinterpret_cast<unsigned long*>(0x0098DAC8) = 40548; // TaskRecord *__cdecl LiveStorage_ReadPlayerGlobalBlob()
    *reinterpret_cast<unsigned long*>(0x009821E6) = 40548; // void __cdecl LiveStorage_ReadPlayerStatsSuccessful(const int controllerIndex)
    *reinterpret_cast<unsigned long*>(0x0098AA79) = 40548; // char __cdecl SV_IsStatsBlobOK(void *data)
    *reinterpret_cast<unsigned long*>(0x0098AD6B) = 40548; // void __cdecl SV_DWReadClientCAC(client_t *client)
    *reinterpret_cast<unsigned long*>(0x007061B8) = 40548; // unsigned int __cdecl SV_GetClientDIntStat(int clientNum, ddlState_t *searchState)
    *reinterpret_cast<unsigned long*>(0x0056AFD0) = 40548; // char __cdecl CL_RequestCACValidate(unsigned __int64 serverId)
    *reinterpret_cast<unsigned long*>(0x0056AFDC) = 40548; // char __cdecl CL_RequestCACValidate(unsigned __int64 serverId)
    *reinterpret_cast<unsigned long*>(0x00705C57) = 40548; // void __cdecl SV_SetClientDIntStat(int clientNum, ddlState_t *searchState, unsigned int value)
    *reinterpret_cast<unsigned long*>(0x00705E27) = 40548; // void __cdecl SV_SetClientDStringStat(int clientNum, ddlState_t *searchState, const char *value)
    *reinterpret_cast<unsigned long*>(0x00705FF7) = 40548; // void __cdecl SV_SetClientDInt64Stat(int clientNum, ddlState_t *searchState, unsigned __int64 value)
    *reinterpret_cast<unsigned long*>(0x007061B8) = 40548; // unsigned int __cdecl SV_GetClientDIntStat(int clientNum, ddlState_t *searchState)
    *reinterpret_cast<unsigned long*>(0x00706374) = 40548; // const char *__cdecl SV_GetClientDStringStat(int clientNum, ddlState_t *searchState)
    *reinterpret_cast<unsigned long*>(0x00706534) = 40548; // unsigned __int64 __cdecl SV_GetClientDInt64Stat(int clientNum, ddlState_t *searchState)
    *reinterpret_cast<unsigned long*>(0x00708A4B) = 40548; // void __cdecl SV_SendClientGameState(client_t *client)
    *reinterpret_cast<unsigned long*>(0x009584F1) = 40548; // void __cdecl LiveCombatRecord_BuildSortedItem(const int controllerIndex, itemSortingCriteria_t criterion, bool forOtherPlayer, int index, int itemNumber, int param, int divisionParam)
    *reinterpret_cast<unsigned long*>(0x00958518) = 40548; // void __cdecl LiveCombatRecord_BuildSortedItem(const int controllerIndex, itemSortingCriteria_t criterion, bool forOtherPlayer, int index, int itemNumber, int param, int divisionParam)
    *reinterpret_cast<unsigned long*>(0x00974507) = 40548; // int __cdecl LiveStats_ValidateGlobalWithDDL(int controllerIndex)
    *reinterpret_cast<unsigned long*>(0x00974560) = 40548; // int __cdecl LiveStats_ValidateGlobalWithDDL(int controllerIndex)
    *reinterpret_cast<unsigned long*>(0x009758B3) = 40548; // void __cdecl LiveStats_SetStatChanged(const int controllerIndex, const char *hexMsg)
    *reinterpret_cast<unsigned long*>(0x0098032C) = 40548; // int __cdecl LiveStorage_ValidateWithDDL(int controllerIndex, statsLocation location)
    *reinterpret_cast<unsigned long*>(0x00980387) = 40548; // int __cdecl LiveStorage_ValidateWithDDL(int controllerIndex, statsLocation location)
    *reinterpret_cast<unsigned long*>(0x00982507) = 40548; // TaskRecord *__cdecl LiveStorage_ReadCommonStats(const int controllerIndex, bool silent, statsLocation location, const TaskDefinition *taskDef, dwFileOperationInfo *fileInfo)
    *reinterpret_cast<unsigned long*>(0x00982507) = 40548; // TaskRecord *__cdecl LiveStorage_ReadCommonStats(const int controllerIndex, bool silent, statsLocation location, const TaskDefinition *taskDef, dwFileOperationInfo *fileInfo)
    *reinterpret_cast<unsigned long*>(0x00987D2D) = 40548; // void __cdecl LiveStorage_ResetStats(unsigned __int8 *buffer)
    *reinterpret_cast<unsigned long*>(0x00987D46) = 40548; // void __cdecl LiveStorage_ResetStats(unsigned __int8 *buffer)
    *reinterpret_cast<unsigned long*>(0x00987D57) = 40548; // void __cdecl LiveStorage_ResetStats(unsigned __int8 *buffer)
    *reinterpret_cast<unsigned long*>(0x0098A89A) = 40548; // void __cdecl SV_DWReadClientGlobalStatsSuccess(const int controllerIndex, void *data)
    *reinterpret_cast<unsigned long*>(0x0098AA79) = 40548; // char __cdecl SV_IsStatsBlobOK(void *data)
    *reinterpret_cast<unsigned long*>(0x0098AA97) = 40548; // char __cdecl SV_IsStatsBlobOK(void *data)
    *reinterpret_cast<unsigned long*>(0x0098AADA) = 40548; // char __cdecl SV_IsStatsBlobOK(void *data)
    *reinterpret_cast<unsigned long*>(0x0098ABA0) = 40548; // int __cdecl SV_DWReadClientGlobalStatsFailure(const int controllerIndex, void *data)
    *reinterpret_cast<unsigned long*>(0x0098B385) = 40548; // void __cdecl SV_DWWriteClientGlobalStatsSuccess(const int controllerIndex, void *data)
    *reinterpret_cast<unsigned long*>(0x0098B3D8) = 40548; // void __cdecl SV_DWWriteClientGlobalStatsSuccess(const int controllerIndex, void *data)
    *reinterpret_cast<unsigned long*>(0x0098B4F3) = 40548; // void __cdecl LiveStorage_SendStatsBufferToClient(unsigned __int64 uid, unsigned __int8 *buffer, int buffersize, blobtype_t blobtype, bool sendOK)
    *reinterpret_cast<unsigned long*>(0x0098B4FC) = 40548; // void __cdecl LiveStorage_SendStatsBufferToClient(unsigned __int64 uid, unsigned __int8 *buffer, int buffersize, blobtype_t blobtype, bool sendOK)
    *reinterpret_cast<unsigned long*>(0x0098C447) = 40548; // void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
    *reinterpret_cast<unsigned long*>(0x0098C467) = 40548; // void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
    *reinterpret_cast<unsigned long*>(0x0098C47D) = 40548; // void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)

    // Require further investigation.
    {
      // *reinterpret_cast<unsigned long*>(0x0098C4C1) = 40548; void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
      // *reinterpret_cast<unsigned long*>(0x0098C516) = 40548; void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
      // *reinterpret_cast<unsigned long*>(0x0098C536) = 40548; void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
      // *reinterpret_cast<unsigned long*>(0x0098C54B) = 40548; void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
      // *reinterpret_cast<unsigned long*>(0x0098C591) = 40548; void __cdecl SV_CACValidate_EvaluateStatsBlobs(bool *oldcacok, bool *globalok, unsigned __int8 *oldcacblob, unsigned __int8 *globalblob, int oldcacsize, int globalsize)
      // *reinterpret_cast<unsigned long*>(0x0098C806) = 40548; void __cdecl SV_CACValidateWriteCACSuccess(const int controllerIndex, void *data)
      // *reinterpret_cast<unsigned long*>(0x0098CA46) = 40548; void __cdecl SV_CACValidateWriteGlobalSuccess(const int controllerIndex, void *data)
      // *reinterpret_cast<unsigned long*>(0x0098D30E) = 40548; void __cdecl SV_CACValidateHandleRequest(unsigned __int64 clientID, unsigned __int8 *compressedcac, unsigned int cacsize)
      // *reinterpret_cast<unsigned long*>(0x0098D34C) = 40548; void __cdecl SV_CACValidateHandleRequest(unsigned __int64 clientID, unsigned __int8 *compressedcac, unsigned int cacsize)
      // *reinterpret_cast<unsigned long*>(0x0098D36A) = 40548; void __cdecl SV_CACValidateHandleRequest(unsigned __int64 clientID, unsigned __int8 *compressedcac, unsigned int cacsize)
      // *reinterpret_cast<unsigned long*>(0x0098D47D) = 40548; void __cdecl Live_OnNewStatsFromServer(unsigned __int8 *compressedblob, unsigned int blobsize, blobtype_t blobtype)
      // *reinterpret_cast<unsigned long*>(0x0098D499) = 40548; void __cdecl Live_OnNewStatsFromServer(unsigned __int8 *compressedblob, unsigned int blobsize, blobtype_t blobtype)
      // *reinterpret_cast<unsigned long*>(0x0098D501) = 40548; void __cdecl Live_OnNewStatsFromServer(unsigned __int8 *compressedblob, unsigned int blobsize, blobtype_t blobtype)
      // *reinterpret_cast<unsigned long*>(0x0098D51D) = 40548; void __cdecl Live_OnNewStatsFromServer(unsigned __int8 *compressedblob, unsigned int blobsize, blobtype_t blobtype)
    }

    *reinterpret_cast<unsigned long*>(0x0098DB6A) = reinterpret_cast<unsigned long>(&s_temp_global_stats_buffer); // void __cdecl LiveStorage_GetGlobalBlobSuccess(const int controllerIndex, void *data)
    *reinterpret_cast<unsigned long*>(0x0098DABB) = reinterpret_cast<unsigned long>(&s_temp_global_stats_buffer); // TaskRecord *__cdecl LiveStorage_ReadPlayerGlobalBlob()
    *reinterpret_cast<unsigned long*>(0x009821EB) = reinterpret_cast<unsigned long>(&s_temp_global_stats_buffer); // void __cdecl LiveStorage_ReadPlayerStatsSuccessful(const int controllerIndex)
    *reinterpret_cast<unsigned long*>(0x0075746C) = reinterpret_cast<unsigned long>(&s_playlist_string_buffer);   // char *__cdecl Playlist_Strdup_Newline(const char *src)
    *reinterpret_cast<unsigned long*>(0x0075737C) = reinterpret_cast<unsigned long>(&s_playlist_string_buffer);   // char *__cdecl Playlist_Strdup(const char *src)
    *reinterpret_cast<unsigned long*>(0x00757386) = s_playlist_string_buffer_size;                                // char *__cdecl Playlist_Strdup(const char *src)
    *reinterpret_cast<unsigned long*>(0x007573B5) = s_playlist_string_buffer_size;                                // char *__cdecl Playlist_Strdup(const char *src)
    *reinterpret_cast<unsigned long*>(0x00757476) = s_playlist_string_buffer_size;                                // char *__cdecl Playlist_Strdup_Newline(const char *src)
    *reinterpret_cast<unsigned long*>(0x007574A5) = s_playlist_string_buffer_size;                                // char *__cdecl Playlist_Strdup_Newline(const char *src)
    *reinterpret_cast<const char**>(0x0098759A) = "online_tu14_mp_";                                                     // TaskRecord* __cdecl LiveStorage_FetchOnlineWAD(const int controllerIndex)
    *reinterpret_cast<const char**>(0x00987744) = "online_tu14_mp_";                                                     // int __cdecl LiveStorage_FetchOnlineWADNotFound()
    *reinterpret_cast<int*>(0x005A16A0) = 0x845;                                                                         // void __cdecl dwFindSessionsPagedSuccess(TaskRecord *task)
    *reinterpret_cast<int*>(0x0056B418) = 0x845;                                                                         // void __cdecl CL_CACValidate_Frame()
    *reinterpret_cast<int*>(0x005A178B) = 0x845;                                                                         // void __cdecl dwFindSessionsPagedSuccess(TaskRecord *task)
    *reinterpret_cast<int*>(0x0097291C) = 0x845;                                                                         // void __cdecl Live_FindSessionsStart(bool reset, int servertype)
    *reinterpret_cast<const char**>(0x0059E83E) = "cod7-steam-auth.live.demonware.net";                                  // void __cdecl DW_DedicatedLogonComplete(int controllerIndex)
    *reinterpret_cast<const char**>(0x0059EE78) = "cod7-steam-auth.live.demonware.net";                                  // void __cdecl dwLogOnComplete()

    DetourFunction(reinterpret_cast<unsigned char*>(0x009801D0), reinterpret_cast<unsigned char*>(&LiveStorage_GetStatsBufferSize));
    DetourFunction(reinterpret_cast<unsigned char*>(0x0097FF20), reinterpret_cast<unsigned char*>(&LiveStorage_GetPersStatsBuffer));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00986950), reinterpret_cast<unsigned char*>(&LiveStorage_ClearPlayerStats));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00980200), reinterpret_cast<unsigned char*>(&LiveStorage_SetStatsChecksumValid));
    DetourFunction(reinterpret_cast<unsigned char*>(0x009801E0), reinterpret_cast<unsigned char*>(&LiveStorage_GetStatsChecksumValid));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00980420), reinterpret_cast<unsigned char*>(&LiveStorage_SetStatsDDLValidated));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00980540), reinterpret_cast<unsigned char*>(&LiveStorage_SetStatsFetched));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00982440), reinterpret_cast<unsigned char*>(&LiveStorage_ReadCommonStats));
    DetourFunction(reinterpret_cast<unsigned char*>(0x0097FF00), reinterpret_cast<unsigned char*>(&LiveStorage_GetStatsBuffer));
    DetourFunction(reinterpret_cast<unsigned char*>(0x009804A0), reinterpret_cast<unsigned char*>(&LiveStorage_DoWeHaveStats));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00980400), reinterpret_cast<unsigned char*>(&LiveStorage_AreStatsDDLValidated));
    DetourFunction(reinterpret_cast<unsigned char*>(0x009804C0), reinterpret_cast<unsigned char*>(&LiveStorage_DoWeHaveCurrentStats));
    DetourFunction(reinterpret_cast<unsigned char*>(0x00568470), reinterpret_cast<unsigned char*>(&CL_ServerInfoPacket));
  }

  auto steam_api = LoadLibraryA("steam_api.dll");
  auto steam_api_init = GetProcAddress(steam_api, "SteamAPI_Init");
  auto steamapi_appid = std::ofstream("steam_appid.txt"); steamapi_appid << "42710" << std::endl;

  if (!steam_api_init())
  {
    MessageBoxA(nullptr, "Steam must be running to play this game (SteamAPI_Init() failed).", "OpenBO1 - Fatal Error", MB_ICONERROR);
    std::quick_exit(EXIT_FAILURE);
  }
}
