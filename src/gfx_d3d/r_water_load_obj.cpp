//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_WatersEquivalent(const struct water_t* w0, const struct water_t* w1) -> int
{
  return Zynamic::Forward<int (const struct water_t*, const struct water_t*)>(L"R_WatersEquivalent")(w0, w1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PickWaterFrequencies(struct water_t* water) -> void
{
  return Zynamic::Forward<void (struct water_t*)>(L"R_PickWaterFrequencies")(water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateWaterSetup(const struct water_t* source, int waterMapSetupIndex, struct water_t* destination) -> void
{
  return Zynamic::Forward<void (const struct water_t*, int, struct water_t*)>(L"R_CreateWaterSetup")(source, waterMapSetupIndex, destination);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadWaterSetup(const struct water_t* water) -> struct water_t*
{
  return Zynamic::Forward<struct water_t* (const struct water_t*)>(L"R_LoadWaterSetup")(water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitLoadWater() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitLoadWater")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownLoadWater() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownLoadWater")();
}

#endif // __UNIMPLEMENTED__
