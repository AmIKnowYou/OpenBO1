//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_staticmodelcache() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_staticmodelcache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_FreeCachedSurface_r(struct static_model_tree_t* tree, union static_model_leaf_t* leafs, int nodeIndex, int levelsToLeaf) -> void
{
  return Zynamic::Forward<void (struct static_model_tree_t*, union static_model_leaf_t*, int, int)>(L"SMC_FreeCachedSurface_r")(tree, leafs, nodeIndex, levelsToLeaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_ForceFreeBlock(unsigned int smcIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"SMC_ForceFreeBlock")(smcIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_GetFreeBlockOfSize(unsigned int smcIndex, unsigned int listIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int, unsigned int)>(L"SMC_GetFreeBlockOfSize")(smcIndex, listIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_GetLeaf(unsigned int cacheIndex) -> union static_model_leaf_t*
{
  return Zynamic::Forward<union static_model_leaf_t* (unsigned int)>(L"SMC_GetLeaf")(cacheIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_Allocate(unsigned int smcIndex, unsigned int bitCount) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned int, unsigned int)>(L"SMC_Allocate")(smcIndex, bitCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupTransformUnitVec(const union float4* mtx, int* fixedMtx[0x3]) -> void
{
  return Zynamic::Forward<void (const union float4*, int*[0x3])>(L"SetupTransformUnitVec")(mtx, fixedMtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalTransformUnitVec(const union PackedUnitVec in, const int* fixedMtx[0x3]) -> union PackedUnitVec
{
  return Zynamic::Forward<union PackedUnitVec (const union PackedUnitVec, const int*[0x3])>(L"LocalTransformUnitVec")(in, fixedMtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceStaticVerts(const union float4* useAxis, const int* normAxis[0x3], unsigned int baseVertIndex, unsigned int vertCount, const struct GfxPackedVertex* srcVertArray, unsigned int smodelIndex, struct GfxSModelCachedVertex* verts) -> void
{
  return Zynamic::Forward<void (const union float4*, const int*[0x3], unsigned int, unsigned int, const struct GfxPackedVertex*, unsigned int, struct GfxSModelCachedVertex*)>(L"R_SkinXSurfaceStaticVerts")(useAxis, normAxis, baseVertIndex, vertCount, srcVertArray, smodelIndex, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CacheStaticModelIndices(unsigned int smodelIndex, unsigned int lod, unsigned int cacheBaseVertIndex) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int)>(L"R_CacheStaticModelIndices")(smodelIndex, lod, cacheBaseVertIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinCachedStaticModelCmd(struct SkinCachedStaticModelCmd* skinCmd) -> void
{
  return Zynamic::Forward<void (struct SkinCachedStaticModelCmd*)>(L"R_SkinCachedStaticModelCmd")(skinCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCachedSModelSurf(unsigned int cacheIndex) -> struct GfxCachedSModelSurf*
{
  return Zynamic::Forward<struct GfxCachedSModelSurf* (unsigned int)>(L"R_GetCachedSModelSurf")(cacheIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CacheStaticModelSurface(unsigned int smcIndex, unsigned int smodelIndex, const struct XModelLodInfo* lodInfo) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned int, unsigned int, const struct XModelLodInfo*)>(L"R_CacheStaticModelSurface")(smcIndex, smodelIndex, lodInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticModelCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_AllocStaticModelCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SMC_ClearCache() -> void
{
  return Zynamic::Forward<void ()>(L"SMC_ClearCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitStaticModelCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitStaticModelCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FlushStaticModelCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_FlushStaticModelCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearAllStaticModelCacheRefs() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearAllStaticModelCacheRefs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UncacheStaticModel(unsigned int smodelIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_UncacheStaticModel")(smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownStaticModelCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownStaticModelCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelCacheStats_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_StaticModelCacheStats_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelCacheFlush_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_StaticModelCacheFlush_f")();
}

#endif // __UNIMPLEMENTED__
