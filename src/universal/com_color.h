//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto SetPixelColorLightGridVec4_PC(unsigned char* v, const float* color, float primaryWeight) -> void
{
  return Zynamic::Forward<void (unsigned char*, const float*, float)>(L"SetPixelColorLightGridVec4_PC")(v, color, primaryWeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4CopyBgraToVertexColor(const unsigned char* rgbaFrom, unsigned char* nativeTo) -> void
{
  return Zynamic::Forward<void (const unsigned char*, unsigned char*)>(L"Byte4CopyBgraToVertexColor")(rgbaFrom, nativeTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4CopyRgbaToVertexColor(const unsigned char* rgbaFrom, unsigned char* nativeTo) -> void
{
  return Zynamic::Forward<void (const unsigned char*, unsigned char*)>(L"Byte4CopyRgbaToVertexColor")(rgbaFrom, nativeTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4PackRgba(const float* from, unsigned char* to) -> void
{
  return Zynamic::Forward<void (const float*, unsigned char*)>(L"Byte4PackRgba")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4UnpackRgba(const unsigned char* from, float* to) -> void
{
  return Zynamic::Forward<void (const unsigned char*, float*)>(L"Byte4UnpackRgba")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4PackVertexColor(const float* from, unsigned char* to) -> void
{
  return Zynamic::Forward<void (const float*, unsigned char*)>(L"Byte4PackVertexColor")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4PackPixelColor(const float* from, unsigned char* to) -> void
{
  return Zynamic::Forward<void (const float*, unsigned char*)>(L"Byte4PackPixelColor")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Byte4UnpackVertexColor(const unsigned char* from, float* to) -> void
{
  return Zynamic::Forward<void (const unsigned char*, float*)>(L"Byte4UnpackVertexColor")(from, to);
}

#endif // __UNIMPLEMENTED__
