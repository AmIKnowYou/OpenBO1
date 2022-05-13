//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DObjGetRotTransArray(const struct DObj* obj) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct DObj*)>(L"DObjGetRotTransArray")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetNumModels(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjGetNumModels")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetEntNum(const struct DObj* obj) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct DObj*)>(L"DObjGetEntNum")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSurfaces(const struct DObj* obj, int* partBits, const char* lods) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int*, const char*)>(L"DObjGetSurfaces")(obj, partBits, lods);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSurfaceData(const struct DObj* obj, const float* origin, const float scale, bool offscreen, char* lods) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const float*, const float, bool, char*)>(L"DObjGetSurfaceData")(obj, origin, scale, offscreen, lods);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneInfo(const struct DObj* obj, struct XBoneInfo** boneInfo) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct XBoneInfo**)>(L"DObjGetBoneInfo")(obj, boneInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjNumBones(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjNumBones")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetLodForDist(const struct DObj* obj, int modelIndex, float dist, float base_dist) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int, float, float)>(L"DObjGetLodForDist")(obj, modelIndex, dist, base_dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSetBones(const struct DObj* obj, int* setPartBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"DObjGetSetBones")(obj, setPartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetRootBoneCount(const struct DObj* obj) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct DObj*)>(L"DObjGetRootBoneCount")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex) -> int
{
  return Zynamic::Forward<int (const struct DObj*, const int*, int)>(L"DObjSetRotTransIndex")(obj, partBits, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetSkelRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex) -> bool
{
  return Zynamic::Forward<bool (const struct DObj*, const int*, int)>(L"DObjSetSkelRotTransIndex")(obj, partBits, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetControlTagAngles(const struct DObj* obj, int* partBits, unsigned int boneIndex, float* angles) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*, unsigned int, float*)>(L"DObjSetControlTagAngles")(obj, partBits, boneIndex, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModel(const struct DObj* obj, int modelIndex) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const struct DObj*, int)>(L"DObjGetModel")(obj, modelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelBoneIndex(const struct DObj* obj, int model_index, unsigned int name, unsigned char* index) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int, unsigned int, unsigned char*)>(L"DObjGetModelBoneIndex")(obj, model_index, name, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalTag(const struct DObj* obj, int* partBits, unsigned int boneIndex, const float* trans, const float* angles) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*, unsigned int, const float*, const float*)>(L"DObjSetLocalTag")(obj, partBits, boneIndex, trans, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalTagInternal(const struct DObj* obj, const float* trans, const float* angles, int boneIndex) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const float*, const float*, int)>(L"DObjSetLocalTagInternal")(obj, trans, angles, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetAngles(struct DObjAnimMat* rotTrans, const float* angles) -> void
{
  return Zynamic::Forward<void (struct DObjAnimMat*, const float*)>(L"DObjSetAngles")(rotTrans, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearAngles(struct DObjAnimMat* rotTrans) -> void
{
  return Zynamic::Forward<void (struct DObjAnimMat*)>(L"DObjClearAngles")(rotTrans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetTrans(struct DObjAnimMat* rotTrans, const float* trans) -> void
{
  return Zynamic::Forward<void (struct DObjAnimMat*, const float*)>(L"DObjSetTrans")(rotTrans, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCompleteHierarchyBits(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"DObjCompleteHierarchyBits")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetControlRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex) -> int
{
  return Zynamic::Forward<int (const struct DObj*, const int*, int)>(L"DObjSetControlRotTransIndex")(obj, partBits, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelExists(const struct DObj* obj, int timeStamp) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int)>(L"DObjSkelExists")(obj, timeStamp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearSkel(const struct DObj* obj) -> void
{
  return Zynamic::Forward<void (const struct DObj*)>(L"DObjClearSkel")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelAreBonesUpToDate(const struct DObj* obj, int* partBits) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int*)>(L"DObjSkelAreBonesUpToDate")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelSetSkel(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"DObjSkelSetSkel")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetAllocSkelSize(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjGetAllocSkelSize")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreateSkel(const struct DObj* obj, char* buf, int timeStamp) -> void
{
  return Zynamic::Forward<void (const struct DObj*, char*, int)>(L"DObjCreateSkel")(obj, buf, timeStamp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_dmaGetDObjSkel(const struct DObj* obj) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct DObj*)>(L"I_dmaGetDObjSkel")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetHidePartBits(const struct DObj* obj, unsigned int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int*)>(L"DObjGetHidePartBits")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneIndex(const struct DObj* obj, unsigned int name, unsigned char* index, int modelNum) -> int
{
  return Zynamic::Forward<int (const struct DObj*, unsigned int, unsigned char*, int)>(L"DObjGetBoneIndex")(obj, name, index, modelNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetChildBones(const struct DObj* obj, unsigned char parentBone, unsigned char* children, int maxChildren) -> int
{
  return Zynamic::Forward<int (const struct DObj*, unsigned char, unsigned char*, int)>(L"DObjGetChildBones")(obj, parentBone, children, maxChildren);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjLock(const struct DObj* obj) -> void
{
  return Zynamic::Forward<void (const struct DObj*)>(L"DObjLock")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUnlock(const struct DObj* obj) -> void
{
  return Zynamic::Forward<void (const struct DObj*)>(L"DObjUnlock")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsRecorded(const struct DObj* obj) -> int
{
  return Zynamic::Forward<int (const struct DObj*)>(L"DObjIsRecorded")(obj);
}

#endif // __UNIMPLEMENTED__
