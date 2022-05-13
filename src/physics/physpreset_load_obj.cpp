//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PhysPreset_Strcpy(unsigned char* member, const char* keyValue) -> void
{
  return Zynamic::Forward<void (unsigned char*, const char*)>(L"PhysPreset_Strcpy")(member, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysPresetLoadFile(const char* name, function* Alloc) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*, function *)>(L"PhysPresetLoadFile")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysPresetPrecache(const char* name, function* Alloc) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*, function *)>(L"PhysPresetPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysPreset_Register_FastFile(const char* name) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*)>(L"PhysPreset_Register_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocPhysPresetPrecache(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocPhysPresetPrecache")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysPreset_Register_LoadObj(const char* name) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*)>(L"PhysPreset_Register_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysPreset_Register(const char* name) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*)>(L"PhysPreset_Register")(name);
}

#endif // __UNIMPLEMENTED__
