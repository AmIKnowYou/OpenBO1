//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DepthPrepassCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DepthPrepassCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DepthPrepass(unsigned char renderTargetId, const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (unsigned char, const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DepthPrepass")(renderTargetId, viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
