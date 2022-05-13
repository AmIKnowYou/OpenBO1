//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetPixelShaderConstant(struct IDirect3DDevice9* device, unsigned int dest, const float* data, unsigned int rowCount) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, const float*, unsigned int)>(L"R_HW_SetPixelShaderConstant")(device, dest, data, rowCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetSamplerTexture(struct IDirect3DDevice9* device, unsigned int samplerIndex, const union GfxTexture* texture) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, const union GfxTexture*)>(L"R_HW_SetSamplerTexture")(device, samplerIndex, texture);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_DisableSampler(struct IDirect3DDevice9* device, unsigned int samplerIndex) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_DisableSampler")(device, samplerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetSamplerState(struct IDirect3DDevice9* device, unsigned int samplerIndex, unsigned int samplerState, unsigned int oldSamplerState) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct IDirect3DDevice9*, unsigned int, unsigned int, unsigned int)>(L"R_HW_SetSamplerState")(device, samplerIndex, samplerState, oldSamplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_ForceSamplerState(struct IDirect3DDevice9* device, unsigned int samplerIndex, unsigned int samplerState) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, unsigned int)>(L"R_HW_ForceSamplerState")(device, samplerIndex, samplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetViewport(struct IDirect3DDevice9* device, const struct GfxViewport* viewport, float nearValue, float farValue) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, const struct GfxViewport*, float, float)>(L"R_HW_SetViewport")(device, viewport, nearValue, farValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetAlphaTestEnable(struct IDirect3DDevice9* device, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetAlphaTestEnable")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetColorMask(struct IDirect3DDevice9* device, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetColorMask")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetCullFace(struct IDirect3DDevice9* device, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetCullFace")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetPolygonMode(struct IDirect3DDevice9* device, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetPolygonMode")(device, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_DisableBlend(struct IDirect3DDevice9* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*)>(L"R_HW_DisableBlend")(device);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetBlend(struct IDirect3DDevice9* device, bool blendWasEnabled, unsigned int changedBits, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, bool, unsigned int, unsigned int)>(L"R_HW_SetBlend")(device, blendWasEnabled, changedBits, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetDepthWriteEnable(struct IDirect3DDevice9* device, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetDepthWriteEnable")(device, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetDepthTestEnable(struct IDirect3DDevice9* device, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetDepthTestEnable")(device, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetDepthTestFunction(struct IDirect3DDevice9* device, unsigned int stateBits1) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetDepthTestFunction")(device, stateBits1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_EnableStencil(struct IDirect3DDevice9* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*)>(L"R_HW_EnableStencil")(device);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_DisableStencil(struct IDirect3DDevice9* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*)>(L"R_HW_DisableStencil")(device);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetFrontStencilOp(struct IDirect3DDevice9* device, unsigned int stencilOpPass, unsigned int stencilOpFail, unsigned int stencilOpZFail) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, unsigned int, unsigned int)>(L"R_HW_SetFrontStencilOp")(device, stencilOpPass, stencilOpFail, stencilOpZFail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetBackStencilOp(struct IDirect3DDevice9* device, unsigned int stencilOpPass, unsigned int stencilOpFail, unsigned int stencilOpZFail) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, unsigned int, unsigned int)>(L"R_HW_SetBackStencilOp")(device, stencilOpPass, stencilOpFail, stencilOpZFail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetFrontStencilFunc(struct IDirect3DDevice9* device, unsigned int stencilFunc) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetFrontStencilFunc")(device, stencilFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetBackStencilFunc(struct IDirect3DDevice9* device, unsigned int stencilFunc) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int)>(L"R_HW_SetBackStencilFunc")(device, stencilFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetPixelShader(struct IDirect3DDevice9* device, const struct MaterialPixelShader* mtlShader) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, const struct MaterialPixelShader*)>(L"R_HW_SetPixelShader")(device, mtlShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetVertexShader(struct IDirect3DDevice9* device, const struct MaterialVertexShader* mtlShader) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, const struct MaterialVertexShader*)>(L"R_HW_SetVertexShader")(device, mtlShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetPolygonOffset(struct IDirect3DDevice9* device, float scale, float bias) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, float, float)>(L"R_HW_SetPolygonOffset")(device, scale, bias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_EnableScissor(struct IDirect3DDevice9* device, unsigned int x, unsigned int y, unsigned int w, unsigned int h) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, unsigned int, unsigned int, unsigned int, unsigned int)>(L"R_HW_EnableScissor")(device, x, y, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_DisableScissor(struct IDirect3DDevice9* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*)>(L"R_HW_DisableScissor")(device);
}

#endif // __UNIMPLEMENTED__
