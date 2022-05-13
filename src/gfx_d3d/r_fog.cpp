//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_ClearFogs() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearFogs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetFogFromServer(int localClientNum, float start, float r, float g, float b, float density, float heightDensity, float baseHeight, float fogColorScale, float sunFogColorR, float sunFogColorG, float sunFogColorB, float sunFogDirX, float sunFogDirY, float sunFogDirZ, float sunFogStartAng, float sunFogEndAng, float fogMaxOpacity) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)>(L"R_SetFogFromServer")(localClientNum, start, r, g, b, density, heightDensity, baseHeight, fogColorScale, sunFogColorR, sunFogColorG, sunFogColorB, sunFogDirX, sunFogDirY, sunFogDirZ, sunFogStartAng, sunFogEndAng, fogMaxOpacity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFogSettings(float* fogSettings) -> void
{
  return Zynamic::Forward<void (float*)>(L"R_GetFogSettings")(fogSettings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SwitchFog(int localClientNum, int fogvar, int startTime, int transitionTime) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"R_SwitchFog")(localClientNum, fogvar, startTime, transitionTime);
}

#endif // __UNIMPLEMENTED__
