//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_IsBspLoaded() -> bool
{
  return Zynamic::Forward<bool ()>(L"Com_IsBspLoaded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBspLumpCountForVersion(const int version) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const int)>(L"Com_GetBspLumpCountForVersion")(version);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ValidateBspLumpData(enum LumpType type, unsigned int offset, unsigned int length, unsigned int elemSize, unsigned int* count) -> const void*
{
  return Zynamic::Forward<const void* (enum LumpType, unsigned int, unsigned int, unsigned int, unsigned int*)>(L"Com_ValidateBspLumpData")(type, offset, length, elemSize, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBspLump(enum LumpType type, unsigned int elemSize, unsigned int* count) -> const void*
{
  return Zynamic::Forward<const void* (enum LumpType, unsigned int, unsigned int*)>(L"Com_GetBspLump")(type, elemSize, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ReadLumpOutOfBspAtOffset(int h, enum LumpType type, unsigned int offset, unsigned int length, unsigned int elemSize, unsigned int* count) -> const void*
{
  return Zynamic::Forward<const void* (int, enum LumpType, unsigned int, unsigned int, unsigned int, unsigned int*)>(L"Com_ReadLumpOutOfBspAtOffset")(h, type, offset, length, elemSize, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ReadLumpOutOfBsp(int h, enum LumpType type, unsigned int elemSize, unsigned int* count) -> const void*
{
  return Zynamic::Forward<const void* (int, enum LumpType, unsigned int, unsigned int*)>(L"Com_ReadLumpOutOfBsp")(h, type, elemSize, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadBspLump(const char* mapname, enum LumpType type, unsigned int elemSize, unsigned int* count) -> const void*
{
  return Zynamic::Forward<const void* (const char*, enum LumpType, unsigned int, unsigned int*)>(L"Com_LoadBspLump")(mapname, type, elemSize, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UnloadBspLump(enum LumpType type) -> void
{
  return Zynamic::Forward<void (enum LumpType)>(L"Com_UnloadBspLump")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_BspHasLump(enum LumpType type) -> bool
{
  return Zynamic::Forward<bool (enum LumpType)>(L"Com_BspHasLump")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBspVersion() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Com_GetBspVersion")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBspChecksum() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Com_GetBspChecksum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CheckVersionLumpCountError(int version) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Com_CheckVersionLumpCountError")(version);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_BspError() -> bool
{
  return Zynamic::Forward<bool ()>(L"Com_BspError")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadBsp(const char* filename) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadBsp")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UnloadBsp() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UnloadBsp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_CleanupBsp() -> void
{
  return Zynamic::Forward<void ()>(L"Com_CleanupBsp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_EntityString(int* numEntityChars) -> const char*
{
  return Zynamic::Forward<const char* (int*)>(L"Com_EntityString")(numEntityChars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SaveLump(enum LumpType type, const void* newLump, unsigned int size, enum ComSaveLumpBehavior behavior) -> void
{
  return Zynamic::Forward<void (enum LumpType, const void*, unsigned int, enum ComSaveLumpBehavior)>(L"Com_SaveLump")(type, newLump, size, behavior);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetHunkStringCopy(const char* string) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Com_GetHunkStringCopy")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetLightDefName(const char* defName, const struct ComPrimaryLight* primaryLights, unsigned int primaryLightCount) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const struct ComPrimaryLight*, unsigned int)>(L"Com_GetLightDefName")(defName, primaryLights, primaryLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadPrimaryLights_Version14() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadPrimaryLights_Version14")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadPrimaryLights_Version16() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadPrimaryLights_Version16")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadPrimaryLights() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadPrimaryLights")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_BurnableCellSort(const void* va, const void* vb) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"Com_BurnableCellSort")(va, vb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadWaterData() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadWaterData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_PackBurnableSample(const struct DiskBurnableSample* in, struct ComBurnableSample* out) -> void
{
  return Zynamic::Forward<void (const struct DiskBurnableSample*, struct ComBurnableSample*)>(L"Com_PackBurnableSample")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadBurnableData() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LoadBurnableData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadWorld_LoadObj(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadWorld_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadWorld_FastFile(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadWorld_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadWorld(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_LoadWorld")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ShutdownWorld() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ShutdownWorld")();
}

#endif // __UNIMPLEMENTED__
