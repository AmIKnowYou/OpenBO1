//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Scr_GetLocalVar(enum scriptInstance_t inst, const char* pos) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*)>(L"Scr_GetLocalVar")(inst, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Scr_ReadIntArray(const char** pos, int count) -> const int*
{
  return Zynamic::Forward<const int* (const char**, int)>(L"Scr_ReadIntArray")(pos, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Scr_ReadUnsignedShort(const char** pos) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const char**)>(L"Scr_ReadUnsignedShort")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Scr_ReadCodePos(enum scriptInstance_t inst, const char** pos) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, const char**)>(L"Scr_ReadCodePos")(inst, pos);
}

#endif // __UNIMPLEMENTED__
