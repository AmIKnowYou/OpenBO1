//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DObjCalcPose(const struct GfxSceneEntity* sceneEnt, const struct DObj* obj, int* partBits) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct GfxSceneEntity*, const struct DObj*, int*)>(L"R_DObjCalcPose")(sceneEnt, obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetNoDraw(struct GfxSceneEntity* sceneEnt, struct GfxSceneEntity* localSceneEnt) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*, struct GfxSceneEntity*)>(L"R_SetNoDraw")(sceneEnt, localSceneEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateSceneEntBounds(struct GfxSceneEntity* sceneEnt, struct GfxSceneEntity** pLocalSceneEnt, const struct DObj** pObj, int waitForCullState) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (struct GfxSceneEntity*, struct GfxSceneEntity**, const struct DObj**, int)>(L"R_UpdateSceneEntBounds")(sceneEnt, pLocalSceneEnt, pObj, waitForCullState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateGfxEntityBoundsCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_UpdateGfxEntityBoundsCmd")(data);
}

#endif // __UNIMPLEMENTED__
