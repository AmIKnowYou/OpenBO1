//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SetFrameFog(struct GfxCmdBufInput* input, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*, const struct GfxViewInfo*)>(L"R_SetFrameFog")(input, viewInfo);
}

#endif // __UNIMPLEMENTED__
