//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DrawSunShadowMapCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawSunShadowMapCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSunShadowMap(const struct GfxViewInfo* viewInfo, unsigned int partitionIndex, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, unsigned int, struct GfxCmdBuf*)>(L"R_DrawSunShadowMap")(viewInfo, partitionIndex, cmdBuf);
}

#endif // __UNIMPLEMENTED__
