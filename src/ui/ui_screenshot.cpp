//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_Screenshot_Success(struct dwFileShareReadFileTask* task) -> void
{
  return Zynamic::Forward<void (struct dwFileShareReadFileTask*)>(L"UI_Screenshot_Success")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Screenshot_Failure(struct dwFileShareReadFileTask* task) -> void
{
  return Zynamic::Forward<void (struct dwFileShareReadFileTask*)>(L"UI_Screenshot_Failure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotAlloc() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotAlloc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotDecompressCallback(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"UI_ScreenshotDecompressCallback")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotDecompress(const int localClientNum, int contextIndex) -> bool
{
  return Zynamic::Forward<bool (const int, int)>(L"UI_ScreenshotDecompress")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotHandleInput(int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_ScreenshotHandleInput")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotUpdate(const int localClientNum, int contextIndex) -> void
{
  return Zynamic::Forward<void (const int, int)>(L"UI_ScreenshotUpdate")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotDownload(const int localClientNum, int context, unsigned __int64 fileID, unsigned int fileSize) -> void
{
  return Zynamic::Forward<void (const int, int, unsigned __int64, unsigned int)>(L"UI_ScreenshotDownload")(localClientNum, context, fileID, fileSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotDraw(const int localClientNum, int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, const struct rectDef_s*, const float*)>(L"UI_ScreenshotDraw")(localClientNum, contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotDownload_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotDownload_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotAbortDownload_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotAbortDownload_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotZoom_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotZoom_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ScreenshotInit() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ScreenshotInit")();
}

#endif // __UNIMPLEMENTED__
