//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_bg_weapons_ammo() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_bg_weapons_ammo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponDefAmmoIndexes(unsigned int weapIndex, struct WeaponDef* weapDef, struct WeaponVariantDef* weapVarDef) -> void
{
  return Zynamic::Forward<void (unsigned int, struct WeaponDef*, struct WeaponVariantDef*)>(L"BG_SetupWeaponDefAmmoIndexes")(weapIndex, weapDef, weapVarDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponDefSharedAmmoIndexes(unsigned int weapIndex, struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (unsigned int, struct WeaponDef*)>(L"BG_SetupWeaponDefSharedAmmoIndexes")(weapIndex, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponDefClipIndexes(struct WeaponDef* weapDef, struct WeaponVariantDef* weapVarDef) -> void
{
  return Zynamic::Forward<void (struct WeaponDef*, struct WeaponVariantDef*)>(L"BG_SetupWeaponDefClipIndexes")(weapDef, weapVarDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClearWeaponDefAmmo() -> void
{
  return Zynamic::Forward<void ()>(L"BG_ClearWeaponDefAmmo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetSharedAmmoCapSize(int capIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetSharedAmmoCapSize")(capIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAmmoClip(struct playerState_s* ps, int clipIndex) -> struct AmmoClip*
{
  return Zynamic::Forward<struct AmmoClip* (struct playerState_s*, int)>(L"BG_GetAmmoClip")(ps, clipIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFreeAmmoClip(struct playerState_s* ps, int clipIndex) -> struct AmmoClip*
{
  return Zynamic::Forward<struct AmmoClip* (struct playerState_s*, int)>(L"BG_GetFreeAmmoClip")(ps, clipIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddAmmoClip(struct playerState_s* ps, int clipIndex) -> struct AmmoClip*
{
  return Zynamic::Forward<struct AmmoClip* (struct playerState_s*, int)>(L"BG_AddAmmoClip")(ps, clipIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddAmmoToClip(struct playerState_s* ps, int clipIndex, int amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, int)>(L"BG_AddAmmoToClip")(ps, clipIndex, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetAmmoInClip(struct playerState_s* ps, int clipIndex, int amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, int)>(L"BG_SetAmmoInClip")(ps, clipIndex, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAmmoPool(struct playerState_s* ps, int ammoIndex) -> struct AmmoPool*
{
  return Zynamic::Forward<struct AmmoPool* (struct playerState_s*, int)>(L"BG_GetAmmoPool")(ps, ammoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFreeAmmoPool(struct playerState_s* ps) -> struct AmmoPool*
{
  return Zynamic::Forward<struct AmmoPool* (struct playerState_s*)>(L"BG_GetFreeAmmoPool")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddAmmoToPool(struct playerState_s* ps, unsigned int weaponIndex, int amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, int)>(L"BG_AddAmmoToPool")(ps, weaponIndex, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetAmmoInPool(struct playerState_s* ps, unsigned int weaponIndex, int amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, int)>(L"BG_SetAmmoInPool")(ps, weaponIndex, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAmmoPlayerMax(const struct playerState_s* ps, unsigned int weaponIndex, unsigned int weaponIndexToSkip) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int, unsigned int)>(L"BG_GetAmmoPlayerMax")(ps, weaponIndex, weaponIndexToSkip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ValueInArray(const int* weaponArray, int value) -> bool
{
  return Zynamic::Forward<bool (const int*, int)>(L"ValueInArray")(weaponArray, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddValueToArray(int* weaponArray, int value) -> void
{
  return Zynamic::Forward<void (int*, int)>(L"AddValueToArray")(weaponArray, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetMaxPickupableAmmo(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetMaxPickupableAmmo")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetTotalAmmoReserve(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetTotalAmmoReserve")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClipForWeapon(int weapon) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_ClipForWeapon")(weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AmmoForWeapon(int weapon) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_AmmoForWeapon")(weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponIsClipOnly(int weapon) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_WeaponIsClipOnly")(weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponAmmo(const struct playerState_s* ps, int weapon) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"BG_WeaponAmmo")(ps, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ReloadClip(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_ReloadClip")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponUseAmmo(struct playerState_s* ps, int wp, int amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, int)>(L"PM_WeaponUseAmmo")(ps, wp, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponAmmoAvailable(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"PM_WeaponAmmoAvailable")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponClipEmpty(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"PM_WeaponClipEmpty")(ps);
}

#endif // __UNIMPLEMENTED__
