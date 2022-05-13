//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto BG_GetClipSize(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetClipSize")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetStartAmmo(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetStartAmmo")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetMaxAmmo(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetMaxAmmo")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetDropMinAmmo(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetDropMinAmmo")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetDropMaxAmmo(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetDropMaxAmmo")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetAmmoInClipForWeaponDef(const struct playerState_s* ps, const struct WeaponVariantDef* weapVarDef) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const struct WeaponVariantDef*)>(L"BG_GetAmmoInClipForWeaponDef")(ps, weapVarDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetAmmoInClip(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetAmmoInClip")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetAmmoNotInClipForAmmoIndex(const struct playerState_s* ps, int ammoIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"BG_GetAmmoNotInClipForAmmoIndex")(ps, ammoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetAmmoNotInClip(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetAmmoNotInClip")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
