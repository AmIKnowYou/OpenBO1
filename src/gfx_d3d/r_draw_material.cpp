//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RemoveSunShadowTech(unsigned char srcTech) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"RemoveSunShadowTech")(srcTech);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GfxDrawSurf_GetFade(const union GfxDrawSurf& drawSurf) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf&)>(L"R_GfxDrawSurf_GetFade")(drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPrepassMaterial(struct GfxCmdBufContext context, union GfxDrawSurf drawSurf, unsigned char techType) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufContext, union GfxDrawSurf, unsigned char)>(L"R_SetPrepassMaterial")(context, drawSurf, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetMaterial(struct GfxCmdBufContext context, union GfxDrawSurf drawSurf, unsigned char techType) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufContext, union GfxDrawSurf, unsigned char)>(L"R_SetMaterial")(context, drawSurf, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Get_NvFloatZLitTech(const struct Material* material, unsigned char originalTechType) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct Material*, unsigned char)>(L"R_Get_NvFloatZLitTech")(material, originalTechType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetTechType(const struct GfxCmdBufContext context, const struct GfxDrawSurfListInfo* info, unsigned char baseTechType, union GfxDrawSurf drawSurf) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*, unsigned char, union GfxDrawSurf)>(L"R_GetTechType")(context, info, baseTechType, drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TrySetMaterialWithFunc(function* func, struct GfxCmdBufContext context, union GfxDrawSurf drawSurf, const unsigned char* techType) -> int
{
  return Zynamic::Forward<int (function *, struct GfxCmdBufContext, union GfxDrawSurf, const unsigned char*)>(L"R_TrySetMaterialWithFunc")(func, context, drawSurf, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPossibleTechniqueTypes(const unsigned char techType, const union GfxDrawSurf drawSurf, unsigned char* techTypes) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const unsigned char, const union GfxDrawSurf, unsigned char*)>(L"R_GetPossibleTechniqueTypes")(techType, drawSurf, techTypes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetTechnique(const struct GfxCmdBufContext context, struct GfxCmdBufContext* prepassContext, const struct GfxDrawSurfListInfo* info, union GfxDrawSurf drawSurf) -> int
{
  return Zynamic::Forward<int (const struct GfxCmdBufContext, struct GfxCmdBufContext*, const struct GfxDrawSurfListInfo*, union GfxDrawSurf)>(L"R_SetTechnique")(context, prepassContext, info, drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetGameTime(struct GfxCmdBufSourceState* source, float gameTime) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, float)>(L"R_SetGameTime")(source, gameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateMaterialTime(struct GfxCmdBufSourceState* source, float materialTime, float burn, float fade, float wetness) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufSourceState*, float, float, float, float)>(L"R_UpdateMaterialTime")(source, materialTime, burn, fade, wetness);
}

#endif // __UNIMPLEMENTED__
