//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto CG_EntityNeedsScriptThread(int localClientNum, struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*)>(L"CG_EntityNeedsScriptThread")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetLocalClientWeaponInfo(int localClientNum, int weaponIndex) -> struct weaponInfo_s*
{
  return Zynamic::Forward<struct weaponInfo_s* (int, int)>(L"CG_GetLocalClientWeaponInfo")(localClientNum, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CG_GetLocalClientViewModelInfo(int localClientNum) -> struct ViewModelInfo*
{
  return Zynamic::Forward<struct ViewModelInfo* (int)>(L"CG_GetLocalClientViewModelInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
