//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_random() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_fx_random")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RandomDir(int seed, float* dir) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"FX_RandomDir")(seed, dir);
}

#endif // __UNIMPLEMENTED__
