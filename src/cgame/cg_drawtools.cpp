//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_GetPicWidth(struct Material* mat) -> float
{
  return Zynamic::Forward<float (struct Material*)>(L"CG_GetPicWidth")(mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPicPhysicalW(const struct ScreenPlacement* scrPlace, float x, float y, float w, float width, float height, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, float, float, const float*, struct Material*)>(L"CG_DrawRotatedPicPhysicalW")(scrPlace, x, y, w, width, height, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPicPhysical(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, float, const float*, struct Material*)>(L"CG_DrawRotatedPicPhysical")(scrPlace, x, y, width, height, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPicW(const struct ScreenPlacement* scrPlace, float x, float y, float w, float width, float height, int horzAlign, int vertAlign, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, float, int, int, float, const float*, struct Material*)>(L"CG_DrawRotatedPicW")(scrPlace, x, y, w, width, height, horzAlign, vertAlign, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPic(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, const float*, struct Material*)>(L"CG_DrawRotatedPic")(scrPlace, x, y, width, height, horzAlign, vertAlign, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedQuadPic(const struct ScreenPlacement* scrPlace, float x, float y, const float* verts[0x2], float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, const float*[0x2], float, const float*, struct Material*)>(L"CG_DrawRotatedQuadPic")(scrPlace, x, y, verts, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawVLine(const struct ScreenPlacement* scrPlace, float x, float top, float lineWidth, float height, int horzAlign, int vertAlign, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, const float*, struct Material*)>(L"CG_DrawVLine")(scrPlace, x, top, lineWidth, height, horzAlign, vertAlign, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawStringExt(const struct ScreenPlacement* scrPlace, float x, float y, const char* string, const float* setColor, int forceColor, int shadow, float charHeight, int adjust) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, const char*, const float*, int, int, float, int)>(L"CG_DrawStringExt")(scrPlace, x, y, string, setColor, forceColor, shadow, charHeight, adjust);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawDevString(const struct ScreenPlacement* scrPlace, float x, float y, float xScale, float yScale, const char* s, const float* color, int align, struct Font_s* font) -> int
{
  return Zynamic::Forward<int (const struct ScreenPlacement*, float, float, float, float, const char*, const float*, int, struct Font_s*)>(L"CG_DrawDevString")(scrPlace, x, y, xScale, yScale, s, color, align, font);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawBigDevString(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, float alpha, int align) -> int
{
  return Zynamic::Forward<int (const struct ScreenPlacement*, float, float, const char*, float, int)>(L"CG_DrawBigDevString")(scrPlace, x, y, s, alpha, align);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawBigDevStringColor(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, const float* color, int align) -> int
{
  return Zynamic::Forward<int (const struct ScreenPlacement*, float, float, const char*, const float*, int)>(L"CG_DrawBigDevStringColor")(scrPlace, x, y, s, color, align);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSmallDevStringColor(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, const float* color, int align) -> int
{
  return Zynamic::Forward<int (const struct ScreenPlacement*, float, float, const char*, const float*, int)>(L"CG_DrawSmallDevStringColor")(scrPlace, x, y, s, color, align);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec) -> float
{
  return Zynamic::Forward<float (int, int, int, int)>(L"CG_FadeAlpha")(timeNow, startMsec, totalMsec, fadeMsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec) -> float*
{
  return Zynamic::Forward<float* (int, int, int, int)>(L"CG_FadeColor")(timeNow, startMsec, totalMsec, fadeMsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MiniMapChanged(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_MiniMapChanged")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NorthDirectionChanged(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_NorthDirectionChanged")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugStar(const float* point, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, int)>(L"G_DebugStar")(point, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugBox(const float* origin, const float* mins, const float* maxs, float yaw, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float, const float*, int, int)>(L"G_DebugBox")(origin, mins, maxs, yaw, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugBoxOriented(const float* origin, const float* mins, const float* maxs, const float* rotation[0x3], const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, const float*[0x3], const float*, int, int)>(L"CG_DebugBoxOriented")(origin, mins, maxs, rotation, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugCircleEx(const float* center, float radius, const float* dir, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*, const float*, int, int)>(L"G_DebugCircleEx")(center, radius, dir, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScoreboardTeamColor(int localClientNum, int team, float* color) -> void
{
  return Zynamic::Forward<void (int, int, float*)>(L"CG_ScoreboardTeamColor")(localClientNum, team, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RelativeTeamColor(int clientNum, float* color, int localClientNum) -> void
{
  return Zynamic::Forward<void (int, float*, int)>(L"CG_RelativeTeamColor")(clientNum, color, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_XModelDebugBoxes(int localClientNum, const struct centity_s* cent, const float* color, int* partBits, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const float*, int*, int)>(L"CG_XModelDebugBoxes")(localClientNum, cent, color, partBits, duration);
}

#endif // __UNIMPLEMENTED__
