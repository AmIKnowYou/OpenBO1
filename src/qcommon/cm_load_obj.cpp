//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CMod_LoadMaterials() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadMaterials")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_AllocLeafBrushNode() -> struct cLeafBrushNode_s*
{
  return Zynamic::Forward<struct cLeafBrushNode_s* ()>(L"CMod_AllocLeafBrushNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadSubmodels() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadSubmodels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_GetPartitionScore(unsigned short* leafBrushes, int numLeafBrushes, int axis, const float* mins, const float* maxs, float* dist) -> float
{
  return Zynamic::Forward<float (unsigned short*, int, int, const float*, const float*, float*)>(L"CMod_GetPartitionScore")(leafBrushes, numLeafBrushes, axis, mins, maxs, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_PartionLeafBrushes_r(unsigned short* leafBrushes, int numLeafBrushes, const float* mins, const float* maxs) -> struct cLeafBrushNode_s*
{
  return Zynamic::Forward<struct cLeafBrushNode_s* (unsigned short*, int, const float*, const float*)>(L"CMod_PartionLeafBrushes_r")(leafBrushes, numLeafBrushes, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_PartionLeafBrushes(unsigned short* leafBrushes, int numLeafBrushes, struct cLeaf_s* leaf) -> void
{
  return Zynamic::Forward<void (unsigned short*, int, struct cLeaf_s*)>(L"CMod_PartionLeafBrushes")(leafBrushes, numLeafBrushes, leaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_GetLeafTerrainContents(struct cLeaf_s* leaf) -> int
{
  return Zynamic::Forward<int (struct cLeaf_s*)>(L"CMod_GetLeafTerrainContents")(leaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadSubmodelBrushNodes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadSubmodelBrushNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadNodes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadBrushes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadBrushes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafs(bool usePvs) -> void
{
  return Zynamic::Forward<void (bool)>(L"CMod_LoadLeafs")(usePvs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafs_Version14(bool usePvs) -> void
{
  return Zynamic::Forward<void (bool)>(L"CMod_LoadLeafs_Version14")(usePvs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafBrushNodes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadLeafBrushNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafBrushNodes_Version14() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadLeafBrushNodes_Version14")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadPlanes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadPlanes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafBrushes() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadLeafBrushes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadLeafSurfaces() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadLeafSurfaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionVerts() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionTriangles() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionTriangles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadPartitionIndices() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadPartitionIndices")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionEdgeWalkable() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionEdgeWalkable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionBorders() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionBorders")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionPartitions() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionPartitions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadCollisionAabbTrees() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadCollisionAabbTrees")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapEnts_VirtualLoad(const char* name) -> struct MapEnts*
{
  return Zynamic::Forward<struct MapEnts* (const char*)>(L"MapEnts_VirtualLoad")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadEntityString() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadEntityString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapEnts_CanPurgeEntity(const char* classname, void* userData, function* HasKeyCallback) -> bool
{
  return Zynamic::Forward<bool (const char*, void*, function *)>(L"MapEnts_CanPurgeEntity")(classname, userData, HasKeyCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_HasSpawnString(void* userData, const char* key) -> bool
{
  return Zynamic::Forward<bool (void*, const char*)>(L"CMod_HasSpawnString")(userData, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapEnts_GetFromString(const char* name, const char* entityString, int numEntityChars) -> struct MapEnts*
{
  return Zynamic::Forward<struct MapEnts* (const char*, const char*, int)>(L"MapEnts_GetFromString")(name, entityString, numEntityChars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapEnts_RealLoad(const char* name) -> struct MapEnts*
{
  return Zynamic::Forward<struct MapEnts* (const char*)>(L"MapEnts_RealLoad")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadVisibility() -> void
{
  return Zynamic::Forward<void ()>(L"CMod_LoadVisibility")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMod_LoadBrushRelated(unsigned int version, bool usePvs) -> void
{
  return Zynamic::Forward<void (unsigned int, bool)>(L"CMod_LoadBrushRelated")(version, usePvs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadMapFromBsp(const char* name, bool usePvs) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"CM_LoadMapFromBsp")(name, usePvs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_InitBoxHull() -> void
{
  return Zynamic::Forward<void ()>(L"CM_InitBoxHull")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetPlanes() -> struct cplane_s*
{
  return Zynamic::Forward<struct cplane_s* ()>(L"CM_GetPlanes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetPlaneCount() -> int
{
  return Zynamic::Forward<int ()>(L"CM_GetPlaneCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_EntityString() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"CM_EntityString")();
}

#endif // __UNIMPLEMENTED__
