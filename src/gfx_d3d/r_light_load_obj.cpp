//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_LoadLightImage(const unsigned char* readPos, struct GfxLightImage* lightImage) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (const unsigned char*, struct GfxLightImage*)>(L"R_LoadLightImage")(readPos, lightImage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightDef(const char* name) -> struct GfxLightDef*
{
  return Zynamic::Forward<struct GfxLightDef* (const char*)>(L"R_LoadLightDef")(name);
}

#endif // __UNIMPLEMENTED__
