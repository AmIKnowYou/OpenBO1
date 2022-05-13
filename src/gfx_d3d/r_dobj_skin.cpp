//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_AllocSkinnedCachedVerts(int vertCount, bool highPriority) -> int
{
  return Zynamic::Forward<int (int, bool)>(L"R_AllocSkinnedCachedVerts")(vertCount, highPriority);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PreSkinXSurface(const struct DObj* obj, struct XSurface* surf, const struct GfxModelSurfaceInfo* surfaceInfo, unsigned int* numSkinnedVerts, unsigned char* surfPos) -> int
{
  return Zynamic::Forward<int (const struct DObj*, struct XSurface*, const struct GfxModelSurfaceInfo*, unsigned int*, unsigned char*)>(L"R_PreSkinXSurface")(obj, surf, surfaceInfo, numSkinnedVerts, surfPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinSceneDObjModels(struct GfxSceneEntity* sceneEnt, const struct DObj* obj, struct DObjAnimMat* boneMatrix) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct GfxSceneEntity*, const struct DObj*, struct DObjAnimMat*)>(L"R_SkinSceneDObjModels")(sceneEnt, obj, boneMatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FlagXModelAsSkinned(struct GfxSceneEntity* sceneEnt, unsigned int surfaceCount) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*, unsigned int)>(L"R_FlagXModelAsSkinned")(sceneEnt, surfaceCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinSceneDObj(struct GfxSceneEntity* sceneEnt, struct GfxSceneEntity* localSceneEnt, const struct DObj* obj, struct DObjAnimMat* boneMatrix, int waitForCullState) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*, struct GfxSceneEntity*, const struct DObj*, struct DObjAnimMat*, int)>(L"R_SkinSceneDObj")(sceneEnt, localSceneEnt, obj, boneMatrix, waitForCullState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinGfxEntityCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_SkinGfxEntityCmd")(data);
}

#endif // __UNIMPLEMENTED__
