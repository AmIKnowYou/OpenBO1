//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DrawSpotShadowMapCallback(const void* userData, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (const void*, struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_DrawSpotShadowMapCallback")(userData, context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSpotShadowMapArray(const struct GfxViewInfo* viewInfo, struct GfxCmdBuf* cmdBuf) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*, struct GfxCmdBuf*)>(L"R_DrawSpotShadowMapArray")(viewInfo, cmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SpotShadowMaps(const struct GfxBackEndData* data, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxBackEndData*, const struct GfxViewInfo*)>(L"RB_SpotShadowMaps")(data, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetSpotShadowOverlayScaleAndBias(const struct GfxSpotShadow* spotShadow) -> void
{
  return Zynamic::Forward<void (const struct GfxSpotShadow*)>(L"RB_SetSpotShadowOverlayScaleAndBias")(spotShadow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSpotShadowOverlay() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DrawSpotShadowOverlay")();
}

#endif // __UNIMPLEMENTED__
