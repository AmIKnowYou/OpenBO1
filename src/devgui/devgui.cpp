//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_devgui() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_devgui")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetMenu(unsigned short handle) -> struct DevMenuItem*
{
  return Zynamic::Forward<struct DevMenuItem* (unsigned short)>(L"DevGui_GetMenu")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetMenuParent(unsigned short handle) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short)>(L"DevGui_GetMenuParent")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetMenuHandle(struct DevMenuItem* menu) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct DevMenuItem*)>(L"DevGui_GetMenuHandle")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_EditableMenuItem(const struct DevMenuItem* menu) -> bool
{
  return Zynamic::Forward<bool (const struct DevMenuItem*)>(L"DevGui_EditableMenuItem")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MenuItemDisabled(const struct DevMenuItem* menu) -> bool
{
  return Zynamic::Forward<bool (const struct DevMenuItem*)>(L"DevGui_MenuItemDisabled")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_CompareMenus(const struct DevMenuItem* menu0, const struct DevMenuItem* menu1) -> int
{
  return Zynamic::Forward<int (const struct DevMenuItem*, const struct DevMenuItem*)>(L"DevGui_CompareMenus")(menu0, menu1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_FreeMenu_r(unsigned short handle) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DevGui_FreeMenu_r")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_CreateMenu(unsigned short parentHandle, const char* label, short sortKey) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short, const char*, short)>(L"DevGui_CreateMenu")(parentHandle, label, sortKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_FindMenu(unsigned short parentHandle, const char* label) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short, const char*)>(L"DevGui_FindMenu")(parentHandle, label);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_RegisterMenu(unsigned short parentHandle, const char* label, short sortKey) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short, const char*, short)>(L"DevGui_RegisterMenu")(parentHandle, label, sortKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_PathToken(const char** pathInOut, char* label, short* sortKeyOut) -> enum DevGuiTokenResult
{
  return Zynamic::Forward<enum DevGuiTokenResult (const char**, char*, short*)>(L"DevGui_PathToken")(pathInOut, label, sortKeyOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ConstructPath_r(unsigned short parent, const char* path) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short, const char*)>(L"DevGui_ConstructPath_r")(parent, path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsValidPath(const char* path) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"DevGui_IsValidPath")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_AddDvar(const char* path, const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (const char*, const struct dvar_s*)>(L"DevGui_AddDvar")(path, dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_AddCommand(const char* path, const char* command) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"DevGui_AddCommand")(path, command);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_AddGraph(const char* path, struct DevGraph* graph) -> void
{
  return Zynamic::Forward<void (const char*, struct DevGraph*)>(L"DevGui_AddGraph")(path, graph);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_RemoveMenu(const char* path) -> void
{
  return Zynamic::Forward<void (const char*)>(L"DevGui_RemoveMenu")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_OpenMenu(const char* path) -> void
{
  return Zynamic::Forward<void (const char*)>(L"DevGui_OpenMenu")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SubMenuTextWidth() -> int
{
  return Zynamic::Forward<int ()>(L"DevGui_SubMenuTextWidth")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MenuItemWidth(const struct DevMenuItem* menu) -> int
{
  return Zynamic::Forward<int (const struct DevMenuItem*)>(L"DevGui_MenuItemWidth")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MaxChildMenuWidth(const struct DevMenuItem* menu) -> int
{
  return Zynamic::Forward<int (const struct DevMenuItem*)>(L"DevGui_MaxChildMenuWidth")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawMenuVertically(const struct DevMenuItem* menu, unsigned short activeChild, int* origin) -> void
{
  return Zynamic::Forward<void (const struct DevMenuItem*, unsigned short, int*)>(L"DevGui_DrawMenuVertically")(menu, activeChild, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawMenuHorizontally(const struct DevMenuItem* menu, unsigned short activeChild, int* origin) -> void
{
  return Zynamic::Forward<void (const struct DevMenuItem*, unsigned short, int*)>(L"DevGui_DrawMenuHorizontally")(menu, activeChild, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawMenu(unsigned short menuHandle, unsigned short activeChild, int* origin) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned short, int*)>(L"DevGui_DrawMenu")(menuHandle, activeChild, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ChooseOrigin(int* origin) -> void
{
  return Zynamic::Forward<void (int*)>(L"DevGui_ChooseOrigin")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetSliderPath(unsigned short menuHandle, char* path, int pathLen) -> int
{
  return Zynamic::Forward<int (unsigned short, char*, int)>(L"DevGui_GetSliderPath")(menuHandle, path, pathLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawSliderPath(int x, int y) -> void
{
  return Zynamic::Forward<void (int, int)>(L"DevGui_DrawSliderPath")(x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawDvarDescription(int x, int y, const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (int, int, const struct dvar_s*)>(L"DevGui_DrawDvarDescription")(x, y, dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawSingleSlider(int x, int y, int rowWidth, int rowHeight, float fraction, const unsigned char* knobColor) -> void
{
  return Zynamic::Forward<void (int, int, int, int, float, const unsigned char*)>(L"DevGui_DrawSingleSlider")(x, y, rowWidth, rowHeight, fraction, knobColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawDvarValue(int x, int y, const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (int, int, const struct dvar_s*)>(L"DevGui_DrawDvarValue")(x, y, dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DvarRowCount(const struct dvar_s* dvar) -> int
{
  return Zynamic::Forward<int (const struct dvar_s*)>(L"DevGui_DvarRowCount")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawSliders(const struct DevMenuItem* menu) -> void
{
  return Zynamic::Forward<void (const struct DevMenuItem*)>(L"DevGui_DrawSliders")(menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawBindNextKey() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_DrawBindNextKey")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawGraph(const struct DevMenuItem* menu, int localClientNum) -> void
{
  return Zynamic::Forward<void (const struct DevMenuItem*, int)>(L"DevGui_DrawGraph")(menu, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Draw(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_Draw")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_AdvanceChildNum(int numberToAdvance) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_AdvanceChildNum")(numberToAdvance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SelectTopLevelChild() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_SelectTopLevelChild")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SelectPrevMenuItem() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_SelectPrevMenuItem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SelectNextMenuItem() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_SelectNextMenuItem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveLeft() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveLeft")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveRight() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveRight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveUp() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveUp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveDown() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveDown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveSelectionHorizontally() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveSelectionHorizontally")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MoveSelectionVertically() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MoveSelectionVertically")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Accept(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_Accept")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Reject() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_Reject")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Init() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SelectedDvar() -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* ()>(L"DevGui_SelectedDvar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ScrollUpInternal() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_ScrollUpInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ScrollUp() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_ScrollUp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ScrollDownInternal() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_ScrollDownInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_ScrollDown() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_ScrollDown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateSelection() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_UpdateSelection")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_PickFloatScrollStep(float min, float max) -> float
{
  return Zynamic::Forward<float (float, float)>(L"DevGui_PickFloatScrollStep")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateDvar(float deltaTime, bool channelLink, bool dvarReset) -> void
{
  return Zynamic::Forward<void (float, bool, bool)>(L"DevGui_UpdateDvar")(deltaTime, channelLink, dvarReset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_AddGraphKnot(struct DevGraph* graph, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct DevGraph*, int)>(L"DevGui_AddGraphKnot")(graph, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_RemoveGraphKnot(struct DevGraph* graph, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct DevGraph*, int)>(L"DevGui_RemoveGraphKnot")(graph, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateGraph(int localClientNum, float deltaTime) -> void
{
  return Zynamic::Forward<void (int, float)>(L"DevGui_UpdateGraph")(localClientNum, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MenuShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_MenuShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_KeyPressed(int key) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_KeyPressed")(key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Update(int localClientNum, float deltaTime) -> void
{
  return Zynamic::Forward<void (int, float)>(L"DevGui_Update")(localClientNum, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_Toggle() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_Toggle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsActive() -> bool
{
  return Zynamic::Forward<bool ()>(L"DevGui_IsActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsInitialized() -> bool
{
  return Zynamic::Forward<bool ()>(L"DevGui_IsInitialized")();
}

#endif // __UNIMPLEMENTED__
