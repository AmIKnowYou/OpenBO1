//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_dpvs() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_dpvs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DpvsPlaneDistToEye(const struct DpvsPlane* plane) -> float
{
  return Zynamic::Forward<float (const struct DpvsPlane*)>(L"R_DpvsPlaneDistToEye")(plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSidePlaneNormals(const float* winding[0x3], unsigned int vertexCount, float* normals[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], unsigned int, float*[0x3])>(L"R_GetSidePlaneNormals")(winding, vertexCount, normals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FurthestPointOnWinding(const float* points[0x3], int pointCount, const struct DpvsPlane* plane) -> float
{
  return Zynamic::Forward<float (const float*[0x3], int, const struct DpvsPlane*)>(L"R_FurthestPointOnWinding")(points, pointCount, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_NearestPointOnWinding(const float* points[0x3], int pointCount, const struct DpvsPlane* plane) -> float
{
  return Zynamic::Forward<float (const float*[0x3], int, const struct DpvsPlane*)>(L"R_NearestPointOnWinding")(points, pointCount, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FrustumClipPlanes(const struct GfxMatrix* viewProjMtx, const float* sidePlanes[0x4], int sidePlaneCount, struct DpvsPlane* frustumPlanes) -> void
{
  return Zynamic::Forward<void (const struct GfxMatrix*, const float*[0x4], int, struct DpvsPlane*)>(L"R_FrustumClipPlanes")(viewProjMtx, sidePlanes, sidePlaneCount, frustumPlanes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalAssertMsg() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"R_PortalAssertMsg")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ProjectPortal(int vertexCount, const float* winding[0x3], float* mins, float* maxs, enum DpvsClipChildren* clipChildren) -> void
{
  return Zynamic::Forward<void (int, const float*[0x3], float*, float*, enum DpvsClipChildren*)>(L"R_ProjectPortal")(vertexCount, winding, mins, maxs, clipChildren);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnprojectPoint(const float* projected, float* unprojected) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"R_UnprojectPoint")(projected, unprojected);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBevelPlanes(struct DpvsPlane* planes, unsigned int vertexCount, const float* windingNormals[0x3], const float* mins, const float* maxs, enum DpvsForceBevels forceBevels) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct DpvsPlane*, unsigned int, const float*[0x3], const float*, const float*, enum DpvsForceBevels)>(L"R_AddBevelPlanes")(planes, vertexCount, windingNormals, mins, maxs, forceBevels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalClipPlanes(struct DpvsPlane* planes, unsigned int vertexCount, const float* winding[0x3], enum DpvsClipChildren* clipChildren) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct DpvsPlane*, unsigned int, const float*[0x3], enum DpvsClipChildren*)>(L"R_PortalClipPlanes")(planes, vertexCount, winding, clipChildren);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalClipPlanesNoFrustum(struct DpvsPlane* planes, unsigned int vertexCount, const float* winding[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct DpvsPlane*, unsigned int, const float*[0x3])>(L"R_PortalClipPlanesNoFrustum")(planes, vertexCount, winding);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellForPoint(const float* origin) -> int
{
  return Zynamic::Forward<int (const float*)>(L"R_CellForPoint")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalBehindPlane(const struct GfxPortal* portal, const struct DpvsPlane* plane) -> bool
{
  return Zynamic::Forward<bool (const struct GfxPortal*, const struct DpvsPlane*)>(L"R_PortalBehindPlane")(portal, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalBehindAnyPlane(const struct GfxPortal* portal, const struct DpvsPlane* planes, int planeCount) -> bool
{
  return Zynamic::Forward<bool (const struct GfxPortal*, const struct DpvsPlane*, int)>(L"R_PortalBehindAnyPlane")(portal, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChopPortalWinding(const float* vertsIn[0x3], int* vertexCount, const struct DpvsPlane* plane, float* vertsOut[0x3]) -> const float*
{
  return Zynamic::Forward<const float* (const float*[0x3], int*, const struct DpvsPlane*, float*[0x3])>(L"R_ChopPortalWinding")(vertsIn, vertexCount, plane, vertsOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindNearestReflectionProbeInCell(const struct GfxWorldDraw* worldDraw, const struct GfxCell* cell, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorldDraw*, const struct GfxCell*, const float*)>(L"R_FindNearestReflectionProbeInCell")(worldDraw, cell, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindNearestReflectionProbe(const struct GfxWorldDraw* worldDraw, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorldDraw*, const float*)>(L"R_FindNearestReflectionProbe")(worldDraw, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindProbeFromVolume(const struct GfxWorldDraw* worldDraw, const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxWorldDraw*, const float*)>(L"R_FindProbeFromVolume")(worldDraw, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcReflectionProbeIndex(const float* origin) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*)>(L"R_CalcReflectionProbeIndex")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LaunchDobjLightingJobs(const struct GfxViewInfo* viewInfo, unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned int, unsigned char*, struct GfxLightingInfo*)>(L"LaunchDobjLightingJobs")(viewInfo, sceneEntCount, sceneEntVisData, lightingInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinishDobjLighting(unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, const struct GfxLight* visibleLights, int visibleLightCount, bool isMissileCamera) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned char*, struct GfxLightingInfo*, union GfxDrawSurf**, union GfxDrawSurf**, const struct GfxLight*, int, bool)>(L"FinishDobjLighting")(sceneEntCount, sceneEntVisData, lightingInfo, drawSurfs, lastDrawSurfs, visibleLights, visibleLightCount, isMissileCamera);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LaunchModelLightingJobs(const struct GfxViewInfo* viewInfo, unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned int, unsigned char*, struct GfxLightingInfo*)>(L"LaunchModelLightingJobs")(viewInfo, sceneEntCount, sceneEntVisData, lightingInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinishModelLighting(unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned char*, struct GfxLightingInfo*, union GfxDrawSurf**, union GfxDrawSurf**, const struct GfxLight*, int)>(L"FinishModelLighting")(sceneEntCount, sceneEntVisData, lightingInfo, drawSurfs, lastDrawSurfs, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LaunchDynEntLightingJobs(const struct GfxViewInfo* viewInfo, unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned int, unsigned char*, struct GfxLightingInfo*)>(L"LaunchDynEntLightingJobs")(viewInfo, sceneEntCount, sceneEntVisData, lightingInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinishDynEntLighting(unsigned int sceneEntCount, unsigned char* sceneEntVisData, struct GfxLightingInfo* lightingInfo, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned char*, struct GfxLightingInfo*, union GfxDrawSurf**, union GfxDrawSurf**, const struct GfxLight*, int)>(L"FinishDynEntLighting")(sceneEntCount, sceneEntVisData, lightingInfo, drawSurfs, lastDrawSurfs, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesCamera(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"R_AddAllSceneEntSurfacesCamera")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesRangeSunShadow(unsigned int partitionIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_AddAllSceneEntSurfacesRangeSunShadow")(partitionIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesSunShadow() -> void
{
  return Zynamic::Forward<void ()>(L"R_AddAllSceneEntSurfacesSunShadow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesSpotShadow(const struct GfxViewInfo* viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned int, unsigned int)>(L"R_AddAllSceneEntSurfacesSpotShadow")(viewInfo, spotShadowIndex, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSceneDObj(unsigned int entnum, unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int)>(L"R_AddSceneDObj")(entnum, viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBModel(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, const struct GfxPlacement* placement, const struct ShaderConstantSet* constSet) -> int
{
  return Zynamic::Forward<int (struct BModelDrawInfo*, const struct GfxBrushModel*, const struct GfxPlacement*, const struct ShaderConstantSet*)>(L"R_DrawBModel")(bmodelInfo, bmodel, placement, constSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullDynBrushInCell(unsigned int cellIndex, const struct DpvsPlane* planes, int planeCount) -> void
{
  return Zynamic::Forward<void (unsigned int, const struct DpvsPlane*, int)>(L"R_CullDynBrushInCell")(cellIndex, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawAllSceneEnt(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"R_DrawAllSceneEnt")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawAllDynEnt(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"R_DrawAllDynEnt")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterEntIntoCells_r(struct FilterEntInfo* entInfo, struct mnode_t* node, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (struct FilterEntInfo*, struct mnode_t*, const float*, const float*)>(L"R_FilterEntIntoCells_r")(entInfo, node, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterDynEntIntoCells_r(struct mnode_t* node, unsigned int dynEntIndex, enum DynEntityDrawType drawType, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (struct mnode_t*, unsigned int, enum DynEntityDrawType, const float*, const float*)>(L"R_FilterDynEntIntoCells_r")(node, dynEntIndex, drawType, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnfilterEntFromCells(int localClientNum, unsigned int entnum) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"R_UnfilterEntFromCells")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnfilterDynEntFromCells(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType)>(L"R_UnfilterDynEntFromCells")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterDObjIntoCells(int localClientNum, unsigned int entnum, float* origin, float radius) -> void
{
  return Zynamic::Forward<void (int, unsigned int, float*, float)>(L"R_FilterDObjIntoCells")(localClientNum, entnum, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterBModelIntoCells(int localClientNum, unsigned int entnum, struct GfxBrushModel* bmodel) -> void
{
  return Zynamic::Forward<void (int, unsigned int, struct GfxBrushModel*)>(L"R_FilterBModelIntoCells")(localClientNum, entnum, bmodel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterDynEntIntoCells(unsigned int dynEntId, enum DynEntityDrawType drawType, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType, float*, float*)>(L"R_FilterDynEntIntoCells")(dynEntId, drawType, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterXModelIntoScene(const struct XModel* model, const struct GfxScaledPlacement* placement, unsigned short renderFxFlags, unsigned short* cachedLightingHandle, float lightToleranceSq) -> void
{
  return Zynamic::Forward<void (const struct XModel*, const struct GfxScaledPlacement*, unsigned short, unsigned short*, float)>(L"R_FilterXModelIntoScene")(model, placement, renderFxFlags, cachedLightingHandle, lightToleranceSq);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitialEntityCulling() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitialEntityCulling")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetStaticModelsAabb(const struct GfxAabbTree* tree, const float* mins, const float* maxs, int* models, int& models_count, int max_models) -> void
{
  return Zynamic::Forward<void (const struct GfxAabbTree*, const float*, const float*, int*, int&, int)>(L"R_GetStaticModelsAabb")(tree, mins, maxs, models, models_count, max_models);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetStaticModels(const float* mins, const float* maxs, int* models, int& models_count, int max_models) -> void
{
  return Zynamic::Forward<void (const float*, const float*, int*, int&, int)>(L"R_GetStaticModels")(mins, maxs, models, models_count, max_models);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVisData(unsigned int viewIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"R_SetVisData")(viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellDynBrushSurfacesInFrustumCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_AddCellDynBrushSurfacesInFrustumCmd")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellSurfacesAndCullGroupsInFrustumDelayed(const struct GfxCell* cell, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*, const struct DpvsPlane*, int, int)>(L"R_AddCellSurfacesAndCullGroupsInFrustumDelayed")(cell, planes, planeCount, frustumPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssertValidQueue() -> void
{
  return Zynamic::Forward<void ()>(L"R_AssertValidQueue")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnqueuePortal(struct GfxPortal* portal) -> void
{
  return Zynamic::Forward<void (struct GfxPortal*)>(L"R_EnqueuePortal")(portal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_NextQueuedPortal() -> struct GfxPortal*
{
  return Zynamic::Forward<struct GfxPortal* ()>(L"R_NextQueuedPortal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocHullPoints() -> float*
{
  return Zynamic::Forward<float* ()>(L"R_AllocHullPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeHullPoints(float* hullPoints[0x2]) -> void
{
  return Zynamic::Forward<void (float*[0x2])>(L"R_FreeHullPoints")(hullPoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddVertToPortalHullPoints(struct GfxPortal* portal, const float* v) -> void
{
  return Zynamic::Forward<void (struct GfxPortal*, const float*)>(L"R_AddVertToPortalHullPoints")(portal, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShouldSkipPortal(const struct GfxPortal* portal, const struct DpvsPlane* planes, int planeCount) -> bool
{
  return Zynamic::Forward<bool (const struct GfxPortal*, const struct DpvsPlane*, int)>(L"R_ShouldSkipPortal")(portal, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChopPortal(const struct GfxPortal* portal[0x2], const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, float* v[0x128], const float** finalVerts[0x3]) -> int
{
  return Zynamic::Forward<int (const struct GfxPortal*[0x2], const struct DpvsPlane*, const struct DpvsPlane*, int, float*[0x128], const float**[0x3])>(L"R_ChopPortal")(portal, parentPlane, planes, planeCount, v, finalVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChopPortalAndAddHullPoints(struct GfxPortal* portal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount) -> bool
{
  return Zynamic::Forward<bool (struct GfxPortal*, const struct DpvsPlane*, const struct DpvsPlane*, int)>(L"R_ChopPortalAndAddHullPoints")(portal, parentPlane, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChopPortalAndAddHullPointsNoFrustum(struct GfxPortal* portal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount) -> bool
{
  return Zynamic::Forward<bool (struct GfxPortal*, const struct DpvsPlane*, const struct DpvsPlane*, int)>(L"R_ChopPortalAndAddHullPointsNoFrustum")(portal, parentPlane, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsCellInList(const struct GfxCell* cell, const struct GfxCell** list, int count) -> bool
{
  return Zynamic::Forward<bool (const struct GfxCell*, const struct GfxCell**, int)>(L"R_IsCellInList")(cell, list, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellToList(const struct GfxCell* cell, const struct GfxCell** list, int count) -> int
{
  return Zynamic::Forward<int (const struct GfxCell*, const struct GfxCell**, int)>(L"R_AddCellToList")(cell, list, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFurtherCellList_r(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, float* v[0x128], const struct GfxCell** list, int count) -> int
{
  return Zynamic::Forward<int (const struct GfxCell*, const struct DpvsPlane*, const struct DpvsPlane*, int, float*[0x128], const struct GfxCell**, int)>(L"R_GetFurtherCellList_r")(cell, parentPlane, planes, planeCount, v, list, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCellVisible(const struct GfxCell* cell) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*)>(L"R_SetCellVisible")(cell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellIsForcedInvisible(const struct GfxCell* cell) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxCell*)>(L"R_CellIsForcedInvisible")(cell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VisitAllFurtherCells(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*, const struct DpvsPlane*, const struct DpvsPlane*, int, int)>(L"R_VisitAllFurtherCells")(cell, parentPlane, planes, planeCount, frustumPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAncestorListStatus(struct GfxPortal* portal, bool isAncestor) -> void
{
  return Zynamic::Forward<void (struct GfxPortal*, bool)>(L"R_SetAncestorListStatus")(portal, isAncestor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VisitPortalsForCell(const struct GfxCell* cell, struct GfxPortal* parentPortal, const struct DpvsPlane* parentPlane, struct DpvsPlane* planes, unsigned int maxPlaneCount, unsigned int planeCount, int frustumPlaneCount, unsigned int recursionDepth, enum DpvsClipChildren clipChildren) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*, struct GfxPortal*, const struct DpvsPlane*, struct DpvsPlane*, unsigned int, unsigned int, int, unsigned int, enum DpvsClipChildren)>(L"R_VisitPortalsForCell")(cell, parentPortal, parentPlane, planes, maxPlaneCount, planeCount, frustumPlaneCount, recursionDepth, clipChildren);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VisitPortals(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, struct DpvsPlane* planes, int planeCount) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*, const struct DpvsPlane*, struct DpvsPlane*, int)>(L"R_VisitPortals")(cell, parentPlane, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VisitPortalsForCellNoFrustum(const struct GfxCell* cell, struct GfxPortal* parentPortal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, unsigned int recursionDepth) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*, struct GfxPortal*, const struct DpvsPlane*, const struct DpvsPlane*, int, unsigned int)>(L"R_VisitPortalsForCellNoFrustum")(cell, parentPortal, parentPlane, planes, planeCount, recursionDepth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VisitPortalsNoFrustum(const struct GfxCell* cell) -> void
{
  return Zynamic::Forward<void (const struct GfxCell*)>(L"R_VisitPortalsNoFrustum")(cell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateShadowMapCasterCells() -> void
{
  return Zynamic::Forward<void ()>(L"R_GenerateShadowMapCasterCells")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddWorldSurfacesFrustumOnly(unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_AddWorldSurfacesFrustumOnly")(viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowCull(const float* viewOrigin) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_ShowCull")(viewOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSceneData(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_InitSceneData")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_InitFilter() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntCl_InitFilter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSceneBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitSceneBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownSceneBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownSceneBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearDpvsScene() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearDpvsScene")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearDpvsScene_For_ExtraCam() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearDpvsScene_For_ExtraCam")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullDynamicSpotLightInCameraView() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_CullDynamicSpotLightInCameraView")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullDynamicPointLightsInCameraView() -> void
{
  return Zynamic::Forward<void ()>(L"R_CullDynamicPointLightsInCameraView")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointFrom3Planes(float* a, float* b, float* c, float* r) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*)>(L"PointFrom3Planes")(a, b, c, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupWorldSurfacesDpvs(const struct GfxViewParms* viewParms, unsigned int renderCullFlags) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, unsigned int)>(L"R_SetupWorldSurfacesDpvs")(viewParms, renderCullFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnableOccluder(const char* name, bool enable) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"R_EnableOccluder")(name, enable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewFrustumPlanes(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_SetViewFrustumPlanes")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddWorldSurfacesPortalWalk(int cameraCellIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"R_AddWorldSurfacesPortalWalk")(cameraCellIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddWorldSurfacesDpvs(const struct GfxViewParms* viewParms, int cameraCellIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, int)>(L"R_AddWorldSurfacesDpvs")(viewParms, cameraCellIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupShadowSurfacesDpvs(const struct GfxViewParms* viewParms, const float* sidePlanes[0x4], unsigned int sidePlaneCount, int partitionIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, const float*[0x4], unsigned int, int)>(L"R_SetupShadowSurfacesDpvs")(viewParms, sidePlanes, sidePlaneCount, partitionIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFarPlaneDist() -> float
{
  return Zynamic::Forward<float ()>(L"R_GetFarPlaneDist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCullDist(float dist) -> void
{
  return Zynamic::Forward<void (float)>(L"R_SetCullDist")(dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullBoxCurDpvs_SceneSelect(const float* minmax, unsigned int viewIndex, unsigned int sceneIndex) -> int
{
  return Zynamic::Forward<int (const float*, unsigned int, unsigned int)>(L"R_CullBoxCurDpvs_SceneSelect")(minmax, viewIndex, sceneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullBoxCurDpvs(const float* minmax, unsigned int viewIndex) -> int
{
  return Zynamic::Forward<int (const float*, unsigned int)>(L"R_CullBoxCurDpvs")(minmax, viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullPoint(int localClient, const float* p0, float cutoff) -> int
{
  return Zynamic::Forward<int (int, const float*, float)>(L"R_CullPoint")(localClient, p0, cutoff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullPoint(const float* point, float cutoff) -> int
{
  return Zynamic::Forward<int (const float*, float)>(L"R_CullPoint")(point, cutoff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullLine(int localClient, const float* p0, const float* p1, float cutoff) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, float)>(L"R_CullLine")(localClient, p0, p1, cutoff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ExtraCam_SaveDpvsData(int localClientNum, unsigned char* buffer, unsigned int bufferByteSize) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, unsigned char*, unsigned int)>(L"R_ExtraCam_SaveDpvsData")(localClientNum, buffer, bufferByteSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ExtraCam_RestoreDpvsData(int localClientNum, unsigned char* buffer) -> void
{
  return Zynamic::Forward<void (int, unsigned char*)>(L"R_ExtraCam_RestoreDpvsData")(localClientNum, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PerMap_DpvsGlobInit() -> void
{
  return Zynamic::Forward<void ()>(L"R_PerMap_DpvsGlobInit")();
}

#endif // __UNIMPLEMENTED__
