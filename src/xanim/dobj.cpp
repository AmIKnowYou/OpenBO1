//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DObjInit() -> void
{
  return Zynamic::Forward<void ()>(L"DObjInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"DObjShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDumpInfo(const struct DObj* obj) -> void
{
  return Zynamic::Forward<void (const struct DObj*)>(L"DObjDumpInfo")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIgnoreCollision(const struct DObj* obj, int modelIndex) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*, int)>(L"DObjIgnoreCollision")(obj, modelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDumpCreationInfo(struct DObjModel_s* dobjModels, unsigned int numModels) -> void
{
  return Zynamic::Forward<void (struct DObjModel_s*, unsigned int)>(L"DObjDumpCreationInfo")(dobjModels, numModels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreateDuplicateParts(struct DObj* obj, struct DObjModel_s* dobjModels, unsigned int numModels) -> void
{
  return Zynamic::Forward<void (struct DObj*, struct DObjModel_s*, unsigned int)>(L"DObjCreateDuplicateParts")(obj, dobjModels, numModels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetHierarchyBits(const struct DObj* obj, int boneIndex, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int, int*)>(L"DObjGetHierarchyBits")(obj, boneIndex, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelIsBoneUpToDate(struct DObj* obj, int boneIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, int)>(L"DObjSkelIsBoneUpToDate")(obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetTree(struct DObj* obj, struct XAnimTree_s* tree) -> void
{
  return Zynamic::Forward<void (struct DObj*, struct XAnimTree_s*)>(L"DObjSetTree")(obj, tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjComputeBounds(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"DObjComputeBounds")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreate(struct DObjModel_s* dobjModels, unsigned int numModels, struct XAnimTree_s* tree, void* buf, unsigned int entnum) -> void
{
  return Zynamic::Forward<void (struct DObjModel_s*, unsigned int, struct XAnimTree_s*, void*, unsigned int)>(L"DObjCreate")(dobjModels, numModels, tree, buf, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreateExt(struct DObjModel_s* dobjModels, unsigned int numModels, struct XAnimTree_s* tree, void* buf, unsigned int entnum, bool isServer, bool isLocalPlayer, int localClientIndex) -> void
{
  return Zynamic::Forward<void (struct DObjModel_s*, unsigned int, struct XAnimTree_s*, void*, unsigned int, bool, bool, int)>(L"DObjCreateExt")(dobjModels, numModels, tree, buf, entnum, isServer, isLocalPlayer, localClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjFree(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"DObjFree")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetCreateParms(const struct DObj* obj, struct DObjModel_s* dobjModels, unsigned short* numModels, struct XAnimTree_s** tree, unsigned short* entnum) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct DObjModel_s*, unsigned short*, struct XAnimTree_s**, unsigned short*)>(L"DObjGetCreateParms")(obj, dobjModels, numModels, tree, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcBounds(struct DObj* dobj, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (struct DObj*, float*, float*)>(L"DObjCalcBounds")(dobj, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjArchive(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"DObjArchive")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUnarchive(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"DObjUnarchive")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelClear(const struct DObj* obj) -> void
{
  return Zynamic::Forward<void (const struct DObj*)>(L"DObjSkelClear")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsServer(const struct DObj* obj) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*)>(L"DObjIsServer")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsLocalPlayer(const struct DObj* obj) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*)>(L"DObjIsLocalPlayer")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsPlayerShadow(const struct DObj* obj) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*)>(L"DObjIsPlayerShadow")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsLeftHandGripIKActive(const struct DObj* obj) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*)>(L"DObjIsLeftHandGripIKActive")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetLocalClientIndex(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjGetLocalClientIndex")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBounds(const struct DObj* obj, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct DObj*, float*, float*)>(L"DObjGetBounds")(obj, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjPhysicsGetBounds(const struct DObj* obj, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct DObj*, float*, float*)>(L"DObjPhysicsGetBounds")(obj, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetRadius(const struct DObj* obj) -> float
{
  return Zynamic::Forward<float (const struct DObj*)>(L"DObjGetRadius")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetPhysPreset(const struct DObj* obj) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const struct DObj*)>(L"DObjGetPhysPreset")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetName(const struct DObj* obj) -> const char*
{
  return Zynamic::Forward<const char* (const struct DObj*)>(L"DObjGetName")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneName(const struct DObj* obj, int boneIndex) -> const char*
{
  return Zynamic::Forward<const char* (const struct DObj*, int)>(L"DObjGetBoneName")(obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelParentBoneName(const struct DObj* obj, int modelIndex) -> const char*
{
  return Zynamic::Forward<const char* (const struct DObj*, int)>(L"DObjGetModelParentBoneName")(obj, modelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetTree(const struct DObj* obj) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (const struct DObj*)>(L"DObjGetTree")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjBad(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjBad")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjTracelinePartBits(struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (struct DObj*, int*)>(L"DObjTracelinePartBits")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjTraceline(struct DObj* obj, float* start, float* end, unsigned char* priorityMap, struct DObjTrace_s* trace) -> void
{
  return Zynamic::Forward<void (struct DObj*, float*, float*, unsigned char*, struct DObjTrace_s*)>(L"DObjTraceline")(obj, start, end, priorityMap, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGeomTraceline(struct DObj* obj, float* localStart, float* localEnd, int contentmask, struct DObjTrace_s* results) -> void
{
  return Zynamic::Forward<void (struct DObj*, float*, float*, int, struct DObjTrace_s*)>(L"DObjGeomTraceline")(obj, localStart, localEnd, contentmask, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGeomTracelinePartBits(struct DObj* obj, int contentmask, int* partBits) -> void
{
  return Zynamic::Forward<void (struct DObj*, int, int*)>(L"DObjGeomTracelinePartBits")(obj, contentmask, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjHasContents(struct DObj* obj, int contentmask) -> int
{
  return Zynamic::Forward<int (struct DObj*, int)>(L"DObjHasContents")(obj, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetContents(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjGetContents")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjHasCollmap(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjHasCollmap")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetCollmap(struct DObj* obj) -> struct PhysGeomList*
{
  return Zynamic::Forward<struct PhysGeomList* (struct DObj*)>(L"DObjGetCollmap")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetXModel(struct DObj* obj, int index) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (struct DObj*, int)>(L"DObjGetXModel")(obj, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalBoneIndex(struct DObj* obj, int* partBits, int boneIndex, const float* trans, const float* angles) -> int
{
  return Zynamic::Forward<int (struct DObj*, int*, int, const float*, const float*)>(L"DObjSetLocalBoneIndex")(obj, partBits, boneIndex, trans, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelBoneIndex(const struct DObj* obj, const char* modelName, unsigned int name, unsigned char* index) -> int
{
  return Zynamic::Forward<int (const struct DObj*, const char*, unsigned int, unsigned char*)>(L"DObjGetModelBoneIndex")(obj, modelName, name, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBasePoseMatrix(const struct DObj* obj, unsigned char boneIndex, struct DObjAnimMat* outMat) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned char, struct DObjAnimMat*)>(L"DObjGetBasePoseMatrix")(obj, boneIndex, outMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetHidePartBits(struct DObj* obj, const unsigned int* partBits) -> void
{
  return Zynamic::Forward<void (struct DObj*, const unsigned int*)>(L"DObjSetHidePartBits")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjHasFlag(const struct DObj* obj, unsigned char flag) -> int
{
  return Zynamic::Forward<int (const struct DObj*, unsigned char)>(L"DObjHasFlag")(obj, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetFlag(struct DObj* obj, unsigned char flag, int val) -> void
{
  return Zynamic::Forward<void (struct DObj*, unsigned char, int)>(L"DObjSetFlag")(obj, flag, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjHasIKActiveFlag(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjHasIKActiveFlag")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetIKActiveFlag(struct DObj* obj, int val) -> void
{
  return Zynamic::Forward<void (struct DObj*, int)>(L"DObjSetIKActiveFlag")(obj, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetIKState(struct DObj* obj, const unsigned char* pIKState) -> void
{
  return Zynamic::Forward<void (struct DObj*, const unsigned char*)>(L"DObjSetIKState")(obj, pIKState);
}

#endif // __UNIMPLEMENTED__
