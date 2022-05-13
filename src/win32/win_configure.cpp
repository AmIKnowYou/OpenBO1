//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sys_SystemMemoryMB() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_SystemMemoryMB")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DetectVideoCard(int descLimit, char* description) -> void
{
  return Zynamic::Forward<void (int, char*)>(L"Sys_DetectVideoCard")(descLimit, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CopyCpuidString(char* dest, const char* source, unsigned int maxLen) -> void
{
  return Zynamic::Forward<void (char*, const char*, unsigned int)>(L"Sys_CopyCpuidString")(dest, source, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DetectCpuVendorAndName(char* vendor, char* name) -> void
{
  return Zynamic::Forward<void (char*, char*)>(L"Sys_DetectCpuVendorAndName")(vendor, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SupportsSSE() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_SupportsSSE")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AddApicIdIfUnique(unsigned int apicId, unsigned int* existingApicId, unsigned int existingCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int*, unsigned int)>(L"Sys_AddApicIdIfUnique")(apicId, existingApicId, existingCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetPhysicalCpuCount(struct SysInfo* sysInfo) -> void
{
  return Zynamic::Forward<void (struct SysInfo*)>(L"Sys_GetPhysicalCpuCount")(sysInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_BenchmarkGHz() -> double
{
  return Zynamic::Forward<double ()>(L"Sys_BenchmarkGHz")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetAutoConfigureGHz(struct SysInfo* sysInfo) -> void
{
  return Zynamic::Forward<void (struct SysInfo*)>(L"Sys_SetAutoConfigureGHz")(sysInfo);
}

#endif // __UNIMPLEMENTED__
