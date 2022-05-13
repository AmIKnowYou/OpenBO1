//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_win_syscon() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_win_syscon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConWndProc(struct HWND__* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) -> long
{
  return Zynamic::Forward<long (struct HWND__*, unsigned int, unsigned int, long)>(L"ConWndProc")(hWnd, uMsg, wParam, lParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InputLineWndProc(struct HWND__* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) -> long
{
  return Zynamic::Forward<long (struct HWND__*, unsigned int, unsigned int, long)>(L"InputLineWndProc")(hWnd, uMsg, wParam, lParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Conbuf_CleanText(const char* source, char* target, int sizeofTarget) -> int
{
  return Zynamic::Forward<int (const char*, char*, int)>(L"Conbuf_CleanText")(source, target, sizeofTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CreateConsole(struct HINSTANCE__* hInstance) -> void
{
  return Zynamic::Forward<void (struct HINSTANCE__*)>(L"Sys_CreateConsole")(hInstance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DestroyConsole() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_DestroyConsole")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ShowConsole() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ShowConsole")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ConsoleInput() -> char*
{
  return Zynamic::Forward<char* ()>(L"Sys_ConsoleInput")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Conbuf_AppendText(const char* pMsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Conbuf_AppendText")(pMsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Conbuf_AppendTextInMainThread(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Conbuf_AppendTextInMainThread")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetErrorText(const char* buf) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Sys_SetErrorText")(buf);
}

#endif // __UNIMPLEMENTED__
