//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto HideWindowCallback(struct HWND__* hwnd, long lParam) -> int
{
  return Zynamic::Forward<int (struct HWND__*, long)>(L"HideWindowCallback")(hwnd, lParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FixWindowsDesktop() -> void
{
  return Zynamic::Forward<void ()>(L"FixWindowsDesktop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_assertive() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_assertive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseError(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ParseError")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReadLine(struct _iobuf* fp) -> bool
{
  return Zynamic::Forward<bool (struct _iobuf*)>(L"ReadLine")(fp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SkipLines(int lineCount, struct _iobuf* fp, bool warn) -> bool
{
  return Zynamic::Forward<bool (int, struct _iobuf*, bool)>(L"SkipLines")(lineCount, fp, warn);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseMapFile(struct _iobuf* fp, unsigned int baseAddress, const char* mapName) -> bool
{
  return Zynamic::Forward<bool (struct _iobuf*, unsigned int, const char*)>(L"ParseMapFile")(fp, baseAddress, mapName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetModuleBase(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"GetModuleBase")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadMapFilesForDir(const char* dir) -> void
{
  return Zynamic::Forward<void (const char*)>(L"LoadMapFilesForDir")(dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadMapFiles(char* msg) -> int
{
  return Zynamic::Forward<int (char*)>(L"LoadMapFiles")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Assert_DoStackTrace(char* msg, int nIgnore, int type, void* context) -> int
{
  return Zynamic::Forward<int (char*, int, int, void*)>(L"Assert_DoStackTrace")(msg, nIgnore, type, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Assert_ResetAddressInfo() -> void
{
  return Zynamic::Forward<void ()>(L"Assert_ResetAddressInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Assert_SetMonkeyCallbackHandler(function* AssertCallbackFunc) -> void
{
  return Zynamic::Forward<void (function *)>(L"Assert_SetMonkeyCallbackHandler")(AssertCallbackFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyMessageToClipboard() -> void
{
  return Zynamic::Forward<void ()>(L"CopyMessageToClipboard")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AssertNotify(int type, enum AssertOccurance occurance) -> bool
{
  return Zynamic::Forward<bool (int, enum AssertOccurance)>(L"AssertNotify")(type, occurance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Assert_BuildAssertMessage(const char* expr, const char* filename, int line, int type, int skipLevels, char* message) -> void
{
  return Zynamic::Forward<void (const char*, const char*, int, int, int, char*)>(L"Assert_BuildAssertMessage")(expr, filename, line, type, skipLevels, message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Assert_MyHandler(const char* filename, int line, int type, const char* fmt, ...) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, const char*, ...)>(L"Assert_MyHandler")(filename, line, type, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RefreshQuitOnErrorCondition() -> void
{
  return Zynamic::Forward<void ()>(L"RefreshQuitOnErrorCondition")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuitOnError() -> bool
{
  return Zynamic::Forward<bool ()>(L"QuitOnError")();
}

#endif // __UNIMPLEMENTED__
