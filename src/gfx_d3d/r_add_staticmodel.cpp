//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_AddDelayedStaticModelDrawSurf(struct GfxDelayedCmdBuf* delayedCmdBuf, struct XSurface* xsurf, unsigned short* list, unsigned int count, unsigned int which_lod) -> void
{
  return Zynamic::Forward<void (struct GfxDelayedCmdBuf*, struct XSurface*, unsigned short*, unsigned int, unsigned int)>(L"R_AddDelayedStaticModelDrawSurf")(delayedCmdBuf, xsurf, list, count, which_lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PreTessStaticModelCachedList(const struct XModel* model, unsigned short* list, unsigned int count, unsigned int lod, int surfaceIndex, union GfxDrawSurf drawSurf, struct GfxDrawSurfList* drawSurfList, struct GfxDelayedCmdBuf* delayedCmdBuf) -> bool
{
  return Zynamic::Forward<bool (const struct XModel*, unsigned short*, unsigned int, unsigned int, int, union GfxDrawSurf, struct GfxDrawSurfList*, struct GfxDelayedCmdBuf*)>(L"R_PreTessStaticModelCachedList")(model, list, count, lod, surfaceIndex, drawSurf, drawSurfList, delayedCmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsCameraForLod_Internal(const struct XModel* model, unsigned int primaryLightIndex, int modelFade, unsigned short* list, unsigned int count, unsigned int surfType, unsigned int lod, bool prepassSizeCull, struct GfxSModelDrawSurfLightingData* surfData, bool needsCharredTech, unsigned int visLightsMask, bool noDynamicShadow) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned int, int, unsigned short*, unsigned int, unsigned int, unsigned int, bool, struct GfxSModelDrawSurfLightingData*, bool, unsigned int, bool)>(L"R_SkinStaticModelsCameraForLod_Internal")(model, primaryLightIndex, modelFade, list, count, surfType, lod, prepassSizeCull, surfData, needsCharredTech, visLightsMask, noDynamicShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsCameraForLod(const struct XModel* model, unsigned int primaryLightIndex, int modelFade, unsigned short* list, unsigned int count, unsigned int surfType, unsigned int lod, bool prepassSizeCull, struct GfxSModelDrawSurfLightingData* surfData, unsigned int visLightsMask, bool noDynamicShadow) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned int, int, unsigned short*, unsigned int, unsigned int, unsigned int, bool, struct GfxSModelDrawSurfLightingData*, unsigned int, bool)>(L"R_SkinStaticModelsCameraForLod")(model, primaryLightIndex, modelFade, list, count, surfType, lod, prepassSizeCull, surfData, visLightsMask, noDynamicShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsShadowForLod(const struct XModel* model, unsigned short* list, unsigned int count, unsigned int surfType, unsigned int lod, struct GfxSModelDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned short*, unsigned int, unsigned int, unsigned int, struct GfxSModelDrawSurfData*)>(L"R_SkinStaticModelsShadowForLod")(model, list, count, surfType, lod, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsCameraForSurface(const struct XModel* model, unsigned int primaryLightIndex, int modelFade, unsigned short* staticModelLodList[0x128], unsigned short* staticModelLodCount, unsigned int surfType, bool prepassSizeCull, struct GfxSModelDrawSurfLightingData* surfData, unsigned int visLightsMask, bool noDynamicShadow) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned int, int, unsigned short*[0x128], unsigned short*, unsigned int, bool, struct GfxSModelDrawSurfLightingData*, unsigned int, bool)>(L"R_SkinStaticModelsCameraForSurface")(model, primaryLightIndex, modelFade, staticModelLodList, staticModelLodCount, surfType, prepassSizeCull, surfData, visLightsMask, noDynamicShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsShadowForSurface(const struct XModel* model, unsigned short* staticModelLodList[0x128], unsigned short* staticModelLodCount, unsigned int surfType, struct GfxSModelDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned short*[0x128], unsigned short*, unsigned int, struct GfxSModelDrawSurfData*)>(L"R_SkinStaticModelsShadowForSurface")(model, staticModelLodList, staticModelLodCount, surfType, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsCamera(const struct XModel* model, unsigned int primaryLightIndex, int modelFade, unsigned short* staticModelLodList[0x4], unsigned short* staticModelLodCount[0x4], bool prepassSizeCull, struct GfxSModelDrawSurfLightingData* surfData, unsigned int visLightsMask, bool noDynamicShadow) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned int, int, unsigned short*[0x4], unsigned short*[0x4], bool, struct GfxSModelDrawSurfLightingData*, unsigned int, bool)>(L"R_SkinStaticModelsCamera")(model, primaryLightIndex, modelFade, staticModelLodList, staticModelLodCount, prepassSizeCull, surfData, visLightsMask, noDynamicShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinStaticModelsShadow(const struct XModel* model, unsigned short* staticModelLodList[0x4], unsigned short* staticModelLodCount[0x4], struct GfxSModelDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (const struct XModel*, unsigned short*[0x4], unsigned short*[0x4], struct GfxSModelDrawSurfData*)>(L"R_SkinStaticModelsShadow")(model, staticModelLodList, staticModelLodCount, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddStaticModelDebugString(float* origin, const char* string) -> void
{
  return Zynamic::Forward<void (float*, const char*)>(L"R_AddStaticModelDebugString")(origin, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowCountsStaticModel(int smodelIndex, int lod) -> void
{
  return Zynamic::Forward<void (int, int)>(L"R_ShowCountsStaticModel")(smodelIndex, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetStaticModelId(int smodelIndex, int lod) -> struct GfxStaticModelId
{
  return Zynamic::Forward<struct GfxStaticModelId (int, int)>(L"R_GetStaticModelId")(smodelIndex, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelWriteInfoHeader(int fileHandle) -> void
{
  return Zynamic::Forward<void (int)>(L"R_StaticModelWriteInfoHeader")(fileHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelWriteInfo(int fileHandle, const struct GfxStaticModelDrawInst* smodelDrawInst, const float dist) -> void
{
  return Zynamic::Forward<void (int, const struct GfxStaticModelDrawInst*, const float)>(L"R_StaticModelWriteInfo")(fileHandle, smodelDrawInst, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DumpStaticModelLodInfo(const struct GfxStaticModelDrawInst* smodelDrawInst, const float dist) -> void
{
  return Zynamic::Forward<void (const struct GfxStaticModelDrawInst*, const float)>(L"R_DumpStaticModelLodInfo")(smodelDrawInst, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndDumpStaticModelLodInfo() -> void
{
  return Zynamic::Forward<void ()>(L"R_EndDumpStaticModelLodInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesCamera(int viewIndex, int teleported, const struct GfxLight* visibleLights, int visibleLightCount, bool noLodCullOut) -> void
{
  return Zynamic::Forward<void (int, int, const struct GfxLight*, int, bool)>(L"R_AddAllStaticModelSurfacesCamera")(viewIndex, teleported, visibleLights, visibleLightCount, noLodCullOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortAllStaticModelSurfacesCamera() -> void
{
  return Zynamic::Forward<void ()>(L"R_SortAllStaticModelSurfacesCamera")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesRangeSunShadow(int viewIndex, unsigned int partitionIndex, unsigned int maxDrawSurfCount) -> void
{
  return Zynamic::Forward<void (int, unsigned int, unsigned int)>(L"R_AddAllStaticModelSurfacesRangeSunShadow")(viewIndex, partitionIndex, maxDrawSurfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortAllStaticModelSurfacesSunShadow() -> void
{
  return Zynamic::Forward<void ()>(L"R_SortAllStaticModelSurfacesSunShadow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesSunShadow(int viewIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"R_AddAllStaticModelSurfacesSunShadow")(viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesSpotShadow(int viewIndex, unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{
  return Zynamic::Forward<void (int, unsigned int, unsigned int)>(L"R_AddAllStaticModelSurfacesSpotShadow")(viewIndex, spotShadowIndex, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
