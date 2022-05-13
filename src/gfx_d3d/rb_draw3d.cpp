//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetCloudArea() -> const float&
{
  return Zynamic::Forward<const float& ()>(L"R_GetCloudArea")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcGameTimeVec(float gameTime[0x4], float* out) -> void
{
  return Zynamic::Forward<void (float[0x4], float*)>(L"R_CalcGameTimeVec")(gameTime, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowTris(struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_ShowTris")(context, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearForFrameBuffer(struct IDirect3DDevice9* device, const struct GfxViewport* viewport) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, const struct GfxViewport*)>(L"R_ClearForFrameBuffer")(device, viewport);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndSceneRendering(struct GfxCmdBufContext context, const struct GfxCmdBufInput* input, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct GfxCmdBufInput*, const struct GfxViewInfo*)>(L"RB_EndSceneRendering")(context, input, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetResolvedScene(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_SetResolvedScene")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAndClearSceneTarget(const struct GfxViewport* viewport, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewport*, const struct GfxViewInfo*)>(L"R_SetAndClearSceneTarget")(viewport, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFullbrightLitCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawFullbrightLitCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFullbrightDecalCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawFullbrightDecalCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFullbrightEmissiveCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawFullbrightEmissiveCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFullbrightOrDebugShader(function* callback, const struct GfxViewInfo* viewInfo, const struct GfxDrawSurfListInfo* info, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (function *, const struct GfxViewInfo*, const struct GfxDrawSurfListInfo*, struct GfxCmdBuf*)>(L"R_DrawFullbrightOrDebugShader")(callback, viewInfo, info, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawFullbright(const struct GfxViewInfo* viewInfo, struct GfxCmdBufInput* input, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBufInput*, struct GfxCmdBuf*)>(L"R_DrawFullbright")(viewInfo, input, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullbrightRenderCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_FullbrightRenderCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullbrightDrawCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_FullbrightDrawCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullbrightDrawCommandsCommon() -> void
{
  return Zynamic::Forward<void ()>(L"RB_FullbrightDrawCommandsCommon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDebugShaderLitCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawDebugShaderLitCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDebugShaderDecalCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawDebugShaderDecalCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDebugShaderEmissiveCallback(const void* data, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawDebugShaderEmissiveCallback")(data, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDebugShader(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawDebugShader")(viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DebugShaderRenderCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_DebugShaderRenderCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DebugShaderDrawCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_DebugShaderDrawCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DebugShaderDrawCommandsCommon() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DebugShaderDrawCommandsCommon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawPointLitSurfsCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawPointLitSurfsCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawPointLitSurfs(struct GfxCmdBufSourceState* source, const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawPointLitSurfs")(source, viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetFrameBufferAlpha() -> void
{
  return Zynamic::Forward<void ()>(L"RB_SetFrameBufferAlpha")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShowFbColorDebug_Screen() -> void
{
  return Zynamic::Forward<void ()>(L"RB_ShowFbColorDebug_Screen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShowFbColorDebug_Feedback() -> void
{
  return Zynamic::Forward<void ()>(L"RB_ShowFbColorDebug_Feedback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShowFloatZDebug() -> void
{
  return Zynamic::Forward<void ()>(L"RB_ShowFloatZDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugPostEffects() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DrawDebugPostEffects")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ApplyLatePostEffects(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_ApplyLatePostEffects")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawLights(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawLights")(viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawEmissiveCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawEmissiveCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawEmissive(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawEmissive")(viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawReflectedCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawReflectedCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawReflected(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawReflected")(viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveDistortion(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"R_ResolveDistortion")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StandardPostEffects(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_StandardPostEffects")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StandardRenderCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_StandardRenderCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShouldDrawCoronas(bool isMissileCam) -> bool
{
  return Zynamic::Forward<bool (bool)>(L"RB_ShouldDrawCoronas")(isMissileCam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StandardDrawCommands(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_StandardDrawCommands")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StandardDrawCommandsCommon() -> void
{
  return Zynamic::Forward<void ()>(L"RB_StandardDrawCommandsCommon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Draw3DInternal(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_Draw3DInternal")(viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Draw3DCommon() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Draw3DCommon")();
}

#endif // __UNIMPLEMENTED__
