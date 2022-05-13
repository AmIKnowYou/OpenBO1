//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_LoadFont(const char* fontName, int imageTrack) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const char*, int)>(L"R_LoadFont")(fontName, imageTrack);
}

#endif // __UNIMPLEMENTED__
