//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_GetPerkIndexForName(const char* perkName) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"BG_GetPerkIndexForName")(perkName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPerkNameForIndex(unsigned int perkIndex) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int)>(L"BG_GetPerkNameForIndex")(perkIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Perks_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Perks_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
