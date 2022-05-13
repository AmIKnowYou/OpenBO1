//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto LowLevelKeyboardProc(int nCode, unsigned int wParam, long lParam) -> long
{
  return Zynamic::Forward<long (int, unsigned int, long)>(L"LowLevelKeyboardProc")(nCode, wParam, lParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetBlockSystemHotkeys(int block) -> void
{
  return Zynamic::Forward<void (int)>(L"Sys_SetBlockSystemHotkeys")(block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AllowVidRestart() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_AllowVidRestart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_UpdateHotkeyBlock() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_UpdateHotkeyBlock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VID_AppActivate(unsigned long activeState, int minimize) -> void
{
  return Zynamic::Forward<void (unsigned long, int)>(L"VID_AppActivate")(activeState, minimize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsNumLockAffectedVK(unsigned int wParam) -> unsigned long
{
  return Zynamic::Forward<unsigned long (unsigned int)>(L"IsNumLockAffectedVK")(wParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AdustKeyForNumericKeypad(unsigned long key, unsigned int wParam, unsigned long extended) -> unsigned long
{
  return Zynamic::Forward<unsigned long (unsigned long, unsigned int, unsigned long)>(L"AdustKeyForNumericKeypad")(key, wParam, extended);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapKey(long key, unsigned int wParam) -> unsigned char
{
  return Zynamic::Forward<unsigned char (long, unsigned int)>(L"MapKey")(key, wParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MainWndProc(struct HWND__* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) -> long
{
  return Zynamic::Forward<long (struct HWND__*, unsigned int, unsigned int, long)>(L"MainWndProc")(hWnd, uMsg, wParam, lParam);
}

#endif // __UNIMPLEMENTED__
