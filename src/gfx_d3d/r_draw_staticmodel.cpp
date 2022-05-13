//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetNextStaticModelSurf(struct GfxStaticModelDrawStream* drawStream, struct XSurface** outSurf) -> int
{
  return Zynamic::Forward<int (struct GfxStaticModelDrawStream*, struct XSurface**)>(L"R_GetNextStaticModelSurf")(drawStream, outSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelVertexBuffer(struct GfxCmdBufPrimState* primState, struct XSurface* xsurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, struct XSurface*)>(L"R_SetStaticModelVertexBuffer")(primState, xsurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelIndexBuffer(struct GfxCmdBufPrimState* primState, struct XSurface* xsurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, struct XSurface*)>(L"R_SetStaticModelIndexBuffer")(primState, xsurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelVertexPrimArgs(const struct XSurface* xsurf, struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, struct GfxDrawPrimArgs*)>(L"R_SetStaticModelVertexPrimArgs")(xsurf, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelPrimArgs(const struct XSurface* xsurf, struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, struct GfxDrawPrimArgs*)>(L"R_SetStaticModelPrimArgs")(xsurf, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSurfLit(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawStaticModelSurfLit")(primDrawSurfPos, context, prepassContext, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSurf(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawStaticModelSurf")(primDrawSurfPos, context, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelDrawSurfPlacement(const struct GfxStaticModelDrawInst* smodelDrawInst, struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (const struct GfxStaticModelDrawInst*, struct GfxCmdBufSourceState*)>(L"R_DrawStaticModelDrawSurfPlacement")(smodelDrawInst, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelDrawSurfNonOptimized(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelDrawSurfNonOptimized")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelDrawSurfLightingNonOptimized(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelDrawSurfLightingNonOptimized")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSkinnedDrawSurfLighting(int smodelIndex, const struct GfxStaticModelDrawInst* smodelDrawInst, unsigned short lightingHandle, struct GfxDrawPrimArgs* args, struct GfxCmdBufContext context, const struct DynSModelClientView* dynSModelView, const struct DynSModelGfxState* dynSModelState) -> void
{
  return Zynamic::Forward<void (int, const struct GfxStaticModelDrawInst*, unsigned short, struct GfxDrawPrimArgs*, struct GfxCmdBufContext, const struct DynSModelClientView*, const struct DynSModelGfxState*)>(L"R_DrawStaticModelSkinnedDrawSurfLighting")(smodelIndex, smodelDrawInst, lightingHandle, args, context, dynSModelView, dynSModelState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSkinnedDrawSurf(int smodelIndex, const struct GfxStaticModelDrawInst* smodelDrawInst, struct GfxDrawPrimArgs* args, struct GfxCmdBufContext context, const struct DynSModelClientView* dynSModelView, const struct DynSModelGfxState* dynSModelState) -> void
{
  return Zynamic::Forward<void (int, const struct GfxStaticModelDrawInst*, struct GfxDrawPrimArgs*, struct GfxCmdBufContext, const struct DynSModelClientView*, const struct DynSModelGfxState*)>(L"R_DrawStaticModelSkinnedDrawSurf")(smodelIndex, smodelDrawInst, args, context, dynSModelView, dynSModelState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelSkinnedPrimArgs(struct GfxCmdBufPrimState* state, const struct XSurface* xsurf, struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct XSurface*, struct GfxDrawPrimArgs*)>(L"R_SetStaticModelSkinnedPrimArgs")(state, xsurf, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsSkinnedDrawSurfLighting(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelsSkinnedDrawSurfLighting")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsSkinnedDrawSurf(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelsSkinnedDrawSurf")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSkinnedSurfLit(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawStaticModelSkinnedSurfLit")(primDrawSurfPos, context, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelSkinnedSurf(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawStaticModelSkinnedSurf")(primDrawSurfPos, context, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupCachedSModelSurface(struct GfxCmdBufState* state, unsigned int cachedIndex, unsigned int lod, unsigned int surfIndex, unsigned int count, struct GfxDrawPrimArgs* args, unsigned int* baseIndex) -> const struct GfxStaticModelDrawInst*
{
  return Zynamic::Forward<const struct GfxStaticModelDrawInst* (struct GfxCmdBufState*, unsigned int, unsigned int, unsigned int, unsigned int, struct GfxDrawPrimArgs*, unsigned int*)>(L"R_SetupCachedSModelSurface")(state, cachedIndex, lod, surfIndex, count, args, baseIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNextStaticModelCachedSurf(struct GfxStaticModelDrawStream* drawStream) -> int
{
  return Zynamic::Forward<int (struct GfxStaticModelDrawStream*)>(L"R_GetNextStaticModelCachedSurf")(drawStream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCurrentStaticModelCachedSurf(struct GfxStaticModelDrawStream* drawStream, unsigned int* reflectionProbeIndex) -> struct XSurface*
{
  return Zynamic::Forward<struct XSurface* (struct GfxStaticModelDrawStream*, unsigned int*)>(L"R_GetCurrentStaticModelCachedSurf")(drawStream, reflectionProbeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReadStaticModelPreTessDrawSurf(struct GfxReadCmdBuf* readCmdBuf, union GfxStaticModelPreTessSurf* pretessSurf, unsigned int* firstIndex, unsigned int* count) -> int
{
  return Zynamic::Forward<int (struct GfxReadCmdBuf*, union GfxStaticModelPreTessSurf*, unsigned int*, unsigned int*)>(L"R_ReadStaticModelPreTessDrawSurf")(readCmdBuf, pretessSurf, firstIndex, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelCachedPrimArgs(const struct XSurface* xsurf, struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, struct GfxDrawPrimArgs*)>(L"R_SetStaticModelCachedPrimArgs")(xsurf, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelCachedBuffer(struct GfxCmdBufState* state, unsigned int cachedIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int)>(L"R_SetStaticModelCachedBuffer")(state, cachedIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsCachedDrawSurfLighting(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelsCachedDrawSurfLighting")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsPreTessDrawSurfLighting(union GfxStaticModelPreTessSurf pretessSurf, unsigned int firstIndex, unsigned int count, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (union GfxStaticModelPreTessSurf, unsigned int, unsigned int, struct GfxCmdBufContext)>(L"R_DrawStaticModelsPreTessDrawSurfLighting")(pretessSurf, firstIndex, count, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsCachedDrawSurf(struct GfxStaticModelDrawStream* drawStream, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxStaticModelDrawStream*, struct GfxCmdBufContext)>(L"R_DrawStaticModelsCachedDrawSurf")(drawStream, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelsPreTessDrawSurf(union GfxStaticModelPreTessSurf pretessSurf, unsigned int firstIndex, unsigned int count, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (union GfxStaticModelPreTessSurf, unsigned int, unsigned int, struct GfxCmdBufContext)>(L"R_DrawStaticModelsPreTessDrawSurf")(pretessSurf, firstIndex, count, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelCachedSurfLit(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawStaticModelCachedSurfLit")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelCachedSurf(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawStaticModelCachedSurf")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelPreTessSurfLit(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawStaticModelPreTessSurfLit")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawStaticModelPreTessSurf(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawStaticModelPreTessSurf")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
