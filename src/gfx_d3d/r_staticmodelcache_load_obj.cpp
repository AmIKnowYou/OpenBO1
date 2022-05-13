//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_AssignSModelCacheIndex(unsigned int smcAllocBits, unsigned int maxEntryCount, unsigned int* smcUseCount) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned int, unsigned int, unsigned int*)>(L"R_AssignSModelCacheIndex")(smcAllocBits, maxEntryCount, smcUseCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSModelCacheAllocBits(const struct XModel* model, unsigned int lod) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XModel*, unsigned int)>(L"R_GetSModelCacheAllocBits")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompareSModelStats_Score(struct GfxSModelSurfStats& s0, struct GfxSModelSurfStats& s1) -> bool
{
  return Zynamic::Forward<bool (struct GfxSModelSurfStats&, struct GfxSModelSurfStats&)>(L"R_CompareSModelStats_Score")(s0, s1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetEntryCount(struct GfxSModelSurfStats* stats) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct GfxSModelSurfStats*)>(L"R_GetEntryCount")(stats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaxModelsInDistRange(const struct GfxStaticModelDrawInst** drawInstArray, unsigned int drawInstCount, const float* mins, const float* maxs, float distMin, float distMax) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxStaticModelDrawInst**, unsigned int, const float*, const float*, float, float)>(L"R_MaxModelsInDistRange")(drawInstArray, drawInstCount, mins, maxs, distMin, distMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSModelListStats(const struct GfxStaticModelDrawInst** drawInstArray, unsigned int drawInstCount, struct GfxSModelSurfStats* stats, unsigned int statsCount, unsigned int statsLimit) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxStaticModelDrawInst**, unsigned int, struct GfxSModelSurfStats*, unsigned int, unsigned int)>(L"R_AddSModelListStats")(drawInstArray, drawInstCount, stats, statsCount, statsLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompareSModels_Model(const struct GfxStaticModelDrawInst* s0, const struct GfxStaticModelDrawInst* s1) -> bool
{
  return Zynamic::Forward<bool (const struct GfxStaticModelDrawInst*, const struct GfxStaticModelDrawInst*)>(L"R_CompareSModels_Model")(s0, s1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OptimalSModelResourceStats(struct GfxWorld* world, struct GfxSModelSurfStats* stats, unsigned int statLimit) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct GfxWorld*, struct GfxSModelSurfStats*, unsigned int)>(L"R_OptimalSModelResourceStats")(world, stats, statLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssignSModelCacheResources(struct GfxWorld* world) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*)>(L"R_AssignSModelCacheResources")(world);
}

#endif // __UNIMPLEMENTED__
