//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_StartADSZScaleFrame() -> void
{
  return Zynamic::Forward<void ()>(L"R_StartADSZScaleFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetADSZScale(unsigned int viewport, float pos) -> void
{
  return Zynamic::Forward<void (unsigned int, float)>(L"R_SetADSZScale")(viewport, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetADSZScaleConstants(unsigned int viewport, struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (unsigned int, struct GfxCmdBufSourceState*)>(L"R_SetADSZScaleConstants")(viewport, source);
}

#endif // __UNIMPLEMENTED__
