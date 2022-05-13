//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_XBoneInfoArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_XBoneInfoArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
