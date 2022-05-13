//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_FxImpactEntry(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_FxImpactEntry")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_FxImpactEntryArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_FxImpactEntryArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_FxImpactTable(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_FxImpactTable")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_FxImpactTablePtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_FxImpactTablePtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_FxImpactEntry() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_FxImpactEntry")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_FxImpactEntryArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_FxImpactEntryArray")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_FxImpactTable() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_FxImpactTable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_FxImpactTablePtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_FxImpactTablePtr")();
}

#endif // __UNIMPLEMENTED__
