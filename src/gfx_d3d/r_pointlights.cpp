//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GenerateLightGridBasisDirs() -> void
{
  return Zynamic::Forward<void ()>(L"GenerateLightGridBasisDirs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GatherIncidentEnergyInSpaceForLightFromDir(const float* energy, const float* lightFromDir, float* incidentEnergy[0x3]) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*[0x3])>(L"GatherIncidentEnergyInSpaceForLightFromDir")(energy, lightFromDir, incidentEnergy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddLightGridLightingForDir(float* lightingForDir[0x3], struct GfxDecodedLightGridColors* colors) -> void
{
  return Zynamic::Forward<void (float*[0x3], struct GfxDecodedLightGridColors*)>(L"AddLightGridLightingForDir")(lightingForDir, colors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvaluateHeroLightForGrid(const struct GfxHeroLight* light, const float* xyz, float* dirToLight, float* attenuatedColor) -> bool
{
  return Zynamic::Forward<bool (const struct GfxHeroLight*, const float*, float*, float*)>(L"EvaluateHeroLightForGrid")(light, xyz, dirToLight, attenuatedColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitHeroLights() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitHeroLights")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AdjustLightColorSamples(struct GfxDecodedLightGridColors* colors) -> void
{
  return Zynamic::Forward<void (struct GfxDecodedLightGridColors*)>(L"R_AdjustLightColorSamples")(colors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddHeroOnlyLightsToGridColors(struct GfxDecodedLightGridColors* packed, const float* heroPos) -> void
{
  return Zynamic::Forward<void (struct GfxDecodedLightGridColors*, const float*)>(L"R_AddHeroOnlyLightsToGridColors")(packed, heroPos);
}

#endif // __UNIMPLEMENTED__
