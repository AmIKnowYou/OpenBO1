//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfCheckBreak(unsigned int gfxEntIndex, const struct GfxBackEndData* data, unsigned int depthHackFlags, float materialTime, float curDestructibleBurnAmount, float curDestructibleFadeAmount, float curWetness, bool TEXTURE_OVERRIDE, int currTextureOverride, unsigned int drawOutlineFlags) -> bool
{
  return Zynamic::Forward<bool (unsigned int, const struct GfxBackEndData*, unsigned int, float, float, float, float, bool, int, unsigned int)>(L"R_DrawXModelSurfCheckBreak")(gfxEntIndex, data, depthHackFlags, materialTime, curDestructibleBurnAmount, curDestructibleFadeAmount, curWetness, TEXTURE_OVERRIDE, currTextureOverride, drawOutlineFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetWorldMatrixForModelSurf(const struct GfxModelRigidSurface* modelSurf, const union float4 eyeOffset, struct vector4& worldMat, const struct XSurface* xsurf) -> void
{
  return Zynamic::Forward<void (const struct GfxModelRigidSurface*, const union float4, struct vector4&, const struct XSurface*)>(L"R_GetWorldMatrixForModelSurf")(modelSurf, eyeOffset, worldMat, xsurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelRigidModelSurf(struct GfxCmdBufContext context, struct XSurface* xsurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct XSurface*)>(L"R_DrawXModelRigidModelSurf")(context, xsurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfLitInternal(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawXModelSurfLitInternal")(drawSurfList, drawSurfCount, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfCameraInternal(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext)>(L"R_DrawXModelSurfCameraInternal")(drawSurfList, drawSurfCount, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfInternal(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext)>(L"R_DrawXModelSurfInternal")(drawSurfList, drawSurfCount, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfLit(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext, const struct GfxDrawSurfListInfo* info) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawXModelSurfLit")(drawSurfList, drawSurfCount, context, prepassContext, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurfCamera(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawXModelSurfCamera")(drawSurfList, drawSurfCount, context, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawXModelSurf(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount, struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawXModelSurf")(drawSurfList, drawSurfCount, context, info);
}

#endif // __UNIMPLEMENTED__
