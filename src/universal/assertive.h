//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto truncate_cast<unsigned short>(int i) -> unsigned short
{
  return Zynamic::Forward<unsigned short (int)>(L"truncate_cast<unsigned short>")(i);
}

#endif // __UNIMPLEMENTED__
