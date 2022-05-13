//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_PixelCost_SetConstant(struct GfxCmdBufSourceState* source, int cost) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, int)>(L"R_PixelCost_SetConstant")(source, cost);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixelCost_GetAccumulationMaterial(const struct Material* material) -> const struct Material*
{
  return Zynamic::Forward<const struct Material* (const struct Material*)>(L"R_PixelCost_GetAccumulationMaterial")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PixelCost_GetCostForRecordIndex(int recordIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"RB_PixelCost_GetCostForRecordIndex")(recordIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixelCost_PackedKeyForMaterial(const struct Material* material, unsigned char techType) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (const struct Material*, unsigned char)>(L"R_PixelCost_PackedKeyForMaterial")(material, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PixelCost_DoesPrimMatch(unsigned __int64 packedKey) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64)>(L"RB_PixelCost_DoesPrimMatch")(packedKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PixelCost_ResetPrim(unsigned __int64 packedKey) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"RB_PixelCost_ResetPrim")(packedKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PixelCost_AccumulateMsec() -> void
{
  return Zynamic::Forward<void ()>(L"RB_PixelCost_AccumulateMsec")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixelCost_BeginSurface(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_PixelCost_BeginSurface")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixelCost_EndSurface(struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext)>(L"R_PixelCost_EndSurface")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PixelCost_OverrideRenderTarget(unsigned char targetId) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"RB_PixelCost_OverrideRenderTarget")(targetId);
}

#endif // __UNIMPLEMENTED__
