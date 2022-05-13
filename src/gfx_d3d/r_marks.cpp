//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_ChopPolyBehindPlane(int inPointCount, const struct FxModelMarkPoint* inPoints, struct FxModelMarkPoint* outPoints, const float* plane) -> int
{
  return Zynamic::Forward<int (int, const struct FxModelMarkPoint*, struct FxModelMarkPoint*, const float*)>(L"R_ChopPolyBehindPlane")(inPointCount, inPoints, outPoints, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LerpWorldMarkPoints(const struct FxWorldMarkPoint* from, const struct FxWorldMarkPoint* to, float lerp, struct FxWorldMarkPoint* out) -> void
{
  return Zynamic::Forward<void (const struct FxWorldMarkPoint*, const struct FxWorldMarkPoint*, float, struct FxWorldMarkPoint*)>(L"R_LerpWorldMarkPoints")(from, to, lerp, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChopWorldPolyBehindPlane(int inPointCount, const struct FxWorldMarkPoint* inPoints, struct FxWorldMarkPoint* outPoints, const float* plane, float epsilon) -> int
{
  return Zynamic::Forward<int (int, const struct FxWorldMarkPoint*, struct FxWorldMarkPoint*, const float*, float)>(L"R_ChopWorldPolyBehindPlane")(inPointCount, inPoints, outPoints, plane, epsilon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Mark_MaterialAllowsMarks(const struct Material* markReceiverMaterialHandle, const struct Material* markMaterialHandle) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, const struct Material*)>(L"R_Mark_MaterialAllowsMarks")(markReceiverMaterialHandle, markMaterialHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllowMarks(int surfIndex, void* markMaterialAsVoid) -> int
{
  return Zynamic::Forward<int (int, void*)>(L"R_AllowMarks")(surfIndex, markMaterialAsVoid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AABBTreeSurfaces_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function* allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount) -> void
{
  return Zynamic::Forward<void (struct GfxAabbTree*, const float*, const float*, function *, void*, struct GfxSurface**, unsigned int, unsigned int*)>(L"R_AABBTreeSurfaces_r")(tree, mins, maxs, allowSurf, callbackContext, surfList, surfListSize, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AABBTreeSurfacesTwoLists_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts) -> void
{
  return Zynamic::Forward<void (struct GfxAabbTree*, const float*, const float*, function **, void*, struct GfxSurface***, unsigned int, unsigned int*)>(L"R_AABBTreeSurfacesTwoLists_r")(tree, mins, maxs, allowSurf, callbackContext, surfLists, surfListSize, surfCounts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddStaticModelToList(int smodelIndex, unsigned short* smodelList, int* smodelCount) -> void
{
  return Zynamic::Forward<void (int, unsigned short*, int*)>(L"R_AddStaticModelToList")(smodelIndex, smodelList, smodelCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AABBTreeStaticModels_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function* allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount) -> void
{
  return Zynamic::Forward<void (struct GfxAabbTree*, const float*, const float*, function *, unsigned short*, int, int*)>(L"R_AABBTreeStaticModels_r")(tree, mins, maxs, allowSModel, smodelList, smodelListSize, smodelCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSurfaceToList(struct GfxSurface* surf, struct GfxSurface** surfList, unsigned int* surfCount) -> void
{
  return Zynamic::Forward<void (struct GfxSurface*, struct GfxSurface**, unsigned int*)>(L"R_AddSurfaceToList")(surf, surfList, surfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellSurfaces(int cellIndex, const float* mins, const float* maxs, function* allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount, unsigned char* cellBits) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, function *, void*, struct GfxSurface**, unsigned int, unsigned int*, unsigned char*)>(L"R_CellSurfaces")(cellIndex, mins, maxs, allowSurf, callbackContext, surfList, surfListSize, surfCount, cellBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellSurfacesTwoLists(int cellIndex, const float* mins, const float* maxs, function** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned char* cellBits) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, function **, void*, struct GfxSurface***, unsigned int, unsigned int*, unsigned char*)>(L"R_CellSurfacesTwoLists")(cellIndex, mins, maxs, allowSurf, callbackContext, surfLists, surfListSize, surfCounts, cellBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellStaticModels(int cellIndex, const float* mins, const float* maxs, function* allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount, unsigned char* cellBits) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, function *, unsigned short*, int, int*, unsigned char*)>(L"R_CellStaticModels")(cellIndex, mins, maxs, allowSModel, smodelList, smodelListSize, smodelCount, cellBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BoxSurfaces_r(struct mnode_t* node, const float* mins, const float* maxs, function** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned int listCount, unsigned char* cellBits) -> void
{
  return Zynamic::Forward<void (struct mnode_t*, const float*, const float*, function **, void*, struct GfxSurface***, unsigned int, unsigned int*, unsigned int, unsigned char*)>(L"R_BoxSurfaces_r")(node, mins, maxs, allowSurf, callbackContext, surfLists, surfListSize, surfCounts, listCount, cellBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BoxStaticModels_r(struct mnode_t* node, const float* mins, const float* maxs, function* allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount, unsigned char* cellBits) -> void
{
  return Zynamic::Forward<void (struct mnode_t*, const float*, const float*, function *, unsigned short*, int, int*, unsigned char*)>(L"R_BoxStaticModels_r")(node, mins, maxs, allowSModel, smodelList, smodelListSize, smodelCount, cellBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BoxSurfaces(const float* mins, const float* maxs, function** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned int listCount) -> void
{
  return Zynamic::Forward<void (const float*, const float*, function **, void*, struct GfxSurface***, unsigned int, unsigned int*, unsigned int)>(L"R_BoxSurfaces")(mins, maxs, allowSurf, callbackContext, surfLists, surfListSize, surfCounts, listCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BoxStaticModels(const float* mins, const float* maxs, function* allowSModel, unsigned short* smodelList, int smodelListSize) -> int
{
  return Zynamic::Forward<int (const float*, const float*, function *, unsigned short*, int)>(L"R_BoxStaticModels")(mins, maxs, allowSModel, smodelList, smodelListSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddMarkFragment<1>(struct FxModelMarkPoint* clipPoints[0x14], const struct MarkClipPlaneSet* planes, const struct GfxMarkContext* markContext, int baseIndex, int maxTris, struct FxMarkTri* tris, int maxPoints, const unsigned char** triNormals, const float* transformNormalMatrix[0x3], struct FxMarkPoint* points) -> int
{
  return Zynamic::Forward<int (struct FxModelMarkPoint*[0x14], const struct MarkClipPlaneSet*, const struct GfxMarkContext*, int, int, struct FxMarkTri*, int, const unsigned char**, const float*[0x3], struct FxMarkPoint*)>(L"R_AddMarkFragment<1>")(clipPoints, planes, markContext, baseIndex, maxTris, tris, maxPoints, triNormals, transformNormalMatrix, points);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMarkFragmentBounds(const float* origin, const float* axis[0x3], float radius, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float, float*, float*)>(L"R_GetMarkFragmentBounds")(origin, axis, radius, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMarkFragmentClipPlanes(const float* origin, const float* axis[0x3], float radius, struct MarkClipPlaneSet* clipPlanes) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float, struct MarkClipPlaneSet*)>(L"R_GetMarkFragmentClipPlanes")(origin, axis, radius, clipPlanes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragment_IsTriangleRejected(const float* markNormal, const float* xyz0, const float* xyz1, const float* xyz2, float* normal) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, float*)>(L"R_MarkFragment_IsTriangleRejected")(markNormal, xyz0, xyz1, xyz2, normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragment_SetupWorldClipPoints(const struct GfxWorldVertex* triVerts0, const unsigned short* indices, struct FxWorldMarkPoint* clipPoints[0x14]) -> void
{
  return Zynamic::Forward<void (const struct GfxWorldVertex*, const unsigned short*, struct FxWorldMarkPoint*[0x14])>(L"R_MarkFragment_SetupWorldClipPoints")(triVerts0, indices, clipPoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragment_DoTriangle<1>(struct MarkInfo* markInfo, const struct MarkClipPlaneSet* clipPlanes, const struct GfxMarkContext* markContext, const unsigned char** triNormals, const float* transformNormalMatrix[0x3], struct FxModelMarkPoint* clipPoints[0x14]) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, const struct MarkClipPlaneSet*, const struct GfxMarkContext*, const unsigned char**, const float*[0x3], struct FxModelMarkPoint*[0x14])>(L"R_MarkFragment_DoTriangle<1>")(markInfo, clipPlanes, markContext, triNormals, transformNormalMatrix, clipPoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_BrushSurface(struct MarkInfo* markInfo, struct GfxMarkContext* markContext, const struct MarkClipPlaneSet* clipPlanes, const float* markDir, const struct GfxSurface* surface, bool* anyMarks) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, struct GfxMarkContext*, const struct MarkClipPlaneSet*, const float*, const struct GfxSurface*, bool*)>(L"R_MarkFragments_BrushSurface")(markInfo, markContext, clipPlanes, markDir, surface, anyMarks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_WorldBrushes(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_WorldBrushes")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Mark_TransformClipPlanes(const struct MarkClipPlaneSet* inClipPlanes, float* matrix[0x3], struct MarkClipPlaneSet* outClipPlanes) -> void
{
  return Zynamic::Forward<void (const struct MarkClipPlaneSet*, float*[0x3], struct MarkClipPlaneSet*)>(L"R_Mark_TransformClipPlanes")(inClipPlanes, matrix, outClipPlanes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_EntBrushes(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_EntBrushes")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Glass(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_Glass")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Brushes(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_Brushes")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkModelCoreCallback<1>(void* contextAsVoid, const unsigned char** triVerts0, const unsigned char** triVerts1) -> bool
{
  return Zynamic::Forward<bool (void*, const unsigned char**, const unsigned char**)>(L"R_MarkModelCoreCallback<1>")(contextAsVoid, triVerts0, triVerts1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_XModelSurface_Basic(struct MarkInfo* markInfo, const struct XSurface* surface, const float* modelAxis[0x3], const float* modelOrigin, float modelScale, struct GfxMarkContext* markContext) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, const struct XSurface*, const float*[0x3], const float*, float, struct GfxMarkContext*)>(L"R_MarkFragments_XModelSurface_Basic")(markInfo, surface, modelAxis, modelOrigin, modelScale, markContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_EntirelyRigidXModel(struct MarkInfo* markInfo, const struct XModel* xmodel, const float* modelAxis[0x3], const float* modelOrigin, float modelScale, struct GfxMarkContext* markContext) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, const struct XModel*, const float*[0x3], const float*, float, struct GfxMarkContext*)>(L"R_MarkFragments_EntirelyRigidXModel")(markInfo, xmodel, modelAxis, modelOrigin, modelScale, markContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AnimatedXModel_VertList(struct MarkInfo* markInfo, int vertListIndex, const struct DObjAnimMat* poseBone, const struct DObjAnimMat* baseBone, struct GfxMarkContext* markContext, struct XSurface* surface) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, int, const struct DObjAnimMat*, const struct DObjAnimMat*, struct GfxMarkContext*, struct XSurface*)>(L"R_MarkFragments_AnimatedXModel_VertList")(markInfo, vertListIndex, poseBone, baseBone, markContext, surface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AnimatedXModel(struct MarkInfo* markInfo, const struct XModel* model, const unsigned int* hidePartBits, int boneIndex, const struct DObjAnimMat* boneMtxList, int boneCount, struct GfxMarkContext* markContext) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, const struct XModel*, const unsigned int*, int, const struct DObjAnimMat*, int, struct GfxMarkContext*)>(L"R_MarkFragments_AnimatedXModel")(markInfo, model, hidePartBits, boneIndex, boneMtxList, boneCount, markContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkUtil_GetDObjAnimMatAndHideParts(const struct DObj* dobj, const struct cpose_t* pose, const struct DObjAnimMat** outBoneMtxList, unsigned int* outHidePartBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const struct cpose_t*, const struct DObjAnimMat**, unsigned int*)>(L"R_MarkUtil_GetDObjAnimMatAndHideParts")(dobj, pose, outBoneMtxList, outHidePartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_SceneDObjs(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_SceneDObjs")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_StaticModels(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_StaticModels")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Models(struct MarkInfo* markInfo) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*)>(L"R_MarkFragments_Models")(markInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Begin(struct MarkInfo* markInfo, enum MarkFragmentsAgainstEnum markAgainst, const float* origin, const float* axis[0x3], float radius, const float* viewOffset, struct Material* material) -> void
{
  return Zynamic::Forward<void (struct MarkInfo*, enum MarkFragmentsAgainstEnum, const float*, const float*[0x3], float, const float*, struct Material*)>(L"R_MarkFragments_Begin")(markInfo, markAgainst, origin, axis, radius, viewOffset, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AddDObj(struct MarkInfo* markInfo, struct DObj* dObj, struct cpose_t* pose, unsigned short entityIndex) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, struct DObj*, struct cpose_t*, unsigned short)>(L"R_MarkFragments_AddDObj")(markInfo, dObj, pose, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AddBModel(struct MarkInfo* markInfo, struct GfxBrushModel* brushModel, struct cpose_t* pose, unsigned short entityIndex) -> bool
{
  return Zynamic::Forward<bool (struct MarkInfo*, struct GfxBrushModel*, struct cpose_t*, unsigned short)>(L"R_MarkFragments_AddBModel")(markInfo, brushModel, pose, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Go(struct MarkInfo* markInfo, function* callback, void* callbackContext, int maxTris, struct FxMarkTri* tris, int maxPoints, struct FxMarkPoint* points) -> void
{
  return Zynamic::Forward<void (struct MarkInfo*, function *, void*, int, struct FxMarkTri*, int, struct FxMarkPoint*)>(L"R_MarkFragments_Go")(markInfo, callback, callbackContext, maxTris, tris, maxPoints, points);
}

#endif // __UNIMPLEMENTED__
