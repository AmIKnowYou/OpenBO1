//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto CG_SetFakeEntInUse(int localClientNum, struct fake_centity_s* ent) -> void
{
  return Zynamic::Forward<void (int, struct fake_centity_s*)>(L"CG_SetFakeEntInUse")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_ClearFakeEntInUse(int localClientNum, struct fake_centity_s* ent) -> void
{
  return Zynamic::Forward<void (int, struct fake_centity_s*)>(L"CG_ClearFakeEntInUse")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetLocalClientGlobals(int localClientNum) -> struct cg_s*
{
  return Zynamic::Forward<struct cg_s* (int)>(L"CG_GetLocalClientGlobals")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetLocalClientStaticGlobals(int localClientNum) -> struct cgs_t*
{
  return Zynamic::Forward<struct cgs_t* (int)>(L"CG_GetLocalClientStaticGlobals")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetFakeEntity(int localClientNum, int entityIndex) -> struct fake_centity_s*
{
  return Zynamic::Forward<struct fake_centity_s* (int, int)>(L"CG_GetFakeEntity")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetEntity(int localClientNum, int entityIndex) -> struct centity_s*
{
  return Zynamic::Forward<struct centity_s* (int, int)>(L"CG_GetEntity")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_IsLocalPlayer(int entnumber) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_IsLocalPlayer")(entnumber);
}

#endif // __UNIMPLEMENTED__
