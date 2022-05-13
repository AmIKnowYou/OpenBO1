//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_Project_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"UI_Project_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_AssetCache() -> void
{
  return Zynamic::Forward<void ()>(L"UI_Project_AssetCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_Refresh(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_Project_Refresh")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_Shutdown(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_Project_Shutdown")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateListboxPos_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_UpdateListboxPos_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeyClearStates_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_KeyClearStates_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetMap(const char* mapname, const char* gametype) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"UI_SetMap")(mapname, gametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawLineGraphSegment(int contextIndex, float* p1, float* p2, struct rectDef_s* graphRect) -> void
{
  return Zynamic::Forward<void (int, float*, float*, struct rectDef_s*)>(L"UI_DrawLineGraphSegment")(contextIndex, p1, p2, graphRect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawBlurMaterial(int contextIndex, struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*)>(L"UI_DrawBlurMaterial")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordPieChart(int contextIndex, struct rectDef_s* rect, float* color, const char* dvarName) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*, const char*)>(L"UI_DrawCombatRecordPieChart")(contextIndex, rect, color, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordLineGraph(int contextIndex, struct rectDef_s* rect, float* color, const char* dvarName) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*, const char*)>(L"UI_DrawCombatRecordLineGraph")(contextIndex, rect, color, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordHistogram(int contextIndex, struct rectDef_s* rect, float* color, const char* dvarName, float* samples) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*, const char*, float*)>(L"UI_DrawCombatRecordHistogram")(contextIndex, rect, color, dvarName, samples);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordBarGraph(int contextIndex, struct rectDef_s* rect, struct rectDef_s* parentRect, float* color, const char* dvarName) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, struct rectDef_s*, float*, const char*)>(L"UI_DrawCombatRecordBarGraph")(contextIndex, rect, parentRect, color, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordHorizontalBarGraph(const int localClientNum, int contextIndex, struct rectDef_s* rect, struct rectDef_s* parentRect, float* color, const char* dvarName) -> void
{
  return Zynamic::Forward<void (const int, int, struct rectDef_s*, struct rectDef_s*, float*, const char*)>(L"UI_DrawCombatRecordHorizontalBarGraph")(localClientNum, contextIndex, rect, parentRect, color, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordHitLocHeatMap(int contextIndex, struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*)>(L"UI_DrawCombatRecordHitLocHeatMap")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlaylistName(const int localClientNum, const int contextIndex, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style, float text_x, float text_y, int textAlignMode) -> void
{
  return Zynamic::Forward<void (const int, const int, struct rectDef_s*, struct Font_s*, float*, float, int, float, float, int)>(L"UI_DrawPlaylistName")(localClientNum, contextIndex, rect, font, color, textScale, style, text_x, text_y, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCategoryName(const int localClientNum, const int contextIndex, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style, float text_x, float text_y, int textAlignMode) -> void
{
  return Zynamic::Forward<void (const int, const int, struct rectDef_s*, struct Font_s*, float*, float, int, float, float, int)>(L"UI_DrawCategoryName")(localClientNum, contextIndex, rect, font, color, textScale, style, text_x, text_y, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeOnMapName(char* outputString, const char* inputMapName, const char* inputGameType) -> void
{
  return Zynamic::Forward<void (char*, const char*, const char*)>(L"UI_GetGameTypeOnMapName")(outputString, inputMapName, inputGameType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapName(const char* inputMapName, bool returnStringRef) -> const char*
{
  return Zynamic::Forward<const char* (const char*, bool)>(L"UI_GetMapName")(inputMapName, returnStringRef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeName(const char* inputGameType, bool returnStringRef) -> const char*
{
  return Zynamic::Forward<const char* (const char*, bool)>(L"UI_GetGameTypeName")(inputGameType, returnStringRef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetOverlayMapNameFromIndex(int mapIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_GetOverlayMapNameFromIndex")(mapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawGameTypeOnMapName(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"UI_DrawGameTypeOnMapName")(localClientNum, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWagerTier(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style, float text_x, float text_y, int textAlignMode) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float*, float, int, float, float, int)>(L"UI_DrawWagerTier")(localClientNum, rect, font, color, textScale, style, text_x, text_y, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetOffsetForTextureCoords(unsigned int xPos, unsigned int yPos, struct GfxImage* img, unsigned int bytesPerPixel) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int, struct GfxImage*, unsigned int)>(L"UI_GetOffsetForTextureCoords")(xPos, yPos, img, bytesPerPixel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GenerateHeatMapTextureInternal(struct GfxImage* img, unsigned char* heatmap, int heatmapSize, unsigned __int64 xuid, const struct dvar_s* dvarColor) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned char*, int, unsigned __int64, const struct dvar_s*)>(L"UI_GenerateHeatMapTextureInternal")(img, heatmap, heatmapSize, xuid, dvarColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GenerateHeatMapTextureCallback(void* param) -> void
{
  return Zynamic::Forward<void (void*)>(L"UI_GenerateHeatMapTextureCallback")(param);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GenerateHeatMapTexture(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_GenerateHeatMapTexture")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawHeatMap(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawHeatMap")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordLineGraphGameTypes(int contextIndex, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"UI_DrawCombatRecordLineGraphGameTypes")(contextIndex, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCombatRecordLineGraphValues(int contextIndex, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"UI_DrawCombatRecordLineGraphValues")(contextIndex, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawAttributeBar(const int localClientNum, int contextIndex, struct itemDef_s* item, struct rectDef_s* rect, const char* dvarName) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct rectDef_s*, const char*)>(L"UI_DrawAttributeBar")(localClientNum, contextIndex, item, rect, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawStatsMilestonesFeederProgressBar(int controllerIndex, int contextIndex, const struct rectDef_s* rect, int index, int type) -> void
{
  return Zynamic::Forward<void (int, int, const struct rectDef_s*, int, int)>(L"UI_DrawStatsMilestonesFeederProgressBar")(controllerIndex, contextIndex, rect, index, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawReticlePreview(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*)>(L"UI_DrawReticlePreview")(localClientNum, contextIndex, item, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawLensPreview(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*)>(L"UI_DrawLensPreview")(localClientNum, contextIndex, item, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_OwnerDraw(int localClientNum, struct itemDef_s* item, float x, float y, float w, float h, int horzAlign, int vertAlign, int ownerDraw, int ownerDrawFlags, float* color, struct Material* material, struct rectDef_s parentRect, const char* dvarName) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, float, float, float, float, int, int, int, int, float*, struct Material*, struct rectDef_s, const char*)>(L"UI_Project_OwnerDraw")(localClientNum, item, x, y, w, h, horzAlign, vertAlign, ownerDraw, ownerDrawFlags, color, material, parentRect, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_OwnerDrawText(const int localClientNum, int contextIndex, struct itemDef_s* item, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct rectDef_s parentRect, int textAlignMode, const char* text) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, float, float, float, float, int, int, float, float, int, int, int, struct Font_s*, float, float*, struct Material*, int, struct rectDef_s, int, const char*)>(L"UI_Project_OwnerDrawText")(localClientNum, contextIndex, item, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, ownerDrawFlags, align, font, scale, color, material, textStyle, parentRect, textAlignMode, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_StartListenServer(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_RunMenuScript_StartListenServer")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_StartServer(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_RunMenuScript_StartServer")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_ResetServerSettings(int contextIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_RunMenuScript_ResetServerSettings")(contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_WagerWarning(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_RunMenuScript_WagerWarning")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_JoinServer(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_RunMenuScript_JoinServer")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_RefreshServer(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_RunMenuScript_RefreshServer")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_CreateFavorites(const int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (const int, int)>(L"UI_RunMenuScript_CreateFavorites")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript_CreateFavoriteInGame(const int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (const int, int)>(L"UI_RunMenuScript_CreateFavoriteInGame")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_RunMenuScript(int localClientNum, int contextIndex, const char* name, const char** args, const char* actualScript) -> void
{
  return Zynamic::Forward<void (int, int, const char*, const char**, const char*)>(L"UI_Project_RunMenuScript")(localClientNum, contextIndex, name, args, actualScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_InitOnceForAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"UI_Project_InitOnceForAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetActiveMenu(int localClientNum, int menu) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_SetActiveMenu")(localClientNum, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_TranslateIntegerToOrdinal(int integer) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_TranslateIntegerToOrdinal")(integer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Popup(int localClientNum, const char* menu) -> int
{
  return Zynamic::Forward<int (int, const char*)>(L"UI_Popup")(localClientNum, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShouldDrawCrosshair() -> bool
{
  return Zynamic::Forward<bool ()>(L"UI_ShouldDrawCrosshair")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeDisplayNameCaps(const char* pszGameType) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_GetGameTypeDisplayNameCaps")(pszGameType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapDisplayNameCaps(const char* pszMap) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_GetMapDisplayNameCaps")(pszMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawConnectScreen(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_DrawConnectScreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
