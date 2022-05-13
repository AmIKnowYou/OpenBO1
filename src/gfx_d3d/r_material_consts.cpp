//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RegisterShaderConst(unsigned int dest, const float* value, struct GfxShaderConstantBlock* consts) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, struct GfxShaderConstantBlock*)>(L"R_RegisterShaderConst")(dest, value, consts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPixelLiteralConsts(const struct Material* mtl, const struct MaterialPass* pass, struct GfxShaderConstantBlock* pixelLiteralConsts) -> void
{
  return Zynamic::Forward<void (const struct Material*, const struct MaterialPass*, struct GfxShaderConstantBlock*)>(L"R_GetPixelLiteralConsts")(mtl, pass, pixelLiteralConsts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ComparePixelConsts(const struct Material** material, const struct MaterialPass** pass) -> int
{
  return Zynamic::Forward<int (const struct Material**, const struct MaterialPass**)>(L"R_ComparePixelConsts")(material, pass);
}

#endif // __UNIMPLEMENTED__
