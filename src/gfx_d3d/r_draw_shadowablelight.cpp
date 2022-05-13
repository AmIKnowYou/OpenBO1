//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetShadowableLightIndex(const struct GfxBackEndData* data, const struct GfxViewInfo* viewInfo, const struct GfxLight* light) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxBackEndData*, const struct GfxViewInfo*, const struct GfxLight*)>(L"R_GetShadowableLightIndex")(data, viewInfo, light);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightProperties(struct GfxCmdBufSourceState* source, const struct GfxLight* light, const struct GfxLightDef* def, enum LightHasShadowMap hasShadowMap, float spotShadowFade) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxLight*, const struct GfxLightDef*, enum LightHasShadowMap, float)>(L"R_SetLightProperties")(source, light, def, hasShadowMap, spotShadowFade);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetShadowableLight(struct GfxCmdBufSourceState* source, unsigned int shadowableLightIndex, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int, const struct GfxViewInfo*)>(L"R_SetShadowableLight")(source, shadowableLightIndex, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetDrawSurfsShadowableLight(struct GfxCmdBufSourceState* source, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxDrawSurfListInfo*)>(L"R_SetDrawSurfsShadowableLight")(source, info);
}

#endif // __UNIMPLEMENTED__
