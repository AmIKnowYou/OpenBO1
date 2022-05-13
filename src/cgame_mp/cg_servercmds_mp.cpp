//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_ParseServerInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseServerInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseCodInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseCodInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseCullDist(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseCullDist")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseTimeScale(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseTimeScale")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParsePlayerInfos(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParsePlayerInfos")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseGameEndTime(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseGameEndTime")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseFog(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ParseFog")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrecacheScriptMenu(int localClientNum, int configStringIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_PrecacheScriptMenu")(localClientNum, configStringIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterServerMaterial(int configStringIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_RegisterServerMaterial")(configStringIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetConfigValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SetConfigValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVoteString(int localClientNum, const char* rawVoteString) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CG_UpdateVoteString")(localClientNum, rawVoteString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseClientSystemStateChange(int localClientNum, int sysIndex, const char* pState) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"CG_ParseClientSystemStateChange")(localClientNum, sysIndex, pState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseAirsupport(int localClientNum, float x, float y, float z, int yaw, char* type, char* teamFaction, char* team, int owner, char* exitType, int serverTime, int height) -> void
{
  return Zynamic::Forward<void (int, float, float, float, int, char*, char*, char*, int, char*, int, int)>(L"CG_ParseAirsupport")(localClientNum, x, y, z, yaw, type, teamFaction, team, owner, exitType, serverTime, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ConfigStringModified(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ConfigStringModified")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddToTeamChat(int localClientNum, const char* str) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CG_AddToTeamChat")(localClientNum, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearEntityFxHandles(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearEntityFxHandles")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearGenericFilter(struct cg_s* gameglob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_ClearGenericFilter")(gameglob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MapRestart(int localClientNum, int savepersist) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_MapRestart")(localClientNum, savepersist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OpenScriptMenu(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_OpenScriptMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckOpenWaitingScriptMenu(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckOpenWaitingScriptMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CloseScriptMenu(int localClientNum, bool allowResponse) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CG_CloseScriptMenu")(localClientNum, allowResponse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MenuShowNotify(int localClientNum, int menuToShow) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_MenuShowNotify")(localClientNum, menuToShow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RemoveChatEscapeChar(char* text) -> void
{
  return Zynamic::Forward<void (char*)>(L"CG_RemoveChatEscapeChar")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetTeamScore(int localClientNum, int team, int score) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"CG_SetTeamScore")(localClientNum, team, score);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalSound(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"LocalSound")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalSoundStop(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"LocalSoundStop")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetObjectiveText(struct cg_s* cgameGlob, const char* text) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const char*)>(L"CG_SetObjectiveText")(cgameGlob, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetDrawHud(struct cg_s* cgameGlob, int value) -> void
{
  return Zynamic::Forward<void (struct cg_s*, int)>(L"CG_SetDrawHud")(cgameGlob, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetScriptMainMenu(struct cg_s* cgameGlob, const char* text) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const char*)>(L"CG_SetScriptMainMenu")(cgameGlob, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetClientDvarFromServer(struct cg_s* cgameGlob, const char* dvarname, const char* value) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const char*, const char*)>(L"CG_SetClientDvarFromServer")(cgameGlob, dvarname, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BurnServerCommand(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_BurnServerCommand")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AnimateUI(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_AnimateUI")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ElectrifiedServerCommand(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ElectrifiedServerCommand")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WaterDropsServerCommand(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_WaterDropsServerCommand")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScrCamera(int localClientNum, int cmd) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ScrCamera")(localClientNum, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DeployServerCommand(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DeployServerCommand")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ServerCommand(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ServerCommand")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExecuteNewServerCommands(int localClientNum, int latestSequence) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ExecuteNewServerCommands")(localClientNum, latestSequence);
}

#endif // __UNIMPLEMENTED__
