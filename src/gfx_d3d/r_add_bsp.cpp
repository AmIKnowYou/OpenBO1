//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_InitBspDrawSurf(struct GfxBspDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (struct GfxBspDrawSurfData*)>(L"R_InitBspDrawSurf")(surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PreTessBspDrawSurfs(union GfxDrawSurf drawSurf, const unsigned short* list, unsigned int count, struct GfxBspDrawSurfData* surfData) -> bool
{
  return Zynamic::Forward<bool (union GfxDrawSurf, const unsigned short*, unsigned int, struct GfxBspDrawSurfData*)>(L"R_PreTessBspDrawSurfs")(drawSurf, list, count, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSurfaceFlags(unsigned int surfIndex) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned int)>(L"GetSurfaceFlags")(surfIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WorldLod_GetLodVal(int surfIndex, int localClientNum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"R_WorldLod_GetLodVal")(surfIndex, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WorldLod_GetFadeForDrawSurf(int surface, int& fade, int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int, int&, int)>(L"R_WorldLod_GetFadeForDrawSurf")(surface, fade, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBspDrawSurfs(union GfxDrawSurf drawSurf, const unsigned short* list, unsigned int count, struct GfxBspDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf, const unsigned short*, unsigned int, struct GfxBspDrawSurfData*)>(L"R_AddBspDrawSurfs")(drawSurf, list, count, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesRangeCamera(unsigned int beginSurface, unsigned int endSurface, unsigned int stage, unsigned int maxDrawSurfCount, int localClientNum, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int, unsigned int, int, const struct GfxLight*, int)>(L"R_AddAllBspDrawSurfacesRangeCamera")(beginSurface, endSurface, stage, maxDrawSurfCount, localClientNum, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesCamera(int localClientNum, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, const struct GfxLight*, int)>(L"R_AddAllBspDrawSurfacesCamera")(localClientNum, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesCameraNonlit(unsigned int beginSurface, unsigned int endSurface, unsigned int stage) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int)>(L"R_AddAllBspDrawSurfacesCameraNonlit")(beginSurface, endSurface, stage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesRangeSunShadow(unsigned int partitionIndex, unsigned int beginSurface, unsigned int endSurface, unsigned int maxDrawSurfCount, int localClientNum) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int, unsigned int, int)>(L"R_AddAllBspDrawSurfacesRangeSunShadow")(partitionIndex, beginSurface, endSurface, maxDrawSurfCount, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesSunShadow(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_AddAllBspDrawSurfacesSunShadow")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesSpotShadow(unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int)>(L"R_AddAllBspDrawSurfacesSpotShadow")(spotShadowIndex, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
