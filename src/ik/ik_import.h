//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto IKImport_SmoothLerpAdjust(float in) -> float
{
  return Zynamic::Forward<float (float)>(L"IKImport_SmoothLerpAdjust")(in);
}

#endif // __UNIMPLEMENTED__
