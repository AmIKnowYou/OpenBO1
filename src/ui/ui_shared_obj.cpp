//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_shared_obj() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_ui_shared_obj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FreeItemMemory(struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*)>(L"Menu_FreeItemMemory")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_FreeMemory(struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (struct menuDef_t*)>(L"Menu_FreeMemory")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_FreeAllMemory(struct UiContext* dc) -> void
{
  return Zynamic::Forward<void (struct UiContext*)>(L"Menus_FreeAllMemory")(dc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ParseMenuMaterial(const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"UI_ParseMenuMaterial")(key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MapLoadInfo(const char* filename) -> void
{
  return Zynamic::Forward<void (const char*)>(L"UI_MapLoadInfo")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_SourceError(int handle, char* format, ...) -> void
{
  return Zynamic::Forward<void (int, char*, ...)>(L"PC_SourceError")(handle, format);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Float_Parse(int handle, float* f) -> int
{
  return Zynamic::Forward<int (int, float*)>(L"PC_Float_Parse")(handle, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Float_Expression_Parse(int handle, float* f) -> int
{
  return Zynamic::Forward<int (int, float*)>(L"PC_Float_Expression_Parse")(handle, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Int_ParseLine(int handle, int* i) -> int
{
  return Zynamic::Forward<int (int, int*)>(L"PC_Int_ParseLine")(handle, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Color_Parse(int handle, float* c[0x4]) -> int
{
  return Zynamic::Forward<int (int, float*[0x4])>(L"PC_Color_Parse")(handle, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Int_Parse(int handle, int* i) -> int
{
  return Zynamic::Forward<int (int, int*)>(L"PC_Int_Parse")(handle, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Byte_Parse(int handle, unsigned char* b) -> int
{
  return Zynamic::Forward<int (int, unsigned char*)>(L"PC_Byte_Parse")(handle, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Flag_ParseOptional(int handle, int* i) -> int
{
  return Zynamic::Forward<int (int, int*)>(L"PC_Flag_ParseOptional")(handle, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Int_Expression_Parse(int handle, int* i) -> int
{
  return Zynamic::Forward<int (int, int*)>(L"PC_Int_Expression_Parse")(handle, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Rect_Parse(int handle, struct rectDef_s* r) -> int
{
  return Zynamic::Forward<int (int, struct rectDef_s*)>(L"PC_Rect_Parse")(handle, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_String_Parse(int handle, const char** out) -> int
{
  return Zynamic::Forward<int (int, const char**)>(L"PC_String_Parse")(handle, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Char_Parse(int handle, char* out) -> int
{
  return Zynamic::Forward<int (int, char*)>(L"PC_Char_Parse")(handle, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Script_Parse(int handle, const char** out) -> int
{
  return Zynamic::Forward<int (int, const char**)>(L"PC_Script_Parse")(handle, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ResetConditionStack() -> void
{
  return Zynamic::Forward<void ()>(L"PC_ResetConditionStack")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CndStackPush(int handle, struct ExpressionStatement expressionStatement, bool fireOnTrue, bool incrementLevel, int blockID, int constructID, int type) -> int
{
  return Zynamic::Forward<int (int, struct ExpressionStatement, bool, bool, int, int, int)>(L"PC_CndStackPush")(handle, expressionStatement, fireOnTrue, incrementLevel, blockID, constructID, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CndStackModifyTop(bool fireOnTrue) -> int
{
  return Zynamic::Forward<int (bool)>(L"PC_CndStackModifyTop")(fireOnTrue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CndStackPopLevel() -> int
{
  return Zynamic::Forward<int ()>(L"PC_CndStackPopLevel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CndStackAddConditionsToScript(struct GenericEventScript** baseScript, char* accumulatedScriptCommands) -> int
{
  return Zynamic::Forward<int (struct GenericEventScript**, char*)>(L"PC_CndStackAddConditionsToScript")(baseScript, accumulatedScriptCommands);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_EventScript_Parse(int handle, struct GenericEventScript** baseScript) -> int
{
  return Zynamic::Forward<int (int, struct GenericEventScript**)>(L"PC_EventScript_Parse")(handle, baseScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Window_Init(struct windowDef_t* w) -> void
{
  return Zynamic::Forward<void (struct windowDef_t*)>(L"Window_Init")(w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Init(struct menuDef_t* menu, int imageTrack) -> void
{
  return Zynamic::Forward<void (struct menuDef_t*, int)>(L"Menu_Init")(menu, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Init(struct itemDef_s* item, int imageTrack) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, int)>(L"Item_Init")(item, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_Key<1024, 6>(const char* keyword) -> int
{
  return Zynamic::Forward<int (const char*)>(L"KeywordHash_Key<1024,6>")(keyword);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_KeySeed(const char* keyword, int hashCount, int seed) -> int
{
  return Zynamic::Forward<int (const char*, int, int)>(L"KeywordHash_KeySeed")(keyword, hashCount, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_IsValidSeed<menuDef_t, 1024, 128>(const struct KeywordHashEntry<menuDef_t, 1024, 128>* array, int count, int seed) -> bool
{
  return Zynamic::Forward<bool (const struct KeywordHashEntry<menuDef_t,1024,128>*, int, int)>(L"KeywordHash_IsValidSeed<menuDef_t,1024,128>")(array, count, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_PickSeed<menuDef_t, 1024, 128>(const struct KeywordHashEntry<menuDef_t, 1024, 128>* array, int count) -> int
{
  return Zynamic::Forward<int (const struct KeywordHashEntry<menuDef_t,1024,128>*, int)>(L"KeywordHash_PickSeed<menuDef_t,1024,128>")(array, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_Validate<menuDef_t, 1024, 128>(const struct KeywordHashEntry<menuDef_t, 1024, 128>* array, int count) -> void
{
  return Zynamic::Forward<void (const struct KeywordHashEntry<menuDef_t,1024,128>*, int)>(L"KeywordHash_Validate<menuDef_t,1024,128>")(array, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_Add<menuDef_t, 1024, 128>(const struct KeywordHashEntry<menuDef_t, 1024, 128>** table, const struct KeywordHashEntry<menuDef_t, 1024, 128>* key) -> void
{
  return Zynamic::Forward<void (const struct KeywordHashEntry<menuDef_t,1024,128>**, const struct KeywordHashEntry<menuDef_t,1024,128>*)>(L"KeywordHash_Add<menuDef_t,1024,128>")(table, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeywordHash_Find<itemDef_s, 1024, 6>(const struct KeywordHashEntry<itemDef_s, 1024, 6>** table, const char* keyword) -> const struct KeywordHashEntry<itemDef_s, 1024, 6>*
{
  return Zynamic::Forward<const struct KeywordHashEntry<itemDef_s,1024,6>* (const struct KeywordHashEntry<itemDef_s,1024,6>**, const char*)>(L"KeywordHash_Find<itemDef_s,1024,6>")(table, keyword);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Parse(int handle, struct itemDef_s* item) -> int
{
  return Zynamic::Forward<int (int, struct itemDef_s*)>(L"Item_Parse")(handle, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_PostParse(struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*)>(L"Item_PostParse")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_InitControls(struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*)>(L"Item_InitControls")(item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WindowParse_frame(struct windowDef_t* window, int handle) -> int
{
  return Zynamic::Forward<int (struct windowDef_t*, int)>(L"WindowParse_frame")(window, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_name(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_name")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_fullscreen(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_fullscreen")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_rect(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_rect")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_style(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_style")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_visible(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_visible")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_visiblityBits(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_visiblityBits")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_onFocus(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_onFocus")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_leaveFocus(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_leaveFocus")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_onOpen(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_onOpen")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_onClose(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_onClose")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_onESC(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_onESC")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_execExp(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_execExp")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_border(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_border")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_borderSize(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_borderSize")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_backcolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_backcolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_forecolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_forecolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_bordercolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_bordercolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_focuscolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_focuscolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_disablecolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_disablecolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_outlinecolor(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_outlinecolor")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_background(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_background")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_ownerdrawFlag(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_ownerdrawFlag")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_ownerdraw(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_ownerdraw")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_popup(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_popup")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_outOfBounds(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_outOfBounds")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_soundLoop(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_soundLoop")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_fadeClamp(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_fadeClamp")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_fadeAmount(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_fadeAmount")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_fadeInAmount(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_fadeInAmount")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_fadeCycle(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_fadeCycle")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ValidateTypeData(struct itemDef_s* item, int handle) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, int)>(L"Item_ValidateTypeData")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_itemDef(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_itemDef")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_execKey(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_execKey")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_execKeyInt(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_execKeyInt")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_blurWorld(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_blurWorld")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetItemStaticFlag(struct menuDef_t* menu, int handle, int flag) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int, int)>(L"SetItemStaticFlag")(menu, handle, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_legacySplitScreenScale(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_legacySplitScreenScale")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_hiddenDuringScope(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_hiddenDuringScope")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_hiddenDuringFlashbang(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_hiddenDuringFlashbang")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_hiddenDuringUI(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_hiddenDuringUI")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_allowedBinding(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_allowedBinding")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_allowSignIn(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_allowSignIn")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_ui3dWindowId(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_ui3dWindowId")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_priority(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_priority")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_openSlideSpeed(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_openSlideSpeed")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_closeSlideSpeed(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_closeSlideSpeed")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_openSlideDirection(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_openSlideDirection")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_closeSlideDirection(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_closeSlideDirection")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_openFadingTime(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_openFadingTime")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_closeFadingTime(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_closeFadingTime")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_control(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_control")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuParse_frame(struct menuDef_t* menu, int handle) -> int
{
  return Zynamic::Forward<int (struct menuDef_t*, int)>(L"MenuParse_frame")(menu, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetupKeywordHash() -> void
{
  return Zynamic::Forward<void ()>(L"Menu_SetupKeywordHash")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FileText(const char* fileName) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"UI_FileText")(fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_name(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_name")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_focusSound(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_focusSound")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_text(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_text")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textfile(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textfile")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textsavegame(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textsavegame")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textcinematicsubtitle(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textcinematicsubtitle")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_group(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_group")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_rect(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_rect")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_origin(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_origin")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_decoration(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_decoration")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_notselectable(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_notselectable")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_noScrollBars(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_noScrollBars")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_noBlinkingHighlight(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_noBlinkingHighlight")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_usePaging(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_usePaging")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_autowrapped(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_autowrapped")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_horizontalscroll(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_horizontalscroll")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_type(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_type")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_elementwidth(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_elementwidth")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_elementheight(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_elementheight")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_feeder(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_feeder")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_elementtype(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_elementtype")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_columns(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_columns")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_menuColDef(struct listBoxDef_s* listPtr, int handle, struct MenuCell* cells, int cellCount) -> int
{
  return Zynamic::Forward<int (struct listBoxDef_s*, int, struct MenuCell*, int)>(L"ItemParse_menuColDef")(listPtr, handle, cells, cellCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_menuItemsDef(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_menuItemsDef")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_menuarea(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_menuarea")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_userarea(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_userarea")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_border(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_border")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_bordersize(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_bordersize")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_visible(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_visible")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_visiblityBits(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_visiblityBits")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_ownerdraw(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_ownerdraw")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_align(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_align")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_IsValidTextAlignment(int textAlignMode) -> int
{
  return Zynamic::Forward<int (int)>(L"ItemParse_IsValidTextAlignment")(textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textalign(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textalign")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textalignx(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textalignx")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textaligny(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textaligny")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textscale(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textscale")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textstyle(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textstyle")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_rotation(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_rotation")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_textfont(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_textfont")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_backcolor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_backcolor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_forecolor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_forecolor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_bordercolor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_bordercolor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_modal(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_modal")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_outlinecolor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_outlinecolor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_background(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_background")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_doubleClick(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_doubleClick")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_rightClick(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_rightClick")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_onEnter(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_onEnter")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_onFocus(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_onFocus")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_leaveFocus(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_leaveFocus")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_mouseEnter(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_mouseEnter")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_mouseExit(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_mouseExit")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_mouseEnterText(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_mouseEnterText")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_mouseExitText(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_mouseExitText")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_action(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_action")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_accept(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_accept")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvarTest(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvarTest")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_maxChars(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_maxChars")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Parse_maxCharsGotoNext(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"Item_Parse_maxCharsGotoNext")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_maxPaintChars(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_maxPaintChars")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvarFloat(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvarFloat")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvarStrList(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvarStrList")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvarFloatList(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvarFloatList")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_dvarEnumList(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_dvarEnumList")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_actionOnEnterPressOnly(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_actionOnEnterPressOnly")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_enableDvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_enableDvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_disableDvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_disableDvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_showDvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_showDvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_hideDvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_hideDvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_focusDvar(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_focusDvar")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_onEvent(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_onEvent")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_execKey(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_execKey")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_execKeyInt(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_execKeyInt")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_execExp(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_execExp")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_gameMsgWindowIndex(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_gameMsgWindowIndex")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_gameMsgWindowMode(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_gameMsgWindowMode")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_selectBorder(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_selectBorder")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_elementHighlightColor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_elementHighlightColor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_elementBackgroundColor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_elementBackgroundColor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_disableColor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_disableColor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_focusColor(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_focusColor")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_selectIcon(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_selectIcon")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_backgroundItemListbox(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_backgroundItemListbox")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_highlightTexture(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_highlightTexture")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_onListboxSelectionChange(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_onListboxSelectionChange")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_ui3dWindowId(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_ui3dWindowId")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemParse_state(struct itemDef_s* item, int handle) -> int
{
  return Zynamic::Forward<int (struct itemDef_s*, int)>(L"ItemParse_state")(item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetupKeywordHash() -> void
{
  return Zynamic::Forward<void ()>(L"Item_SetupKeywordHash")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Asset_Parse(int handle, int imageTrack) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Asset_Parse")(handle, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Parse(int handle, struct menuDef_t* menu) -> int
{
  return Zynamic::Forward<int (int, struct menuDef_t*)>(L"Menu_Parse")(handle, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PostParse(struct menuDef_t* menu) -> void
{
  return Zynamic::Forward<void (struct menuDef_t*)>(L"Menu_PostParse")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_New(int handle, int imageTrack) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Menu_New")(handle, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ParseMenuInternal(const char* menuFile, int imageTrack) -> bool
{
  return Zynamic::Forward<bool (const char*, int)>(L"UI_ParseMenuInternal")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenu_LoadObj(const char* menuFile, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"UI_LoadMenu_LoadObj")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenu_FastFile(const char* menuFile, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"UI_LoadMenu_FastFile")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenu(const char* menuFile, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"UI_LoadMenu")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_Menu(const char** p, int imageTrack) -> int
{
  return Zynamic::Forward<int (const char**, int)>(L"Load_Menu")(p, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenus_LoadObj(const char* menuFile, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"UI_LoadMenus_LoadObj")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenus(const char* menuFile, int imageTrack) -> struct MenuList*
{
  return Zynamic::Forward<struct MenuList* (const char*, int)>(L"UI_LoadMenus")(menuFile, imageTrack);
}

#endif // __UNIMPLEMENTED__
