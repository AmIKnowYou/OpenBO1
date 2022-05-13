//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_GlyphArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GlyphArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_Font(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_Font")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_FontHandle(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_FontHandle")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_Font() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_Font")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_FontHandle() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_FontHandle")();
}

#endif // __UNIMPLEMENTED__
