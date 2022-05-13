//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Load_XAssetListCustom() -> void
{
  return Zynamic::Forward<void ()>(L"Load_XAssetListCustom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_XAssetArrayCustom(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Load_XAssetArrayCustom")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_GetLoadedFraction() -> float
{
  return Zynamic::Forward<float ()>(L"DB_GetLoadedFraction")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_FinishedLoadingAssets() -> int
{
  return Zynamic::Forward<int ()>(L"DB_FinishedLoadingAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_FileReadCompletionDummyCallback(unsigned long dwErrorCode, unsigned long dwNumberOfBytesTransfered, struct _OVERLAPPED* lpOverlapped) -> void
{
  return Zynamic::Forward<void (unsigned long, unsigned long, struct _OVERLAPPED*)>(L"DB_FileReadCompletionDummyCallback")(dwErrorCode, dwNumberOfBytesTransfered, lpOverlapped);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ResetZoneSize(int trackLoadProgress) -> void
{
  return Zynamic::Forward<void (int)>(L"DB_ResetZoneSize")(trackLoadProgress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_IsMinimumFastFileLoaded() -> bool
{
  return Zynamic::Forward<bool ()>(L"DB_IsMinimumFastFileLoaded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ResetMinimumFastFileLoaded() -> void
{
  return Zynamic::Forward<void ()>(L"DB_ResetMinimumFastFileLoaded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_CancelLoadXFile() -> void
{
  return Zynamic::Forward<void ()>(L"DB_CancelLoadXFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ReadData() -> int
{
  return Zynamic::Forward<int ()>(L"DB_ReadData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ReadXFileStage() -> void
{
  return Zynamic::Forward<void ()>(L"DB_ReadXFileStage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_WaitXFileStage() -> void
{
  return Zynamic::Forward<void ()>(L"DB_WaitXFileStage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadedExternalData(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"DB_LoadedExternalData")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadXFileDataNullTerminated(unsigned char* pos) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"DB_LoadXFileDataNullTerminated")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadXFileSetSize(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"DB_LoadXFileSetSize")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadXFileData(unsigned char* pos, int size) -> void
{
  return Zynamic::Forward<void (unsigned char*, int)>(L"DB_LoadXFileData")(pos, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadXFileInternal() -> void
{
  return Zynamic::Forward<void ()>(L"DB_LoadXFileInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadXFile(const char* path, void* f, const char* filename, struct XBlock* blocks, function* interrupt, unsigned char* buf, int allocType, int flags) -> bool
{
  return Zynamic::Forward<bool (const char*, void*, const char*, struct XBlock*, function *, unsigned char*, int, int)>(L"DB_LoadXFile")(path, f, filename, blocks, interrupt, buf, allocType, flags);
}

#endif // __UNIMPLEMENTED__
