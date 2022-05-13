//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto mb(int n) -> float
{
  return Zynamic::Forward<float (int)>(L"mb")(n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_memtrack() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_memtrack")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_addbasicinfo(struct meminfo_t* info, int type, int location, int size) -> void
{
  return Zynamic::Forward<void (struct meminfo_t*, int, int, int)>(L"track_addbasicinfo")(info, type, location, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_addbasicmeminfo(struct meminfo_t* sum, struct meminfo_t* in) -> void
{
  return Zynamic::Forward<void (struct meminfo_t*, struct meminfo_t*)>(L"track_addbasicmeminfo")(sum, in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_static_alloc_internal_simple(void* ptr, int size, const char* name, int memTrack) -> void
{
  return Zynamic::Forward<void (void*, int, const char*, int)>(L"track_static_alloc_internal_simple")(ptr, size, name, memTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_static_alloc_internal(void* ptr, int size, const char* name, int type) -> void
{
  return Zynamic::Forward<void (void*, int, const char*, int)>(L"track_static_alloc_internal")(ptr, size, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTempMemInfo(int permanent, const char* name, int type, int usageType, struct TempMemInfo* tempMemInfoArray, int* tempMemInfoCount, bool add_if_missing) -> struct TempMemInfo*
{
  return Zynamic::Forward<struct TempMemInfo* (int, const char*, int, int, struct TempMemInfo*, int*, bool)>(L"GetTempMemInfo")(permanent, name, type, usageType, tempMemInfoArray, tempMemInfoCount, add_if_missing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckHighMemInfo(struct TempMemInfo* tempMemInfo, int hunkSize, int location) -> void
{
  return Zynamic::Forward<void (struct TempMemInfo*, int, int)>(L"CheckHighMemInfo")(tempMemInfo, hunkSize, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_flush_physical_alloc(const char* name, int type) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"track_flush_physical_alloc")(name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_set_max_memory_level(const char* mapName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"track_set_max_memory_level")(mapName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckLowMemInfo(struct TempMemInfo* tempMemInfo, int location) -> void
{
  return Zynamic::Forward<void (struct TempMemInfo*, int)>(L"CheckLowMemInfo")(tempMemInfo, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddTempMemInfo(int size, int hunkSize, int permanent, const char* name, int type, int location, int usageType, struct TempMemInfo* tempMemInfoArray, int* tempMemInfoCount) -> void
{
  return Zynamic::Forward<void (int, int, int, const char*, int, int, int, struct TempMemInfo*, int*)>(L"AddTempMemInfo")(size, hunkSize, permanent, name, type, location, usageType, tempMemInfoArray, tempMemInfoCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveTempMemInfo(int size, int permanent, const char* name, int type, int location, int usageType, struct TempMemInfo* tempMemInfoArray, int* tempMemInfoCount) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int, int, int, struct TempMemInfo*, int*)>(L"RemoveTempMemInfo")(size, permanent, name, type, location, usageType, tempMemInfoArray, tempMemInfoCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_z_alloc(int size, const char* name, int type, void* pos, int project, int overhead) -> void
{
  return Zynamic::Forward<void (int, const char*, int, void*, int, int)>(L"track_z_alloc")(size, name, type, pos, project, overhead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_z_free(int type, void* pos, int overhead) -> void
{
  return Zynamic::Forward<void (int, void*, int)>(L"track_z_free")(type, pos, overhead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_z_commit(int size, int type) -> void
{
  return Zynamic::Forward<void (int, int)>(L"track_z_commit")(size, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_z_decommit(int size, int type) -> void
{
  return Zynamic::Forward<void (int, int)>(L"track_z_decommit")(size, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_physical_alloc(int size, const char* name, int type, int location) -> void
{
  return Zynamic::Forward<void (int, const char*, int, int)>(L"track_physical_alloc")(size, name, type, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_reset() -> void
{
  return Zynamic::Forward<void ()>(L"track_temp_reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_alloc(int size, int hunkSize, int permanent, const char* name) -> void
{
  return Zynamic::Forward<void (int, int, int, const char*)>(L"track_temp_alloc")(size, hunkSize, permanent, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_free(int size, int permanent, const char* name) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"track_temp_free")(size, permanent, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_clear(int permanent) -> void
{
  return Zynamic::Forward<void (int)>(L"track_temp_clear")(permanent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_high_alloc(int size, int hunkSize, int permanent, const char* name) -> void
{
  return Zynamic::Forward<void (int, int, int, const char*)>(L"track_temp_high_alloc")(size, hunkSize, permanent, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_high_reset() -> void
{
  return Zynamic::Forward<void ()>(L"track_temp_high_reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_temp_high_clear(int permanent) -> void
{
  return Zynamic::Forward<void (int)>(L"track_temp_high_clear")(permanent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_userhunk_freerange(void* low, unsigned int size) -> void
{
  return Zynamic::Forward<void (void*, unsigned int)>(L"track_userhunk_freerange")(low, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_userhunk_free(void* ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"track_userhunk_free")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_userhunk_alloc(int size, int pos, const char* name, int type) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int)>(L"track_userhunk_alloc")(size, pos, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_hunk_alloc(int size, int pos, const char* name, int type) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int)>(L"track_hunk_alloc")(size, pos, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_hunk_allocLow(int size, int pos, const char* name, int type) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int)>(L"track_hunk_allocLow")(size, pos, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_set_hunk_size(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"track_set_hunk_size")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_hunk_ClearToMarkHigh(int mark) -> void
{
  return Zynamic::Forward<void (int)>(L"track_hunk_ClearToMarkHigh")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_hunk_ClearToMarkLow(int mark) -> void
{
  return Zynamic::Forward<void (int)>(L"track_hunk_ClearToMarkLow")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_hunk_ClearToStart() -> void
{
  return Zynamic::Forward<void ()>(L"track_hunk_ClearToStart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_init() -> void
{
  return Zynamic::Forward<void ()>(L"track_init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mem_track_compare(const void* elem1, const void* elem2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"mem_track_compare")(elem1, elem2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_getbasicinfo(struct meminfo_t* info) -> void
{
  return Zynamic::Forward<void (struct meminfo_t*)>(L"track_getbasicinfo")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_printf(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"track_printf")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_shutdown(int project) -> void
{
  return Zynamic::Forward<void (int)>(L"track_shutdown")(project);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_PrintInfo() -> void
{
  return Zynamic::Forward<void ()>(L"track_PrintInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto track_PrintAllInfo() -> void
{
  return Zynamic::Forward<void ()>(L"track_PrintAllInfo")();
}

#endif // __UNIMPLEMENTED__
