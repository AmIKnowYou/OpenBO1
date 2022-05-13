//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_sky() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_rb_sky")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CalcSunSpriteSamples() -> int
{
  return Zynamic::Forward<int ()>(L"RB_CalcSunSpriteSamples")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateOverTime(float fCurrent, float fGoal, int iFadeInTime, int iFadeOutTime, int frametime) -> float
{
  return Zynamic::Forward<float (float, float, int, int, int)>(L"R_UpdateOverTime")(fCurrent, fGoal, iFadeInTime, iFadeOutTime, frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetTessQuad(union GfxColor color) -> struct GfxVertex*
{
  return Zynamic::Forward<struct GfxVertex* (union GfxColor)>(L"RB_SetTessQuad")(color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TessSunBillboard(float widthInClipSpace, float heightInClipSpace, union GfxColor color) -> void
{
  return Zynamic::Forward<void (float, float, union GfxColor)>(L"RB_TessSunBillboard")(widthInClipSpace, heightInClipSpace, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetSunSampleRectRelativeArea(int widthInPixels, int heightInPixels) -> float
{
  return Zynamic::Forward<float (int, int)>(L"RB_GetSunSampleRectRelativeArea")(widthInPixels, heightInPixels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UpdateSunVisibilityWithoutQuery(struct SunFlareDynamic* sunFlare) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*)>(L"RB_UpdateSunVisibilityWithoutQuery")(sunFlare);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSunQuerySprite(struct SunFlareDynamic* sunFlare) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*)>(L"RB_DrawSunQuerySprite")(sunFlare);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSunFlareCore(float alpha, float sizeIn640x480) -> void
{
  return Zynamic::Forward<void (float, float)>(L"RB_DrawSunFlareCore")(alpha, sizeIn640x480);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSunFlare(struct SunFlareDynamic* sunFlare, int frameTime) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*, int)>(L"RB_DrawSunFlare")(sunFlare, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CalcSunBlind(struct SunFlareDynamic* sunFlare, int frameTime, float* blind, float* glare) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*, int, float*, float*)>(L"RB_CalcSunBlind")(sunFlare, frameTime, blind, glare);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AddSunEffects(struct SunFlareDynamic* sunFlare) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*)>(L"RB_AddSunEffects")(sunFlare);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawBlindAndGlare(struct SunFlareDynamic* sunFlare, int frameTime) -> void
{
  return Zynamic::Forward<void (struct SunFlareDynamic*, int)>(L"RB_DrawBlindAndGlare")(sunFlare, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSun(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"RB_DrawSun")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSunPostEffects(int localClientNum, float sunVisibilityAdjust) -> void
{
  return Zynamic::Forward<void (int, float)>(L"RB_DrawSunPostEffects")(localClientNum, sunVisibilityAdjust);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AllocSunSpriteQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_AllocSunSpriteQueries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FreeSunSpriteQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_FreeSunSpriteQueries")();
}

#endif // __UNIMPLEMENTED__
