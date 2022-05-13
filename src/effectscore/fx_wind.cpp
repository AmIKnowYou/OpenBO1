//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_SetGlobalWind(const struct FX_WindInfo& windInput) -> void
{
  return Zynamic::Forward<void (const struct FX_WindInfo&)>(L"FX_SetGlobalWind")(windInput);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetGlobalWind() -> const struct FX_WindInfo&
{
  return Zynamic::Forward<const struct FX_WindInfo& ()>(L"FX_GetGlobalWind")();
}

#endif // __UNIMPLEMENTED__
