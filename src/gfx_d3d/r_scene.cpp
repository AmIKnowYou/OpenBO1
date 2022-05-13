//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_scene''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_scene''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetScene() -> struct GfxScene*
{
  return Zynamic::Forward<struct GfxScene* ()>(L"R_GetScene")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocSceneDObj() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_AllocSceneDObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocSceneModel() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_AllocSceneModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocTextureOverride(unsigned int modelIndexMask, const struct GfxImage* img1, const struct GfxImage* img2, int prevOverride) -> int
{
  return Zynamic::Forward<int (unsigned int, const struct GfxImage*, const struct GfxImage*, int)>(L"R_AllocTextureOverride")(modelIndexMask, img1, img2, prevOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocTextureOverride(const struct Material* material, unsigned int modelIndexMask, const struct GfxImage* img1, const struct GfxImage* img2, int prevOverride) -> int
{
  return Zynamic::Forward<int (const struct Material*, unsigned int, const struct GfxImage*, const struct GfxImage*, int)>(L"R_AllocTextureOverride")(material, modelIndexMask, img1, img2, prevOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocSceneBrush() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_AllocSceneBrush")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBrushModel(unsigned int modelIndex) -> struct GfxBrushModel*
{
  return Zynamic::Forward<struct GfxBrushModel* (unsigned int)>(L"R_GetBrushModel")(modelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBrushModelToSceneFromAngles(const struct GfxBrushModel* bmodel, const float* origin, const float* angles, unsigned int entnum, const struct ShaderConstantSet* constants) -> void
{
  return Zynamic::Forward<void (const struct GfxBrushModel*, const float*, const float*, unsigned int, const struct ShaderConstantSet*)>(L"R_AddBrushModelToSceneFromAngles")(bmodel, origin, angles, entnum, constants);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddGlassBrushToScene(const struct GfxBrushModel* bmodel, const float* origin, const float* angles, struct Material* altStreamingMaterial) -> void
{
  return Zynamic::Forward<void (const struct GfxBrushModel*, const float*, const float*, struct Material*)>(L"R_AddGlassBrushToScene")(bmodel, origin, angles, altStreamingMaterial);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjToScene(const struct DObj* obj, const struct cpose_t* pose, unsigned int entnum, unsigned int renderFxFlags, float* lightingOrigin, float materialTime, float materialTime2, float burnFraction, float wetness, int altXModel, int textureOverrideIndex, const struct ShaderConstantSet* dobjConstantSet, const struct ShaderConstantSet* dobjConstantSetExtraCam, float lightingOriginToleranceSq, float scale) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const struct cpose_t*, unsigned int, unsigned int, float*, float, float, float, float, int, int, const struct ShaderConstantSet*, const struct ShaderConstantSet*, float, float)>(L"R_AddDObjToScene")(obj, pose, entnum, renderFxFlags, lightingOrigin, materialTime, materialTime2, burnFraction, wetness, altXModel, textureOverrideIndex, dobjConstantSet, dobjConstantSetExtraCam, lightingOriginToleranceSq, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddParticleCloudToScene(struct Material* material) -> struct GfxParticleCloud*
{
  return Zynamic::Forward<struct GfxParticleCloud* (struct Material*)>(L"R_AddParticleCloudToScene")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddOmniLightToScene(const float* org, const float* axis[0x3], float radius, float r, float g, float b) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float, float, float, float)>(L"R_AddOmniLightToScene")(org, axis, radius, r, g, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSpotLightToScene(const float* org, const float* axis[0x3], float radius, float r, float g, float b) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float, float, float, float)>(L"R_AddSpotLightToScene")(org, axis, radius, r, g, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto lerp(float from, float to, float t) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"lerp")(from, to, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto lerp(float& dest[0x4], const float& from[0x4], const float& to[0x4], float t) -> void
{
  return Zynamic::Forward<void (float&[0x4], const float&[0x4], const float&[0x4], float)>(L"lerp")(dest, from, to, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto lerp(float& dest[0x3], const float& from[0x3], const float& to[0x3], float t) -> void
{
  return Zynamic::Forward<void (float&[0x3], const float&[0x3], const float&[0x3], float)>(L"lerp")(dest, from, to, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateFrameFog(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_UpdateFrameFog")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDefaultNearClip() -> float
{
  return Zynamic::Forward<float ()>(L"R_GetDefaultNearClip")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupProjection(float tanHalfFovX, float tanHalfFovY, struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (float, float, struct GfxViewParms*)>(L"R_SetupProjection")(tanHalfFovX, tanHalfFovY, viewParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupViewProjectionMatrices(struct GfxViewParms* viewParms, bool offsetmatrix) -> void
{
  return Zynamic::Forward<void (struct GfxViewParms*, bool)>(L"R_SetupViewProjectionMatrices")(viewParms, offsetmatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetAllowShadowMaps() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_GetAllowShadowMaps")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynamicShadowType() -> enum ShadowType
{
  return Zynamic::Forward<enum ShadowType ()>(L"R_DynamicShadowType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBModelSurfacesCamera(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, unsigned int reflectionProbeIndex, float burnAmt, float fadeAmt, unsigned int visLightsMask) -> void
{
  return Zynamic::Forward<void (struct BModelDrawInfo*, const struct GfxBrushModel*, union GfxDrawSurf**, union GfxDrawSurf**, unsigned int, float, float, unsigned int)>(L"R_AddBModelSurfacesCamera")(bmodelInfo, bmodel, drawSurfs, lastDrawSurfs, reflectionProbeIndex, burnAmt, fadeAmt, visLightsMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBModelSurfaces(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, unsigned char techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf) -> union GfxDrawSurf*
{
  return Zynamic::Forward<union GfxDrawSurf* (struct BModelDrawInfo*, const struct GfxBrushModel*, unsigned char, union GfxDrawSurf*, union GfxDrawSurf*)>(L"R_AddBModelSurfaces")(bmodelInfo, bmodel, techType, drawSurf, lastDrawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetXSurface(const void* modelSurf, enum surfaceType_t surfType) -> const struct XSurface*
{
  return Zynamic::Forward<const struct XSurface* (const void*, enum surfaceType_t)>(L"R_GetXSurface")(modelSurf, surfType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetEnablePlayerShadowFlag(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"R_SetEnablePlayerShadowFlag")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddXModelSurfacesCamera(struct XModelDrawInfo* modelInfo, const struct XModel* model, float* origin, unsigned int gfxEntIndex, unsigned int lightingHandle, unsigned int primaryLightIndex, int isShadowReceiver, int depthHack, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, unsigned int reflectionProbeIndex, unsigned int constantSetIndex, unsigned int visLightsMask) -> void
{
  return Zynamic::Forward<void (struct XModelDrawInfo*, const struct XModel*, float*, unsigned int, unsigned int, unsigned int, int, int, union GfxDrawSurf**, union GfxDrawSurf**, unsigned int, unsigned int, unsigned int)>(L"R_AddXModelSurfacesCamera")(modelInfo, model, origin, gfxEntIndex, lightingHandle, primaryLightIndex, isShadowReceiver, depthHack, drawSurfs, lastDrawSurfs, reflectionProbeIndex, constantSetIndex, visLightsMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddXModelSurfaces(struct XModelDrawInfo* modelInfo, const struct XModel* model, unsigned char techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf) -> union GfxDrawSurf*
{
  return Zynamic::Forward<union GfxDrawSurf* (struct XModelDrawInfo*, const struct XModel*, unsigned char, union GfxDrawSurf*, union GfxDrawSurf*)>(L"R_AddXModelSurfaces")(modelInfo, model, techType, drawSurf, lastDrawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjSurfacesCamera(struct GfxSceneEntity* sceneEnt, unsigned int lightingHandle, unsigned int primaryLightIndex, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, unsigned int visLightsMask, bool isMissileCamera) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*, unsigned int, unsigned int, union GfxDrawSurf**, union GfxDrawSurf**, unsigned int, bool)>(L"R_AddDObjSurfacesCamera")(sceneEnt, lightingHandle, primaryLightIndex, drawSurfs, lastDrawSurfs, visLightsMask, isMissileCamera);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjSurfaces(struct GfxSceneEntity* sceneEnt, unsigned char techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf) -> union GfxDrawSurf*
{
  return Zynamic::Forward<union GfxDrawSurf* (struct GfxSceneEntity*, unsigned char, union GfxDrawSurf*, union GfxDrawSurf*)>(L"R_AddDObjSurfaces")(sceneEnt, techType, drawSurf, lastDrawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSceneComposition(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms, bool extraCam) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*, bool)>(L"R_SetSceneComposition")(viewInfo, sceneParms, extraCam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckShadowMapVolumes(const float* position) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_CheckShadowMapVolumes")(position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckExposureVolumes(float* position, float& feather) -> int
{
  return Zynamic::Forward<int (float*, float&)>(L"R_CheckExposureVolumes")(position, feather);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateExposureValue(struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (struct refdef_s*)>(L"R_UpdateExposureValue")(refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetExposure(struct GfxViewInfo* viewInfo, const struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct refdef_s*)>(L"R_SetExposure")(viewInfo, refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetDepthOfField(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetDepthOfField")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetDoubleVision(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetDoubleVision")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWaterSheetingFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetWaterSheetingFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetFlameFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetFlameFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetElectrifiedFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetElectrifiedFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetTransportedFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetTransportedFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetReviveFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetReviveFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetGenericFilter(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetGenericFilter")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPoisonFx(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetPoisonFx")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetFilmInfo(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetFilmInfo")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetBloomInfo(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetBloomInfo")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCharacterPrimaryLightScaleInfo(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxSceneParms*)>(L"R_SetCharacterPrimaryLightScaleInfo")(viewInfo, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetFullSceneViewMesh(int viewInfoIndex, struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (int, struct GfxViewInfo*)>(L"R_SetFullSceneViewMesh")(viewInfoIndex, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndFencePending() -> int
{
  return Zynamic::Forward<int ()>(L"R_EndFencePending")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynamicFencePending() -> int
{
  return Zynamic::Forward<int ()>(L"R_DynamicFencePending")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetEndTime(int endTime) -> void
{
  return Zynamic::Forward<void (int)>(L"R_SetEndTime")(endTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaitEndTime() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaitEndTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateSortedSunShadowDrawSurfs(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_GenerateSortedSunShadowDrawSurfs")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddEmissiveSpotLight(struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*)>(L"R_AddEmissiveSpotLight")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateMarkVertsForDynamicModels(const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, int)>(L"R_GenerateMarkVertsForDynamicModels")(visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetVisibleDLights(struct GfxLight* visibleLights) -> int
{
  return Zynamic::Forward<int (struct GfxLight*)>(L"R_GetVisibleDLights")(visibleLights);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetLightSurfs(const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (const struct GfxLight*, int)>(L"R_GetLightSurfs")(visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPointLightShadowSurfs(struct GfxViewInfo* viewInfo, struct GfxVisibleLight* visibleLights, const struct GfxLight* lights, int numLights) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, struct GfxVisibleLight*, const struct GfxLight*, int)>(L"R_GetPointLightShadowSurfs")(viewInfo, visibleLights, lights, numLights);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetEmissiveTechnique(const struct GfxViewInfo* viewInfo, unsigned char baseTech) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxViewInfo*, unsigned char)>(L"R_GetEmissiveTechnique")(viewInfo, baseTech);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSunShadowConstants(struct GfxCmdBufInput* input, const struct GfxSunShadowProjection* sunProj) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, const struct GfxSunShadowProjection*)>(L"R_SetSunShadowConstants")(input, sunProj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSunConstants(struct GfxCmdBufInput* input, float sunVisibility) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, float)>(L"R_SetSunConstants")(input, sunVisibility);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetHeroLighting(struct GfxCmdBufInput* input, struct GfxViewInfo* viewInfo, const struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, struct GfxViewInfo*, const struct refdef_s*)>(L"R_SetHeroLighting")(input, viewInfo, refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetHDRControlConstants(struct GfxCmdBufInput* input, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, const struct GfxViewInfo*)>(L"R_SetHDRControlConstants")(input, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetDLightsConstantsDefaults(struct GfxCmdBufInput* input) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*)>(L"R_SetDLightsConstantsDefaults")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetDLightsConstants(struct GfxCmdBufInput* input, const struct GfxViewInfo* viewInfo, const struct GfxLight* visibleLights, int visibleLightCount) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, const struct GfxViewInfo*, const struct GfxLight*, int)>(L"R_SetDLightsConstants")(input, viewInfo, visibleLights, visibleLightCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DoesDrawSurfListInfoNeedFloatz(struct GfxViewInfo* viewInfo, struct GfxDrawSurfListInfo* emissiveInfo) -> bool
{
  return Zynamic::Forward<bool (struct GfxViewInfo*, struct GfxDrawSurfListInfo*)>(L"R_DoesDrawSurfListInfoNeedFloatz")(viewInfo, emissiveInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCineWarning() -> void
{
  return Zynamic::Forward<void ()>(L"R_DrawCineWarning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SplitDrawSurfacesPrimarySortKey(struct GfxDrawSurfListInfo* srcList, struct GfxDrawSurfListInfo* destList, int sortkeyID) -> void
{
  return Zynamic::Forward<void (struct GfxDrawSurfListInfo*, struct GfxDrawSurfListInfo*, int)>(L"R_SplitDrawSurfacesPrimarySortKey")(srcList, destList, sortkeyID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawLightDebug(const struct GfxViewInfo* viewInfo, const struct GfxLight* L, const float* debugColor) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, const struct GfxLight*, const float*)>(L"DrawLightDebug")(viewInfo, L, debugColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawOutdoorBoundsVolumeDebug() -> void
{
  return Zynamic::Forward<void ()>(L"DrawOutdoorBoundsVolumeDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawSunDirectionDebug(const float* viewOrg, const float* viewForward) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"DrawSunDirectionDebug")(viewOrg, viewForward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortAllCodeMeshSurfacesSunShadow() -> void
{
  return Zynamic::Forward<void ()>(L"R_SortAllCodeMeshSurfacesSunShadow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFogParams() -> void
{
  return Zynamic::Forward<void ()>(L"R_DrawFogParams")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSkyDynamicIntensity(const float* viewForward, struct GfxCmdBufInput* input) -> void
{
  return Zynamic::Forward<void (const float*, struct GfxCmdBufInput*)>(L"R_SetSkyDynamicIntensity")(viewForward, input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaitForFXUpdateWorkerCmds() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaitForFXUpdateWorkerCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishDecalAndEmissiveDrawSurfs(struct GfxViewInfo* viewInfo, const struct GfxViewParms* viewParmsDraw, struct GfxBackEndData* backendData, bool forMissileCamView) -> void
{
  return Zynamic::Forward<void (struct GfxViewInfo*, const struct GfxViewParms*, struct GfxBackEndData*, bool)>(L"R_FinishDecalAndEmissiveDrawSurfs")(viewInfo, viewParmsDraw, backendData, forMissileCamView);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateSortedDrawSurfs(const struct GfxSceneParms* sceneParms, const struct GfxViewParms* viewParmsDpvs, const struct GfxViewParms* viewParmsDraw, int frameTime, const struct refdef_s* refdef, bool forMissileCamView) -> void
{
  return Zynamic::Forward<void (const struct GfxSceneParms*, const struct GfxViewParms*, const struct GfxViewParms*, int, const struct refdef_s*, bool)>(L"R_GenerateSortedDrawSurfs")(sceneParms, viewParmsDpvs, viewParmsDraw, frameTime, refdef, forMissileCamView);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitScene() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitScene")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearSceneDynSModelVisBits() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearSceneDynSModelVisBits")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScene(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_ClearScene")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScene_For_ExtraCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"R_ClearScene_For_ExtraCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetLocalClientNum() -> int
{
  return Zynamic::Forward<int ()>(L"R_GetLocalClientNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewParmsForScene(const struct refdef_s* refdef, struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, struct GfxViewParms*)>(L"R_SetViewParmsForScene")(refdef, viewParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSceneParms(const struct refdef_s* refdef, struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, struct GfxSceneParms*)>(L"R_SetSceneParms")(refdef, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MissileCam_SetSceneParms(const struct refdef_s* refdef, struct GfxSceneParms* sceneParms) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, struct GfxSceneParms*)>(L"R_MissileCam_SetSceneParms")(refdef, sceneParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LerpDir(const float* dirBegin, const float* dirEnd, const int beginLerpTime, const int endLerpTime, const int currTime, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const int, const int, const int, float*)>(L"R_LerpDir")(dirBegin, dirEnd, beginLerpTime, endLerpTime, currTime, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateFrameSun() -> void
{
  return Zynamic::Forward<void ()>(L"R_UpdateFrameSun")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateLodParms(const struct refdef_s* refdef, struct GfxLodParms* lodParms) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, struct GfxLodParms*)>(L"R_UpdateLodParms")(refdef, lodParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLodOrigin(const struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*)>(L"R_SetLodOrigin")(refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CorrectLodScale(const struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*)>(L"R_CorrectLodScale")(refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderScene(const struct refdef_s* refdef, int frameTime) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, int)>(L"R_RenderScene")(refdef, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderMissileCam(const struct refdef_s* refdef, int frameTime) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, int)>(L"R_RenderMissileCam")(refdef, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDObjEntity(int localClientNum, unsigned int entnum, float* origin, float radius) -> void
{
  return Zynamic::Forward<void (int, unsigned int, float*, float)>(L"R_LinkDObjEntity")(localClientNum, entnum, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkBModelEntity(int localClientNum, unsigned int entnum, struct GfxBrushModel* bmodel) -> void
{
  return Zynamic::Forward<void (int, unsigned int, struct GfxBrushModel*)>(L"R_LinkBModelEntity")(localClientNum, entnum, bmodel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkEntity(int localClientNum, unsigned int entnum) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"R_UnlinkEntity")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType, float*, float*)>(L"R_LinkDynEnt")(dynEntId, drawType, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DynEntityDrawType)>(L"R_UnlinkDynEnt")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PvsLock_GetViewOrigin(float* out) -> void
{
  return Zynamic::Forward<void (float*)>(L"R_PvsLock_GetViewOrigin")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PvsLock_GetViewAxis(float* out[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"R_PvsLock_GetViewAxis")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShodLodInfo(const float* origin, int lod, int numLods, float curDist, float lodDist, bool lodDistAutoGenerated) -> void
{
  return Zynamic::Forward<void (const float*, int, int, float, float, bool)>(L"ShodLodInfo")(origin, lod, numLods, curDist, lodDist, lodDistAutoGenerated);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PerMap_Init() -> void
{
  return Zynamic::Forward<void ()>(L"R_PerMap_Init")();
}

#endif // __UNIMPLEMENTED__
