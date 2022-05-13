//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ShortSortArray<GfxSortDrawSurfsInterface, GfxDrawSurf>(union GfxDrawSurf* lo, union GfxDrawSurf* hi) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, union GfxDrawSurf*)>(L"ShortSortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>")(lo, hi);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto qsortArray<GfxSortDrawSurfsInterface, GfxDrawSurf>(union GfxDrawSurf* elems, int count) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, int)>(L"qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>")(elems, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortDrawSurfs(union GfxDrawSurf* drawSurfList, int surfCount) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, int)>(L"R_SortDrawSurfs")(drawSurfList, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReverseSortDrawSurfs(union GfxDrawSurf* drawSurfList, int surfCount) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, int)>(L"R_ReverseSortDrawSurfs")(drawSurfList, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPrimaryLightShadowSurfaces() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetPrimaryLightShadowSurfaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetWorldDrawSurf(struct GfxSurface* worldSurf) -> union GfxDrawSurf
{
  return Zynamic::Forward<union GfxDrawSurf (struct GfxSurface*)>(L"R_GetWorldDrawSurf")(worldSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortWorldSurfaces() -> void
{
  return Zynamic::Forward<void ()>(L"R_SortWorldSurfaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocFxDrawSurf(unsigned int region) -> union GfxDrawSurf*
{
  return Zynamic::Forward<union GfxDrawSurf* (unsigned int)>(L"R_AllocFxDrawSurf")(region);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMaterialSortKey(const struct Material* material) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct Material*)>(L"R_GetMaterialSortKey")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMaterialInfoPacked(const struct Material* material) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (const struct Material*)>(L"R_GetMaterialInfoPacked")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCodeMeshDrawSurf(struct Material* material, struct r_double_index_t* indices, unsigned int indexCount, unsigned int argOffset, unsigned int argCount, const char* fxName, unsigned int region) -> void
{
  return Zynamic::Forward<void (struct Material*, struct r_double_index_t*, unsigned int, unsigned int, unsigned int, const char*, unsigned int)>(L"R_AddCodeMeshDrawSurf")(material, indices, indexCount, argOffset, argCount, fxName, region);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddRopeCodeMeshDrawSurf(const struct Material* material, struct r_double_index_t* indices, unsigned int indexCount, unsigned int argOffset, unsigned int argCount, unsigned int primaryLightIndex, unsigned int drawsurfRegion) -> void
{
  return Zynamic::Forward<void (const struct Material*, struct r_double_index_t*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)>(L"R_AddRopeCodeMeshDrawSurf")(material, indices, indexCount, argOffset, argCount, primaryLightIndex, drawsurfRegion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddGlassDrawSurf(struct Material* material, unsigned short* indices, unsigned int indexCount, unsigned int lightHandle, unsigned int primaryLightIndex, unsigned int reflectionProbeIndex, unsigned int drawsurfRegion) -> void
{
  return Zynamic::Forward<void (struct Material*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)>(L"R_AddGlassDrawSurf")(material, indices, indexCount, lightHandle, primaryLightIndex, reflectionProbeIndex, drawsurfRegion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddMarkMeshDrawSurf(struct Material* material, const struct GfxMarkContext* context, unsigned short* indices, unsigned int indexCount, const float* hitNormal, unsigned int visLightsMask) -> void
{
  return Zynamic::Forward<void (struct Material*, const struct GfxMarkContext*, unsigned short*, unsigned int, const float*, unsigned int)>(L"R_AddMarkMeshDrawSurf")(material, context, indices, indexCount, hitNormal, visLightsMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddParticleCloudDrawSurf(unsigned int cloudIndex, struct Material* material) -> bool
{
  return Zynamic::Forward<bool (unsigned int, struct Material*)>(L"R_AddParticleCloudDrawSurf")(cloudIndex, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginCodeMeshVerts() -> void
{
  return Zynamic::Forward<void ()>(L"R_BeginCodeMeshVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndCodeMeshVerts() -> void
{
  return Zynamic::Forward<void ()>(L"R_EndCodeMeshVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginMarkMeshVerts() -> void
{
  return Zynamic::Forward<void ()>(L"R_BeginMarkMeshVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndMarkMeshVerts() -> void
{
  return Zynamic::Forward<void ()>(L"R_EndMarkMeshVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeMeshIndices(int indexCount, struct r_double_index_t** indicesOut) -> bool
{
  return Zynamic::Forward<bool (int, struct r_double_index_t**)>(L"R_ReserveCodeMeshIndices")(indexCount, indicesOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeMeshVerts(int vertCount, unsigned short* baseVertex) -> bool
{
  return Zynamic::Forward<bool (int, unsigned short*)>(L"R_ReserveCodeMeshVerts")(vertCount, baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeMeshArgs(int argCount, unsigned int* argOffsetOut) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int*)>(L"R_ReserveCodeMeshArgs")(argCount, argOffsetOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveMarkMeshIndices(int indexCount, struct r_double_index_t** indicesOut) -> bool
{
  return Zynamic::Forward<bool (int, struct r_double_index_t**)>(L"R_ReserveMarkMeshIndices")(indexCount, indicesOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveMarkMeshVerts(int vertCount, unsigned short* baseVertex) -> bool
{
  return Zynamic::Forward<bool (int, unsigned short*)>(L"R_ReserveMarkMeshVerts")(vertCount, baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCodeMeshArgs(unsigned int argOffset[0x4]) -> float*
{
  return Zynamic::Forward<float* (unsigned int[0x4])>(L"R_GetCodeMeshArgs")(argOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCodeMeshVerts(unsigned short baseVertex) -> struct GfxPackedVertex*
{
  return Zynamic::Forward<struct GfxPackedVertex* (unsigned short)>(L"R_GetCodeMeshVerts")(baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMarkMeshVerts(unsigned short baseVertex) -> struct GfxWorldVertex*
{
  return Zynamic::Forward<struct GfxWorldVertex* (unsigned short)>(L"R_GetMarkMeshVerts")(baseVertex);
}

#endif // __UNIMPLEMENTED__
