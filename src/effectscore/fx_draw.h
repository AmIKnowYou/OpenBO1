//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FX_GetElemVisuals(const struct FxElemDef* elemDef, int randomSeed) -> union FxElemVisuals
{
  return Zynamic::Forward<union FxElemVisuals (const struct FxElemDef*, int)>(L"FX_GetElemVisuals")(elemDef, randomSeed);
}

#endif // __UNIMPLEMENTED__
