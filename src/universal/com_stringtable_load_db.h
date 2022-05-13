//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_StringTableCell(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_StringTableCell")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_StringTableCellArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_StringTableCellArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_StringTable(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_StringTable")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_StringTablePtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_StringTablePtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_StringTablePtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_StringTablePtr")();
}

#endif // __UNIMPLEMENTED__
