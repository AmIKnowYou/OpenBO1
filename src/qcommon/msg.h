//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto MSG_GetField(const int* i, int size) -> int
{
  return Zynamic::Forward<int (const int*, int)>(L"MSG_GetField")(i, size);
}

#endif // __UNIMPLEMENTED__
