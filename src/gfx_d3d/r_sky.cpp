//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RegisterSunDvars() -> void
{
  return Zynamic::Forward<void ()>(L"R_RegisterSunDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSunFromDvars(struct sunflare_t* sun) -> void
{
  return Zynamic::Forward<void (struct sunflare_t*)>(L"R_SetSunFromDvars")(sun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSunDvarCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_GetSunDvarCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadSunThroughDvars(const char* sunName, struct sunflare_t* sun) -> void
{
  return Zynamic::Forward<void (const char*, struct sunflare_t*)>(L"R_LoadSunThroughDvars")(sunName, sun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Cmd_LoadSun() -> void
{
  return Zynamic::Forward<void ()>(L"R_Cmd_LoadSun")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveSunFromDvars(const char* sunName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_SaveSunFromDvars")(sunName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Cmd_SaveSun() -> void
{
  return Zynamic::Forward<void ()>(L"R_Cmd_SaveSun")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FlushSun() -> void
{
  return Zynamic::Forward<void ()>(L"R_FlushSun")();
}

#endif // __UNIMPLEMENTED__
