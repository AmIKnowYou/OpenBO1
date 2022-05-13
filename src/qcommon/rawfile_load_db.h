//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_RawFile(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_RawFile")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_RawFilePtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_RawFilePtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_RawFilePtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_RawFilePtr")();
}

#endif // __UNIMPLEMENTED__
