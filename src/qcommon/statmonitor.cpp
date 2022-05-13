//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_statmonitor() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_statmonitor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StatMon_Warning(int type, int duration, const char* materialName) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"StatMon_Warning")(type, duration, materialName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StatMon_GetStatsArray(const struct statmonitor_s** array, int* count) -> void
{
  return Zynamic::Forward<void (const struct statmonitor_s**, int*)>(L"StatMon_GetStatsArray")(array, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StatMon_Reset() -> void
{
  return Zynamic::Forward<void ()>(L"StatMon_Reset")();
}

#endif // __UNIMPLEMENTED__
