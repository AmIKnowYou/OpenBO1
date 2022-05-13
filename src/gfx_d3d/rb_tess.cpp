//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_ShowTess(struct GfxCmdBufContext context, const float* center, const char* tessName, const float* color) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const float*, const char*, const float*)>(L"RB_ShowTess")(context, center, tessName, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexDeclTypeNormal(struct GfxCmdBufState* state, enum MaterialVertexDeclType vertDeclType) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, enum MaterialVertexDeclType)>(L"R_SetVertexDeclTypeNormal")(state, vertDeclType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexDeclTypeNormal_Safe(struct GfxCmdBufState* state, enum MaterialVertexDeclType vertDeclType) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufState*, enum MaterialVertexDeclType)>(L"R_SetVertexDeclTypeNormal_Safe")(state, vertDeclType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexDeclTypeWorld(struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*)>(L"R_SetVertexDeclTypeWorld")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexDeclTypeModel(const struct XSurface* surf, struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, struct GfxCmdBufState*)>(L"R_SetVertexDeclTypeModel")(surf, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessCodeMeshList_AddCodeMeshArgs(struct GfxCmdBufSourceState* source, const struct GfxBackEndData* data, const struct FxCodeMeshData* codeMesh) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxBackEndData*, const struct FxCodeMeshData*)>(L"R_TessCodeMeshList_AddCodeMeshArgs")(source, data, codeMesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetObjectIdentityPlacement(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_SetObjectIdentityPlacement")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessCodeMeshList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessCodeMeshList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessRopeMeshList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessRopeMeshList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessGlassMeshList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessGlassMeshList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessMarkMeshList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessMarkMeshList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Vec3DirWorldToView(const struct GfxCmdBufSourceState* source, const float* worldDir, float* viewDir) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufSourceState*, const float*, float*)>(L"RB_Vec3DirWorldToView")(source, worldDir, viewDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CreateParticleCloud2dAxis(const struct GfxParticleCloud* cloud, const float* viewUp, float* viewAxis[0x2]) -> void
{
  return Zynamic::Forward<void (const struct GfxParticleCloud*, const float*, float*[0x2])>(L"RB_CreateParticleCloud2dAxis")(cloud, viewUp, viewAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetParticleCloudConstants(struct GfxCmdBufSourceState* source, const struct GfxParticleCloud* cloud) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxParticleCloud*)>(L"R_SetParticleCloudConstants")(source, cloud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessParticleCloudList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessParticleCloudList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSkinnedCached(struct GfxCmdBufContext context, const struct GfxModelSkinnedSurface* modelSurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct GfxModelSkinnedSurface*)>(L"R_DrawXModelSkinnedCached")(context, modelSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSkinnedUncached(struct GfxCmdBufContext context, struct XSurface* xsurf, struct GfxPackedVertex* skinnedVert) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct XSurface*, struct GfxPackedVertex*)>(L"R_DrawXModelSkinnedUncached")(context, xsurf, skinnedVert);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSkinnedModelSurf(struct GfxCmdBufContext context, const struct GfxModelSkinnedSurface* modelSurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct GfxModelSkinnedSurface*)>(L"R_DrawXModelSkinnedModelSurf")(context, modelSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessXModelSkinnedDrawSurfList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessXModelSkinnedDrawSurfList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessXModelRigidDrawSurfList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessXModelRigidDrawSurfList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessXModelWaterList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessXModelWaterList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessXModelRigidSkinnedDrawSurfList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessXModelRigidSkinnedDrawSurfList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessStaticModelRigidDrawSurfList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessStaticModelRigidDrawSurfList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessStaticModelSkinnedDrawSurfList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessStaticModelSkinnedDrawSurfList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessStaticModelPreTessList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessStaticModelPreTessList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessStaticModelCachedList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessStaticModelCachedList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetTerrainScorchTextures(struct GfxCmdBufSourceState* source, const struct Material* material) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct Material*)>(L"R_SetTerrainScorchTextures")(source, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessTrianglesList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessTrianglesList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessTrianglesPreTessList(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessTrianglesPreTessList")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBModelPrim(struct GfxCmdBufContext* prepassContext, struct GfxCmdBufContext* context, struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext*, struct GfxCmdBufContext*, struct GfxDrawPrimArgs*)>(L"R_DrawBModelPrim")(prepassContext, context, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessBModel(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_TessBModel")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
