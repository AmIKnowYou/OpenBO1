//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_bsp_load_obj() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_bsp_load_obj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBspMaterial(unsigned int materialIndex, struct GfxSurface* surface, struct GfxWorldVertex* vertsMem) -> const struct Material*
{
  return Zynamic::Forward<const struct Material* (unsigned int, struct GfxSurface*, struct GfxWorldVertex*)>(L"R_GetBspMaterial")(materialIndex, surface, vertsMem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateWorldVertexBuffer(struct IDirect3DVertexBuffer9** vb, const void* srcData, unsigned int sizeInBytes) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9**, const void*, unsigned int)>(L"R_CreateWorldVertexBuffer")(vb, srcData, sizeInBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyLightmap(const unsigned char* srcImage, int srcWidth, int srcHeight, int bytesPerPixel, unsigned char* dstImage, int tileX, int tileY, int tilesWide) -> void
{
  return Zynamic::Forward<void (const unsigned char*, int, int, int, unsigned char*, int, int, int)>(L"R_CopyLightmap")(srcImage, srcWidth, srcHeight, bytesPerPixel, dstImage, tileX, tileY, tilesWide);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateDiskSurfaces_Version14(const struct DiskTriangleSoup* oldSurfs, int surfCount) -> const struct DiskTriangleSoup*
{
  return Zynamic::Forward<const struct DiskTriangleSoup* (const struct DiskTriangleSoup*, int)>(L"R_UpdateDiskSurfaces_Version14")(oldSurfs, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateDiskSurfaces_Version12(const struct DiskTriangleSoup_Version12* oldSurfs, int surfCount) -> const struct DiskTriangleSoup*
{
  return Zynamic::Forward<const struct DiskTriangleSoup* (const struct DiskTriangleSoup_Version12*, int)>(L"R_UpdateDiskSurfaces_Version12")(oldSurfs, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateDiskSurfaces_Version8(const struct DiskTriangleSoup_Version8* oldSurfs, int surfCount) -> const struct DiskTriangleSoup*
{
  return Zynamic::Forward<const struct DiskTriangleSoup* (const struct DiskTriangleSoup_Version8*, int)>(L"R_UpdateDiskSurfaces_Version8")(oldSurfs, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadTriangleSurfaces(unsigned int bspVersion, const struct DiskTriangleSoup** diskSurfaces, unsigned int* surfCount) -> void
{
  return Zynamic::Forward<void (unsigned int, const struct DiskTriangleSoup**, unsigned int*)>(L"R_LoadTriangleSurfaces")(bspVersion, diskSurfaces, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnloadTriangleSurfaces(unsigned int bspVersion, const struct DiskTriangleSoup* diskSurfaces) -> void
{
  return Zynamic::Forward<void (unsigned int, const struct DiskTriangleSoup*)>(L"R_UnloadTriangleSurfaces")(bspVersion, diskSurfaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DetermineLightmapCoupling(struct GfxBspLoad* load, int* coupling[0x16], enum LumpType lumpType) -> int
{
  return Zynamic::Forward<int (struct GfxBspLoad*, int*[0x16], enum LumpType)>(L"R_DetermineLightmapCoupling")(load, coupling, lumpType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BuildLightmapMergability(struct GfxBspLoad* load, struct r_lightmapGroup_t* groupInfo, int* reorder, enum LumpType lumpType) -> int
{
  return Zynamic::Forward<int (struct GfxBspLoad*, struct r_lightmapGroup_t*, int*, enum LumpType)>(L"R_BuildLightmapMergability")(load, groupInfo, reorder, lumpType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorRound8Bit(unsigned int a, unsigned int b) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int)>(L"colorRound8Bit")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorRound16Bit(unsigned int a, unsigned int b) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int)>(L"colorRound16Bit")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightmaps(struct GfxBspLoad* load) -> void
{
  return Zynamic::Forward<void (struct GfxBspLoad*)>(L"R_LoadLightmaps")(load);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightGridRowData() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadLightGridRowData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitEmptyLightGrid() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitEmptyLightGrid")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AnnotatedLightGridPointSortsBefore(const struct AnnotatedLightGridPoint& p0, const struct AnnotatedLightGridPoint& p1) -> bool
{
  return Zynamic::Forward<bool (const struct AnnotatedLightGridPoint&, const struct AnnotatedLightGridPoint&)>(L"R_AnnotatedLightGridPointSortsBefore")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitEmptyLightGridBlock_Version15(unsigned int emptyCount) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_EmitEmptyLightGridBlock_Version15")(emptyCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitDefaultLightGridEntry_Version15() -> void
{
  return Zynamic::Forward<void ()>(L"R_EmitDefaultLightGridEntry_Version15")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitLightGridEntry_Version15(const struct AnnotatedLightGridPoint* point) -> void
{
  return Zynamic::Forward<void (const struct AnnotatedLightGridPoint*)>(L"R_EmitLightGridEntry_Version15")(point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitLightGridBlock_Version15(const struct AnnotatedLightGridPoint* pointsArray, unsigned int runCount, const unsigned short* zSubRange, const unsigned short* zRangeGlobal, unsigned int beginBlock, unsigned int endBlock) -> bool
{
  return Zynamic::Forward<bool (const struct AnnotatedLightGridPoint*, unsigned int, const unsigned short*, const unsigned short*, unsigned int, unsigned int)>(L"R_EmitLightGridBlock_Version15")(pointsArray, runCount, zSubRange, zRangeGlobal, beginBlock, endBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompressLightGridRow_Version15(const struct AnnotatedLightGridPoint* pointsArray, unsigned int beginRow, unsigned int endRow, unsigned short* zRangeGlobal) -> bool
{
  return Zynamic::Forward<bool (const struct AnnotatedLightGridPoint*, unsigned int, unsigned int, unsigned short*)>(L"R_CompressLightGridRow_Version15")(pointsArray, beginRow, endRow, zRangeGlobal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EncodeLightGrid_Version15(const struct AnnotatedLightGridPoint* pointsArray, unsigned int pointsArrayCount) -> bool
{
  return Zynamic::Forward<bool (const struct AnnotatedLightGridPoint*, unsigned int)>(L"R_EncodeLightGrid_Version15")(pointsArray, pointsArrayCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightGridPoints_Version15(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadLightGridPoints_Version15")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssertLightGridValid(const struct GfxLightGrid* lightGrid) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*)>(L"R_AssertLightGridValid")(lightGrid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightGridHeader() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadLightGridHeader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightGridColors(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadLightGridColors")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightGridEntries() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadLightGridEntries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDummyProbe() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateDummyProbe")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDefaultProbe() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateDefaultProbe")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDefaultProbes() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateDefaultProbes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadReflectionProbes(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadReflectionProbes")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HeroLightSorter(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"R_HeroLightSorter")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BuildHeroLightTree(unsigned int nodeIndex, unsigned int firstLight, unsigned int lightCount, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int, float*, float*)>(L"R_BuildHeroLightTree")(nodeIndex, firstLight, lightCount, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto nextPowerOf2(int v) -> int
{
  return Zynamic::Forward<int (int)>(L"nextPowerOf2")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadHeroOnlyLights(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadHeroOnlyLights")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadCoronas() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadCoronas")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadOutdoorBounds() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadOutdoorBounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadOccluders() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadOccluders")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadShadowMapVolumes() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadShadowMapVolumes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadExposureVolumes() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadExposureVolumes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadWorldLodData() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadWorldLodData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadMaterials(struct GfxBspLoad* load) -> void
{
  return Zynamic::Forward<void (struct GfxBspLoad*)>(L"R_LoadMaterials")(load);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateStreamingVolume(const struct Material* material, struct srfTriangles_t* tris, const struct DiskGfxVertex* vertsDisk) -> void
{
  return Zynamic::Forward<void (const struct Material*, struct srfTriangles_t*, const struct DiskGfxVertex*)>(L"R_CalculateStreamingVolume")(material, tris, vertsDisk);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SurfCalculateMagicPortalVerts(const struct Material* material, struct GfxSurface* surface, const struct DiskGfxVertex* vertsDisk, const struct r_lightmapMerge_t* merge, struct GfxWorldVertex* vertsMem) -> void
{
  return Zynamic::Forward<void (const struct Material*, struct GfxSurface*, const struct DiskGfxVertex*, const struct r_lightmapMerge_t*, struct GfxWorldVertex*)>(L"R_SurfCalculateMagicPortalVerts")(material, surface, vertsDisk, merge, vertsMem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinalizeSurfVerts(const struct Material* material, struct GfxSurface* surface, const struct DiskGfxVertex* vertsDisk, const struct r_lightmapMerge_t* merge, struct GfxWorldVertex* vertsMem, int vertCount) -> void
{
  return Zynamic::Forward<void (const struct Material*, struct GfxSurface*, const struct DiskGfxVertex*, const struct r_lightmapMerge_t*, struct GfxWorldVertex*, int)>(L"R_FinalizeSurfVerts")(material, surface, vertsDisk, merge, vertsMem, vertCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateOutdoorBounds(struct GfxBspLoad* load, const struct DiskTriangleSoup* diskSurfaces) -> void
{
  return Zynamic::Forward<void (struct GfxBspLoad*, const struct DiskTriangleSoup*)>(L"R_CalculateOutdoorBounds")(load, diskSurfaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateWorldBounds(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"R_CalculateWorldBounds")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialUsage(const struct Material* material, int firstVertex, int vertexCount, int surfPlusIndexSize) -> void
{
  return Zynamic::Forward<void (const struct Material*, int, int, int)>(L"R_MaterialUsage")(material, firstVertex, vertexCount, surfPlusIndexSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSkyImage(const struct Material* skyMaterial) -> void
{
  return Zynamic::Forward<void (const struct Material*)>(L"R_SetSkyImage")(skyMaterial);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompareSurfaces(const struct GfxSurface& surf0, const struct GfxSurface& surf1) -> bool
{
  return Zynamic::Forward<bool (const struct GfxSurface&, const struct GfxSurface&)>(L"R_CompareSurfaces")(surf0, surf1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortSurfaces() -> void
{
  return Zynamic::Forward<void ()>(L"R_SortSurfaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FindExistingUsage(struct Stream2Usage* const list, int firstVertex) -> struct Stream2Usage*
{
  return Zynamic::Forward<struct Stream2Usage* (struct Stream2Usage* const, int)>(L"FindExistingUsage")(list, firstVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllocateUsage() -> struct Stream2Usage*
{
  return Zynamic::Forward<struct Stream2Usage* ()>(L"AllocateUsage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeUsage(struct Stream2Usage* usage) -> void
{
  return Zynamic::Forward<void (struct Stream2Usage*)>(L"FreeUsage")(usage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InsertNewUsage(struct Stream2Usage*& list, const struct Stream2Usage& copy) -> struct Stream2Usage*
{
  return Zynamic::Forward<struct Stream2Usage* (struct Stream2Usage*&, const struct Stream2Usage&)>(L"InsertNewUsage")(list, copy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeUsageList(struct Stream2Usage*& list) -> void
{
  return Zynamic::Forward<void (struct Stream2Usage*&)>(L"FreeUsageList")(list);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateVertexStream2Usage() -> void
{
  return Zynamic::Forward<void ()>(L"R_CalculateVertexStream2Usage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadSurfaceAlloc(unsigned int bytes) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"R_LoadSurfaceAlloc")(bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ValidateSurfaceLightmapUsage(const struct GfxSurface* surface) -> void
{
  return Zynamic::Forward<void (const struct GfxSurface*)>(L"R_ValidateSurfaceLightmapUsage")(surface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadSurfaces(struct GfxBspLoad* load) -> void
{
  return Zynamic::Forward<void (struct GfxBspLoad*)>(L"R_LoadSurfaces")(load);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadSubmodels() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadSubmodels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ValueForKey(const char* key, char** spawnVars[0x2], int spawnVarCount) -> const char*
{
  return Zynamic::Forward<const char* (const char*, char**[0x2], int)>(L"R_ValueForKey")(key, spawnVars, spawnVarCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FloatForKey(const char* key, float defaultValue, char** spawnVars[0x2], int spawnVarCount) -> const float
{
  return Zynamic::Forward<const float (const char*, float, char**[0x2], int)>(L"R_FloatForKey")(key, defaultValue, spawnVars, spawnVarCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IntForKey(const char* key, int defaultValue, char** spawnVars[0x2], int spawnVarCount) -> const int
{
  return Zynamic::Forward<const int (const char*, int, char**[0x2], int)>(L"R_IntForKey")(key, defaultValue, spawnVars, spawnVarCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VectorForKey(const char* key, const char* defaultString, char** spawnVars[0x2], int spawnVarCount, float* v) -> const bool
{
  return Zynamic::Forward<const bool (const char*, const char*, char**[0x2], int, float*)>(L"R_VectorForKey")(key, defaultString, spawnVars, spawnVarCount, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckValidStaticModel(char** spawnVars[0x2], int spawnVarCount, struct XModel** model, float* origin) -> bool
{
  return Zynamic::Forward<bool (char**[0x2], int, struct XModel**, float*)>(L"R_CheckValidStaticModel")(spawnVars, spawnVarCount, model, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadMiscModel(char** spawnVars[0x2], int spawnVarCount, int bspVersion) -> void
{
  return Zynamic::Forward<void (char**[0x2], int, int)>(L"R_LoadMiscModel")(spawnVars, spawnVarCount, bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ParseSunLight(struct SunLightParseParams* params, const char* text) -> const char*
{
  return Zynamic::Forward<const char* (struct SunLightParseParams*, const char*)>(L"R_ParseSunLight")(params, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadSunSettings() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadSunSettings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadPrimaryLights(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadPrimaryLights")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadLightRegions() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadLightRegions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelCompare(const struct GfxStaticModelCombinedInst& smodelInst0, const struct GfxStaticModelCombinedInst& smodelInst1) -> bool
{
  return Zynamic::Forward<bool (const struct GfxStaticModelCombinedInst&, const struct GfxStaticModelCombinedInst&)>(L"R_StaticModelCompare")(smodelInst0, smodelInst1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AabbTreeChildrenCount_r(struct GfxAabbTree* tree) -> int
{
  return Zynamic::Forward<int (struct GfxAabbTree*)>(L"R_AabbTreeChildrenCount_r")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AabbTreeFixAABBSizes_r(struct GfxAabbTree* tree) -> void
{
  return Zynamic::Forward<void (struct GfxAabbTree*)>(L"R_AabbTreeFixAABBSizes_r")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AabbTreeMove_r(struct GfxAabbTree* tree, struct GfxAabbTree* newTree, struct GfxAabbTree* newChildren) -> struct GfxAabbTree*
{
  return Zynamic::Forward<struct GfxAabbTree* (struct GfxAabbTree*, struct GfxAabbTree*, struct GfxAabbTree*)>(L"R_AabbTreeMove_r")(tree, newTree, newChildren);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FixupGfxAabbTrees(struct GfxCell* cell) -> void
{
  return Zynamic::Forward<void (struct GfxCell*)>(L"R_FixupGfxAabbTrees")(cell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDynamicModel(const struct XModel* const xm, int* fcache) -> bool
{
  return Zynamic::Forward<bool (const struct XModel* const, int*)>(L"IsDynamicModel")(xm, fcache);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynamicModelsSortedCorrectly(struct GfxStaticModelDrawInst* drawInsts, unsigned int count, unsigned int dynModelCount, int* fcache) -> bool
{
  return Zynamic::Forward<bool (struct GfxStaticModelDrawInst*, unsigned int, unsigned int, int*)>(L"DynamicModelsSortedCorrectly")(drawInsts, count, dynModelCount, fcache);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PostLoadEntities() -> void
{
  return Zynamic::Forward<void ()>(L"R_PostLoadEntities")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadEntities(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadEntities")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishLoadingAabbTrees_r(struct GfxAabbTree* tree, int totalTreesUsed) -> int
{
  return Zynamic::Forward<int (struct GfxAabbTree*, int)>(L"R_FinishLoadingAabbTrees_r")(tree, totalTreesUsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadAabbTrees() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadAabbTrees")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadCells(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadCells")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadPortalVerts() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadPortalVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadPortals() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadPortals")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadCullGroups() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadCullGroups")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadCullGroupIndices() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadCullGroupIndices")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetParentAndCell_r(struct mnode_load_t* node) -> void
{
  return Zynamic::Forward<void (struct mnode_load_t*)>(L"R_SetParentAndCell_r")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CountNodes_r(struct mnode_load_t* node) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct mnode_load_t*)>(L"R_CountNodes_r")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortNodes_r(struct mnode_load_t* node, struct mnode_t* out) -> struct mnode_t*
{
  return Zynamic::Forward<struct mnode_t* (struct mnode_load_t*, struct mnode_t*)>(L"R_SortNodes_r")(node, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadNodesAndLeafs(unsigned int bspVersion) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_LoadNodesAndLeafs")(bspVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadStep(const char* description) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_LoadStep")(description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupStreamAabbNodes(struct GenericAabbTreeOptions* options, struct GfxStreamingAabbTree* destNodes, int count) -> void
{
  return Zynamic::Forward<void (struct GenericAabbTreeOptions*, struct GfxStreamingAabbTree*, int)>(L"R_SetupStreamAabbNodes")(options, destNodes, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateHighmipAabbs_AddWorldSurfaces(int* elemCount, int* elemArray, struct GenericAabbTreeOptions* options) -> void
{
  return Zynamic::Forward<void (int*, int*, struct GenericAabbTreeOptions*)>(L"R_GenerateHighmipAabbs_AddWorldSurfaces")(elemCount, elemArray, options);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateHighmipAabbs_AddStaticModelSurfaces(int* elemCount, int* elemArray, struct GenericAabbTreeOptions* options) -> void
{
  return Zynamic::Forward<void (int*, int*, struct GenericAabbTreeOptions*)>(L"R_GenerateHighmipAabbs_AddStaticModelSurfaces")(elemCount, elemArray, options);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateHighmipAabbs(struct GfxBspLoad* load) -> void
{
  return Zynamic::Forward<void (struct GfxBspLoad*)>(L"R_GenerateHighmipAabbs")(load);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocPrimaryLightBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_AllocPrimaryLightBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadWorldRuntime() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadWorldRuntime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadInitSkyIntensity() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadInitSkyIntensity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelReflectionProbes() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetStaticModelReflectionProbes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocShadowGeometryHeaderMemory() -> void
{
  return Zynamic::Forward<void ()>(L"R_AllocShadowGeometryHeaderMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForEachShadowCastingSurfaceOnEachLight(function* Callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"R_ForEachShadowCastingSurfaceOnEachLight")(Callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IncrementShadowGeometryCount(struct GfxWorld* world, unsigned int primaryLightIndex, unsigned int sortedSurfIndex) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, unsigned int, unsigned int)>(L"R_IncrementShadowGeometryCount")(world, primaryLightIndex, sortedSurfIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitShadowGeometryArrays() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitShadowGeometryArrays")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllProbesToAllCells() -> void
{
  return Zynamic::Forward<void ()>(L"R_AddAllProbesToAllCells")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadWorldInternal(const char* name) -> struct GfxWorld*
{
  return Zynamic::Forward<struct GfxWorld* (const char*)>(L"R_LoadWorldInternal")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetUpSunLight(const float* sunColor, const float* sunDirection, struct GfxLight* light) -> void
{
  return Zynamic::Forward<void (const float*, const float*, struct GfxLight*)>(L"R_SetUpSunLight")(sunColor, sunDirection, light);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InterpretSunLightParseParamsIntoLights(struct SunLightParseParams* sunParse, struct GfxLight* sunLight) -> void
{
  return Zynamic::Forward<void (struct SunLightParseParams*, struct GfxLight*)>(L"R_InterpretSunLightParseParamsIntoLights")(sunParse, sunLight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitPrimaryLights(struct GfxLight* primaryLights) -> void
{
  return Zynamic::Forward<void (struct GfxLight*)>(L"R_InitPrimaryLights")(primaryLights);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddShadowSurfaceToPrimaryLight(struct GfxWorld* world, unsigned int primaryLightIndex, unsigned int sortedSurfIndex) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, unsigned int, unsigned int)>(L"R_AddShadowSurfaceToPrimaryLight")(world, primaryLightIndex, sortedSurfIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForEachPrimaryLightAffectingSurface(struct GfxWorld* world, const struct GfxSurface* surface, unsigned int sortedSurfIndex, function* Callback) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, const struct GfxSurface*, unsigned int, function *)>(L"R_ForEachPrimaryLightAffectingSurface")(world, surface, sortedSurfIndex, Callback);
}

#endif // __UNIMPLEMENTED__
