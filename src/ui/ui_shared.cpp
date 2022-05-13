//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Item_GetRectPlacementX(int alignX, float x0, float containerWidth, float selfWidth) -> float
{
  return Zynamic::Forward<float (int, float, float, float)>(L"Item_GetRectPlacementX")(alignX, x0, containerWidth, selfWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetTextPlacementX(int alignX, float x0, float containerWidth, float selfWidth) -> float
{
  return Zynamic::Forward<float (int, float, float, float)>(L"Item_GetTextPlacementX")(alignX, x0, containerWidth, selfWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetRectPlacementY(int alignY, float y0, float containerHeight, float selfHeight) -> float
{
  return Zynamic::Forward<float (int, float, float, float)>(L"Item_GetRectPlacementY")(alignY, y0, containerHeight, selfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetTextPlacementY(int alignY, float y0, float containerHeight, float selfHeight) -> float
{
  return Zynamic::Forward<float (int, float, float, float)>(L"Item_GetTextPlacementY")(alignY, y0, containerHeight, selfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Show(int contextIndex, struct itemDef_s* item, int bShow) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, int)>(L"Item_Show")(contextIndex, item, bShow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Fade(int contextIndex, struct itemDef_s* item, int fadeOut) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, int)>(L"Item_Fade")(contextIndex, item, fadeOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetColor(int contextIndex, struct itemDef_s* item, const char* name, float* color) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const char*, float*)>(L"Item_SetColor")(contextIndex, item, name, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Setup(struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (struct UiContext*)>(L"Menu_Setup")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpColor(float* a, float* b, float* c, float t) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float)>(L"LerpColor")(a, b, c, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Color_Parse(const char** p, float* c[0x4]) -> int
{
  return Zynamic::Forward<int (const char**, float*[0x4])>(L"Color_Parse")(p, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto String_Parse(const char** p, char* out, int len) -> int
{
  return Zynamic::Forward<int (const char**, char*, int)>(L"String_Parse")(p, out, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Command_Parse(const char** p, char* out, int len) -> int
{
  return Zynamic::Forward<int (const char**, char*, int)>(L"Command_Parse")(p, out, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Fade(int* flags, float* f, float clamp, int* nextTime, int offsetTime, int bFlags, float fadeAmount, float fadeInAmount, struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (int*, float*, float, int*, int, int, float, float, struct UiContext*)>(L"Fade")(flags, f, clamp, nextTime, offsetTime, bFlags, fadeAmount, fadeInAmount, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_Paint(int localClientNum, struct UiContext* dc, struct windowDef_t* w, float fadeAmount, float fadeInAmount, float fadeClamp, float fadeCycle, int itemType, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct windowDef_t*, float, float, float, float, int, struct itemDef_s*)>(L"Window_Paint")(localClientNum, dc, w, fadeAmount, fadeInAmount, fadeClamp, fadeCycle, itemType, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_RunFocusScript(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_RunFocusScript")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_RunLeaveFocusScript(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_RunLeaveFocusScript")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ClearFocus(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (int, struct UiContext*, struct menuDef_t*)>(L"Menu_ClearFocus")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_LoseFocus(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (int, struct UiContext*, struct itemDef_s*)>(L"Item_LoseFocus")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsModal(struct itemDef_s* item) -> bool
{
  return Zynamic::Forward<bool (struct itemDef_s*)>(L"Item_IsModal")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SnapRectClientToMouse(struct UiContext* dc, struct itemDef_s* item, float x, float y) -> void
{
  return Zynamic::Forward<void (struct UiContext*, struct itemDef_s*, float, float)>(L"Item_SnapRectClientToMouse")(dc, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rect_ContainsPoint(int contextIndex, const struct rectDef_s* rect, float x, float y) -> int
{
  return Zynamic::Forward<int (int, const struct rectDef_s*, float, float)>(L"Rect_ContainsPoint")(contextIndex, rect, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ItemsMatchingGroup(struct menuDef_t* menu, const char* name) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, const char*)>(L"Menu_ItemsMatchingGroup")(menu, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetMatchingItemByNumber(struct menuDef_t* menu, int index, const char* name) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (struct menuDef_t*, int, const char*)>(L"Menu_GetMatchingItemByNumber")(menu, index, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetItemIndex(struct menuDef_t* menu, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, struct itemDef_s*)>(L"Menu_GetItemIndex")(menu, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetColor(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetColor")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetBackground(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetBackground")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FindItemByName(struct menuDef_t* menu, const char* p) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (struct menuDef_t*, const char*)>(L"Menu_FindItemByName")(menu, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FindFirstFocusableItemByName(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu, const char* p) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (const int, struct UiContext*, struct menuDef_t*, const char*)>(L"Menu_FindFirstFocusableItemByName")(localClientNum, dc, menu, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_FindStateByName(struct itemDef_s* item, const char* p) -> struct animParamsDef_t*
{
  return Zynamic::Forward<struct animParamsDef_t* (struct itemDef_s*, const char*)>(L"Item_FindStateByName")(item, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_CompleteAnimation(struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*)>(L"Item_CompleteAnimation")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_LerpAnimationParameters(const int localClientNum, int contextIndex, struct itemDef_s* item, float lerpValue) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, float)>(L"Item_LerpAnimationParameters")(localClientNum, contextIndex, item, lerpValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_UpdateAnimation(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_UpdateAnimation")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_AnimateToState(const int localClientNum, struct UiContext* dc, struct itemDef_s* item, struct animParamsDef_t* state, int milliseconds, bool sysTime) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*, struct animParamsDef_t*, int, bool)>(L"Item_AnimateToState")(localClientNum, dc, item, state, milliseconds, sysTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnimateItemInternal(const int localClientNum, struct UiContext* dc, const char* menuName, const char* itemName, const char* newStateName, int milliseconds, bool sysTime) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, const char*, const char*, const char*, int, bool)>(L"UI_AnimateItemInternal")(localClientNum, dc, menuName, itemName, newStateName, milliseconds, sysTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateContextItemInternal(struct UiContext* dc, const char* menuName, const char* itemName, float offsetX, float offsetY) -> void
{
  return Zynamic::Forward<void (struct UiContext*, const char*, const char*, float, float)>(L"UI_UpdateContextItemInternal")(dc, menuName, itemName, offsetX, offsetY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateContextItem(struct UiContext* dc, const char* menuName, const char* itemName, float offsetX, float offsetY) -> void
{
  return Zynamic::Forward<void (struct UiContext*, const char*, const char*, float, float)>(L"UI_UpdateContextItem")(dc, menuName, itemName, offsetX, offsetY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnimateItem(const int localClientNum, struct UiContext* dc, const char* menuName, const char* itemName, const char* newStateName, int milliseconds) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, const char*, const char*, const char*, int)>(L"UI_AnimateItem")(localClientNum, dc, menuName, itemName, newStateName, milliseconds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnimateItemSysTime(const int localClientNum, struct UiContext* dc, const char* menuName, const char* itemName, const char* newStateName, int milliseconds) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, const char*, const char*, const char*, int)>(L"UI_AnimateItemSysTime")(localClientNum, dc, menuName, itemName, newStateName, milliseconds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetShaderTime(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_SetShaderTime")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetItemColor(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetItemColor")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ShowItemByName(int contextIndex, struct menuDef_t* menu, const char* p, int bShow) -> void
{
  return Zynamic::Forward<void (int, struct menuDef_t*, const char*, int)>(L"Menu_ShowItemByName")(contextIndex, menu, p, bShow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FadeItemByName(int contextIndex, struct menuDef_t* menu, const char* p, int fadeOut) -> void
{
  return Zynamic::Forward<void (int, struct menuDef_t*, const char*, int)>(L"Menu_FadeItemByName")(contextIndex, menu, p, fadeOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_RemoveFromStack(const int localClientNum, struct UiContext* dc, struct menuDef_t* pMenu) -> int
{
  return Zynamic::Forward<int (const int, struct UiContext*, struct menuDef_t*)>(L"Menus_RemoveFromStack")(localClientNum, dc, pMenu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_AddToStack(const int localClientNum, struct UiContext* dc, struct menuDef_t* pMenu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menus_AddToStack")(localClientNum, dc, pMenu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_MenuIsInStack(struct UiContext* dc, struct menuDef_t* menu) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct menuDef_t*)>(L"Menus_MenuIsInStack")(dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_MenuInStackLocalClientNum(struct UiContext* dc, struct menuDef_t* menu) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct menuDef_t*)>(L"Menus_MenuInStackLocalClientNum")(dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_FindByName(const struct UiContext* dc, const char* p) -> struct menuDef_t*
{
  return Zynamic::Forward<struct menuDef_t* (const struct UiContext*, const char*)>(L"Menus_FindByName")(dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_HideByName(const struct UiContext* dc, const char* menuName) -> void
{
  return Zynamic::Forward<void (const struct UiContext*, const char*)>(L"Menus_HideByName")(dc, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_ShowByName(const struct UiContext* dc, const char* windowName) -> void
{
  return Zynamic::Forward<void (const struct UiContext*, const char*)>(L"Menus_ShowByName")(dc, windowName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_LoseFocusDueToOpen(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_LoseFocusDueToOpen")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_CallOnFocusDueToOpen(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_CallOnFocusDueToOpen")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GainFocusDueToClose(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_GainFocusDueToClose")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_RunCloseScript(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_RunCloseScript")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CompleteItemAnimations(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menus_CompleteItemAnimations")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_ClearFlagsOnClose(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menus_ClearFlagsOnClose")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_Close(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menus_Close")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseByName(const int localClientNum, struct UiContext* dc, const char* p) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, const char*)>(L"Menus_CloseByName")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseImmediateByName(const int localClientNum, struct UiContext* dc, const char* p) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, const char*)>(L"Menus_CloseImmediateByName")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_RemoveMenu(union XAssetHeader header) -> void
{
  return Zynamic::Forward<void (union XAssetHeader)>(L"Menus_RemoveMenu")(header);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DoesEventExist(struct itemDef_s* item, const char* eventName) -> bool
{
  return Zynamic::Forward<bool (struct itemDef_s*, const char*)>(L"Item_DoesEventExist")(item, eventName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_DoesEventExist(struct menuDef_t* menu, const char* eventName) -> bool
{
  return Zynamic::Forward<bool (struct menuDef_t*, const char*)>(L"Menus_DoesEventExist")(menu, eventName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_SetFocusToItem(int localClientNum, struct UiContext* dc, const char* menuName, const char* itemName) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, const char*, const char*)>(L"Menus_SetFocusToItem")(localClientNum, dc, menuName, itemName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseAll(const int localClientNum, struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*)>(L"Menus_CloseAll")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseAllBehindMain(const int localClientNum, struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*)>(L"Menus_CloseAllBehindMain")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearErrors() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ClearErrors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Show(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Show")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Hide(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Hide")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FadeIn(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_FadeIn")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FadeOut(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_FadeOut")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ShowMenu(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ShowMenu")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_HideMenu(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_HideMenu")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Open(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Open")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_OpenImmediate(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_OpenImmediate")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_OpenForGameType(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_OpenForGameType")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_CloseForGameType(const int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_CloseForGameType")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveMenuFromBlurStack(const int localClientNum, struct UiContext* dc, const char* menuName) -> bool
{
  return Zynamic::Forward<bool (const int, struct UiContext*, const char*)>(L"RemoveMenuFromBlurStack")(localClientNum, dc, menuName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ActivateBlur(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ActivateBlur")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_DeactivateBlur(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_DeactivateBlur")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBlurFocus(const int localClientNum, struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (const int, struct UiContext*)>(L"GetBlurFocus")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_OpParse(int* operand, const char** args) -> void
{
  return Zynamic::Forward<void (int*, const char**)>(L"Script_OpParse")(operand, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_IntParse(struct UiContext* dc, const char** args) -> int
{
  return Zynamic::Forward<int (struct UiContext*, const char**)>(L"Script_IntParse")(dc, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_TableLookupParse(struct UiContext* dc, const char** args) -> const char*
{
  return Zynamic::Forward<const char* (struct UiContext*, const char**)>(L"Script_TableLookupParse")(dc, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetDvarStringUsingTable(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetDvarStringUsingTable")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Close(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Close")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_CloseImmediate(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_CloseImmediate")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_InGameOpen(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_InGameOpen")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_InGameClose(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_InGameClose")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FocusFirstSelectableItem(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (int, struct UiContext*, struct menuDef_t*)>(L"Menu_FocusFirstSelectableItem")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FocusFirstInMenu(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_FocusFirstInMenu")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetFocus(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetFocus")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetFocusByDvar(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetFocusByDvar")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ChangeState(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ChangeState")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetDvar(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetDvar")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ResetDvar(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ResetDvar")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecKeyHandler(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecKeyHandler")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecHandler(int localClientNum, int controllerIndex, struct itemDef_s* item, const char** args, function* textCallback) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char**, function *)>(L"Script_ExecHandler")(localClientNum, controllerIndex, item, args, textCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecKeyPress(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecKeyPress")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_AddTextWrapper(int localClientNum, int controllerIndex, struct itemDef_s* __formal, const char* text) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*)>(L"Script_AddTextWrapper")(localClientNum, controllerIndex, __formal, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Exec(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Exec")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecNow(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecNow")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecDvar(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecDvar")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ConditionalExecHandler(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args, function* shouldExec, function* textCallback) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**, function *, function *)>(L"Script_ConditionalExecHandler")(localClientNum, dc, item, args, shouldExec, textCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ConditionalResponseHandler(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args, function* shouldRespond) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**, function *)>(L"Script_ConditionalResponseHandler")(localClientNum, dc, item, args, shouldRespond);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecIfStringsEqual(const char* dvarValue, const char* testValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"Script_ExecIfStringsEqual")(dvarValue, testValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecIfIntsEqual(const char* dvarValue, const char* testValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"Script_ExecIfIntsEqual")(dvarValue, testValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecIfFloatsEqual(const char* dvarValue, const char* testValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"Script_ExecIfFloatsEqual")(dvarValue, testValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecOnDvarStringValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecOnDvarStringValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecOnDvarIntValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecOnDvarIntValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecOnDvarFloatValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecOnDvarFloatValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecNowOnDvarStringValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecNowOnDvarStringValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecNowOnDvarIntValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecNowOnDvarIntValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ExecNowOnDvarFloatValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ExecNowOnDvarFloatValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_RespondOnDvarStringValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_RespondOnDvarStringValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_RespondOnDvarIntValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_RespondOnDvarIntValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_RespondOnDvarFloatValue(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_RespondOnDvarFloatValue")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ParseLocalVar(struct UiContext* dc, const char** args) -> const struct UILocalVar*
{
  return Zynamic::Forward<const struct UILocalVar* (struct UiContext*, const char**)>(L"Script_ParseLocalVar")(dc, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetLocalVarBool(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetLocalVarBool")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetLocalVarInt(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetLocalVarInt")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetLocalVarFloat(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetLocalVarFloat")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetLocalVarString(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetLocalVarString")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FeederTop(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_FeederTop")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FeederBottom(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_FeederBottom")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetDvarFromLocString(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetDvarFromLocString")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_Play(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_Play")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ScriptMenuResponse(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_ScriptMenuResponse")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_SetUIVisibilityBit(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char** args) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char**)>(L"Script_SetUIVisibilityBit")(localClientNum, dc, item, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsOutcomeAccepted(bool outcome, bool fireOnTrue) -> bool
{
  return Zynamic::Forward<bool (bool, bool)>(L"Item_IsOutcomeAccepted")(outcome, fireOnTrue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ArePrereqsSatisfied(struct GenericEventScript* eventScript, struct nestingStack_t* stack) -> bool
{
  return Zynamic::Forward<bool (struct GenericEventScript*, struct nestingStack_t*)>(L"Item_ArePrereqsSatisfied")(eventScript, stack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsConditionSatisfied(int localClientNum, struct UiContext* dc, struct itemDef_s* item, struct GenericEventScript* eventScript) -> bool
{
  return Zynamic::Forward<bool (int, struct UiContext*, struct itemDef_s*, struct GenericEventScript*)>(L"Item_IsConditionSatisfied")(localClientNum, dc, item, eventScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_MarkProcessed(struct GenericEventScript* eventScript, struct nestingStack_t* stack, bool isConditionSatisfied) -> void
{
  return Zynamic::Forward<void (struct GenericEventScript*, struct nestingStack_t*, bool)>(L"Item_MarkProcessed")(eventScript, stack, isConditionSatisfied);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsBlockProcessed(struct GenericEventScript* eventScript, struct nestingStack_t* stack, bool* result) -> bool
{
  return Zynamic::Forward<bool (struct GenericEventScript*, struct nestingStack_t*, bool*)>(L"Item_IsBlockProcessed")(eventScript, stack, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_RunSingleEventScript(int localClientNum, struct UiContext* dc, struct itemDef_s* item, struct GenericEventScript* eventScript) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, struct GenericEventScript*)>(L"Item_RunSingleEventScript")(localClientNum, dc, item, eventScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_RunEventScript(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char* eventName) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char*)>(L"Item_RunEventScript")(localClientNum, dc, item, eventName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_RunScript(int localClientNum, struct UiContext* dc, struct itemDef_s* item, const char* s) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, const char*)>(L"Item_RunScript")(localClientNum, dc, item, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UIAnimation_RunEventScript(int localClientNum, struct UiContext* dc, struct itemDef_s* item, struct animParamsDef_t* animState, const char* eventName) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, struct animParamsDef_t*, const char*)>(L"UIAnimation_RunEventScript")(localClientNum, dc, item, animState, eventName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLocalVarBool_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SetLocalVarBool_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLocalVarInt_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SetLocalVarInt_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLocalVarFloat_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SetLocalVarFloat_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLocalVarString_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SetLocalVarString_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FadeItem_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_FadeItem_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShowItem_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ShowItem_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_HideItem_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_HideItem_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShowMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ShowMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_HideMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_HideMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_OpenMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_CloseMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenuImmediate_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_OpenMenuImmediate_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenuImmediate_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_CloseMenuImmediate_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ChangeMenuOpenSlideDirection_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ChangeMenuOpenSlideDirection_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ChangeMenuCloseSlideDirection_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ChangeMenuCloseSlideDirection_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenToastPopup_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_OpenToastPopup_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FocusItem_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_FocusItem_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MoveFeeder_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_MoveFeeder_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddToFeeder_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_AddToFeeder_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddToFeederExtended_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_AddToFeederExtended_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearFeeder_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ClearFeeder_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearFeederWithoutResetCursor_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ClearFeederWithoutResetCursor_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RaiseFeederEvent_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RaiseFeederEvent_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RefreshFeeder_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RefreshFeeder_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RefreshFeederSelection_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RefreshFeederSelection_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ChangeRowStatus_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ChangeRowStatus_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PlaySound_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_PlaySound_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ValidatePrivateMatchGametype_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ValidatePrivateMatchGametype_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetActiveMenu_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_SetActiveMenu_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RegisterCmds() -> void
{
  return Zynamic::Forward<void ()>(L"UI_RegisterCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_HasFocusEvent(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct itemDef_s*)>(L"Item_HasFocusEvent")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetFocus(int localClientNum, struct UiContext* dc, struct itemDef_s* item, float x, float y) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct itemDef_s*, float, float)>(L"Item_SetFocus")(localClientNum, dc, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_MaxScroll(const int localClientNum, int contextIndex, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (const int, int, struct itemDef_s*)>(L"Item_ListBox_MaxScroll")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_GetMaxHeight(const int localClientNum, int contextIndex, struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (const int, int, struct itemDef_s*)>(L"Item_ListBox_GetMaxHeight")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_Viewmax(const int localClientNum, int contextIndex, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (const int, int, struct itemDef_s*)>(L"Item_ListBox_Viewmax")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_RequiresScroll(const int localClientNum, int contextIndex, struct itemDef_s* item) -> bool
{
  return Zynamic::Forward<bool (const int, int, struct itemDef_s*)>(L"Item_ListBox_RequiresScroll")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_ScrollHeight(const int localClientNum, int contextIndex, struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (const int, int, struct itemDef_s*)>(L"Item_ListBox_ScrollHeight")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_ThumbPosition(const int localClientNum, int contextIndex, struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (const int, int, struct itemDef_s*)>(L"Item_ListBox_ThumbPosition")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_ThumbDrawPosition(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (const int, struct UiContext*, struct itemDef_s*)>(L"Item_ListBox_ThumbDrawPosition")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Slider_ThumbPosition(struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (struct itemDef_s*)>(L"Item_Slider_ThumbPosition")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Slider_OverSlider(int contextIndex, struct itemDef_s* item, float x, float y) -> int
{
  return Zynamic::Forward<int (int, struct itemDef_s*, float, float)>(L"Item_Slider_OverSlider")(contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_OverLB(const int localClientNum, int contextIndex, struct itemDef_s* item, float x, float y) -> int
{
  return Zynamic::Forward<int (const int, int, struct itemDef_s*, float, float)>(L"Item_ListBox_OverLB")(localClientNum, contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_GetIndexForMouse(int contextIndex, struct itemDef_s* item, float x, float y) -> int
{
  return Zynamic::Forward<int (int, struct itemDef_s*, float, float)>(L"Item_ListBox_GetIndexForMouse")(contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Listbox_Mouse_Column_Set(const int localClientNum, int contextIndex, struct itemDef_s* item, int x, int y) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, int, int)>(L"Item_Listbox_Mouse_Column_Set")(localClientNum, contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_ModalSelection(const int localClientNum, int contextIndex, struct itemDef_s* item, int x, int y) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, int, int)>(L"Item_ListBox_ModalSelection")(localClientNum, contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_MouseEnter(const int localClientNum, int contextIndex, struct itemDef_s* item, float x, float y) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, float, float)>(L"Item_ListBox_MouseEnter")(localClientNum, contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_MouseEnter(int localClientNum, struct UiContext* dc, struct itemDef_s* item, float x, float y) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*, float, float)>(L"Item_MouseEnter")(localClientNum, dc, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_MouseLeave(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*)>(L"Item_MouseLeave")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetMouseOver(const struct UiContext* dc, struct itemDef_s* item, int focus) -> void
{
  return Zynamic::Forward<void (const struct UiContext*, struct itemDef_s*, int)>(L"Item_SetMouseOver")(dc, item, focus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_OwnerDraw_HandleKey(struct itemDef_s* item, int key) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"Item_OwnerDraw_HandleKey")(item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_SetCursorPos(const int localClientNum, int contextIndex, struct itemDef_s* item, int max, int viewmax, int newCursorPos, bool autoScroll) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, int, int, int, bool)>(L"Item_ListBox_SetCursorPos")(localClientNum, contextIndex, item, max, viewmax, newCursorPos, autoScroll);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_Page(const int localClientNum, int contextIndex, struct itemDef_s* item, int max, int scrollmax, int viewmax, int delta) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, int, int, int, int)>(L"Item_ListBox_Page")(localClientNum, contextIndex, item, max, scrollmax, viewmax, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_Scroll(const int localClientNum, int contextIndex, struct itemDef_s* item, int max, int scrollmax, int viewmax, int delta) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, int, int, int, int)>(L"Item_ListBox_Scroll")(localClientNum, contextIndex, item, max, scrollmax, viewmax, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_HandleKey(int localClientNum, struct UiContext* dc, struct itemDef_s* item, int key, int down, int force) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct itemDef_s*, int, int, int)>(L"Item_ListBox_HandleKey")(localClientNum, dc, item, key, down, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ContainsMouse(struct UiContext* dc, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct itemDef_s*)>(L"Item_ContainsMouse")(dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ShouldHandleKey(struct UiContext* dc, struct itemDef_s* item, int key) -> bool
{
  return Zynamic::Forward<bool (struct UiContext*, struct itemDef_s*, int)>(L"Item_ShouldHandleKey")(dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_YesNo_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct itemDef_s*, int)>(L"Item_YesNo_HandleKey")(dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Multi_CountSettings(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_Multi_CountSettings")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DvarEnum_CountSettings(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_DvarEnum_CountSettings")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Multi_FindDvarByValue(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_Multi_FindDvarByValue")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Multi_Setting(struct itemDef_s* item) -> const char*
{
  return Zynamic::Forward<const char* (struct itemDef_s*)>(L"Item_Multi_Setting")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DvarEnum_EnumIndex(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_DvarEnum_EnumIndex")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DvarEnum_Setting(struct itemDef_s* item) -> const char*
{
  return Zynamic::Forward<const char* (struct itemDef_s*)>(L"Item_DvarEnum_Setting")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_List_NextEntryForKey(int key, int current, int count) -> int
{
  return Zynamic::Forward<int (int, int, int)>(L"Item_List_NextEntryForKey")(key, current, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Multi_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct itemDef_s*, int)>(L"Item_Multi_HandleKey")(dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DvarEnum_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct itemDef_s*, int)>(L"Item_DvarEnum_HandleKey")(dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsTextField(const struct itemDef_s* item) -> bool
{
  return Zynamic::Forward<bool (const struct itemDef_s*)>(L"Item_IsTextField")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_TextField_BeginEdit(int localClientNum, int contextIndex, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*)>(L"Item_TextField_BeginEdit")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_TextField_EnsureCursorVisible(int contextIndex, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const char*)>(L"Item_TextField_EnsureCursorVisible")(contextIndex, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_TextField_HandleKey(int localClientNum, struct UiContext* dc, struct itemDef_s* item, int key) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct itemDef_s*, int)>(L"Item_TextField_HandleKey")(localClientNum, dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scroll_ListBox_AutoFunc(const int localClientNum, struct UiContext* dc, void* p) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, void*)>(L"Scroll_ListBox_AutoFunc")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scroll_ListBox_ThumbFunc(const int localClientNum, struct UiContext* dc, void* p) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, void*)>(L"Scroll_ListBox_ThumbFunc")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scroll_Slider_SetThumbPos(struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct UiContext*, struct itemDef_s*)>(L"Scroll_Slider_SetThumbPos")(dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scroll_Slider_ThumbFunc(const int localClientNum, struct UiContext* dc, void* p) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, void*)>(L"Scroll_Slider_ThumbFunc")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_StartCapture(const int localClientNum, struct UiContext* dc, struct itemDef_s* item, int key) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*, int)>(L"Item_StartCapture")(localClientNum, dc, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Slider_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key, int down) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct itemDef_s*, int, int)>(L"Item_Slider_HandleKey")(dc, item, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_HandleKey(int localClientNum, struct UiContext* dc, struct itemDef_s* item, int key, int down) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct itemDef_s*, int, int)>(L"Item_HandleKey")(localClientNum, dc, item, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Action(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*)>(L"Item_Action")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetPrevCursorItem(int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int usedKeyboard) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (int, struct UiContext*, struct menuDef_t*, int)>(L"Menu_SetPrevCursorItem")(localClientNum, dc, menu, usedKeyboard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetNextCursorItem(int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int usedTab, int usedKeyboard) -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* (int, struct UiContext*, struct menuDef_t*, int, int)>(L"Menu_SetNextCursorItem")(localClientNum, dc, menu, usedTab, usedKeyboard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_Open(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct menuDef_t*)>(L"Menus_Open")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_OpenByName(int localClientNum, struct UiContext* dc, const char* p) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, const char*)>(L"Menus_OpenByName")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_OpenImmediateByName(int localClientNum, struct UiContext* dc, const char* p) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, const char*)>(L"Menus_OpenImmediateByName")(localClientNum, dc, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_SetupOpenMenu(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct menuDef_t*)>(L"Menus_SetupOpenMenu")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_PrintAllLoadedMenus(struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (struct UiContext*)>(L"Menus_PrintAllLoadedMenus")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Display_VisibleMenuCount(struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (struct UiContext*)>(L"Display_VisibleMenuCount")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_HandleOOBClick(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int key, int down) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*, int, int)>(L"Menus_HandleOOBClick")(localClientNum, dc, menu, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_CorrectedTextRect(int contextIndex, struct itemDef_s* item) -> struct rectDef_s*
{
  return Zynamic::Forward<struct rectDef_s* (int, struct itemDef_s*)>(L"Item_CorrectedTextRect")(contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_CheckOnKey(int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int key) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct menuDef_t*, int)>(L"Menu_CheckOnKey")(localClientNum, dc, menu, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ItemsAreAnimating(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> bool
{
  return Zynamic::Forward<bool (int, struct UiContext*, struct menuDef_t*)>(L"Menu_ItemsAreAnimating")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_HandleKey(int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int key, int down) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct menuDef_t*, int, int)>(L"Menu_HandleKey")(localClientNum, dc, menu, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ToWindowCoords(float* x, float* y, const struct windowDef_t* window) -> void
{
  return Zynamic::Forward<void (float*, float*, const struct windowDef_t*)>(L"ToWindowCoords")(x, y, window);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetFont(int contextIndex, const struct itemDef_s* item) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (int, const struct itemDef_s*)>(L"Item_GetFont")(contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetTextExtents(int contextIndex, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const char*)>(L"Item_SetTextExtents")(contextIndex, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_TextColor(struct UiContext* dc, struct itemDef_s* item, float* newColor[0x4]) -> void
{
  return Zynamic::Forward<void (struct UiContext*, struct itemDef_s*, float*[0x4])>(L"Item_TextColor")(dc, item, newColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PickWordWrapLineWidth(const char* text, int bufferSize, struct Font_s* font, float normalizedScale, int targetLineCount, int widthGuess, int widthLimit) -> int
{
  return Zynamic::Forward<int (const char*, int, struct Font_s*, float, int, int, int)>(L"UI_PickWordWrapLineWidth")(text, bufferSize, font, normalizedScale, targetLineCount, widthGuess, widthLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _DrawWrappedText(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect, bool subtitle, const float* subtitleGlowColor, bool cinematic) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, const struct rectDef_s*, struct Font_s*, float, float, float, const float*, int, int, struct rectDef_s*, bool, const float*, bool)>(L"_DrawWrappedText")(scrPlace, text, rect, font, x, y, scale, color, style, textAlignMode, textRect, subtitle, subtitleGlowColor, cinematic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWrappedText(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, const struct rectDef_s*, struct Font_s*, float, float, float, const float*, int, int, struct rectDef_s*)>(L"UI_DrawWrappedText")(scrPlace, text, rect, font, x, y, scale, color, style, textAlignMode, textRect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWrappedTextSubtitled(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect, const float* subtitleGlowColor, bool cinematic) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, const struct rectDef_s*, struct Font_s*, float, float, float, const float*, int, int, struct rectDef_s*, const float*, bool)>(L"UI_DrawWrappedTextSubtitled")(scrPlace, text, rect, font, x, y, scale, color, style, textAlignMode, textRect, subtitleGlowColor, cinematic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Text_AutoWrapped_Paint(int contextIndex, struct itemDef_s* item, const char* text, const float* color, bool subtitle, const float* subtitleGlowColor, bool cinematic) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const char*, const float*, bool, const float*, bool)>(L"Item_Text_AutoWrapped_Paint")(contextIndex, item, text, color, subtitle, subtitleGlowColor, cinematic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Text_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_Text_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_TextField_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_TextField_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_YesNo_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_YesNo_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Multi_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_Multi_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_DvarEnum_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_DvarEnum_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlatformCommand(int localClientNum, const char* command, const char** consoleCommand) -> void
{
  return Zynamic::Forward<void (int, const char*, const char**)>(L"GetPlatformCommand")(localClientNum, command, consoleCommand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetSticksTranslatedString(int localClientNum, const char* command, char* keys) -> bool
{
  return Zynamic::Forward<bool (int, const char*, char*)>(L"UI_GetSticksTranslatedString")(localClientNum, command, keys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetKeyBindingLocalizedString(const int localClientNum, const char* command, char* keys, int bindNum) -> int
{
  return Zynamic::Forward<int (const int, const char*, char*, int)>(L"UI_GetKeyBindingLocalizedString")(localClientNum, command, keys, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Slider_Paint(struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct UiContext*, struct itemDef_s*)>(L"Item_Slider_Paint")(dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Bind_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_Bind_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Display_KeyBindPending() -> int
{
  return Zynamic::Forward<int ()>(L"Display_KeyBindPending")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Bind_HandleKey(const int localClientNum, struct UiContext* dc, struct itemDef_s* item, int key, int down) -> int
{
  return Zynamic::Forward<int (const int, struct UiContext*, struct itemDef_s*, int, int)>(L"Item_Bind_HandleKey")(localClientNum, dc, item, key, down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetTextAlignAdj(const int alignment, float width, float textWidth) -> float
{
  return Zynamic::Forward<float (const int, float, float)>(L"Item_GetTextAlignAdj")(alignment, width, textWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_LanguageScale(enum language_t language, int feederID, int col) -> float
{
  return Zynamic::Forward<float (enum language_t, int, int)>(L"Item_ListBox_LanguageScale")(language, feederID, col);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_PaintTextElem(int localClientNum, const int contextIndex, struct itemDef_s* item, int row, int col, int maxChars, int halignment, int valignment, float x, float y, float w, float h, bool onFocus) -> void
{
  return Zynamic::Forward<void (int, const int, struct itemDef_s*, int, int, int, int, int, float, float, float, float, bool)>(L"Item_ListBox_PaintTextElem")(localClientNum, contextIndex, item, row, col, maxChars, halignment, valignment, x, y, w, h, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_PaintBackground(const int localClientNum, const int contextIndex, struct itemDef_s* item, float x, float y, int row) -> void
{
  return Zynamic::Forward<void (const int, const int, struct itemDef_s*, float, float, int)>(L"Item_ListBox_PaintBackground")(localClientNum, contextIndex, item, x, y, row);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_PaintHighlight(const int localClientNum, const int contextIndex, struct itemDef_s* item, float x, float y) -> void
{
  return Zynamic::Forward<void (const int, const int, struct itemDef_s*, float, float)>(L"Item_ListBox_PaintHighlight")(localClientNum, contextIndex, item, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_Paint(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*)>(L"Item_ListBox_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_OwnerDraw_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_OwnerDraw_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GameMsgWindow_Paint(const int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct itemDef_s*)>(L"Item_GameMsgWindow_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Paint(int localClientNum, struct UiContext* dc, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*, struct itemDef_s*)>(L"Item_Paint")(localClientNum, dc, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetFocused(struct UiContext* dc) -> struct menuDef_t*
{
  return Zynamic::Forward<struct menuDef_t* (struct UiContext*)>(L"Menu_GetFocused")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetFeederSelection(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int feeder, int index, const char* name) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*, int, int, const char*)>(L"Menu_SetFeederSelection")(localClientNum, dc, menu, feeder, index, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetFeederSelection(struct UiContext* dc, struct menuDef_t* menu, int feeder, const char* name) -> int
{
  return Zynamic::Forward<int (struct UiContext*, struct menuDef_t*, int, const char*)>(L"Menu_GetFeederSelection")(dc, menu, feeder, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_AnyFullScreenVisible(struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (struct UiContext*)>(L"Menus_AnyFullScreenVisible")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsVisible(int flags) -> int
{
  return Zynamic::Forward<int (int)>(L"IsVisible")(flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_HandleMouseMove(int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*, struct menuDef_t*)>(L"Menu_HandleMouseMove")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_IsVisible(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> bool
{
  return Zynamic::Forward<bool (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_IsVisible")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PerformTransitionEffects(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*)>(L"Menu_PerformTransitionEffects")(localClientNum, dc, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Paint(int localClientNum, struct UiContext* dc, struct ScreenPlacementStack* scrPlaceViewStack, struct menuDef_t* menu, int UI3DOverrideId) -> bool
{
  return Zynamic::Forward<bool (int, struct UiContext*, struct ScreenPlacementStack*, struct menuDef_t*, int)>(L"Menu_Paint")(localClientNum, dc, scrPlaceViewStack, menu, UI3DOverrideId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Count(struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (struct UiContext*)>(L"Menu_Count")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintAll_BeginVisibleList(char* stringBegin, unsigned int stringSize) -> void
{
  return Zynamic::Forward<void (char*, unsigned int)>(L"Menu_PaintAll_BeginVisibleList")(stringBegin, stringSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintAll_AppendToVisibleList(char* stringBegin, unsigned int stringSize, const char* stringToAppend) -> void
{
  return Zynamic::Forward<void (char*, unsigned int, const char*)>(L"Menu_PaintAll_AppendToVisibleList")(stringBegin, stringSize, stringToAppend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintAll_DrawVisibleList(char* stringBegin, struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (char*, struct UiContext*)>(L"Menu_PaintAll_DrawVisibleList")(stringBegin, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintAll(int localClientNum, struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (int, struct UiContext*)>(L"Menu_PaintAll")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetSystemCursorPos(struct UiContext* dc, float x, float y) -> void
{
  return Zynamic::Forward<void (struct UiContext*, float, float)>(L"UI_SetSystemCursorPos")(dc, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ResetCachedMousePosition(int localClientNum, struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*)>(L"UI_ResetCachedMousePosition")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Display_MouseMove(int localClientNum, struct UiContext* dc) -> int
{
  return Zynamic::Forward<int (int, struct UiContext*)>(L"Display_MouseMove")(localClientNum, dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_OverActiveItem(int contextIndex, struct menuDef_t* menu, float x, float y) -> int
{
  return Zynamic::Forward<int (int, struct menuDef_t*, float, float)>(L"Menu_OverActiveItem")(contextIndex, menu, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_shared() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_ui_shared")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddMenu(const int localClientNum, struct UiContext* dc, struct menuDef_t* menu, int close) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct menuDef_t*, int)>(L"UI_AddMenu")(localClientNum, dc, menu, close);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddMenuList(const int localClientNum, struct UiContext* dc, struct MenuList* menuList, int close) -> void
{
  return Zynamic::Forward<void (const int, struct UiContext*, struct MenuList*, int)>(L"UI_AddMenuList")(localClientNum, dc, menuList, close);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PlaySound(int context, const char* aliasname) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"UI_PlaySound")(context, aliasname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearLocalUIVisibilityBits(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_ClearLocalUIVisibilityBits")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLocalUIVisbilityBit(int localClientNum, int bitShift, int value) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"UI_SetLocalUIVisbilityBit")(localClientNum, bitShift, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetForcedMenuScreen() -> int
{
  return Zynamic::Forward<int ()>(L"UI_GetForcedMenuScreen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMenuScreen() -> int
{
  return Zynamic::Forward<int ()>(L"UI_GetMenuScreen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMenuScreenForError() -> int
{
  return Zynamic::Forward<int ()>(L"UI_GetMenuScreenForError")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_DoesMenuOrParentsHaveControlFlag(struct UiContext* dc, struct menuDef_t* menu, int controlFlag) -> bool
{
  return Zynamic::Forward<bool (struct UiContext*, struct menuDef_t*, int)>(L"Menu_DoesMenuOrParentsHaveControlFlag")(dc, menu, controlFlag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetLoadingScreenMaterial(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"UI_SetLoadingScreenMaterial")(name);
}

#endif // __UNIMPLEMENTED__
