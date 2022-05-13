//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetCharacterGlyph(struct Font_s* font, unsigned int letter) -> const struct Glyph*
{
  return Zynamic::Forward<const struct Glyph* (struct Font_s*, unsigned int)>(L"R_GetCharacterGlyph")(font, letter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FontGetRandomLetter(struct Font_s* font, int seed) -> const unsigned int
{
  return Zynamic::Forward<const unsigned int (struct Font_s*, int)>(L"R_FontGetRandomLetter")(font, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FontGetRandomNumberCharacter(struct Font_s* font, int seed) -> const unsigned int
{
  return Zynamic::Forward<const unsigned int (struct Font_s*, int)>(L"R_FontGetRandomNumberCharacter")(font, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_r_font() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_font")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterFont_LoadObj(const char* fontName, int imageTrack) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const char*, int)>(L"R_RegisterFont_LoadObj")(fontName, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterFont_FastFile(const char* fontName, int imageTrack) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const char*, int)>(L"R_RegisterFont_FastFile")(fontName, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterFont(const char* name, int imageTrack) -> struct Font_s*
{
  return Zynamic::Forward<struct Font_s* (const char*, int)>(L"R_RegisterFont")(name, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitFonts() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitFonts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownFonts() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownFonts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_NormalizedTextScale(struct Font_s* font, float scale) -> float
{
  return Zynamic::Forward<float (struct Font_s*, float)>(L"R_NormalizedTextScale")(font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LetterWidth(unsigned int letter, struct Font_s* font) -> int
{
  return Zynamic::Forward<int (unsigned int, struct Font_s*)>(L"R_LetterWidth")(letter, font);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextWidth(const char* text, int maxChars, struct Font_s* font) -> int
{
  return Zynamic::Forward<int (const char*, int, struct Font_s*)>(L"R_TextWidth")(text, maxChars, font);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextHeight(struct Font_s* font) -> int
{
  return Zynamic::Forward<int (struct Font_s*)>(L"R_TextHeight")(font);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextLineWrapPosition(const char* text, int bufferSize, int pixelsAvailable, struct Font_s* font, float scale) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int, int, struct Font_s*, float)>(L"R_TextLineWrapPosition")(text, bufferSize, pixelsAvailable, font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ConsoleTextWidth(const char* textPool, int poolSize, int firstChar, int charCount, struct Font_s* font) -> int
{
  return Zynamic::Forward<int (const char*, int, int, int, struct Font_s*)>(L"R_ConsoleTextWidth")(textPool, poolSize, firstChar, charCount, font);
}

#endif // __UNIMPLEMENTED__
