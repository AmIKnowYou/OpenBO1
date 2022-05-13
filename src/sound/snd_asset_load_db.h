//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto AllocLoad_snd_align_char() -> char*
{
  return Zynamic::Forward<char* ()>(L"AllocLoad_snd_align_char")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_snd_align_charArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_snd_align_charArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_snd_asset(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_snd_asset")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
