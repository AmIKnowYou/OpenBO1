//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_InitLocalCmdBufState(struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*)>(L"R_InitLocalCmdBufState")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DirtyCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int)>(L"R_DirtyCodeConstant")(source, constant);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeConstant(struct GfxCmdBufInput* input, unsigned int constant, float x, float y, float z, float w) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, unsigned int, float, float, float, float)>(L"R_SetInputCodeConstant")(input, constant, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeConstantFromVec4(struct GfxCmdBufInput* input, unsigned int constant, const float* value) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, unsigned int, const float*)>(L"R_SetInputCodeConstantFromVec4")(input, constant, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant, float x, float y, float z, float w) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int, float, float, float, float)>(L"R_SetCodeConstant")(source, constant, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeConstantFromVec4(struct GfxCmdBufSourceState* source, unsigned int constant, const float* value) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int, const float*)>(L"R_SetCodeConstantFromVec4")(source, constant, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_UpdateCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant, float x, float y, float z, float w) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufSourceState*, unsigned int, float, float, float, float)>(L"R_UpdateCodeConstant")(source, constant, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_UpdateCodeConstantFromVec4(struct GfxCmdBufSourceState* source, unsigned int constant, const float* value) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufSourceState*, unsigned int, const float*)>(L"R_UpdateCodeConstantFromVec4")(source, constant, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeImageSamplerState(struct GfxCmdBufInput* input, unsigned int codeTexture, unsigned char samplerState) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, unsigned int, unsigned char)>(L"R_SetInputCodeImageSamplerState")(input, codeTexture, samplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeImageSamplerState(struct GfxCmdBufSourceState* source, unsigned int codeTexture, unsigned char samplerState) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int, unsigned char)>(L"R_SetCodeImageSamplerState")(source, codeTexture, samplerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeImageTexture(struct GfxCmdBufSourceState* source, unsigned int codeTexture, const struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, unsigned int, const struct GfxImage*)>(L"R_SetCodeImageTexture")(source, codeTexture, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetVertexShaderConstantFromLiteral(struct GfxCmdBufState* state, unsigned int dest, const float* literal) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int, const float*)>(L"R_SetVertexShaderConstantFromLiteral")(state, dest, literal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetPixelShaderConstantFromLiteral(struct GfxCmdBufState* state, unsigned int dest, const float* literal) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int, const float*)>(L"R_SetPixelShaderConstantFromLiteral")(state, dest, literal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetStreamSource(struct GfxCmdBufPrimState* primState, struct IDirect3DVertexBuffer9* vb, unsigned int vertexOffset, unsigned int vertexStride) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, struct IDirect3DVertexBuffer9*, unsigned int, unsigned int)>(L"R_SetStreamSource")(primState, vb, vertexOffset, vertexStride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDoubleStreamSource(struct GfxCmdBufPrimState* primState, struct IDirect3DVertexBuffer9* vb0, unsigned int vertexOffset0, unsigned int vertexStride0, struct IDirect3DVertexBuffer9* vb1, unsigned int vertexOffset1, unsigned int vertexStride1) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, struct IDirect3DVertexBuffer9*, unsigned int, unsigned int, struct IDirect3DVertexBuffer9*, unsigned int, unsigned int)>(L"R_SetDoubleStreamSource")(primState, vb0, vertexOffset0, vertexStride0, vb1, vertexOffset1, vertexStride1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetVertexDecl(struct GfxCmdBufPrimState* primState, const struct MaterialVertexDeclaration* vertexDecl) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct MaterialVertexDeclaration*)>(L"R_SetVertexDecl")(primState, vertexDecl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetAlphaTestFunction(struct GfxCmdBufState* state, unsigned int stateBits0) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned int)>(L"R_SetAlphaTestFunction")(state, stateBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDefaultAlphaTestFunction(struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*)>(L"R_SetDefaultAlphaTestFunction")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetState(struct GfxCmdBufState* state, const unsigned int* stateBits) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const unsigned int*)>(L"R_SetState")(state, stateBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetRenderTarget(struct GfxCmdBufState* state, unsigned char newTargetId) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, unsigned char)>(L"R_HW_SetRenderTarget")(state, newTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DecodeSamplerState(unsigned char samplerState, unsigned char mipLodBias) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned char, unsigned char)>(L"R_DecodeSamplerState")(samplerState, mipLodBias);
}

#endif // __UNIMPLEMENTED__
