//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_RegisterDvars_PC() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RegisterDvars_PC")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetNetSources(int source) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_GetNetSources")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SelectCurrentGameType() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SelectCurrentGameType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_IsMapActive(int mapIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_IsMapActive")(mapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SelectFirstActiveMap() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SelectFirstActiveMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetListIndexFromMapIndex(int testMapIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"UI_GetListIndexFromMapIndex")(testMapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SelectListIndexForMapIndex(int mapIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_SelectListIndexForMapIndex")(mapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MapCountByGameType() -> int
{
  return Zynamic::Forward<int ()>(L"UI_MapCountByGameType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SelectCurrentMap(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_SelectCurrentMap")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ValidGamePadButtonIcon(unsigned int letter) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"ValidGamePadButtonIcon")(letter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UseAltColorPalette(char* buffer) -> void
{
  return Zynamic::Forward<void (char*)>(L"UI_UseAltColorPalette")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RemoveServerFromDisplayList(int num) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_RemoveServerFromDisplayList")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SortServerStatusInfo(struct serverStatusInfo_s* info) -> void
{
  return Zynamic::Forward<void (struct serverStatusInfo_s*)>(L"UI_SortServerStatusInfo")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScoreBar_CompareScores(const void* sv1, const void* sv2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"ScoreBar_CompareScores")(sv1, sv2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SortServerStatusScoreBoardInfo(struct serverStatusInfo_s* info) -> void
{
  return Zynamic::Forward<void (struct serverStatusInfo_s*)>(L"UI_SortServerStatusScoreBoardInfo")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_IsServerStatusDvar(const char* dvarname) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"UI_IsServerStatusDvar")(dvarname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetServerStatusInfo(char* serverAddress, struct serverStatusInfo_s* info) -> int
{
  return Zynamic::Forward<int (char*, struct serverStatusInfo_s*)>(L"UI_GetServerStatusInfo")(serverAddress, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetServerStatusInfoScoreBoard(char* serverAddress, struct serverStatusInfo_s* info) -> int
{
  return Zynamic::Forward<int (char*, struct serverStatusInfo_s*)>(L"UI_GetServerStatusInfoScoreBoard")(serverAddress, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto stristr(char* str, char* charset) -> char*
{
  return Zynamic::Forward<char* (char*, char*)>(L"stristr")(str, charset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RefreshServers() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RefreshServers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BuildFindPlayerList() -> void
{
  return Zynamic::Forward<void ()>(L"UI_BuildFindPlayerList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SelectedMap(int index, int* actual) -> const char*
{
  return Zynamic::Forward<const char* (int, int*)>(L"UI_SelectedMap")(index, actual);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GameType_HandleKey(int flags, int key, int resetMap) -> int
{
  return Zynamic::Forward<int (int, int, int)>(L"UI_GameType_HandleKey")(flags, key, resetMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_NetGameType_HandleKey(int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_NetGameType_HandleKey")(flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_JoinGameType_HandleKey(int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_JoinGameType_HandleKey")(flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_JoinMod_HandleKey(int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_JoinMod_HandleKey")(flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_NetSource_UpdateDisplayList(int source) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_NetSource_UpdateDisplayList")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_NetSource_HandleKey(int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_NetSource_HandleKey")(flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_NetFilter_HandleKey(int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_NetFilter_HandleKey")(flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawGameType(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawGameType")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawNetGameType(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawNetGameType")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawJoinGameType(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawJoinGameType")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawJoinMod(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawJoinMod")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawNetFilter(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawNetFilter")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawNetSource(int contextIndex, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"UI_DrawNetSource")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetLevelShot(int index) -> struct Material*
{
  return Zynamic::Forward<struct Material* (int)>(L"UI_GetLevelShot")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawMapPreview(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawMapPreview")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LodMods_ShouldSkipMap(const char* dir) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"UI_LodMods_ShouldSkipMap")(dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMods() -> void
{
  return Zynamic::Forward<void ()>(L"UI_LoadMods")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AcceptFriend() -> void
{
  return Zynamic::Forward<void ()>(L"UI_AcceptFriend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DeclineFriend() -> void
{
  return Zynamic::Forward<void ()>(L"UI_DeclineFriend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AcceptInvite() -> void
{
  return Zynamic::Forward<void ()>(L"UI_AcceptInvite")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearMods() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ClearMods")();
}

#endif // __UNIMPLEMENTED__
