//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_LoadSun(const char* name, struct sunflare_t* sun) -> void
{
  return Zynamic::Forward<void (const char*, struct sunflare_t*)>(L"R_LoadSun")(name, sun);
}

#endif // __UNIMPLEMENTED__
