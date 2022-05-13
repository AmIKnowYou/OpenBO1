//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_UpdateFrameRate() -> float
{
  return Zynamic::Forward<float ()>(L"R_UpdateFrameRate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WarnOncePerFrame(enum GfxWarningType warnType, ...) -> void
{
  return Zynamic::Forward<void (enum GfxWarningType, ...)>(L"R_WarnOncePerFrame")(warnType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WarnInitDvars() -> void
{
  return Zynamic::Forward<void ()>(L"R_WarnInitDvars")();
}

#endif // __UNIMPLEMENTED__
