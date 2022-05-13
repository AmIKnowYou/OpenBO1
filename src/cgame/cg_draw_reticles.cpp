//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_CalcCrosshairPosition(const struct cg_s* cgameGlob, float* x, float* y) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*, float*)>(L"CG_CalcCrosshairPosition")(cgameGlob, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeapReticleZoom(const struct cg_s* cgameGlob, float* zoom) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, float*)>(L"CG_GetWeapReticleZoom")(cgameGlob, zoom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawFrameOverlay(float innerLeft, float innerRight, float innerTop, float innerBottom, float centerW, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, const float*, struct Material*)>(L"CG_DrawFrameOverlay")(innerLeft, innerRight, innerTop, innerBottom, centerW, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawNightVisionOverlay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawNightVisionOverlay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UsingLowResViewPort(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_UsingLowResViewPort")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawAdsOverlay(int localClientNum, int weaponIndex, const float* color, const float* crosshairPos) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const float*)>(L"CG_DrawAdsOverlay")(localClientNum, weaponIndex, color, crosshairPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWeapReticle(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_DrawWeapReticle")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ColorCrosshairs(const int time, int startMsec, int lastMsec, int fadeInMsec, int fadeOutMsec) -> bool
{
  return Zynamic::Forward<bool (const int, int, int, int, int)>(L"CG_ColorCrosshairs")(time, startMsec, lastMsec, fadeInMsec, fadeOutMsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcCrosshairColor(const int localClientNum, float alpha, float* color) -> void
{
  return Zynamic::Forward<void (const int, float, float*)>(L"CG_CalcCrosshairColor")(localClientNum, alpha, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawTurretCrossHair(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawTurretCrossHair")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetVehicleCrossHairAlpha(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetVehicleCrossHairAlpha")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldShowCrosshairOnVehicle(const struct cg_s* cgameGlob, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, const struct WeaponDef*)>(L"ShouldShowCrosshairOnVehicle")(cgameGlob, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawVehicleCrossHair(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawVehicleCrossHair")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsReticleTurnedOff(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_IsReticleTurnedOff")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllowedToDrawCrosshair(int localClientNum, const struct playerState_s* predictedPlayerState) -> bool
{
  return Zynamic::Forward<bool (int, const struct playerState_s*)>(L"AllowedToDrawCrosshair")(localClientNum, predictedPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawAdsAimIndicator(int localClientNum, const struct WeaponDef* weapDef, const float* color, float centerX, float centerY, float transScale) -> void
{
  return Zynamic::Forward<void (int, const struct WeaponDef*, const float*, float, float, float)>(L"CG_DrawAdsAimIndicator")(localClientNum, weapDef, color, centerX, centerY, transScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TransitionToAds(const struct cg_s* cgameGlob, const struct WeaponDef* weapDef, float posLerp, float* transScale, float* transShift) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, const struct WeaponDef*, float, float*, float*)>(L"CG_TransitionToAds")(cgameGlob, weapDef, posLerp, transScale, transShift);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawReticleCenter(int localClientNum, const struct WeaponDef* weapDef, const float* color, float centerX, float centerY, float centerW, float transScale) -> void
{
  return Zynamic::Forward<void (int, const struct WeaponDef*, const float*, float, float, float, float)>(L"CG_DrawReticleCenter")(localClientNum, weapDef, color, centerX, centerY, centerW, transScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcReticleSpread(const struct cg_s* cgameGlob, const struct WeaponDef* weapDef, const float* drawSize, float transScale, float* spread) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, const struct WeaponDef*, const float*, float, float*)>(L"CG_CalcReticleSpread")(cgameGlob, weapDef, drawSize, transScale, spread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcReticleColor(const float* baseColor, float alpha, float aimSpreadScale, float* reticleColor) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float*)>(L"CG_CalcReticleColor")(baseColor, alpha, aimSpreadScale, reticleColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcReticleImageOffset(const float* drawSize, float* imageTexelOffset) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"CG_CalcReticleImageOffset")(drawSize, imageTexelOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawReticleSides(int localClientNum, unsigned int weaponIndex, const float* baseColor, float centerX, float centerY, float centerW, float transScale) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const float*, float, float, float, float)>(L"CG_DrawReticleSides")(localClientNum, weaponIndex, baseColor, centerX, centerY, centerW, transScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDrawCrosshair(const struct cg_s* cgameGlob, const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, const struct playerState_s*)>(L"ShouldDrawCrosshair")(cgameGlob, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawCrosshair(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawCrosshair")(localClientNum);
}

#endif // __UNIMPLEMENTED__
