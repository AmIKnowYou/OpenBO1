//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sys_Milliseconds() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_Milliseconds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_MillisecondsRaw() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_MillisecondsRaw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SnapVector(float* v) -> void
{
  return Zynamic::Forward<void (float*)>(L"Sys_SnapVector")(v);
}

#endif // __UNIMPLEMENTED__
