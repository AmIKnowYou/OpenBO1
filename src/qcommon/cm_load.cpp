//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cm_load() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cm_load")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_InitThreadData(int threadContext) -> void
{
  return Zynamic::Forward<void (int)>(L"CM_InitThreadData")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_InitAllThreadData() -> void
{
  return Zynamic::Forward<void ()>(L"CM_InitAllThreadData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadMapData_LoadObj(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CM_LoadMapData_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadMapData_FastFile(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CM_LoadMapData_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadMapData(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CM_LoadMapData")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadMap(const char* name, int* checksum) -> void
{
  return Zynamic::Forward<void (const char*, int*)>(L"CM_LoadMap")(name, checksum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_InitRopes() -> void
{
  return Zynamic::Forward<void ()>(L"Rope_InitRopes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShutdownRopes() -> void
{
  return Zynamic::Forward<void ()>(L"ShutdownRopes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"CM_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Unload() -> void
{
  return Zynamic::Forward<void ()>(L"CM_Unload")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LeafCluster(int leafnum) -> int
{
  return Zynamic::Forward<int (int)>(L"CM_LeafCluster")(leafnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ModelBounds(unsigned int model, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned int, float*, float*)>(L"CM_ModelBounds")(model, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ModelSurfaceFlags(unsigned int model) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"CM_ModelSurfaceFlags")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_Alloc(int size, const char* name, int type) -> void*
{
  return Zynamic::Forward<void* (int, const char*, int)>(L"CM_Hunk_Alloc")(size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_CheckTempMemoryHighClear() -> void
{
  return Zynamic::Forward<void ()>(L"CM_Hunk_CheckTempMemoryHighClear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_AllocateTempMemoryHigh(int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (int, const char*)>(L"CM_Hunk_AllocateTempMemoryHigh")(size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_ClearTempMemoryHigh() -> void
{
  return Zynamic::Forward<void ()>(L"CM_Hunk_ClearTempMemoryHigh")();
}

#endif // __UNIMPLEMENTED__
