//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_GetInfo(int contextIndex) -> struct uiInfo_s*
{
  return Zynamic::Forward<struct uiInfo_s* (int)>(L"UI_UIContext_GetInfo")(contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetInfo(int localClientNum) -> struct uiInfo_s*
{
  return Zynamic::Forward<struct uiInfo_s* (int)>(L"UI_GetInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_GetLocalVarsContext(int contextIndex) -> struct UILocalVarContext*
{
  return Zynamic::Forward<struct UILocalVarContext* (int)>(L"UI_UIContext_GetLocalVarsContext")(contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMonthAbbrev(int month) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_GetMonthAbbrev")(month);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetServerFilter(int filter) -> const struct serverFilter_s
{
  return Zynamic::Forward<const struct serverFilter_s (int)>(L"UI_GetServerFilter")(filter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_main() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_ui_main")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeysBypassMenu(const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"UI_KeysBypassMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AssetCache() -> void
{
  return Zynamic::Forward<void ()>(L"UI_AssetCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMenuBuffer_LoadObj(const char* filename) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"GetMenuBuffer_LoadObj")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMenuBuffer_FastFile(const char* filename) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"GetMenuBuffer_FastFile")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMenuBuffer(const char* filename) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"UI_GetMenuBuffer")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawBuildNumber(const int contextIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"UI_DrawBuildNumber")(contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawSides(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* color) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, const float*)>(L"UI_DrawSides")(scrPlace, x, y, w, h, horzAlign, vertAlign, size, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTopBottom(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* color) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, const float*)>(L"UI_DrawTopBottom")(scrPlace, x, y, w, h, horzAlign, vertAlign, size, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawRect(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float size, const float* color) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, const float*)>(L"UI_DrawRect")(scrPlace, x, y, width, height, horzAlign, vertAlign, size, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawHighlightRect(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* hiColor, const float* loColor) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, const float*, const float*)>(L"UI_DrawHighlightRect")(scrPlace, x, y, w, h, horzAlign, vertAlign, size, hiColor, loColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_TextWidth(const char* text, int maxChars, struct Font_s* font, float scale) -> int
{
  return Zynamic::Forward<int (const char*, int, struct Font_s*, float)>(L"UI_TextWidth")(text, maxChars, font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_TextHeight(struct Font_s* font, float scale) -> int
{
  return Zynamic::Forward<int (struct Font_s*, float)>(L"UI_TextHeight")(font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawText(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, const float*, int)>(L"UI_DrawText")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextRotated(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style, float rotation) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, const float*, int, float)>(L"UI_DrawTextRotated")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style, rotation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextWithGlowW(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, float w, int horzAlign, int vertAlign, float scale, const float* color, int style, const float* glowColor, bool subtitle, bool cinematic) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, float, int, int, float, const float*, int, const float*, bool, bool)>(L"UI_DrawTextWithGlowW")(scrPlace, text, maxChars, font, x, y, w, horzAlign, vertAlign, scale, color, style, glowColor, subtitle, cinematic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextWithGlow(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style, const float* glowColor, bool subtitle, bool cinematic) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, const float*, int, const float*, bool, bool)>(L"UI_DrawTextWithGlow")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style, glowColor, subtitle, cinematic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextNoSnap(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, const float*, int)>(L"UI_DrawTextNoSnap")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextWithCursor(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style, int cursorPos, char cursor) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, int, struct Font_s*, float, float, int, int, float, const float*, int, int, char)>(L"UI_DrawTextWithCursor")(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style, cursorPos, cursor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetFontHandleDefault(float scale) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (float)>(L"UI_GetFontHandleDefault")(scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetFontHandle(const struct ScreenPlacement* scrPlace, int fontEnum, float scale) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const struct ScreenPlacement*, int, float)>(L"UI_GetFontHandle")(scrPlace, fontEnum, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateTime(int localClientNum, int realtime) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_UpdateTime")(localClientNum, realtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShouldDrawBuildNumber(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_ShouldDrawBuildNumber")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShouldUpdateFriends() -> bool
{
  return Zynamic::Forward<bool ()>(L"UI_ShouldUpdateFriends")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Refresh(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_Refresh")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Shutdown(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_Shutdown")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_ScriptMenuInternal(const char* pszMenu, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"Load_ScriptMenuInternal")(pszMenu, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_ScriptMenu(int localClientNum, const char* pszMenu, int imageTrack) -> int
{
  return Zynamic::Forward<int (int, const char*, int)>(L"Load_ScriptMenu")(localClientNum, pszMenu, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapDisplayName(const char* pszMap) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_GetMapDisplayName")(pszMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapDisplayNameFromPartialLoadNameMatch(const char* mapName, int* mapLoadNameLen) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int*)>(L"UI_GetMapDisplayNameFromPartialLoadNameMatch")(mapName, mapLoadNameLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeDisplayName(const char* pszGameType) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_GetGameTypeDisplayName")(pszGameType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeDisplayShortName(const char* pszGameType) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_GetGameTypeDisplayShortName")(pszGameType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Update(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"UI_Update")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_VerifyLanguage() -> void
{
  return Zynamic::Forward<void ()>(L"UI_VerifyLanguage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetOpenOrCloseMenuOnDvarArgs(const char** args, const char* cmd, char* dvarName, int dvarNameLen, char* testValue, int testValueLen, char* menuName, int menuNameLen) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, char*, int, char*, int, char*, int)>(L"UI_GetOpenOrCloseMenuOnDvarArgs")(args, cmd, dvarName, dvarNameLen, testValue, testValueLen, menuName, menuNameLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DvarValueTest(const char* cmd, const char* dvarName, const char* testValue, bool wantMatch) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, const char*, bool)>(L"UI_DvarValueTest")(cmd, dvarName, testValue, wantMatch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenuOnDvar(int localClientNum, struct uiInfo_s* uiInfo, const char* cmd, const char* menuName, const char* dvarName, const char* testValue) -> void
{
  return Zynamic::Forward<void (int, struct uiInfo_s*, const char*, const char*, const char*, const char*)>(L"UI_OpenMenuOnDvar")(localClientNum, uiInfo, cmd, menuName, dvarName, testValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenuOnDvar(const int localClientNum, struct uiInfo_s* uiInfo, const char* cmd, const char* menuName, const char* dvarName, const char* testValue) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*, const char*, const char*, const char*, const char*)>(L"UI_CloseMenuOnDvar")(localClientNum, uiInfo, cmd, menuName, dvarName, testValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateDisplayServers(const int localClientNum, struct uiInfo_s* uiInfo) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*)>(L"UI_UpdateDisplayServers")(localClientNum, uiInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetClientNumForPlayerListNum(const int playerListIndex) -> int
{
  return Zynamic::Forward<int (const int)>(L"UI_GetClientNumForPlayerListNum")(playerListIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript(int localClientNum, int contextIndex, const char** args, const char* actualScript) -> void
{
  return Zynamic::Forward<void (int, int, const char**, const char*)>(L"UI_RunMenuScript")(localClientNum, contextIndex, args, actualScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Pause(int localClientNum, int b) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_Pause")(localClientNum, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MouseEvent(int localClientNum, int x, int y) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"UI_MouseEvent")(localClientNum, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetActiveMenu(int localClientNum) -> enum uiMenuCommand_t
{
  return Zynamic::Forward<enum uiMenuCommand_t (int)>(L"UI_GetActiveMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetTopActiveMenuName(int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_GetTopActiveMenuName")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_IsFullscreen(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"UI_IsFullscreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetBlurRadius(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"UI_GetBlurRadius")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SafeTranslateString(const char* reference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_SafeTranslateString")(reference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnyMenuVisible(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"UI_AnyMenuVisible")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionString(const char* sourceString, const char* replaceString) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*)>(L"UI_ReplaceConversionString")(sourceString, replaceString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionStrings(const char* sourceString, int numStrings, const char** replaceStrings) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int, const char**)>(L"UI_ReplaceConversionStrings")(sourceString, numStrings, replaceStrings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionInt(const char* sourceString, int replaceInt) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int)>(L"UI_ReplaceConversionInt")(sourceString, replaceInt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionInts(const char* sourceString, int numInts, int* replaceInts) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int, int*)>(L"UI_ReplaceConversionInts")(sourceString, numInts, replaceInts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FilterStringForButtonAnimation(char* str, unsigned int strMaxSize) -> void
{
  return Zynamic::Forward<void (char*, unsigned int)>(L"UI_FilterStringForButtonAnimation")(str, strMaxSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversions(const char* sourceString, struct ConversionArguments* arguments, char* outputString, int outputStringSize) -> void
{
  return Zynamic::Forward<void (const char*, struct ConversionArguments*, char*, int)>(L"UI_ReplaceConversions")(sourceString, arguments, outputString, outputStringSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseAll(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_CloseAll")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseFocusedMenu(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_CloseFocusedMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_IsMenuOpenAndVisible(const int localClientNum, const char* menuName) -> bool
{
  return Zynamic::Forward<bool (const int, const char*)>(L"Menu_IsMenuOpenAndVisible")(localClientNum, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PopupScriptMenu(int localClientNum, const char* menuName, bool useMouse) -> int
{
  return Zynamic::Forward<int (int, const char*, bool)>(L"UI_PopupScriptMenu")(localClientNum, menuName, useMouse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClosePopupScriptMenu(int localClientNum, bool allowResponse) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"UI_ClosePopupScriptMenu")(localClientNum, allowResponse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AllowScriptMenuResponse(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_AllowScriptMenuResponse")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseInGameMenu(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_CloseInGameMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdatePendingPings(struct uiInfo_s* uiInfo) -> void
{
  return Zynamic::Forward<void (struct uiInfo_s*)>(L"UI_UpdatePendingPings")(uiInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CheckExecKey(int localClientNum, int key) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_CheckExecKey")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawWidth(int ownerDraw, struct Font_s* font, float scale) -> int
{
  return Zynamic::Forward<int (int, struct Font_s*, float)>(L"UI_OwnerDrawWidth")(ownerDraw, font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawKeyBindStatus(int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawKeyBindStatus")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawRecordLevel(int contextIndex, struct rectDef_s* rect) -> bool
{
  return Zynamic::Forward<bool (int, struct rectDef_s*)>(L"UI_DrawRecordLevel")(contextIndex, rect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawLocalTalking(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawLocalTalking")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetTalkerClientNum(int localClientNum, int contextIndex, const int num) -> int
{
  return Zynamic::Forward<int (int, int, const int)>(L"UI_GetTalkerClientNum")(localClientNum, contextIndex, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTalkerNum(int localClientNum, int contextIndex, const int num, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (int, int, const int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"UI_DrawTalkerNum")(localClientNum, contextIndex, num, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawReservedSlots(const int contextIndex, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"UI_DrawReservedSlots")(contextIndex, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetTextAlignAdj(const int alignment, float width, float textWidth) -> float
{
  return Zynamic::Forward<float (const int, float, float)>(L"UI_GetTextAlignAdj")(alignment, width, textWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawLoggedInUser(int localClientNum, int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawLoggedInUser")(localClientNum, contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawLoggedInUserName(int localClientNum, int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawLoggedInUserName")(localClientNum, contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetXpLockDescription(const int localClientNum, const int playlistId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"GetXpLockDescription")(localClientNum, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPLevelLockDescription(const int localClientNum, const int playlistId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"GetPLevelLockDescription")(localClientNum, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlaylistDescription(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style, int textAlignment) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float*, float, int, int)>(L"UI_DrawPlaylistDescription")(localClientNum, rect, font, color, textScale, style, textAlignment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlaylistIcon(const int localClientNum, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, const struct rectDef_s*, const float*)>(L"UI_DrawPlaylistIcon")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCategoryIcon(const int localClientNum, struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, float*)>(L"UI_DrawCategoryIcon")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawScrollingText(const int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int style) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawScrollingText")(contextIndex, rect, font, scale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawScrollingTextCategory(const int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int style) -> void
{
  return Zynamic::Forward<void (const int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawScrollingTextCategory")(contextIndex, rect, font, scale, color, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawControllerIcon(const int localClientNum, const int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, const int, const struct rectDef_s*, const float*)>(L"UI_DrawControllerIcon")(localClientNum, contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPrettyLine(int contextIndex, float* p1, float* p2, float lineWidth, int horzAlign, int vertAlign, float* color) -> void
{
  return Zynamic::Forward<void (int, float*, float*, float, int, int, float*)>(L"UI_DrawPrettyLine")(contextIndex, p1, p2, lineWidth, horzAlign, vertAlign, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PrettyLineOwnerdraw(int contextIndex, struct rectDef_s* rect, float lineWidth, float* color) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float, float*)>(L"UI_PrettyLineOwnerdraw")(contextIndex, rect, lineWidth, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDraw(int localClientNum, struct itemDef_s* item, float x, float y, float w, float h, int horzAlign, int vertAlign, int ownerDraw, int ownerDrawFlags, float* color, struct Material* material, struct rectDef_s parentRect, const char* dvarName) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, float, float, float, float, int, int, int, int, float*, struct Material*, struct rectDef_s, const char*)>(L"UI_OwnerDraw")(localClientNum, item, x, y, w, h, horzAlign, vertAlign, ownerDraw, ownerDrawFlags, color, material, parentRect, dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawText(const int localClientNum, int contextIndex, struct itemDef_s* item, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct rectDef_s parentRect, int textAlignMode, const char* text) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, float, float, float, float, int, int, float, float, int, int, int, struct Font_s*, float, float*, struct Material*, int, struct rectDef_s, int, const char*)>(L"UI_OwnerDrawText")(localClientNum, contextIndex, item, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, ownerDrawFlags, align, font, scale, color, material, textStyle, parentRect, textAlignMode, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawVisible(int flags) -> int
{
  return Zynamic::Forward<int (int)>(L"UI_OwnerDrawVisible")(flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawHandleKey(int ownerDraw, int flags, int key) -> int
{
  return Zynamic::Forward<int (int, int, int)>(L"UI_OwnerDrawHandleKey")(ownerDraw, flags, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_InitUIInfos() -> void
{
  return Zynamic::Forward<void ()>(L"UI_InitUIInfos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_InitOnceForAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"UI_InitOnceForAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Init(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_Init")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeyEvent_CancelButtonPressed(struct UiContext* dc, struct menuDef_t* menu, int key, int down) -> bool
{
  return Zynamic::Forward<bool (struct UiContext*, struct menuDef_t*, int, int)>(L"UI_KeyEvent_CancelButtonPressed")(dc, menu, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeyEvent_AutoJoinButtonPressed(int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int key, int down) -> bool
{
  return Zynamic::Forward<bool (int, struct UiContext*, struct menuDef_t*, int, int)>(L"UI_KeyEvent_AutoJoinButtonPressed")(localClientNum, dc, menu, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeyEvent(int localClientNum, int key, int down) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"UI_KeyEvent")(localClientNum, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseAllMenus(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_CloseAllMenus")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_OpenMenu(int localClientNum, int contextIndex, const char* menuName) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"UI_UIContext_OpenMenu")(localClientNum, contextIndex, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_CloseMenu(const int localClientNum, int contextIndex, const char* menuName) -> void
{
  return Zynamic::Forward<void (const int, int, const char*)>(L"UI_UIContext_CloseMenu")(localClientNum, contextIndex, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_CloseMenuImmediate(const int localClientNum, int contextIndex, const char* menuName) -> void
{
  return Zynamic::Forward<void (const int, int, const char*)>(L"UI_UIContext_CloseMenuImmediate")(localClientNum, contextIndex, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UIContext_OpenToastPopup(int contextIndex, const char* toastPopupIconName, const char* toastPopupTitle, const char* toastPopupDesc, int toastPopupDuration) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*, const char*, int)>(L"UI_UIContext_OpenToastPopup")(contextIndex, toastPopupIconName, toastPopupTitle, toastPopupDesc, toastPopupDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenu(int localClientNum, const char* menuName) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"UI_OpenMenu")(localClientNum, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenu(int localClientNum, const char* menuName) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"UI_CloseMenu")(localClientNum, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenuImmediate(int localClientNum, const char* menuName) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"UI_CloseMenuImmediate")(localClientNum, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenToastPopup(int localClientNum, const char* toastPopupIconName, const char* toastPopupTitle, const char* toastPopupDesc, int toastPopupDuration) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*, const char*, int)>(L"UI_OpenToastPopup")(localClientNum, toastPopupIconName, toastPopupTitle, toastPopupDesc, toastPopupDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawMapLevelshot(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_DrawMapLevelshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadIngameMenus(int contextIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_LoadIngameMenus")(contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ToUpper_CodePage_1250(unsigned char character) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"UI_ToUpper_CodePage_1250")(character);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ToUpper_CodePage_1251(unsigned char character) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"UI_ToUpper_CodePage_1251")(character);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ToUpper_CodePage_1252(unsigned char character) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"UI_ToUpper_CodePage_1252")(character);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CharToUpper(unsigned char character) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"UI_CharToUpper")(character);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ToUpper(const char* sourceString) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_ToUpper")(sourceString);
}

#endif // __UNIMPLEMENTED__
