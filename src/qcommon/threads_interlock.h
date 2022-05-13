//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Sys_WaitInterlockedCompareExchange(volatile long* destination, int value, int comperand) -> void
{
  return Zynamic::Forward<void (volatile long*, int, int)>(L"Sys_WaitInterlockedCompareExchange")(destination, value, comperand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sys_UnlockRead(struct FastCriticalSection* critSect) -> void
{
  return Zynamic::Forward<void (struct FastCriticalSection*)>(L"Sys_UnlockRead")(critSect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sys_LockWrite(struct FastCriticalSection* critSect) -> void
{
  return Zynamic::Forward<void (struct FastCriticalSection*)>(L"Sys_LockWrite")(critSect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sys_UnlockWrite(struct FastCriticalSection* critSect) -> void
{
  return Zynamic::Forward<void (struct FastCriticalSection*)>(L"Sys_UnlockWrite")(critSect);
}

#endif // __UNIMPLEMENTED__
