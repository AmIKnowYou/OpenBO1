//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SetDrawLitConstants(struct GfxCmdBufSourceState& source, const struct GfxViewInfo* viewInfo, const struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState&, const struct GfxViewInfo*, const struct GfxViewParms*)>(L"R_SetDrawLitConstants")(source, viewInfo, viewParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCloakPrePassCallbackHDR(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawCloakPrePassCallbackHDR")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCloakPostEmissiveCallbackHDR(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawCloakPostEmissiveCallbackHDR")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCloakHDR(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf, enum CloakPhaseID phase) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*, enum CloakPhaseID)>(L"R_DrawCloakHDR")(viewInfo, cmdBuf, phase);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawLitCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawLitCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawLitPostResolveCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawLitPostResolveCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawLit(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf, struct GfxCmdBuf* prepassCmdBuf, enum LitPhaseID phase) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*, struct GfxCmdBuf*, enum LitPhaseID)>(L"R_DrawLit")(viewInfo, cmdBuf, prepassCmdBuf, phase);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDecalCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawDecalCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawDecal(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf, struct GfxCmdBuf* prepassCmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*, struct GfxCmdBuf*)>(L"R_DrawDecal")(viewInfo, cmdBuf, prepassCmdBuf);
}

#endif // __UNIMPLEMENTED__
