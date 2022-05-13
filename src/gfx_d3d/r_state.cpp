//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_PixEndNamedRenderTarget() -> void
{
  return Zynamic::Forward<void ()>(L"R_PixEndNamedRenderTarget")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixStartNamedRenderTarget(unsigned char renderTargetId) -> void
{
  return Zynamic::Forward<void (unsigned char)>(L"R_PixStartNamedRenderTarget")(renderTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetTexFilter() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetTexFilter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetInitialContextState(struct IDirect3DDevice9* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*)>(L"R_SetInitialContextState")(device);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DepthHackNearClipChanged(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DepthHackNearClipChanged")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeDepthHackNearClip(struct GfxCmdBufSourceState* source, unsigned int depthHackFlags) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int)>(L"R_ChangeDepthHackNearClip")(source, depthHackFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectPlacement_Core(struct GfxCmdBufSourceState* source, const struct GfxScaledPlacement* placement) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxScaledPlacement*)>(L"R_ChangeObjectPlacement_Core")(source, placement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectPlacement(struct GfxCmdBufSourceState* source, const struct GfxScaledPlacement* placement) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxScaledPlacement*)>(L"R_ChangeObjectPlacement")(source, placement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectPlacementRemote(struct GfxCmdBufSourceState* source, const struct GfxScaledPlacement* remotePlacement) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxScaledPlacement*)>(L"R_ChangeObjectPlacementRemote")(source, remotePlacement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveViewMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveViewMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveWorldViewMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveWorldViewMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveProjectionMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveProjectionMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveViewProjectionMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveViewProjectionMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveWorldViewProjectionMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveWorldViewProjectionMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveShadowLookupMatrix(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_DeriveShadowLookupMatrix")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateWorldOutdoorLookupMatrix(struct GfxCmdBufSourceState* source, float* outMatrix[0x4]) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, float*[0x4])>(L"R_GenerateWorldOutdoorLookupMatrix")(source, outMatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DeriveCodeMatrix(struct GfxCmdBufSourceState* source, struct GfxCodeMatrices* activeMatrices, unsigned int baseIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, struct GfxCodeMatrices*, unsigned int)>(L"R_DeriveCodeMatrix")(source, activeMatrices, baseIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCodeMatrix(struct GfxCmdBufSourceState* source, unsigned int sourceIndex, unsigned int firstRow) -> const float*
{
  return Zynamic::Forward<const float* (struct GfxCmdBufSourceState*, unsigned int, unsigned int)>(L"R_GetCodeMatrix")(source, sourceIndex, firstRow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetTextureFromCode(struct GfxCmdBufSourceState* source, unsigned int codeTexture, unsigned char* samplerState) -> const struct GfxImage*
{
  return Zynamic::Forward<const struct GfxImage* (struct GfxCmdBufSourceState*, unsigned int, unsigned char*)>(L"R_GetTextureFromCode")(source, codeTexture, samplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextureFromCodeError(const struct GfxCmdBufContext* context, unsigned int codeTexture) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext*, unsigned int)>(L"R_TextureFromCodeError")(context, codeTexture);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OverrideGrayscaleImage(const struct dvar_s* dvar) -> const struct GfxImage*
{
  return Zynamic::Forward<const struct GfxImage* (const struct dvar_s*)>(L"R_OverrideGrayscaleImage")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightmap(struct GfxCmdBufContext context, unsigned int lmapIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned int)>(L"R_SetLightmap")(context, lmapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetReflectionProbe(struct GfxCmdBufContext context, unsigned int reflectionProbeIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned int)>(L"R_SetReflectionProbe")(context, reflectionProbeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeDepthRange(struct GfxCmdBufState* state, enum GfxDepthRangeType depthRangeType) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, enum GfxDepthRangeType)>(L"R_ChangeDepthRange")(state, depthRangeType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginMaterial(struct GfxCmdBufState* state, const struct Material* material, unsigned char techType) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufState*, const struct Material*, unsigned char)>(L"R_BeginMaterial")(state, material, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeIndices(struct GfxCmdBufPrimState* state, struct IDirect3DIndexBuffer9* ib) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, struct IDirect3DIndexBuffer9*)>(L"R_ChangeIndices")(state, ib);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeStreamSource(struct GfxCmdBufPrimState* state, int streamIndex, struct IDirect3DVertexBuffer9* vb, unsigned int vertexOffset, unsigned int vertexStride) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, int, struct IDirect3DVertexBuffer9*, unsigned int, unsigned int)>(L"R_ChangeStreamSource")(state, streamIndex, vb, vertexOffset, vertexStride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearAllStreamSources(struct GfxCmdBufPrimState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*)>(L"R_ClearAllStreamSources")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawIndexedPrimitive(struct GfxCmdBufPrimState* state, const struct GfxDrawPrimArgs* args) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct GfxDrawPrimArgs*)>(L"R_DrawIndexedPrimitive")(state, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAlphaAntiAliasingState(struct IDirect3DDevice9* device, int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, int)>(L"R_SetAlphaAntiAliasingState")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetPolygonOffset(struct IDirect3DDevice9* device, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_ForceSetPolygonOffset")(device, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeState_0(struct GfxCmdBufState* state, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int)>(L"R_ChangeState_0")(state, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeState_1(struct GfxCmdBufState* state, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int)>(L"R_ChangeState_1")(state, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetTextureSamplerCodeImageRenderTarget(struct GfxCmdBufContext context, unsigned int samplerIndex, union GfxCodeImageRenderTarget textureControl) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned int, union GfxCodeImageRenderTarget)>(L"R_SetTextureSamplerCodeImageRenderTarget")(context, samplerIndex, textureControl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSampler(struct GfxCmdBufContext context, unsigned int samplerIndex, unsigned char samplerState, const struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned int, unsigned char, const struct GfxImage*)>(L"R_SetSampler")(context, samplerIndex, samplerState, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSamplerState(struct GfxCmdBufState* state, unsigned int samplerIndex, unsigned char samplerState) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int, unsigned char)>(L"R_SetSamplerState")(state, samplerIndex, samplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetBlendState(struct IDirect3DDevice9* device, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_ForceSetBlendState")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetStencilState(struct IDirect3DDevice9* device, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_ForceSetStencilState")(device, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextureOverride(const struct GfxBackEndData* data, struct GfxCmdBufContext context, unsigned int modelIndex, int textureOverride) -> void
{
  return Zynamic::Forward<void (const struct GfxBackEndData*, struct GfxCmdBufContext, unsigned int, int)>(L"R_TextureOverride")(data, context, modelIndex, textureOverride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetViewport(struct GfxCmdBufSourceState* source, struct GfxViewport* outViewport) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, struct GfxViewport*)>(L"R_GetViewport")(source, outViewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewport(struct GfxCmdBufState* state, const struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const struct GfxViewport*)>(L"R_SetViewport")(state, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewportStruct(struct GfxCmdBufSourceState* source, const struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxViewport*)>(L"R_SetViewportStruct")(source, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetScissorStruct(struct GfxCmdBufSourceState* source, const struct GfxViewport* scissor) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxViewport*)>(L"R_SetScissorStruct")(source, scissor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScissorStruct(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_ClearScissorStruct")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetScissor(struct GfxCmdBufSourceState* source, struct GfxViewport* outScissor) -> bool
{
  return Zynamic::Forward<bool (struct GfxCmdBufSourceState*, struct GfxViewport*)>(L"R_GetScissor")(source, outScissor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetScissor(struct GfxCmdBufState* state, const struct GfxViewport* _scissor) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const struct GfxViewport*)>(L"R_SetScissor")(state, _scissor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScissor(struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*)>(L"R_ClearScissor")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewportValues(struct GfxCmdBufSourceState* source, int x, int y, int width, int height) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, int, int, int, int)>(L"R_SetViewportValues")(source, x, y, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateViewport(struct GfxCmdBufSourceState* source, struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, struct GfxViewport*)>(L"R_UpdateViewport")(source, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateStatsTarget(struct GfxCmdBufContext context, int newTargetId) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, int)>(L"R_UpdateStatsTarget")(context, newTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ViewportBehaviorForRenderTarget(unsigned char renderTargetId) -> enum GfxViewportBehavior
{
  return Zynamic::Forward<enum GfxViewportBehavior (unsigned char)>(L"R_ViewportBehaviorForRenderTarget")(renderTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DisableSampler(struct GfxCmdBufState* state, unsigned int samplerIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int)>(L"R_DisableSampler")(state, samplerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnbindImage(struct GfxCmdBufState* state, const struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const struct GfxImage*)>(L"R_UnbindImage")(state, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateVPosToWorld(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"UpdateVPosToWorld")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetRenderTargetSize(struct GfxCmdBufSourceState* source, unsigned char newTargetId) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned char)>(L"R_SetRenderTargetSize")(source, newTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetRenderTarget(struct GfxCmdBufContext context, unsigned char newTargetId) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned char)>(L"R_SetRenderTarget")(context, newTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearRenderTargetForMultiGpu(struct GfxCmdBufContext context, unsigned char targetId) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned char)>(L"R_ClearRenderTargetForMultiGpu")(context, targetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScreenInternal(struct IDirect3DDevice9* device, unsigned char whichToClear, const float* color, float depth, unsigned char stencil, const struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned char, const float*, float, unsigned char, const struct GfxViewport*)>(L"R_ClearScreenInternal")(device, whichToClear, color, depth, stencil, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScreen(struct IDirect3DDevice9* device, unsigned char whichToClear, const float* color, float depth, unsigned char stencil, const struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned char, const float*, float, unsigned char, const struct GfxViewport*)>(L"R_ClearScreen")(device, whichToClear, color, depth, stencil, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetMeshStream(struct GfxCmdBufState* state, struct GfxMeshData* mesh) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, struct GfxMeshData*)>(L"R_SetMeshStream")(state, mesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCompleteState(struct IDirect3DDevice9* device, const unsigned int* stateBits) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, const unsigned int*)>(L"R_SetCompleteState")(device, stateBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Set_Texture_SeeThruDecal(struct GfxCmdBufSourceState* source, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxViewInfo*)>(L"R_Set_Texture_SeeThruDecal")(source, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCall(function* callback, const void* userData, struct GfxCmdBufSourceState* source, const struct GfxViewInfo* viewInfo, const struct GfxDrawSurfListInfo* info, const struct GfxViewParms* viewParms, struct GfxCmdBuf* cmdBufEA, struct GfxCmdBuf* prepassCmdBufEA) -> void
{
  return Zynamic::Forward<void (function *, const void*, struct GfxCmdBufSourceState*, const struct GfxViewInfo*, const struct GfxDrawSurfListInfo*, const struct GfxViewParms*, struct GfxCmdBuf*, struct GfxCmdBuf*)>(L"R_DrawCall")(callback, userData, source, viewInfo, info, viewParms, cmdBufEA, prepassCmdBufEA);
}

#endif // __UNIMPLEMENTED__
