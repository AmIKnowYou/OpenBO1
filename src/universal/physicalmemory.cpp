//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PMem_InitPhysicalMemory(struct PhysicalMemory* pmem, const char* name, void* memory, unsigned int memorySize) -> void
{
  return Zynamic::Forward<void (struct PhysicalMemory*, const char*, void*, unsigned int)>(L"PMem_InitPhysicalMemory")(pmem, name, memory, memorySize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_Init() -> void
{
  return Zynamic::Forward<void ()>(L"PMem_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_BeginAllocInPrim(struct PhysicalMemoryPrim* prim, const char* name, enum EMemTrack memTrack) -> void
{
  return Zynamic::Forward<void (struct PhysicalMemoryPrim*, const char*, enum EMemTrack)>(L"PMem_BeginAllocInPrim")(prim, name, memTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_BeginAlloc(const char* name, unsigned int allocType, enum EMemTrack memTrack) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int, enum EMemTrack)>(L"PMem_BeginAlloc")(name, allocType, memTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_EndAllocInPrim(struct PhysicalMemoryPrim* prim, const char* name) -> void
{
  return Zynamic::Forward<void (struct PhysicalMemoryPrim*, const char*)>(L"PMem_EndAllocInPrim")(prim, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_EndAlloc(const char* name, unsigned int allocType) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"PMem_EndAlloc")(name, allocType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_FreeIndex(struct PhysicalMemoryPrim* prim, unsigned int allocIndex, int location) -> void
{
  return Zynamic::Forward<void (struct PhysicalMemoryPrim*, unsigned int, int)>(L"PMem_FreeIndex")(prim, allocIndex, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_FreeInPrim(struct PhysicalMemoryPrim* prim, const char* name, int location) -> void
{
  return Zynamic::Forward<void (struct PhysicalMemoryPrim*, const char*, int)>(L"PMem_FreeInPrim")(prim, name, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_Free(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"PMem_Free")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PMem_GetOverAllocatedSize() -> int
{
  return Zynamic::Forward<int ()>(L"PMem_GetOverAllocatedSize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _PMem_AllocNamed(unsigned int size, unsigned int alignment, unsigned int type, unsigned int allocType, const char* name, enum EMemTrack memTrack, const char* file, int lineNum) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int, unsigned int, unsigned int, const char*, enum EMemTrack, const char*, int)>(L"_PMem_AllocNamed")(size, alignment, type, allocType, name, memTrack, file, lineNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _PMem_Alloc(unsigned int size, unsigned int alignment, unsigned int type, unsigned int allocType, enum EMemTrack memTrack, const char* file, int lineNum) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int, unsigned int, unsigned int, enum EMemTrack, const char*, int)>(L"_PMem_Alloc")(size, alignment, type, allocType, memTrack, file, lineNum);
}

#endif // __UNIMPLEMENTED__
