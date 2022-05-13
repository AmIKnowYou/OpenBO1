//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_model() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_model")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocXModelPrecache(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocXModelPrecache")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocXModelPrecacheColl(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocXModelPrecacheColl")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ModelSort(struct XModel*& model1, struct XModel*& model2) -> bool
{
  return Zynamic::Forward<bool (struct XModel*&, struct XModel*&)>(L"R_ModelSort")(model1, model2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetModelList(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_GetModelList")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ModelList_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_ModelList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterModel(const char* name) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*)>(L"R_RegisterModel")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishLoadingModels() -> void
{
  return Zynamic::Forward<void ()>(L"R_FinishLoadingModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_XModelDebugBoxes(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"R_XModelDebugBoxes")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_XModelDebugAxes(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"R_XModelDebugAxes")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_XModelDebug(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"R_XModelDebug")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LockSkinnedCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_LockSkinnedCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlockSkinnedCache() -> void
{
  return Zynamic::Forward<void ()>(L"R_UnlockSkinnedCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXModel(struct XModelDrawInfo* modelInfo, const struct XModel* model, const struct DObj* obj, const struct GfxPlacement* placement, float scale, unsigned int gfxEntIndex, bool offscreen) -> int
{
  return Zynamic::Forward<int (struct XModelDrawInfo*, const struct XModel*, const struct DObj*, const struct GfxPlacement*, float, unsigned int, bool)>(L"R_SkinXModel")(modelInfo, model, obj, placement, scale, gfxEntIndex, offscreen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinAndBoundSceneEnt(struct GfxSceneEntity* sceneEnt) -> int
{
  return Zynamic::Forward<int (struct GfxSceneEntity*)>(L"R_SkinAndBoundSceneEnt")(sceneEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownModels() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseModel(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_ReleaseModel")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseAllModels() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReleaseAllModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OptimizeModel(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_OptimizeModel")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OptimizeAllModels() -> void
{
  return Zynamic::Forward<void ()>(L"R_OptimizeAllModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceReleaseResources(struct XSurface* surf) -> void
{
  return Zynamic::Forward<void (struct XSurface*)>(L"XSurfaceReleaseResources")(surf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceRenderString(const float* pos, const char* string) -> void
{
  return Zynamic::Forward<void (const float*, const char*)>(L"XSurfaceRenderString")(pos, string);
}

#endif // __UNIMPLEMENTED__
