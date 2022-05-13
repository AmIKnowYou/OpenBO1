//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticModels(struct GfxAabbTree* tree) -> void
{
  return Zynamic::Forward<void (struct GfxAabbTree*)>(L"R_AllocStaticModels")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortGfxAabbTreeChildren(struct GfxWorld* world, float* mins, float* maxs, unsigned short* staticModels, int staticModelCount) -> int
{
  return Zynamic::Forward<int (struct GfxWorld*, float*, float*, unsigned short*, int)>(L"R_SortGfxAabbTreeChildren")(world, mins, maxs, staticModels, staticModelCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareStaticModels(const void* smodel0, const void* smodel1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareStaticModels")(smodel0, smodel1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortGfxAabbTree(struct GfxWorld* world, struct GfxAabbTree* tree) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, struct GfxAabbTree*)>(L"R_SortGfxAabbTree")(world, tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddStaticModelToAabbTree_r(struct GfxWorld* world, struct GfxAabbTree* tree, int smodelIndex) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, struct GfxAabbTree*, int)>(L"R_AddStaticModelToAabbTree_r")(world, tree, smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddStaticModelToCell(struct GfxWorld* world, struct GfxStaticModelInst* smodelInst, const int cellIndex) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, struct GfxStaticModelInst*, const int)>(L"R_AddStaticModelToCell")(world, smodelInst, cellIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNameFromStaticModelInst(const struct GfxStaticModelInst* smodelInst) -> const char*
{
  return Zynamic::Forward<const char* (const struct GfxStaticModelInst*)>(L"GetNameFromStaticModelInst")(smodelInst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterStaticModelIntoCells_r(struct GfxWorld* world, struct mnode_t* node, struct GfxStaticModelInst* smodelInst, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, struct mnode_t*, struct GfxStaticModelInst*, const float*, const float*)>(L"R_FilterStaticModelIntoCells_r")(world, node, smodelInst, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindNearestReflectionProbeInCell(const struct GfxWorld* world, const struct GfxCell* cell, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorld*, const struct GfxCell*, const float*)>(L"R_FindNearestReflectionProbeInCell")(world, cell, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindNearestReflectionProbe(const struct GfxWorld* world, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorld*, const float*)>(L"R_FindNearestReflectionProbe")(world, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellForPoint(const struct GfxWorld* world, const float* origin) -> int
{
  return Zynamic::Forward<int (const struct GfxWorld*, const float*)>(L"R_CellForPoint")(world, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcReflectionProbeIndex(const struct GfxWorld* world, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorld*, const float*)>(L"R_CalcReflectionProbeIndex")(world, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelReflectionProbe(const struct GfxWorld* world, const struct GfxStaticModelInst* smodelInst, struct GfxStaticModelDrawInst* smodelDrawInst) -> void
{
  return Zynamic::Forward<void (const struct GfxWorld*, const struct GfxStaticModelInst*, struct GfxStaticModelDrawInst*)>(L"R_SetStaticModelReflectionProbe")(world, smodelInst, smodelDrawInst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateStaticModel(struct XModel* model, const float* origin, const float* axis[0x3], float scale, struct GfxStaticModelDrawInst* smodelDrawInst, struct GfxStaticModelInst* smodelInst, unsigned int staticModelFlags) -> void
{
  return Zynamic::Forward<void (struct XModel*, const float*, const float*[0x3], float, struct GfxStaticModelDrawInst*, struct GfxStaticModelInst*, unsigned int)>(L"R_CreateStaticModel")(model, origin, axis, scale, smodelDrawInst, smodelInst, staticModelFlags);
}

#endif // __UNIMPLEMENTED__
