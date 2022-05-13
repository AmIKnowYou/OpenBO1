//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_GetNumWeapons() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"BG_GetNumWeapons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponVariantDef(unsigned int weaponIndex) -> const struct WeaponVariantDef*
{
  return Zynamic::Forward<const struct WeaponVariantDef* (unsigned int)>(L"BG_GetWeaponVariantDef")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponDef(unsigned int weaponIndex) -> const struct WeaponDef*
{
  return Zynamic::Forward<const struct WeaponDef* (unsigned int)>(L"BG_GetWeaponDef")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponIndex(const struct WeaponVariantDef* weapVariantDef) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct WeaponVariantDef*)>(L"BG_GetWeaponIndex")(weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FreeWeaponDefStrings() -> void
{
  return Zynamic::Forward<void ()>(L"BG_FreeWeaponDefStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ShutdownWeaponDefFiles() -> void
{
  return Zynamic::Forward<void ()>(L"BG_ShutdownWeaponDefFiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FillInWeaponItems(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_FillInWeaponItems")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponAlts(unsigned int weapIndex, function* regWeap) -> void
{
  return Zynamic::Forward<void (unsigned int, function *)>(L"BG_SetupWeaponAlts")(weapIndex, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupDualWieldAlts(unsigned int weapIndex, function* regWeap) -> void
{
  return Zynamic::Forward<void (unsigned int, function *)>(L"BG_SetupDualWieldAlts")(weapIndex, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponMountedVersions(unsigned int weaponIndex, function* regWeap) -> void
{
  return Zynamic::Forward<void (unsigned int, function *)>(L"BG_SetupWeaponMountedVersions")(weaponIndex, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitDefaultWeaponDef() -> void
{
  return Zynamic::Forward<void ()>(L"BG_InitDefaultWeaponDef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClearWeaponDef() -> void
{
  return Zynamic::Forward<void ()>(L"BG_ClearWeaponDef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponIndex(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_SetupWeaponIndex")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupWeaponVariantDef(struct WeaponVariantDef* weapVariantDef, function* regWeap) -> int
{
  return Zynamic::Forward<int (struct WeaponVariantDef*, function *)>(L"BG_SetupWeaponVariantDef")(weapVariantDef, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FillInAllWeaponItems() -> void
{
  return Zynamic::Forward<void ()>(L"BG_FillInAllWeaponItems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupAmmoIndexes(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_SetupAmmoIndexes")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupSharedAmmoIndexes(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_SetupSharedAmmoIndexes")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupClipIndexes(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_SetupClipIndexes")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetUpAmmoForWeapon(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"BG_SetUpAmmoForWeapon")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponVariantNameHashCompare(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"BG_WeaponVariantNameHashCompare")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindWeaponIndexForName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"BG_FindWeaponIndexForName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsDefaultWeapon(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"BG_IsDefaultWeapon")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponIndexForName(const char* name, function* regWeap) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*, function *)>(L"BG_GetWeaponIndexForName")(name, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponIndexForName(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"BG_GetWeaponIndexForName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponVariantPrecache(int baseWeaponIndex, function* regWeap, const char* namePrefix, const char* namePostfix) -> void
{
  return Zynamic::Forward<void (int, function *, const char*, const char*)>(L"BG_WeaponVariantPrecache")(baseWeaponIndex, regWeap, namePrefix, namePostfix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponVariantPrecache_r(int weaponTableItemIndex, int baseWeaponIndex, function* regWeap, const char* namePrefix, const char* namePostfix, enum eAttachmentPoint point, int index, bool alreadyRegistered) -> bool
{
  return Zynamic::Forward<bool (int, int, function *, const char*, const char*, enum eAttachmentPoint, int, bool)>(L"BG_WeaponVariantPrecache_r")(weaponTableItemIndex, baseWeaponIndex, regWeap, namePrefix, namePostfix, point, index, alreadyRegistered);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponTableBaseAndVariants(int weaponTableItemIndex, const char* weaponNamePostfix, function* regWeap) -> bool
{
  return Zynamic::Forward<bool (int, const char*, function *)>(L"BG_LoadWeaponTableBaseAndVariants")(weaponTableItemIndex, weaponNamePostfix, regWeap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponTableItemIndex(int weaponIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetWeaponTableItemIndex")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponTable(const char* weaponNamePostfix, function* regWeap) -> bool
{
  return Zynamic::Forward<bool (const char*, function *)>(L"BG_LoadWeaponTable")(weaponNamePostfix, regWeap);
}

#endif // __UNIMPLEMENTED__
