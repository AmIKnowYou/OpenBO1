//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_UsingFlameFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingFlameFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingElectrifiedFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingElectrifiedFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingTransportedFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingTransportedFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingWaterSheetingFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingWaterSheetingFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingPoison(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingPoison")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingDepthOfFieldFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingDepthOfFieldFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingGenericFilter(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingGenericFilter")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingReviveFX(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingReviveFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingBlur(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingBlur")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetBloomConstants(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_SetBloomConstants")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BloomStreak(const struct GfxViewInfo* viewInfo, unsigned char& srcRt, unsigned char& dstRt) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned char&, unsigned char&)>(L"RB_BloomStreak")(viewInfo, srcRt, dstRt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetBlurConstants(float radius, float textureScaler) -> void
{
  return Zynamic::Forward<void (float, float)>(L"RB_SetBlurConstants")(radius, textureScaler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetFilmCurveConstants(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_SetFilmCurveConstants")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetVisionSetColorCorrection(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_SetVisionSetColorCorrection")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BloomLDR(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_BloomLDR")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UsingDoubleVision(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"R_UsingDoubleVision")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingColorManipulation(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingColorManipulation")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingMergedPostEffects(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingMergedPostEffects")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UsingPostEffects(const struct GfxViewInfo* viewInfo) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewInfo*)>(L"RB_UsingPostEffects")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetSceneDepthOfFieldEquation(float nearOutOfFocus, float nearInFocus, float farInFocus, float farOutOfFocus, float* dofEquation, float zNear) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float*, float)>(L"RB_GetSceneDepthOfFieldEquation")(nearOutOfFocus, nearInFocus, farInFocus, farOutOfFocus, dofEquation, zNear);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetViewModelDepthOfFieldEquation(float outOfFocus, float inFocus, float* dofEquation) -> void
{
  return Zynamic::Forward<void (float, float, float*)>(L"RB_GetViewModelDepthOfFieldEquation")(outOfFocus, inFocus, dofEquation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetResolvedScene() -> void
{
  return Zynamic::Forward<void ()>(L"RB_GetResolvedScene")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PoisonFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_PoisonFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GenericFilterFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_GenericFilterFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FlameFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_FlameFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ElectrifiedFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_ElectrifiedFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TransportedFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_TransportedFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_WaterSheetingFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_WaterSheetingFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetDepthOfFieldBlurFraction(const struct GfxViewInfo* viewInfo, float pixelRadiusAtSceneRes) -> float
{
  return Zynamic::Forward<float (const struct GfxViewInfo*, float)>(L"RB_GetDepthOfFieldBlurFraction")(viewInfo, pixelRadiusAtSceneRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetDepthOfFieldInputImages(float radius) -> void
{
  return Zynamic::Forward<void (float)>(L"RB_GetDepthOfFieldInputImages")(radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ApplyDepthOfField(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_ApplyDepthOfField")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetBlurRadius(float blurRadiusFromCode) -> float
{
  return Zynamic::Forward<float (float)>(L"RB_GetBlurRadius")(blurRadiusFromCode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ReviveFX(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_ReviveFX")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BlurScreen(const struct GfxViewInfo* viewInfo, float blurRadius) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, float)>(L"RB_BlurScreen")(viewInfo, blurRadius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ProcessPostEffects(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_ProcessPostEffects")(viewInfo);
}

#endif // __UNIMPLEMENTED__
