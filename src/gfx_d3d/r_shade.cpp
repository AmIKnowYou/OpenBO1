//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetCodeConstant(const struct GfxCmdBufContext& context, unsigned int constant) -> const float*
{
  return Zynamic::Forward<const float* (const struct GfxCmdBufContext&, unsigned int)>(L"R_GetCodeConstant")(context, constant);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsShaderMatrixUpToDate(const struct GfxCmdBufSourceState* source, unsigned __int64* constant, const struct MaterialShaderArgument* routingData) -> bool
{
  return Zynamic::Forward<bool (const struct GfxCmdBufSourceState*, unsigned __int64*, const struct MaterialShaderArgument*)>(L"R_IsShaderMatrixUpToDate")(source, constant, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsShaderConstantUpToDate(const struct GfxCmdBufSourceState* source, unsigned __int64* constant, const struct MaterialShaderArgument* routingData) -> bool
{
  return Zynamic::Forward<bool (const struct GfxCmdBufSourceState*, unsigned __int64*, const struct MaterialShaderArgument*)>(L"R_IsShaderConstantUpToDate")(source, constant, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsVertexShaderConstantUpToDate(struct GfxCmdBufContext context, const struct MaterialShaderArgument* routingData) -> bool
{
  return Zynamic::Forward<bool (struct GfxCmdBufContext, const struct MaterialShaderArgument*)>(L"R_IsVertexShaderConstantUpToDate")(context, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexShaderConstantFromCode_Old(struct GfxCmdBufContext context, const struct MaterialShaderArgument* routingData) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct MaterialShaderArgument*)>(L"R_SetVertexShaderConstantFromCode_Old")(context, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexShaderConstantFromCode_New(const struct GfxCmdBufContext& context, const struct MaterialShaderArgument* routingData) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, const struct MaterialShaderArgument*)>(L"R_SetVertexShaderConstantFromCode_New")(context, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsPixelShaderConstantUpToDate(const struct GfxCmdBufContext& context, const struct MaterialShaderArgument* routingData) -> int
{
  return Zynamic::Forward<int (const struct GfxCmdBufContext&, const struct MaterialShaderArgument*)>(L"R_IsPixelShaderConstantUpToDate")(context, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPixelShaderConstantFromCode(const struct GfxCmdBufContext& context, const struct MaterialShaderArgument* routingData) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, const struct MaterialShaderArgument*)>(L"R_SetPixelShaderConstantFromCode")(context, routingData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPassShaderPrimArguments(const struct GfxCmdBufContext& context, unsigned int argCount, const struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, unsigned int, const struct MaterialShaderArgument*)>(L"R_SetPassShaderPrimArguments")(context, argCount, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPassShaderObjectArguments(const struct GfxCmdBufContext& context, unsigned int argCount, const struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, unsigned int, const struct MaterialShaderArgument*)>(L"R_SetPassShaderObjectArguments")(context, argCount, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupPassPerPrimArgs(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_SetupPassPerPrimArgs")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupPassPerObjectArgs(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_SetupPassPerObjectArgs")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPassPixelShaderStableArguments(const struct GfxCmdBufContext& context, unsigned int argCount, const struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, unsigned int, const struct MaterialShaderArgument*)>(L"R_SetPassPixelShaderStableArguments")(context, argCount, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPassVertexShaderStableArguments(const struct GfxCmdBufContext& context, unsigned int argCount, const struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, unsigned int, const struct MaterialShaderArgument*)>(L"R_SetPassVertexShaderStableArguments")(context, argCount, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupPassPixelShaderArgs(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_SetupPassPixelShaderArgs")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupPassVertexShaderArgs(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_SetupPassVertexShaderArgs")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OverrideImage(const struct GfxImage** image, const struct MaterialTextureDef* texdef) -> void
{
  return Zynamic::Forward<void (const struct GfxImage**, const struct MaterialTextureDef*)>(L"R_OverrideImage")(image, texdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPixelSamplerFromMaterial(const struct GfxCmdBufContext& context, const struct MaterialShaderArgument* arg, const struct MaterialTextureDef* texDef) -> const struct MaterialTextureDef*
{
  return Zynamic::Forward<const struct MaterialTextureDef* (const struct GfxCmdBufContext&, const struct MaterialShaderArgument*, const struct MaterialTextureDef*)>(L"R_SetPixelSamplerFromMaterial")(context, arg, texDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPassShaderStableArguments(const struct GfxCmdBufContext& context, unsigned int argCount, const struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdBufContext&, unsigned int, const struct MaterialShaderArgument*)>(L"R_SetPassShaderStableArguments")(context, argCount, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveIndexData(struct GfxCmdBufPrimState* state, int triCount) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufPrimState*, int)>(L"R_ReserveIndexData")(state, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetIndexData(struct GfxCmdBufPrimState* state, const unsigned short* indices, int triCount) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufPrimState*, const unsigned short*, int)>(L"R_SetIndexData")(state, indices, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPixelShader(struct GfxCmdBufState* state, const struct MaterialPixelShader* pixelShader) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const struct MaterialPixelShader*)>(L"R_SetPixelShader")(state, pixelShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexShader(struct GfxCmdBufState* state, const struct MaterialVertexShader* vertexShader) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*, const struct MaterialVertexShader*)>(L"R_SetVertexShader")(state, vertexShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateVertexDecl(struct GfxCmdBufState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufState*)>(L"R_UpdateVertexDecl")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupPass(struct GfxCmdBufContext context, unsigned int passIndex) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, unsigned int)>(L"R_SetupPass")(context, passIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertexData(struct GfxCmdBufState* state, const void* data, int vertexCount, int stride) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufState*, const void*, int, int)>(L"R_SetVertexData")(state, data, vertexCount, stride);
}

#endif // __UNIMPLEMENTED__
