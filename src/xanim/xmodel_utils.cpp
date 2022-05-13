//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_testLods''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_testLods''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetName(const struct XModel* model) -> const char*
{
  return Zynamic::Forward<const char* (const struct XModel*)>(L"XModelGetName")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurfaces(const struct XModel* model, struct XSurface** surfaces, int submodel) -> int
{
  return Zynamic::Forward<int (const struct XModel*, struct XSurface**, int)>(L"XModelGetSurfaces")(model, surfaces, submodel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurface(const struct XModel* model, int lod, int surfIndex) -> struct XSurface*
{
  return Zynamic::Forward<struct XSurface* (const struct XModel*, int, int)>(L"XModelGetSurface")(model, lod, surfIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodInfo(const struct XModel* model, int lod) -> const struct XModelLodInfo*
{
  return Zynamic::Forward<const struct XModelLodInfo* (const struct XModel*, int)>(L"XModelGetLodInfo")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelSetSModelCacheForLod(struct XModel* model, unsigned int lod, unsigned int smcIndex, unsigned int smcAllocBits) -> void
{
  return Zynamic::Forward<void (struct XModel*, unsigned int, unsigned int, unsigned int)>(L"XModelSetSModelCacheForLod")(model, lod, smcIndex, smcAllocBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetStaticModelCacheVertCount(struct XModel* model, unsigned int lod) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct XModel*, unsigned int)>(L"XModelGetStaticModelCacheVertCount")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurfaceStreamBounds(const struct XModel* model, int surfIndex, float* outMins, float* outMaxs) -> void
{
  return Zynamic::Forward<void (const struct XModel*, int, float*, float*)>(L"XModelGetSurfaceStreamBounds")(model, surfIndex, outMins, outMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurfCount(const struct XModel* model, int lod) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XModel*, int)>(L"XModelGetSurfCount")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSkins(const struct XModel* model, int lod) -> struct Material* const*
{
  return Zynamic::Forward<struct Material* const* (const struct XModel*, int)>(L"XModelGetSkins")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodRampType(const struct XModel* model) -> enum XModelLodRampType
{
  return Zynamic::Forward<enum XModelLodRampType (const struct XModel*)>(L"XModelGetLodRampType")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetNumLods(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelGetNumLods")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodOutDist(const struct XModel* model) -> float
{
  return Zynamic::Forward<float (const struct XModel*)>(L"XModelGetLodOutDist")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBoneIndex(const struct XModel* model, unsigned int name, unsigned int offset, unsigned char* index) -> int
{
  return Zynamic::Forward<int (const struct XModel*, unsigned int, unsigned int, unsigned char*)>(L"XModelGetBoneIndex")(model, name, offset, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetParentBoneName(const struct XModel* model, unsigned int name) -> int
{
  return Zynamic::Forward<int (const struct XModel*, unsigned int)>(L"XModelGetParentBoneName")(model, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBasePose(const struct XModel* model) -> const struct DObjAnimMat*
{
  return Zynamic::Forward<const struct DObjAnimMat* (const struct XModel*)>(L"XModelGetBasePose")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelLodInfo_GetDist(const struct XModelLodInfo* lodInfo, int lodIndex) -> float
{
  return Zynamic::Forward<float (const struct XModelLodInfo*, int)>(L"XModelLodInfo_GetDist")(lodInfo, lodIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodForDist_Internal(const struct XModel* model, float dist) -> int
{
  return Zynamic::Forward<int (const struct XModel*, float)>(L"XModelGetLodForDist_Internal")(model, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodForDist(const struct XModel* model, float adjustedDist, float baseDist, bool noLodCullOut) -> int
{
  return Zynamic::Forward<int (const struct XModel*, float, float, bool)>(L"XModelGetLodForDist")(model, adjustedDist, baseDist, noLodCullOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelSetTestLods(int lodLevel, float dist) -> void
{
  return Zynamic::Forward<void (int, float)>(L"XModelSetTestLods")(lodLevel, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetLodDist(const struct XModel* model, unsigned int lod) -> float
{
  return Zynamic::Forward<float (const struct XModel*, unsigned int)>(L"XModelGetLodDist")(model, lod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetContents(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelGetContents")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelHasCollmap(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelHasCollmap")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetCollmap(const struct XModel* model, int collMapIndex) -> struct PhysGeomList*
{
  return Zynamic::Forward<struct PhysGeomList* (const struct XModel*, int)>(L"XModelGetCollmap")(model, collMapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetCollmapForBoneIndex(const struct XModel* model, int boneIndex) -> struct PhysGeomList*
{
  return Zynamic::Forward<struct PhysGeomList* (const struct XModel*, int)>(L"XModelGetCollmapForBoneIndex")(model, boneIndex);
}

#endif // __UNIMPLEMENTED__
