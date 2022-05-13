//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawQuad(const int* vtxs[0x2], const float* color) -> void
{
  return Zynamic::Forward<void (const int*[0x2], const float*)>(L"DevGui_DrawQuad")(vtxs, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetScreenWidth() -> int
{
  return Zynamic::Forward<int ()>(L"DevGui_GetScreenWidth")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetScreenHeight() -> int
{
  return Zynamic::Forward<int ()>(L"DevGui_GetScreenHeight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawBox(int x, int y, int w, int h, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (int, int, int, int, const unsigned char*)>(L"DevGui_DrawBox")(x, y, w, h, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawBoxCentered(int centerX, int centerY, int w, int h, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (int, int, int, int, const unsigned char*)>(L"DevGui_DrawBoxCentered")(centerX, centerY, w, h, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawBevelBox(int x, int y, int w, int h, float shade, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (int, int, int, int, float, const unsigned char*)>(L"DevGui_DrawBevelBox")(x, y, w, h, shade, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawLine(float* start, float* end, int width, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (float*, float*, int, const unsigned char*)>(L"DevGui_DrawLine")(start, end, width, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_DrawFont(int x, int y, const unsigned char* color, const char* text, float xScale, float yScale) -> void
{
  return Zynamic::Forward<void (int, int, const unsigned char*, const char*, float, float)>(L"DevGui_DrawFont")(x, y, color, text, xScale, yScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetFontWidth(const char* text) -> int
{
  return Zynamic::Forward<int (const char*)>(L"DevGui_GetFontWidth")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetFontHeight() -> int
{
  return Zynamic::Forward<int ()>(L"DevGui_GetFontHeight")();
}

#endif // __UNIMPLEMENTED__
