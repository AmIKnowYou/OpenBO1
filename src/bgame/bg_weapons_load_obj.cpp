//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerAnimTypeName(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_GetPlayerAnimTypeName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerAnimTypeIndex(int typeEnum) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetPlayerAnimTypeIndex")(typeEnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_bg_weapons_load_obj() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_bg_weapons_load_obj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponTypeName(enum weapType_t type) -> const char*
{
  return Zynamic::Forward<const char* (enum weapType_t)>(L"BG_GetWeaponTypeName")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponClassName(enum weapClass_t type) -> const char*
{
  return Zynamic::Forward<const char* (enum weapClass_t)>(L"BG_GetWeaponClassName")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponInventoryTypeName(enum weapInventoryType_t type) -> const char*
{
  return Zynamic::Forward<const char* (enum weapInventoryType_t)>(L"BG_GetWeaponInventoryTypeName")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponStrings() -> void
{
  return Zynamic::Forward<void ()>(L"BG_LoadWeaponStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadPlayerAnimTypes() -> void
{
  return Zynamic::Forward<void ()>(L"BG_LoadPlayerAnimTypes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_GetStringArrayIndex(const char* value, const char** stringArray, int arraySize) -> int
{
  return Zynamic::Forward<int (const char*, const char**, int)>(L"Weapon_GetStringArrayIndex")(value, stringArray, arraySize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClearWeaponDefInternal() -> void
{
  return Zynamic::Forward<void ()>(L"BG_ClearWeaponDefInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_RegisterSurfaceTypeSounds(const char* surfaceSoundBase) -> char**
{
  return Zynamic::Forward<char** (const char*)>(L"BG_RegisterSurfaceTypeSounds")(surfaceSoundBase);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ParseWeaponDefSpecificFieldType(unsigned char* pStruct, const char* pValue, const int iFieldType, const int iFieldOffset) -> int
{
  return Zynamic::Forward<int (unsigned char*, const char*, const int, const int)>(L"BG_ParseWeaponDefSpecificFieldType")(pStruct, pValue, iFieldType, iFieldOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupTransitionTimes(struct WeaponVariantDef* weapVariantDef) -> void
{
  return Zynamic::Forward<void (struct WeaponVariantDef*)>(L"BG_SetupTransitionTimes")(weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckWeaponDamageRanges(struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (struct WeaponDef*)>(L"BG_CheckWeaponDamageRanges")(weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckProjectileValues(struct WeaponFullDef* weaponFullDef) -> void
{
  return Zynamic::Forward<void (struct WeaponFullDef*)>(L"BG_CheckProjectileValues")(weaponFullDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetConfigString(char** ppszConfigString, const char* pszKeyValue) -> void
{
  return Zynamic::Forward<void (char**, const char*)>(L"SetConfigString")(ppszConfigString, pszKeyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetConfigString2(unsigned char* pMember, const char* pszKeyValue) -> void
{
  return Zynamic::Forward<void (unsigned char*, const char*)>(L"SetConfigString2")(pMember, pszKeyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitWeaponDef(struct WeaponFullDef* weapFullDef) -> void
{
  return Zynamic::Forward<void (struct WeaponFullDef*)>(L"InitWeaponDef")(weapFullDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitFlameTable(struct flameTable* fTable) -> void
{
  return Zynamic::Forward<void (struct flameTable*)>(L"InitFlameTable")(fTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadFlameTableInternal(const char* folder, const char* name) -> struct flameTable*
{
  return Zynamic::Forward<struct flameTable* (const char*, const char*)>(L"BG_LoadFlameTableInternal")(folder, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFlameTable(const char* folder, const char* name) -> struct flameTable*
{
  return Zynamic::Forward<struct flameTable* (const char*, const char*)>(L"BG_GetFlameTable")(folder, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponFile(const char* szFileName, char* szBuffer, int iBufferSize) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, int)>(L"BG_LoadWeaponFile")(szFileName, szBuffer, iBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponMergeSupport() -> void
{
  return Zynamic::Forward<void ()>(L"BG_LoadWeaponMergeSupport")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SplitWeaponDefNames(const char* name, char** sources, struct WeaponComponentList* componentAll, char* outputName) -> bool
{
  return Zynamic::Forward<bool (const char*, char**, struct WeaponComponentList*, char*)>(L"BG_SplitWeaponDefNames")(name, sources, componentAll, outputName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_MergeWeaponDefClipName(char** value, char* mergedValue, int size) -> int
{
  return Zynamic::Forward<int (char**, char*, int)>(L"BG_MergeWeaponDefClipName")(value, mergedValue, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_MergeWeaponDefFloatValue(char** value, char* mergedValue, int size) -> int
{
  return Zynamic::Forward<int (char**, char*, int)>(L"BG_MergeWeaponDefFloatValue")(value, mergedValue, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_MergeWeaponDefHidetags(char** value, char* mergedValue, int size) -> int
{
  return Zynamic::Forward<int (char**, char*, int)>(L"BG_MergeWeaponDefHidetags")(value, mergedValue, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAnimationField(const char* fieldName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"BG_IsAnimationField")(fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsADSField(const char* fieldName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"BG_IsADSField")(fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsGripAnimationName(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"BG_IsGripAnimationName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_MergeWeaponDefAnimations(const char* fieldName, char** value, char* mergedValue, int size) -> int
{
  return Zynamic::Forward<int (const char*, char**, char*, int)>(L"BG_MergeWeaponDefAnimations")(fieldName, value, mergedValue, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_MergeWeaponDefSpecialCases(const char* fieldName, char** value, char* mergedValue, int size) -> int
{
  return Zynamic::Forward<int (const char*, char**, char*, int)>(L"BG_MergeWeaponDefSpecialCases")(fieldName, value, mergedValue, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponVariantDefFile(struct WeaponFullDef* weapFullDef, const char* folder, const char* name) -> bool
{
  return Zynamic::Forward<bool (struct WeaponFullDef*, const char*, const char*)>(L"BG_LoadWeaponVariantDefFile")(weapFullDef, folder, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponVariantDefInternal(const char* folder, const char* name) -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* (const char*, const char*)>(L"BG_LoadWeaponVariantDefInternal")(folder, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponUpdateField(const char* weaponName, const char* keyValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"BG_WeaponUpdateField")(weaponName, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FlameTableUpdateField(const char* flameTableName, const char* keyValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"BG_FlameTableUpdateField")(flameTableName, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadDefaultWeaponVariantDef_LoadObj() -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* ()>(L"BG_LoadDefaultWeaponVariantDef_LoadObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadDefaultWeaponVariantDef_FastFile() -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* ()>(L"BG_LoadDefaultWeaponVariantDef_FastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadDefaultWeaponVariantDef() -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* ()>(L"BG_LoadDefaultWeaponVariantDef")();
}

#endif // __UNIMPLEMENTED__
