//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto CScr_GetLocalClientNum(unsigned int index) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"CScr_GetLocalClientNum")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CScr_FreeEntity(struct centity_s* cent, int clientNum) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int)>(L"CScr_FreeEntity")(cent, clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CScr_AddEntity(struct centity_s* cent, int clientNum) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int)>(L"CScr_AddEntity")(cent, clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CScr_AddStruct() -> void
{
  return Zynamic::Forward<void ()>(L"CScr_AddStruct")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CScr_GetConstServerString(unsigned int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"CScr_GetConstServerString")(index);
}

#endif // __UNIMPLEMENTED__
