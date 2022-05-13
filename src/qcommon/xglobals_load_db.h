//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_XGlobals(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_XGlobals")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_XGlobalsPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_XGlobalsPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_XGlobalsPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_XGlobalsPtr")();
}

#endif // __UNIMPLEMENTED__
