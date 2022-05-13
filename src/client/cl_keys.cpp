//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_keys() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cl_keys")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_DrawTextOverride(int localClientNum, const struct field_t* edit, int x, int y, int horzAlign, int vertAlign, const char* str, int drawLen, int cursorPos) -> void
{
  return Zynamic::Forward<void (int, const struct field_t*, int, int, int, int, const char*, int, int)>(L"Field_DrawTextOverride")(localClientNum, edit, x, y, horzAlign, vertAlign, str, drawLen, cursorPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_Draw(int localClientNum, struct field_t* edit, int x, int y, int horzAlign, int vertAlign) -> void
{
  return Zynamic::Forward<void (int, struct field_t*, int, int, int, int)>(L"Field_Draw")(localClientNum, edit, x, y, horzAlign, vertAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_AdjustScroll(const struct ScreenPlacement* scrPlace, struct field_t* edit) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, struct field_t*)>(L"Field_AdjustScroll")(scrPlace, edit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_Paste(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit) -> bool
{
  return Zynamic::Forward<bool (int, const struct ScreenPlacement*, struct field_t*)>(L"Field_Paste")(localClientNum, scrPlace, edit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_KeyDownEvent(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit, int key) -> bool
{
  return Zynamic::Forward<bool (int, const struct ScreenPlacement*, struct field_t*, int)>(L"Field_KeyDownEvent")(localClientNum, scrPlace, edit, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Field_CharEvent(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit, int ch) -> bool
{
  return Zynamic::Forward<bool (int, const struct ScreenPlacement*, struct field_t*, int)>(L"Field_CharEvent")(localClientNum, scrPlace, edit, ch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FindMatches(const char* s) -> void
{
  return Zynamic::Forward<void (const char*)>(L"FindMatches")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintMatches(const char* s) -> void
{
  return Zynamic::Forward<void (const char*)>(L"PrintMatches")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto keyConcatArgs() -> void
{
  return Zynamic::Forward<void ()>(L"keyConcatArgs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConcatRemaining(const char* src, const char* start) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"ConcatRemaining")(src, start);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReplaceConsoleInputArgument(int replaceCount, const char* replacement) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"ReplaceConsoleInputArgument")(replaceCount, replacement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompleteCmdArgument() -> void
{
  return Zynamic::Forward<void ()>(L"CompleteCmdArgument")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompleteDvarArgument() -> void
{
  return Zynamic::Forward<void ()>(L"CompleteDvarArgument")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateMatches(bool searchCmds, int* matchLenAfterCmds, int* matchLenAfterDvars) -> void
{
  return Zynamic::Forward<void (bool, int*, int*)>(L"UpdateMatches")(searchCmds, matchLenAfterCmds, matchLenAfterDvars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompleteCommand() -> void
{
  return Zynamic::Forward<void ()>(L"CompleteCommand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Console_IsRconCmd(const char* commandString) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Console_IsRconCmd")(commandString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Console_IsClientDisconnected() -> bool
{
  return Zynamic::Forward<bool ()>(L"Console_IsClientDisconnected")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Console_Key(int localClientNum, int key) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Console_Key")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Message_Key(int localClientNum, int key) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Message_Key")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_GetOverstrikeMode(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"Key_GetOverstrikeMode")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_SetOverstrikeMode(int localClientNum, int state) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_SetOverstrikeMode")(localClientNum, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_IsDown(int localClientNum, int keynum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Key_IsDown")(localClientNum, keynum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_StringToKeynum(const char* str) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Key_StringToKeynum")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_IsValidGamePadChar(const char key) -> bool
{
  return Zynamic::Forward<bool (const char)>(L"Key_IsValidGamePadChar")(key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_KeynumToString(int keynum, int translate) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"Key_KeynumToString")(keynum, translate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_SetBinding(int localClientNum, int keynum, const char* binding, int bindNum) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int)>(L"Key_SetBinding")(localClientNum, keynum, binding, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_SetBindings(int localClientNum, int* twokeys, const char* binding, int bindNum) -> void
{
  return Zynamic::Forward<void (int, int*, const char*, int)>(L"Key_SetBindings")(localClientNum, twokeys, binding, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_GetBinding(int localClientNum, int keynum, int bindNum) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int)>(L"Key_GetBinding")(localClientNum, keynum, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_GetCommandAssignmentInternal(int localClientNum, const char* command, int* twokeys, int gamePadOnly, int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, int*, int, int)>(L"Key_GetCommandAssignmentInternal")(localClientNum, command, twokeys, gamePadOnly, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_GetCommandAssignment(int localClientNum, const char* command, int* twokeys, int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, int*, int)>(L"Key_GetCommandAssignment")(localClientNum, command, twokeys, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_IsCommandBound(int localClientNum, const char* command, int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, int)>(L"Key_IsCommandBound")(localClientNum, command, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Unbind_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Unbind_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Unbind2_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Unbind2_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Unbindall_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Unbindall_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Unbindall2_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Unbindall2_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Bind_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Bind_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Bind2_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Bind2_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_WriteBindingsToBuffer(int localClientNum, char* buffer, int bufferSize) -> int
{
  return Zynamic::Forward<int (int, char*, int)>(L"Key_WriteBindingsToBuffer")(localClientNum, buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_WriteBindingsToTempBuf(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Key_WriteBindingsToTempBuf")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_RestoreBindingsFromTempBuf(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Key_RestoreBindingsFromTempBuf")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_WriteBindings(int localClientNum, int f) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_WriteBindings")(localClientNum, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Bindlist_f() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Bindlist_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitKeyCommands() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitKeyCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MouseInputShouldBypassMenus(int localClientNum, int key) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CL_MouseInputShouldBypassMenus")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_HandleKeySpectatorInput(int localClientNum, int key, int down, unsigned int time) -> void
{
  return Zynamic::Forward<void (int, int, int, unsigned int)>(L"CL_HandleKeySpectatorInput")(localClientNum, key, down, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_KeyEvent(int localClientNum, int key, const int down, const unsigned int time) -> void
{
  return Zynamic::Forward<void (int, int, const int, const unsigned int)>(L"CL_KeyEvent")(localClientNum, key, down, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsoleCharEvent(int localClientNum, int key) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_ConsoleCharEvent")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CharEvent(int localClientNum, int key) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_CharEvent")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_ClearStates(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Key_ClearStates")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetKeyBindingInternal(int localClientNum, const char* command, char* keyNames[0x128], int gamePadOnly, int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, char*[0x128], int, int)>(L"CL_GetKeyBindingInternal")(localClientNum, command, keyNames, gamePadOnly, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetKeyBinding(int localClientNum, const char* command, char* keyNames[0x128], int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, char*[0x128], int)>(L"CL_GetKeyBinding")(localClientNum, command, keyNames, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetGamePadBinding(int localClientNum, const char* command, char* keyNames[0x128], int bindNum) -> int
{
  return Zynamic::Forward<int (int, const char*, char*[0x128], int)>(L"CL_GetGamePadBinding")(localClientNum, command, keyNames, bindNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsKeyPressed(const int localClientNum, const char* keyName) -> int
{
  return Zynamic::Forward<int (const int, const char*)>(L"CL_IsKeyPressed")(localClientNum, keyName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Key_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_IsCatcherActive(int localClientNum, int mask) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Key_IsCatcherActive")(localClientNum, mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_AddCatcher(int localClientNum, int orMask) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_AddCatcher")(localClientNum, orMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_RemoveCatcher(int localClientNum, int andMask) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_RemoveCatcher")(localClientNum, andMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_SetCatcher(int localClientNum, int catcher) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_SetCatcher")(localClientNum, catcher);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_ContextIndex_SetCatcher(int contextIndex, int catcher) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Key_ContextIndex_SetCatcher")(contextIndex, catcher);
}

#endif // __UNIMPLEMENTED__
