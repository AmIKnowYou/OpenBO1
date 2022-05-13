//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_SndIndexEntryArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_SndIndexEntryArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_SndBank(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_SndBank")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_SndBankPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_SndBankPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_SndPatch(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_SndPatch")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_SndPatchPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_SndPatchPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_SndBankPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_SndBankPtr")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_SndPatchPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_SndPatchPtr")();
}

#endif // __UNIMPLEMENTED__
