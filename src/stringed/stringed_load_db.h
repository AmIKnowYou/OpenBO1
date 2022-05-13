//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_LocalizeEntry(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_LocalizeEntry")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_LocalizeEntryPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_LocalizeEntryPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_LocalizeEntryPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_LocalizeEntryPtr")();
}

#endif // __UNIMPLEMENTED__
