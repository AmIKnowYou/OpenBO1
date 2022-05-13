//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_Wind_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"BG_Wind_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DisplayWindDebug(int cur_time) -> void
{
  return Zynamic::Forward<void (int)>(L"DisplayWindDebug")(cur_time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SeedVariantWind(struct VariantWind* wind, int i, int start_time, const float* seedWindVector, float windLeafScale) -> void
{
  return Zynamic::Forward<void (struct VariantWind*, int, int, const float*, float)>(L"SeedVariantWind")(wind, i, start_time, seedWindVector, windLeafScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SeedVarintWinds(int variant_seed, int start_time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"BG_SeedVarintWinds")(variant_seed, start_time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UpdateVariantWind(struct VariantWind* wind, int variantIndex, const float* seedWindVector, int cur_time) -> void
{
  return Zynamic::Forward<void (struct VariantWind*, int, const float*, int)>(L"BG_UpdateVariantWind")(wind, variantIndex, seedWindVector, cur_time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWind(int cur_time) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateWind")(cur_time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetVariantWindVector(int which, float* out) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"BG_GetVariantWindVector")(which, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetGlobalWind(float* out) -> void
{
  return Zynamic::Forward<void (float*)>(L"BG_GetGlobalWind")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EnableLocalWindSource(int entnum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_EnableLocalWindSource")(entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalWindSourceScale(int localClientNum, float* pos) -> float
{
  return Zynamic::Forward<float (int, float*)>(L"CG_GetLocalWindSourceScale")(localClientNum, pos);
}

#endif // __UNIMPLEMENTED__
