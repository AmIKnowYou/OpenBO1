//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_com_memory() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_com_memory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualReserve(int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"Z_VirtualReserve")(size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_TryVirtualCommitInternal(void* ptr, int size) -> int
{
  return Zynamic::Forward<int (void*, int)>(L"Z_TryVirtualCommitInternal")(ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualDecommitInternal(void* ptr, int size) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"Z_VirtualDecommitInternal")(ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualFreeInternal(void* ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"Z_VirtualFreeInternal")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_TryVirtualAllocInternal(int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"Z_TryVirtualAllocInternal")(size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualCommitInternal(void* ptr, int size) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"Z_VirtualCommitInternal")(ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_MallocFailed(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"Z_MallocFailed")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AllMemInfo_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_AllMemInfo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_TouchMemory() -> void
{
  return Zynamic::Forward<void ()>(L"Com_TouchMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitHunkMemory() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitHunkMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_CheckTempMemoryClear() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_CheckTempMemoryClear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_CheckTempMemoryHighClear() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_CheckTempMemoryHighClear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FindDataForFileInternal(int type, const char* name, int hash) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Hunk_FindDataForFileInternal")(type, name, hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FindDataForFile(int type, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"Hunk_FindDataForFile")(type, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_DataOnHunk(void* data) -> int
{
  return Zynamic::Forward<int (void*)>(L"Hunk_DataOnHunk")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_SetDataForFile(int type, const char* name, void* data, function* alloc) -> const char*
{
  return Zynamic::Forward<const char* (int, const char*, void*, function *)>(L"Hunk_SetDataForFile")(type, name, data, alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AddData(int type, void* data, function* alloc) -> void
{
  return Zynamic::Forward<void (int, void*, function *)>(L"Hunk_AddData")(type, data, alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearDataFor(struct fileData_s** pFileData, unsigned char* low, unsigned char* high) -> void
{
  return Zynamic::Forward<void (struct fileData_s**, unsigned char*, unsigned char*)>(L"Hunk_ClearDataFor")(pFileData, low, high);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearData() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_ClearData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_OverrideDataForFile(int type, const char* name, void* data) -> void
{
  return Zynamic::Forward<void (int, const char*, void*)>(L"Hunk_OverrideDataForFile")(type, name, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_EnumXAssetsFor(struct fileData_s* fileData, int fileDataType, function* func, void* inData) -> void
{
  return Zynamic::Forward<void (struct fileData_s*, int, function *, void*)>(L"DB_EnumXAssetsFor")(fileData, fileDataType, func, inData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_EnumXAssets_LoadObj(enum XAssetType type, function* func, void* inData, bool includeOverride) -> void
{
  return Zynamic::Forward<void (enum XAssetType, function *, void*, bool)>(L"DB_EnumXAssets_LoadObj")(type, func, inData, includeOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AddAsset(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"Hunk_AddAsset")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_GetAllXAssetOfType_LoadObj(enum XAssetType type, union XAssetHeader* assets, int maxCount) -> int
{
  return Zynamic::Forward<int (enum XAssetType, union XAssetHeader*, int)>(L"DB_GetAllXAssetOfType_LoadObj")(type, assets, maxCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_GetAllXAssetOfType(enum XAssetType type, union XAssetHeader* assets, int maxCount) -> int
{
  return Zynamic::Forward<int (enum XAssetType, union XAssetHeader*, int)>(L"DB_GetAllXAssetOfType")(type, assets, maxCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_EnumXAssets(enum XAssetType type, function* func, void* inData, bool includeOverride) -> void
{
  return Zynamic::Forward<void (enum XAssetType, function *, void*, bool)>(L"DB_EnumXAssets")(type, func, inData, includeOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_SetMark() -> int
{
  return Zynamic::Forward<int ()>(L"Hunk_SetMark")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearToMark(int mark) -> void
{
  return Zynamic::Forward<void (int)>(L"Hunk_ClearToMark")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearToMarkLow(int mark) -> void
{
  return Zynamic::Forward<void (int)>(L"Hunk_ClearToMarkLow")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_Clear() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_Clear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_Used() -> int
{
  return Zynamic::Forward<int ()>(L"Hunk_Used")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_Alloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Hunk_Alloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocAlign(int size, int alignment, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, int, const char*, int)>(L"Hunk_AllocAlign")(size, alignment, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocateTempMemoryHigh(int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"Hunk_AllocateTempMemoryHigh")(size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearTempMemoryHigh() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_ClearTempMemoryHigh")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocLow(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Hunk_AllocLow")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocLowAlign(int size, int alignment, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, int, const char*, int)>(L"Hunk_AllocLowAlign")(size, alignment, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocateTempMemory(int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"Hunk_AllocateTempMemory")(size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FreeTempMemory(void* buf) -> void
{
  return Zynamic::Forward<void (void*)>(L"Hunk_FreeTempMemory")(buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_ClearTempMemory() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_ClearTempMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_TempMeminfo_f() -> void
{
  return Zynamic::Forward<void ()>(L"Com_TempMeminfo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_TryVirtualAlloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_TryVirtualAlloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualAlloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_VirtualAlloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualCommit(void* ptr, int size, int type) -> void
{
  return Zynamic::Forward<void (void*, int, int)>(L"Z_VirtualCommit")(ptr, size, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualFree(void* ptr, int type) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"Z_VirtualFree")(ptr, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_VirtualDecommit(void* ptr, int size, int type) -> void
{
  return Zynamic::Forward<void (void*, int, int)>(L"Z_VirtualDecommit")(ptr, size, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_TryMallocGarbage(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_TryMallocGarbage")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_Free(void* ptr, int type) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"Z_Free")(ptr, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_TryMalloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_TryMalloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_Malloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_Malloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_MallocGarbage(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"Z_MallocGarbage")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyString(const char* in, const char* name, int type, enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*, int, enum scriptInstance_t)>(L"CopyString")(in, name, type, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReplaceString(const char** str, const char* in, const char* name, int type, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char**, const char*, const char*, int, enum scriptInstance_t)>(L"ReplaceString")(str, in, name, type, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeString(const char* str, int type, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, int, enum scriptInstance_t)>(L"FreeString")(str, type, inst);
}

#endif // __UNIMPLEMENTED__
