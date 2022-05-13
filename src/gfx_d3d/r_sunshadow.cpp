//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_CalcBoxVsCylinderRayMinBox(const float* box, const float* origin, const float* forward, float radius, float* outBox) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float, float*)>(L"R_CalcBoxVsCylinderRayMinBox")(box, origin, forward, radius, outBox);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSceneExtentsAlongDir(const float* origin, const float* forward, float* nearCap, float* farCap) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*, float*)>(L"R_GetSceneExtentsAlongDir")(origin, forward, nearCap, farCap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSunAxes(float* sunAxis[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"R_GetSunAxes")(sunAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClipSpaceToWorldSpace(const struct GfxMatrix* invViewProjMtx, const float* clipSpacePoints[0x3], int pointCount, float* worldSpacePoints[0x3]) -> void
{
  return Zynamic::Forward<void (const struct GfxMatrix*, const float*[0x3], int, float*[0x3])>(L"R_ClipSpaceToWorldSpace")(invViewProjMtx, clipSpacePoints, pointCount, worldSpacePoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFrustumNearClipPoints(const struct GfxMatrix* invViewProjMtx, float* frustumPoints[0x3]) -> void
{
  return Zynamic::Forward<void (const struct GfxMatrix*, float*[0x3])>(L"R_GetFrustumNearClipPoints")(invViewProjMtx, frustumPoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupSunShadowBoundingPoly(const float* frustumPointsInSunProj[0x2], const float* viewOrgInSunProj, const float* snappedViewOrgInSunProj, float maxSizeInSunProj, const float* snappedViewOrgInClipSpace, struct GfxSunShadowBoundingPoly* boundingPoly, unsigned int pointCount) -> void
{
  return Zynamic::Forward<void (const float*[0x2], const float*, const float*, float, const float*, struct GfxSunShadowBoundingPoly*, unsigned int)>(L"R_SetupSunShadowBoundingPoly")(frustumPointsInSunProj, viewOrgInSunProj, snappedViewOrgInSunProj, maxSizeInSunProj, snappedViewOrgInClipSpace, boundingPoly, pointCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SunShadowMapBoundingPoly(const struct GfxSunShadowBoundingPoly* boundingPoly, float sampleSize, float* polyInClipSpace[0x2], int* pointIsNear, unsigned int partitionRes) -> void
{
  return Zynamic::Forward<void (const struct GfxSunShadowBoundingPoly*, float, float*[0x2], int*, unsigned int)>(L"R_SunShadowMapBoundingPoly")(boundingPoly, sampleSize, polyInClipSpace, pointIsNear, partitionRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SunShadowMapClipSpaceClipPlanes(const struct GfxSunShadowBoundingPoly* boundingPoly, int partitionIndex, float sampleSize, float* boundingPolyClipSpacePlanes[0x4], unsigned int partitionRes) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxSunShadowBoundingPoly*, int, float, float*[0x4], unsigned int)>(L"R_SunShadowMapClipSpaceClipPlanes")(boundingPoly, partitionIndex, sampleSize, boundingPolyClipSpacePlanes, partitionRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupSunShadowMapViewMatrix(const float* snappedViewOrgInSunProj, const float* sunAxis[0x3], struct GfxSunShadowProjection* sunProj) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], struct GfxSunShadowProjection*)>(L"R_SetupSunShadowMapViewMatrix")(snappedViewOrgInSunProj, sunAxis, sunProj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SunShadowMapProjectionMatrix(const float* snappedViewOrgInClipSpace, float shadowSampleSize, float nearClip, float farClip, struct GfxViewParms* shadowViewParms, unsigned int partitionRes) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float, struct GfxViewParms*, unsigned int)>(L"R_SunShadowMapProjectionMatrix")(snappedViewOrgInClipSpace, shadowSampleSize, nearClip, farClip, shadowViewParms, partitionRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupSunShadowMapPartitionFraction(const struct GfxViewParms* viewParms, float scaleToFitUsable, struct GfxSunShadowProjection* sunProj, float* partitionFraction) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, float, struct GfxSunShadowProjection*, float*)>(L"R_SetupSunShadowMapPartitionFraction")(viewParms, scaleToFitUsable, sunProj, partitionFraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSunShadowMapPartitionViewOrgInTextureSpace(const float* viewOrgInPixels, const float* viewOrgInSunProj, const float* snappedViewOrgInSunProj, float sampleSize, float* viewOrgInTexSpace, unsigned int partitionRes) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float, float*, unsigned int)>(L"R_GetSunShadowMapPartitionViewOrgInTextureSpace")(viewOrgInPixels, viewOrgInSunProj, snappedViewOrgInSunProj, sampleSize, viewOrgInTexSpace, partitionRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupNearRegionPlane(const float* partitionFraction) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_SetupNearRegionPlane")(partitionFraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupSunShadowMapProjection(const struct GfxViewParms* viewParms, const float* sunAxis[0x3], struct GfxSunShadow* sunShadow, float* snappedViewOrgInClipSpace[0x2], float* partitionFraction, unsigned int partitionRes) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, const float*[0x3], struct GfxSunShadow*, float*[0x2], float*, unsigned int)>(L"R_SetupSunShadowMapProjection")(viewParms, sunAxis, sunShadow, snappedViewOrgInClipSpace, partitionFraction, partitionRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSunShadowLookupMatrix(const struct GfxViewParms* shadowViewParms, const struct GfxSunShadowProjection* sunProj, const float* partitionFraction, struct GfxMatrix* lookupMatrix) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, const struct GfxSunShadowProjection*, const float*, struct GfxMatrix*)>(L"R_GetSunShadowLookupMatrix")(shadowViewParms, sunProj, partitionFraction, lookupMatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupSunShadowMaps(const struct GfxViewParms* viewParms, struct GfxSunShadow* sunShadow) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, struct GfxSunShadow*)>(L"R_SetupSunShadowMaps")(viewParms, sunShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SunShadowMaps(struct GfxSunShadow* sunShadow) -> void
{
  return Zynamic::Forward<void (struct GfxSunShadow*)>(L"R_SunShadowMaps")(sunShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MergeAndEmitSunShadowMapsSurfs(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_MergeAndEmitSunShadowMapsSurfs")(viewInfo);
}

#endif // __UNIMPLEMENTED__
