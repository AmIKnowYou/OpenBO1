//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto I_dcbt(int offset, const void* base) -> void
{
  return Zynamic::Forward<void (int, const void*)>(L"I_dcbt")(offset, base);
}

#endif // __UNIMPLEMENTED__
