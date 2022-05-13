//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_MapEnts(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_MapEnts")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_MapEntsPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_MapEntsPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_MapEntsPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_MapEntsPtr")();
}

#endif // __UNIMPLEMENTED__
