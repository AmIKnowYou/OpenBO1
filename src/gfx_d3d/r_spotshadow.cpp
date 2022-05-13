//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SetViewParmsForLight(const struct GfxLight* light, struct GfxViewParms* viewParms, const float nearPlaneBias) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, struct GfxViewParms*, const float)>(L"R_SetViewParmsForLight")(light, viewParms, nearPlaneBias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSpotShadowLookupMatrix(const struct GfxViewParms* shadowViewParms, int usingGridTiling, int usingFullShadowBuffer, unsigned int spotShadowIndex, unsigned int tileCount, struct GfxMatrix* lookupMatrix) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, int, int, unsigned int, unsigned int, struct GfxMatrix*)>(L"R_GetSpotShadowLookupMatrix")(shadowViewParms, usingGridTiling, usingFullShadowBuffer, spotShadowIndex, tileCount, lookupMatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSpotShadowEntCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_AddSpotShadowEntCmd")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSpotShadowModelEntities(int localClientNum, unsigned int primaryLightIndex, const struct GfxLight* light) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const struct GfxLight*)>(L"R_AddSpotShadowModelEntities")(localClientNum, primaryLightIndex, light);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSpotShadowsForLight(struct GfxViewInfo* viewInfo, struct GfxLight* light, unsigned int shadowableLightIndex, unsigned int totalSpotLightCount, float spotShadowFade) -> bool
{
  return Zynamic::Forward<bool (struct GfxViewInfo*, struct GfxLight*, unsigned int, unsigned int, float)>(L"R_AddSpotShadowsForLight")(viewInfo, light, shadowableLightIndex, totalSpotLightCount, spotShadowFade);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateSortedPrimarySpotShadowDrawSurfs(const struct GfxViewInfo* viewInfo, int viewIndex, unsigned int spotShadowIndex, unsigned int shadowableLightIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, int, unsigned int, unsigned int)>(L"R_GenerateSortedPrimarySpotShadowDrawSurfs")(viewInfo, viewIndex, spotShadowIndex, shadowableLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitSpotShadowMapSurfs(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_EmitSpotShadowMapSurfs")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateAllSortedSpotShadowDrawSurfs(struct GfxViewInfo* viewInfo, int viewIndex) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, int)>(L"R_GenerateAllSortedSpotShadowDrawSurfs")(viewInfo, viewIndex);
}

#endif // __UNIMPLEMENTED__
