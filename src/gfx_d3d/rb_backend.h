//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto RB_CheckTessOverflow(int vertexCount, int indexCount) -> void
{
  return Zynamic::Forward<void (int, int)>(L"RB_CheckTessOverflow")(vertexCount, indexCount);
}

#endif // __UNIMPLEMENTED__
