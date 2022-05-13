//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_cplane_t(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_cplane_t")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_cplane_tArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_cplane_tArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_cbrushside_t(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_cbrushside_t")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_cbrushside_tArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_cbrushside_tArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
