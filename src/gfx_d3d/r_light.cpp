//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RegisterLightDef_LoadObj(const char* name) -> struct GfxLightDef*
{
  return Zynamic::Forward<struct GfxLightDef* (const char*)>(L"R_RegisterLightDef_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterLightDef_FastFile(const char* name) -> struct GfxLightDef*
{
  return Zynamic::Forward<struct GfxLightDef* (const char*)>(L"R_RegisterLightDef_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterLightDef(const char* name) -> struct GfxLightDef*
{
  return Zynamic::Forward<struct GfxLightDef* (const char*)>(L"R_RegisterLightDef")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitLightDefs() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitLightDefs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownLightDefs() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownLightDefs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightImportanceGreaterEqual(const struct GfxLight* light0, const struct GfxLight* light1) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLight*, const struct GfxLight*)>(L"R_LightImportanceGreaterEqual")(light0, light1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MostImportantLights(const struct GfxLight** lights, int lightCount, int keepCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight**, int, int)>(L"R_MostImportantLights")(lights, lightCount, keepCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPointLightPartitions(struct GfxLight* visibleLights) -> int
{
  return Zynamic::Forward<int (struct GfxLight*)>(L"R_GetPointLightPartitions")(visibleLights);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortBspLightSurfaces(struct GfxSurface* surface0, struct GfxSurface* surface1) -> bool
{
  return Zynamic::Forward<bool (struct GfxSurface*, struct GfxSurface*)>(L"R_SortBspLightSurfaces")(surface0, surface1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllowBspSpotLightShadows(int surfIndex, void* bspLightCallbackAsVoid) -> int
{
  return Zynamic::Forward<int (int, void*)>(L"R_AllowBspSpotLightShadows")(surfIndex, bspLightCallbackAsVoid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllowBspSpotLight(int surfIndex, void* bspLightCallbackAsVoid) -> int
{
  return Zynamic::Forward<int (int, void*)>(L"R_AllowBspSpotLight")(surfIndex, bspLightCallbackAsVoid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcPlaneFromPointDir(float* plane, const float* origin, const float* dir) -> void
{
  return Zynamic::Forward<void (float*, const float*, const float*)>(L"R_CalcPlaneFromPointDir")(plane, origin, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ComputeSpotLightCrossDirs(const struct GfxLight* light, float* crossDirs[0x3]) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, float*[0x3])>(L"R_ComputeSpotLightCrossDirs")(light, crossDirs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcPlaneFromCosSinPointDirs(float* plane, float fCos, float fSin, const float* origin, const float* forward, const float* lateral) -> void
{
  return Zynamic::Forward<void (float*, float, float, const float*, const float*, const float*)>(L"R_CalcPlaneFromCosSinPointDirs")(plane, fCos, fSin, origin, forward, lateral);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcSpotLightPlanes(const struct GfxLight* light, float dynamicSpotLightNearPlaneOffset, float* planes[0x4]) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, float, float*[0x4])>(L"R_CalcSpotLightPlanes")(light, dynamicSpotLightNearPlaneOffset, planes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBspSpotLightSurfs(const struct GfxLight* light, const int lightIndex, struct GfxBspDrawSurfData* surfData) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, const int, struct GfxBspDrawSurfData*)>(L"R_GetBspSpotLightSurfs")(light, lightIndex, surfData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBspLightSurfs(const struct GfxLight* visibleLights, int visibleCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, int)>(L"R_GetBspLightSurfs")(visibleLights, visibleCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllowStaticModelOmniLight(int smodelIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"R_AllowStaticModelOmniLight")(smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllowStaticModelSpotLight(int smodelIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"R_AllowStaticModelSpotLight")(smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetStaticModelLightSurfs(const struct GfxLight* visibleLights, int visibleCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, int)>(L"R_GetStaticModelLightSurfs")(visibleLights, visibleCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SpotLightIsAttachedToDobj(const struct DObj* obj) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*)>(L"R_SpotLightIsAttachedToDobj")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSceneEntLightSurfs(const struct GfxLight* visibleLights, int visibleCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, int)>(L"R_GetSceneEntLightSurfs")(visibleLights, visibleCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetTechniqueForLightType(const struct GfxLight* light, const struct GfxViewInfo* viewInfo) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxLight*, const struct GfxViewInfo*)>(L"R_GetTechniqueForLightType")(light, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitPointLightPartitionSurfs(struct GfxViewInfo* viewInfo, const struct GfxLight* visibleLights, int visibleCount, const float* viewOrigin) -> int
{
  return Zynamic::Forward<int (struct GfxViewInfo*, const struct GfxLight*, int, const float*)>(L"R_EmitPointLightPartitionSurfs")(viewInfo, visibleLights, visibleCount, viewOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitShadowedLightPartitionSurfs(struct GfxViewInfo* viewInfo, int lightDrawSurfCount, const union GfxDrawSurf* lightDrawSurfs, struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, int, const union GfxDrawSurf*, struct GfxDrawSurfListInfo*)>(L"R_EmitShadowedLightPartitionSurfs")(viewInfo, lightDrawSurfCount, lightDrawSurfs, info);
}

#endif // __UNIMPLEMENTED__
