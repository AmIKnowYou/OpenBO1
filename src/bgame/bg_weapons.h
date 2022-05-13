//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto BG_GetFreeHeldWeaponSlot(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_GetFreeHeldWeaponSlot")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetHeldWeaponSlot(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetHeldWeaponSlot")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetHeldWeaponConst(const struct playerState_s* ps, unsigned int weaponIndex) -> const struct PlayerHeldWeapon*
{
  return Zynamic::Forward<const struct PlayerHeldWeapon* (const struct playerState_s*, unsigned int)>(L"BG_GetHeldWeaponConst")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetHeldWeapon(struct playerState_s* ps, unsigned int weaponIndex) -> struct PlayerHeldWeapon*
{
  return Zynamic::Forward<struct PlayerHeldWeapon* (struct playerState_s*, unsigned int)>(L"BG_GetHeldWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerHasWeapon(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerHasWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerEverHadWeapon(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerEverHadWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerSetEverHadWeapon(struct playerState_s* ps, unsigned int weaponIndex, bool hadWeapon) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, bool)>(L"BG_PlayerSetEverHadWeapon")(ps, weaponIndex, hadWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponNeedsRechambered(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerWeaponNeedsRechambered")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponBlockPickupWeapon(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerWeaponBlockPickupWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponSetBlockPickupWeapon(struct playerState_s* ps, unsigned int weaponIndex, bool blockPickupWeapon) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, unsigned int, bool)>(L"BG_PlayerWeaponSetBlockPickupWeapon")(ps, weaponIndex, blockPickupWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponQuickReload(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerWeaponQuickReload")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerSetWeaponQuickReload(struct playerState_s* ps, unsigned int weaponIndex, bool quickReload) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, bool)>(L"BG_PlayerSetWeaponQuickReload")(ps, weaponIndex, quickReload);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponSetNeedsRechamber(struct playerState_s* ps, unsigned int weaponIndex, bool needsRechamber) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, bool)>(L"BG_PlayerWeaponSetNeedsRechamber")(ps, weaponIndex, needsRechamber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_GetPlayerWeaponModel(const struct playerState_s* ps, unsigned int weaponIndex) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct playerState_s*, unsigned int)>(L"BG_GetPlayerWeaponModel")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponOptions(const struct playerState_s* ps, unsigned int weaponIndex) -> struct renderOptions_s
{
  return Zynamic::Forward<struct renderOptions_s (const struct playerState_s*, unsigned int)>(L"BG_PlayerWeaponOptions")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerWeaponHeat(const struct playerState_s* ps, unsigned int weaponIndex) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*, unsigned int)>(L"BG_PlayerWeaponHeat")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_PlayerFuelTankTime(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_PlayerFuelTankTime")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
