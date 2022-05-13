//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'fx_add_markModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'fx_add_markModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkIsAlphaFadedOut(const struct FxMark* mark) -> bool
{
  return Zynamic::Forward<bool (const struct FxMark*)>(L"FX_MarkIsAlphaFadedOut")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkGetFadedAlpha(const struct FxMark* mark) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct FxMark*)>(L"FX_MarkGetFadedAlpha")(mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_marks() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_fx_marks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetFxMarkPointsBuffer() -> struct FxMarkPoint*
{
  return Zynamic::Forward<struct FxMarkPoint* ()>(L"FX_GetFxMarkPointsBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InitMarksSystem(struct FxMarksSystem* marksSystem) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*)>(L"FX_InitMarksSystem")(marksSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ClearMarks(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_ClearMarks")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeMarkTriGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*)>(L"FX_FreeMarkTriGroups")(marksSystem, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeMarkPointGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*)>(L"FX_FreeMarkPointGroups")(marksSystem, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeMarkFromList(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short* listHead) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*, unsigned short*)>(L"FX_FreeMarkFromList")(marksSystem, mark, listHead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeMark(struct FxMarksSystem* marksSystem, struct FxMark* mark) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*)>(L"FX_FreeMark")(marksSystem, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeLruMark(struct FxMarksSystem* marksSystem) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*)>(L"FX_FreeLruMark")(marksSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* markTris, int triCount) -> int
{
  return Zynamic::Forward<int (struct FxMarksSystem*, const struct FxMarkTri*, int)>(L"FX_AllocMarkTris")(marksSystem, markTris, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocMarkPoints(struct FxMarksSystem* marksSystem, int pointCount) -> int
{
  return Zynamic::Forward<int (struct FxMarksSystem*, int)>(L"FX_AllocMarkPoints")(marksSystem, pointCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LinkMarkIntoList(struct FxMarksSystem* marksSystem, unsigned short* head, struct FxMark* mark) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, unsigned short*, struct FxMark*)>(L"FX_LinkMarkIntoList")(marksSystem, head, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* srcTris, int dstGroupHandle, int triCount) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const struct FxMarkTri*, int, int)>(L"FX_CopyMarkTris")(marksSystem, srcTris, dstGroupHandle, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyMarkPoints(struct FxMarksSystem* marksSystem, const struct FxMarkPoint* srcPoints, int dstGroupHandle, int pointCount) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const struct FxMarkPoint*, int, int)>(L"FX_CopyMarkPoints")(marksSystem, srcPoints, dstGroupHandle, pointCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FindModelHead(struct FxMarksSystem* marksSystem, unsigned short modelIndex, int type) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxMarksSystem*, unsigned short, int)>(L"FX_FindModelHead")(marksSystem, modelIndex, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkContextsCompare(const struct GfxMarkContext* context0, const struct GfxMarkContext* context1) -> int
{
  return Zynamic::Forward<int (const struct GfxMarkContext*, const struct GfxMarkContext*)>(L"FX_MarkContextsCompare")(context0, context1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CompareMarkTris(const struct FxMarkTri& tri0, const struct FxMarkTri& tri1) -> bool
{
  return Zynamic::Forward<bool (const struct FxMarkTri&, const struct FxMarkTri&)>(L"FX_CompareMarkTris")(tri0, tri1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SeeThruMarkOverlaps(struct FxMarksSystem* marksSystem, const float* origin, const float radius, const float* hitNormal) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, const float*, const float, const float*)>(L"FX_SeeThruMarkOverlaps")(marksSystem, origin, radius, hitNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocAndConstructMark(int localClientNum, int triCount, int pointCount, struct Material* material, struct FxMarkTri* markTris, const struct FxMarkPoint* markPoints, const float* origin, const float* hitNormal, float radius, const float* texCoordAxis, const unsigned char* nativeColor, const struct FxMarkAlphaFade* markAlpha, const bool isSeeThruDecal) -> void
{
  return Zynamic::Forward<void (int, int, int, struct Material*, struct FxMarkTri*, const struct FxMarkPoint*, const float*, const float*, float, const float*, const unsigned char*, const struct FxMarkAlphaFade*, const bool)>(L"FX_AllocAndConstructMark")(localClientNum, triCount, pointCount, material, markTris, markPoints, origin, hitNormal, radius, texCoordAxis, nativeColor, markAlpha, isSeeThruDecal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMark_Generate_AddEntityBrush(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius) -> void
{
  return Zynamic::Forward<void (int, struct MarkInfo*, unsigned int, const float*, float)>(L"FX_ImpactMark_Generate_AddEntityBrush")(localClientNum, markInfo, entityIndex, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMark_Generate_AddEntityModel(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius) -> void
{
  return Zynamic::Forward<void (int, struct MarkInfo*, unsigned int, const float*, float)>(L"FX_ImpactMark_Generate_AddEntityModel")(localClientNum, markInfo, entityIndex, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMark_Generate_Callback(void* context, int triCount, struct FxMarkTri* tris, int pointCount, struct FxMarkPoint* points, const float* markOrigin, const float* markTexCoordAxis, const float* markHitNormal, const bool isSeeThruDecal) -> void
{
  return Zynamic::Forward<void (void*, int, struct FxMarkTri*, int, struct FxMarkPoint*, const float*, const float*, const float*, const bool)>(L"FX_ImpactMark_Generate_Callback")(context, triCount, tris, pointCount, points, markOrigin, markTexCoordAxis, markHitNormal, isSeeThruDecal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMark_Generate(int localClientNum, enum MarkFragmentsAgainstEnum markAgainst, struct Material* material, const float* origin, const float* axis[0x3], float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum, const struct FxMarkAlphaFade* markAlpha, bool isSeeThruDecal) -> void
{
  return Zynamic::Forward<void (int, enum MarkFragmentsAgainstEnum, struct Material*, const float*, const float*[0x3], float, const unsigned char*, float, unsigned int, const struct FxMarkAlphaFade*, bool)>(L"FX_ImpactMark_Generate")(localClientNum, markAgainst, material, origin, axis, orientation, nativeColor, radius, markEntnum, markAlpha, isSeeThruDecal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMark(int localClientNum, struct Material* worldMaterial, struct Material* modelMaterial, const float* origin, const float* quat, float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum, const struct FxMarkAlphaFade* markAlpha) -> void
{
  return Zynamic::Forward<void (int, struct Material*, struct Material*, const float*, const float*, float, const unsigned char*, float, unsigned int, const struct FxMarkAlphaFade*)>(L"FX_ImpactMark")(localClientNum, worldMaterial, modelMaterial, origin, quat, orientation, nativeColor, radius, markEntnum, markAlpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginMarks(int clientIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_BeginMarks")(clientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CreateImpactMarkInternal(int localClientNum, const struct FxElemDef* elemDef, const struct FxSpatialFrame* spatialFrame, int randomSeed, unsigned int markEntnum) -> void
{
  return Zynamic::Forward<void (int, const struct FxElemDef*, const struct FxSpatialFrame*, int, unsigned int)>(L"FX_CreateImpactMarkInternal")(localClientNum, elemDef, spatialFrame, randomSeed, markEntnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CreateImpactMark(int localClientNum, const struct FxElemDef* elemDef, const struct FxSpatialFrame* spatialFrame, int randomSeed, unsigned int markEntnum) -> void
{
  return Zynamic::Forward<void (int, const struct FxElemDef*, const struct FxSpatialFrame*, int, unsigned int)>(L"FX_CreateImpactMark")(localClientNum, elemDef, spatialFrame, randomSeed, markEntnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fx_add_markCallback(struct jqBatch* batch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"fx_add_markCallback")(batch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntDetachAll(int localClientNum, int entnum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_MarkEntDetachAll")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkGlassDetachAll(int localClientNum, int glassIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_MarkGlassDetachAll")(localClientNum, glassIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntDetachAllOfType(int localClientNum, int entnum, int markType) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"FX_MarkEntDetachAllOfType")(localClientNum, entnum, markType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntDetachMatchingBones(struct FxMarksSystem* marksSystem, int entnum, const unsigned int* unsetHidePartBits) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, int, const unsigned int*)>(L"FX_MarkEntDetachMatchingBones")(marksSystem, entnum, unsetHidePartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateHidePartBits(const unsigned int* oldHidePartBits, const unsigned int* newHidePartBits, int localClientNum, int entnum) -> void
{
  return Zynamic::Forward<void (const unsigned int*, const unsigned int*, int, int)>(L"FX_MarkEntUpdateHidePartBits")(oldHidePartBits, newHidePartBits, localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateBegin(struct FxMarkDObjUpdateContext* context, struct DObj* obj, bool isBrush, unsigned short brushIndex) -> void
{
  return Zynamic::Forward<void (struct FxMarkDObjUpdateContext*, struct DObj*, bool, unsigned short)>(L"FX_MarkEntUpdateBegin")(context, obj, isBrush, brushIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntDetachModel(struct FxMarksSystem* marksSystem, int entnum, int oldModelIndex) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, int, int)>(L"FX_MarkEntDetachModel")(marksSystem, entnum, oldModelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateEndDObj(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct FxMarkDObjUpdateContext*, int, int, struct DObj*)>(L"FX_MarkEntUpdateEndDObj")(context, localClientNum, entnum, obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateEnd(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj* obj, bool isBrush, unsigned short brushIndex) -> void
{
  return Zynamic::Forward<void (struct FxMarkDObjUpdateContext*, int, int, struct DObj*, bool, unsigned short)>(L"FX_MarkEntUpdateEnd")(context, localClientNum, entnum, obj, isBrush, brushIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto setTexCoordAndLMap<GfxPackedVertex>(struct GfxPackedVertex* outVert, const float* texCoord, const float* lmapCoord) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const float*, const float*)>(L"setTexCoordAndLMap<GfxPackedVertex>")(outVert, texCoord, lmapCoord);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ExpandMarkVerts_NoTransform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const struct FxMark*, unsigned short)>(L"FX_ExpandMarkVerts_NoTransform<GfxWorldVertex>")(marksSystem, mark, baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ExpandMarkVerts_Transform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, const float* matrixTransform[0x3]) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const struct FxMark*, unsigned short, const float*[0x3])>(L"FX_ExpandMarkVerts_Transform<GfxWorldVertex>")(marksSystem, mark, baseVertex, matrixTransform);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AddMarkTrisToScene(const struct FxActiveMarkSurf* outSurf) -> void
{
  return Zynamic::Forward<void (const struct FxActiveMarkSurf*)>(L"FX_AddMarkTrisToScene")(outSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EmitMarkTri(struct FxMarksSystem* marksSystem, const unsigned short* indices, const struct GfxMarkContext* markContext, unsigned short baseVertex, struct FxActiveMarkSurf* outSurf) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const unsigned short*, const struct GfxMarkContext*, unsigned short, struct FxActiveMarkSurf*)>(L"FX_EmitMarkTri")(marksSystem, indices, markContext, baseVertex, outSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawMarkTris(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, unsigned short* indices, struct FxActiveMarkSurf* outSurf) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, const struct FxMark*, unsigned short, unsigned short*, struct FxActiveMarkSurf*)>(L"FX_DrawMarkTris")(marksSystem, mark, baseVertex, indices, outSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_Begin(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned int* indexCount, unsigned short* outBaseVertex, struct FxActiveMarkSurf* outDrawSurf) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, struct FxMark*, unsigned int*, unsigned short*, struct FxActiveMarkSurf*)>(L"FX_GenerateMarkVertsForMark_Begin")(marksSystem, mark, indexCount, outBaseVertex, outDrawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_SetLightHandle(struct FxActiveMarkSurf* drawSurf, unsigned short lightHandleOverride) -> void
{
  return Zynamic::Forward<void (struct FxActiveMarkSurf*, unsigned short)>(L"FX_GenerateMarkVertsForMark_SetLightHandle")(drawSurf, lightHandleOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_SetReflectionProbeIndex(struct FxActiveMarkSurf* drawSurf, unsigned char reflectionProbeIndexOverride) -> void
{
  return Zynamic::Forward<void (struct FxActiveMarkSurf*, unsigned char)>(L"FX_GenerateMarkVertsForMark_SetReflectionProbeIndex")(drawSurf, reflectionProbeIndexOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_FinishNonAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*, unsigned short, struct FxActiveMarkSurf*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForMark_FinishNonAnimated")(marksSystem, mark, baseVertex, drawSurf, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_FinishAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf, const float* transform[0x3], const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, struct FxMark*, unsigned short, struct FxActiveMarkSurf*, const float*[0x3], const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForMark_FinishAnimated")(marksSystem, mark, baseVertex, drawSurf, transform, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_MatrixFromPlacement(const struct GfxPlacement* placement, const float* viewOffset, float* outTransform[0x3]) -> void
{
  return Zynamic::Forward<void (const struct GfxPlacement*, const float*, float*[0x3])>(L"FX_GenerateMarkVertsForMark_MatrixFromPlacement")(placement, viewOffset, outTransform);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForMark_MatrixFromAnim(const struct FxMark* mark, const struct DObj* dobj, const struct DObjAnimMat* boneMtxList, const float* viewOffset, float* outTransform[0x3]) -> void
{
  return Zynamic::Forward<void (const struct FxMark*, const struct DObj*, const struct DObjAnimMat*, const float*, float*[0x3])>(L"FX_GenerateMarkVertsForMark_MatrixFromAnim")(mark, dobj, boneMtxList, viewOffset, outTransform);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForList_EntDObj(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj* dobj, const struct DObjAnimMat* boneMtxList, unsigned int* hidePartBits, const struct GfxLight* visibleLights, int visibleLightCount) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, unsigned short, const struct FxCamera*, unsigned int*, unsigned short, unsigned char, const struct DObj*, const struct DObjAnimMat*, unsigned int*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForList_EntDObj")(marksSystem, head, camera, indexCount, lightHandleOverride, reflectionProbeIndexOverride, dobj, boneMtxList, hidePartBits, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForList_EntXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct GfxScaledPlacement* placement, const struct GfxLight* visibleLights, int visibleLightCount) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, unsigned short, const struct FxCamera*, unsigned int*, unsigned short, unsigned char, const struct GfxScaledPlacement*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForList_EntXModel")(marksSystem, head, camera, indexCount, lightHandleOverride, reflectionProbeIndexOverride, placement, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForList_EntBrush(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, const struct GfxPlacement* placement, unsigned char reflectionProbeIndex, const struct GfxLight* visibleLights, int visibleLightCount) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, unsigned short, const struct FxCamera*, unsigned int*, const struct GfxPlacement*, unsigned char, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForList_EntBrush")(marksSystem, head, camera, indexCount, placement, reflectionProbeIndex, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForList_WorldXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, const struct GfxLight* visibleLights, int visibleLightCount) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, unsigned short, const struct FxCamera*, unsigned int*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForList_WorldXModel")(marksSystem, head, camera, indexCount, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForList_WorldBrush(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, const struct GfxLight* visibleLights, int visibleLightCount) -> bool
{
  return Zynamic::Forward<bool (struct FxMarksSystem*, unsigned short, const struct FxCamera*, unsigned int*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForList_WorldBrush")(marksSystem, head, camera, indexCount, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FinishGeneratingMarkVerts(struct FxMarksSystem* marksSystem) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*)>(L"FX_FinishGeneratingMarkVerts")(marksSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginGeneratingMarkVertsForEntModels(int localClientNum, unsigned int* indexCount) -> void
{
  return Zynamic::Forward<void (int, unsigned int*)>(L"FX_BeginGeneratingMarkVertsForEntModels")(localClientNum, indexCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntXModel(int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct GfxScaledPlacement* placement, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int*, unsigned short, unsigned char, const struct GfxScaledPlacement*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForEntXModel")(localClientNum, entId, indexCount, lightHandle, reflectionProbeIndex, placement, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntDObj(int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj* dobj, const struct cpose_t* pose, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int*, unsigned short, unsigned char, const struct DObj*, const struct cpose_t*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForEntDObj")(localClientNum, entId, indexCount, lightHandle, reflectionProbeIndex, dobj, pose, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntBrush(int localClientNum, int entId, unsigned int* indexCount, unsigned char reflectionProbeIndex, const struct GfxPlacement* placement, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int*, unsigned char, const struct GfxPlacement*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForEntBrush")(localClientNum, entId, indexCount, reflectionProbeIndex, placement, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EndGeneratingMarkVertsForEntModels(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_EndGeneratingMarkVertsForEntModels")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForStaticModels(int localClientNum, int smodelCount, const unsigned char* smodelVisLods, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, int, const unsigned char*, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForStaticModels")(localClientNum, smodelCount, smodelVisLods, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForWorld(int localClientNum, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (int, const struct GfxLight*, int)>(L"FX_GenerateMarkVertsForWorld")(localClientNum, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkUpdateClientTime(int localClientNum, int frameTime) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_MarkUpdateClientTime")(localClientNum, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetFrameTotalSeeThruDecalCount(int localClientNum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int)>(L"FX_GetFrameTotalSeeThruDecalCount")(localClientNum);
}

#endif // __UNIMPLEMENTED__
