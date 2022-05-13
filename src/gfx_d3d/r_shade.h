//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_CheckVertexDataOverflow(int dataSize) -> void
{
  return Zynamic::Forward<void (int)>(L"R_CheckVertexDataOverflow")(dataSize);
}

#endif // __UNIMPLEMENTED__
