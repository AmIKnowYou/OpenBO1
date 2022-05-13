//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_BackEndDataAllocAndClearModelLightingPatch(struct GfxBackEndData* frontEndDataOut) -> struct GfxModelLightingPatch*
{
  return Zynamic::Forward<struct GfxModelLightingPatch* (struct GfxBackEndData*)>(L"R_BackEndDataAllocAndClearModelLightingPatch")(frontEndDataOut);
}

#endif // __UNIMPLEMENTED__
