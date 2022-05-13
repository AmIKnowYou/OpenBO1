//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_utils() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_ui_utils")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_SetDynamicFlags(int contextIndex, struct windowDef_t* w, const int flags) -> void
{
  return Zynamic::Forward<void (int, struct windowDef_t*, const int)>(L"Window_SetDynamicFlags")(contextIndex, w, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_AddDynamicFlags(int contextIndex, struct windowDef_t* w, const int newFlags) -> void
{
  return Zynamic::Forward<void (int, struct windowDef_t*, const int)>(L"Window_AddDynamicFlags")(contextIndex, w, newFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_RemoveDynamicFlags(int contextIndex, struct windowDef_t* w, const int newFlags) -> void
{
  return Zynamic::Forward<void (int, struct windowDef_t*, const int)>(L"Window_RemoveDynamicFlags")(contextIndex, w, newFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_SetStaticFlags(struct windowDef_t* w, const int flags) -> void
{
  return Zynamic::Forward<void (struct windowDef_t*, const int)>(L"Window_SetStaticFlags")(w, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetCursorItem(int contextIndex, struct menuDef_t* menu, int cursorItem) -> void
{
  return Zynamic::Forward<void (int, struct menuDef_t*, int)>(L"Menu_SetCursorItem")(contextIndex, menu, cursorItem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsVisible(const int localClientNum, int contextIndex, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (const int, int, struct itemDef_s*)>(L"Item_IsVisible")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_EnableShowViaDvar(const struct itemDef_s* item, int flag) -> int
{
  return Zynamic::Forward<int (const struct itemDef_s*, int)>(L"Item_EnableShowViaDvar")(item, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetTextRect(int contextIndex, struct itemDef_s* item, const struct rectDef_s* textRect) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const struct rectDef_s*)>(L"Item_SetTextRect")(contextIndex, item, textRect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetCursorPosOffset(int contextIndex, struct itemDef_s* item, const char* text, int delta) -> int
{
  return Zynamic::Forward<int (int, struct itemDef_s*, const char*, int)>(L"Item_GetCursorPosOffset")(contextIndex, item, text, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ListBox_HasValidCursorPos(int contextIndex, struct itemDef_s* item) -> bool
{
  return Zynamic::Forward<bool (int, struct itemDef_s*)>(L"ListBox_HasValidCursorPos")(contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetScreenCoords(int contextIndex, struct itemDef_s* item, float x, float y, int horzAlign, int vertAlign) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, float, float, int, int)>(L"Item_SetScreenCoords")(contextIndex, item, x, y, horzAlign, vertAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_UpdatePosition(int contextIndex, struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (int, struct menuDef_t*)>(L"Menu_UpdatePosition")(contextIndex, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsEditFieldDef(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_IsEditFieldDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsTextDefType(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_IsTextDefType")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsFocusDefType(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_IsFocusDefType")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_IsOwnerDrawDefType(struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*)>(L"Item_IsOwnerDrawDefType")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetEditFieldDef(struct itemDef_s* item) -> struct editFieldDef_s*
{
  return Zynamic::Forward<struct editFieldDef_s* (struct itemDef_s*)>(L"Item_GetEditFieldDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetMultiDef(struct itemDef_s* item) -> struct multiDef_s*
{
  return Zynamic::Forward<struct multiDef_s* (struct itemDef_s*)>(L"Item_GetMultiDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetOwnerDrawDef(struct itemDef_s* item) -> struct ownerDrawDef_s*
{
  return Zynamic::Forward<struct ownerDrawDef_s* (struct itemDef_s*)>(L"Item_GetOwnerDrawDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetTextDef(struct itemDef_s* item) -> struct textDef_s*
{
  return Zynamic::Forward<struct textDef_s* (struct itemDef_s*)>(L"Item_GetTextDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetFocusItemDef(struct itemDef_s* item) -> struct focusItemDef_s*
{
  return Zynamic::Forward<struct focusItemDef_s* (struct itemDef_s*)>(L"Item_GetFocusItemDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetListBoxDef(struct itemDef_s* item) -> struct listBoxDef_s*
{
  return Zynamic::Forward<struct listBoxDef_s* (struct itemDef_s*)>(L"Item_GetListBoxDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetListBoxFeederID(const struct itemDef_s* item) -> float
{
  return Zynamic::Forward<float (const struct itemDef_s*)>(L"Item_GetListBoxFeederID")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetEnumDvarName(struct itemDef_s* item) -> struct enumDvarDef_s*
{
  return Zynamic::Forward<struct enumDvarDef_s* (struct itemDef_s*)>(L"Item_GetEnumDvarName")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetGameMsgDef(struct itemDef_s* item) -> struct gameMsgDef_s*
{
  return Zynamic::Forward<struct gameMsgDef_s* (struct itemDef_s*)>(L"Item_GetGameMsgDef")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_PropertiesToAnimState(struct itemDef_s* item, struct animParamsDef_t* animParams) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, struct animParamsDef_t*)>(L"Item_PropertiesToAnimState")(item, animParams);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_AnimStateToProperties(struct animParamsDef_t* animParams, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct animParamsDef_t*, struct itemDef_s*)>(L"Item_AnimStateToProperties")(animParams, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto hashForString(const char* str) -> long
{
  return Zynamic::Forward<long (const char*)>(L"hashForString")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Alloc(int size, int alignment) -> void*
{
  return Zynamic::Forward<void* (int, int)>(L"UI_Alloc")(size, alignment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto String_Init() -> void
{
  return Zynamic::Forward<void ()>(L"String_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto String_Alloc(const char* p) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"String_Alloc")(p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Int_Parse(const char** p, int* i) -> int
{
  return Zynamic::Forward<int (const char**, int*)>(L"Int_Parse")(p, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Float_Parse(const char** p, float* f) -> int
{
  return Zynamic::Forward<int (const char**, float*)>(L"Float_Parse")(p, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypesList_LoadObj() -> void
{
  return Zynamic::Forward<void ()>(L"UI_GetGameTypesList_LoadObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypesList_FastFile() -> void
{
  return Zynamic::Forward<void ()>(L"UI_GetGameTypesList_FastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypesList() -> void
{
  return Zynamic::Forward<void ()>(L"UI_GetGameTypesList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetBusyDotsIndicator() -> char*
{
  return Zynamic::Forward<char* ()>(L"UI_GetBusyDotsIndicator")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ListMenus_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ListMenus_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SelectStringTableEntryInDvar_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_SelectStringTableEntryInDvar_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_VerifyString(const char* str, const wchar_t* __formal) -> bool
{
  return Zynamic::Forward<bool (const char*, const wchar_t*)>(L"UI_VerifyString")(str, __formal);
}

#endif // __UNIMPLEMENTED__
