//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_InitShaderConstantSet(struct ShaderConstantSet* scs) -> void
{
  return Zynamic::Forward<void (struct ShaderConstantSet*)>(L"R_InitShaderConstantSet")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShaderConstantSetIsUsed(const struct ShaderConstantSet* scs) -> bool
{
  return Zynamic::Forward<bool (const struct ShaderConstantSet*)>(L"R_ShaderConstantSetIsUsed")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MapShaderConstantSet(struct ShaderConstantSet* scs, int index, const char* constantName) -> bool
{
  return Zynamic::Forward<bool (struct ShaderConstantSet*, int, const char*)>(L"R_MapShaderConstantSet")(scs, index, constantName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnmapShaderConstantSet(struct ShaderConstantSet* scs, int index) -> bool
{
  return Zynamic::Forward<bool (struct ShaderConstantSet*, int)>(L"R_UnmapShaderConstantSet")(scs, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetConstantIndex(const struct ShaderConstantSet* scs, const char* constantName) -> int
{
  return Zynamic::Forward<int (const struct ShaderConstantSet*, const char*)>(L"R_GetConstantIndex")(scs, constantName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFreeConstantIndex(const struct ShaderConstantSet* scs) -> int
{
  return Zynamic::Forward<int (const struct ShaderConstantSet*)>(L"R_GetFreeConstantIndex")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetShaderConstantSetValue(struct ShaderConstantSet* scs, int index, const float* v) -> bool
{
  return Zynamic::Forward<bool (struct ShaderConstantSet*, int, const float*)>(L"R_SetShaderConstantSetValue")(scs, index, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetShaderConstantSetValue(struct ShaderConstantSet* scs, int index, float x, float y, float z, float w) -> bool
{
  return Zynamic::Forward<bool (struct ShaderConstantSet*, int, float, float, float, float)>(L"R_SetShaderConstantSetValue")(scs, index, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ApplyShaderConstantSet(struct GfxCmdBufSourceState* gfxSourceState, const struct ShaderConstantSet* scs) -> int
{
  return Zynamic::Forward<int (struct GfxCmdBufSourceState*, const struct ShaderConstantSet*)>(L"RB_ApplyShaderConstantSet")(gfxSourceState, scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelDrawSurf_EncodeIndex(union GfxDrawSurf* drawSurf, unsigned int scsIndex) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, unsigned int)>(L"XModelDrawSurf_EncodeIndex")(drawSurf, scsIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelDrawSurf_DecodeIndex(const union GfxDrawSurf* drawSurf) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*)>(L"XModelDrawSurf_DecodeIndex")(drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShaderConstantSetFromDrawSurf(const struct GfxBackEndData* backEndData, const union GfxDrawSurf* drawSurf) -> const struct ShaderConstantSet*
{
  return Zynamic::Forward<const struct ShaderConstantSet* (const struct GfxBackEndData*, const union GfxDrawSurf*)>(L"RB_ShaderConstantSetFromDrawSurf")(backEndData, drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ApplyShaderConstantSet(struct GfxCmdBufSourceState* gfxSourceState, const union GfxDrawSurf* drawSurf) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const union GfxDrawSurf*)>(L"RB_ApplyShaderConstantSet")(gfxSourceState, drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSurf_Uses_ShaderConstantSet(const union GfxDrawSurf* drawSurf) -> int
{
  return Zynamic::Forward<int (const union GfxDrawSurf*)>(L"RB_DrawSurf_Uses_ShaderConstantSet")(drawSurf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyShaderConstantSetToBackendData(const struct ShaderConstantSet* scs) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct ShaderConstantSet*)>(L"CopyShaderConstantSetToBackendData")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_XModelDrawSurfEncodeShaderConstantSet(union GfxDrawSurf* drawSurf, unsigned int constSetIndex) -> void
{
  return Zynamic::Forward<void (union GfxDrawSurf*, unsigned int)>(L"R_XModelDrawSurfEncodeShaderConstantSet")(drawSurf, constSetIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShaderConstantSet_Sets_Charred(const struct ShaderConstantSet* scs) -> bool
{
  return Zynamic::Forward<bool (const struct ShaderConstantSet*)>(L"R_ShaderConstantSet_Sets_Charred")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShaderConstantSet_CopyToFrontEndDataOut(const struct ShaderConstantSet* scs) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct ShaderConstantSet*)>(L"R_ShaderConstantSet_CopyToFrontEndDataOut")(scs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShaderConstantSet_FromFrontEndDataOut(unsigned int constSetindex) -> const struct ShaderConstantSet*
{
  return Zynamic::Forward<const struct ShaderConstantSet* (unsigned int)>(L"R_ShaderConstantSet_FromFrontEndDataOut")(constSetindex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SaveCurrentShaderConstantSetValues(struct ShaderConstantSet* destSet, struct GfxCmdBufSourceState* gfxSourceState, const struct ShaderConstantSet* srcSet) -> void
{
  return Zynamic::Forward<void (struct ShaderConstantSet*, struct GfxCmdBufSourceState*, const struct ShaderConstantSet*)>(L"RB_SaveCurrentShaderConstantSetValues")(destSet, gfxSourceState, srcSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ScopedShaderConstantSetUndo::ScopedShaderConstantSetUndo(struct GfxCmdBufSourceState* sourceState, const struct ShaderConstantSet* cscEA) -> void
{
  return Zynamic::Forward<public void (struct GfxCmdBufSourceState*, const struct ShaderConstantSet*)>(L"ScopedShaderConstantSetUndo::ScopedShaderConstantSetUndo")(sourceState, cscEA);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ScopedShaderConstantSetUndo::~ScopedShaderConstantSetUndo() -> void
{
  return Zynamic::Forward<public void ()>(L"ScopedShaderConstantSetUndo::~ScopedShaderConstantSetUndo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShaderConstantShowDebug(const float* eyePos, const float* objOrigin, float objRad, const struct ShaderConstantSet* scs) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, const struct ShaderConstantSet*)>(L"R_ShaderConstantShowDebug")(eyePos, objOrigin, objRad, scs);
}

#endif // __UNIMPLEMENTED__
