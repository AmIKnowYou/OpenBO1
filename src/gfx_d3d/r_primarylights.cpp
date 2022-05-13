//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_ShadowedSpotLightScore(const struct GfxViewParms* viewParms, const struct GfxLight* light) -> float
{
  return Zynamic::Forward<float (const struct GfxViewParms*, const struct GfxLight*)>(L"R_ShadowedSpotLightScore")(viewParms, light);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddPotentiallyShadowedLight(const struct GfxViewInfo* viewInfo, unsigned int shadowableLightIndex, struct GfxCandidateShadowedLight* candidateLights, unsigned int candidateLightCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxViewInfo*, unsigned int, struct GfxCandidateShadowedLight*, unsigned int)>(L"R_AddPotentiallyShadowedLight")(viewInfo, shadowableLightIndex, candidateLights, candidateLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddShadowsForLight(struct GfxViewInfo* viewInfo, unsigned int shadowableLightIndex, unsigned int totalSpotLightCount, float spotShadowFade) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, unsigned int, unsigned int, float)>(L"R_AddShadowsForLight")(viewInfo, shadowableLightIndex, totalSpotLightCount, spotShadowFade);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddShadowedLightToShadowHistory(struct GfxShadowedLightHistory* shadowHistory, unsigned int shadowableLightIndex, float fadeDelta) -> void
{
  return Zynamic::Forward<void (struct GfxShadowedLightHistory*, unsigned int, float)>(L"R_AddShadowedLightToShadowHistory")(shadowHistory, shadowableLightIndex, fadeDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FadeOutShadowHistoryEntries(struct GfxShadowedLightHistory* shadowHistory, float fadeDelta) -> void
{
  return Zynamic::Forward<void (struct GfxShadowedLightHistory*, float)>(L"R_FadeOutShadowHistoryEntries")(shadowHistory, fadeDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearShadowedPrimaryLightHistory(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_ClearShadowedPrimaryLightHistory")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDynamicShadowableLight(struct GfxViewInfo* viewInfo, const struct GfxLight* visibleLight) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxLight*)>(L"R_AddDynamicShadowableLight")(viewInfo, visibleLight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynamicShadowedLight(unsigned int shadowableLightIndex) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"R_IsDynamicShadowedLight")(shadowableLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsPrimaryLight(unsigned int shadowableLightIndex) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"R_IsPrimaryLight")(shadowableLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChooseShadowedLights(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_ChooseShadowedLights")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightEntityShadowBit(int localClientNum, unsigned int entnum, unsigned int primaryLightIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, unsigned int, unsigned int)>(L"R_GetPrimaryLightEntityShadowBit")(localClientNum, entnum, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightDynEntShadowBit(unsigned int entnum, unsigned int primaryLightIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int)>(L"R_GetPrimaryLightDynEntShadowBit")(entnum, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkSphereEntityToPrimaryLights(int localClientNum, unsigned int entityNum, const float* origin, float radius) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const float*, float)>(L"R_LinkSphereEntityToPrimaryLights")(localClientNum, entityNum, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkBoxEntityToPrimaryLights(int localClientNum, unsigned int entityNum, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const float*, const float*)>(L"R_LinkBoxEntityToPrimaryLights")(localClientNum, entityNum, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDynEntToPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType, const float*, const float*)>(L"R_LinkDynEntToPrimaryLights")(dynEntId, drawType, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkEntityFromPrimaryLights(int localClientNum, unsigned int entityNum) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"R_UnlinkEntityFromPrimaryLights")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkDynEntFromPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType)>(L"R_UnlinkDynEntFromPrimaryLights")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntityVisibleToPrimaryLight(int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex) -> int
{
  return Zynamic::Forward<int (int, unsigned int, unsigned int)>(L"R_IsEntityVisibleToPrimaryLight")(localClientNum, entityNum, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynEntVisibleToPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType, unsigned int primaryLightIndex) -> int
{
  return Zynamic::Forward<int (unsigned int, enum DynEntityDrawType, unsigned int)>(L"R_IsDynEntVisibleToPrimaryLight")(dynEntId, drawType, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntityVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, unsigned int shadowableLightIndex) -> int
{
  return Zynamic::Forward<int (unsigned int, unsigned int)>(L"R_IsEntityVisibleToShadowedPrimaryLight")(baseBitIndex, shadowableLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntityVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo* viewInfo, unsigned int entityNum) -> int
{
  return Zynamic::Forward<int (const struct GfxViewInfo*, unsigned int)>(L"R_IsEntityVisibleToAnyShadowedPrimaryLight")(viewInfo, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynEntVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, enum DynEntityDrawType drawType, unsigned int shadowableLightIndex) -> int
{
  return Zynamic::Forward<int (unsigned int, enum DynEntityDrawType, unsigned int)>(L"R_IsDynEntVisibleToShadowedPrimaryLight")(baseBitIndex, drawType, shadowableLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynEntVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo* viewInfo, unsigned int dynEntId, enum DynEntityDrawType drawType) -> int
{
  return Zynamic::Forward<int (const struct GfxViewInfo*, unsigned int, enum DynEntityDrawType)>(L"R_IsDynEntVisibleToAnyShadowedPrimaryLight")(viewInfo, dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNonSunPrimaryLightForBox(const struct GfxViewInfo* viewInfo, const float* boxMidPoint, const float* boxHalfSize) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxViewInfo*, const float*, const float*)>(L"R_GetNonSunPrimaryLightForBox")(viewInfo, boxMidPoint, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNonSunPrimaryLightForSphere(const struct GfxViewInfo* viewInfo, const float* origin, float radius) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxViewInfo*, const float*, float)>(L"R_GetNonSunPrimaryLightForSphere")(viewInfo, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowPrimaryLightDebugLine(const float* lineStartPosition, unsigned int primaryLightIndex, int context) -> void
{
  return Zynamic::Forward<void (const float*, unsigned int, int)>(L"R_ShowPrimaryLightDebugLine")(lineStartPosition, primaryLightIndex, context);
}

#endif // __UNIMPLEMENTED__
