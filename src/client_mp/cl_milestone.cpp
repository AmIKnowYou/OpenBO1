//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneRowNum(const struct StringTable** stringTable, const int comparisonColumn1, const char* value1, const int comparisonColumn2, const char* value2, const int comparisonColumn3, const char* value3) -> int
{
  return Zynamic::Forward<int (const struct StringTable**, const int, const char*, const int, const char*, const int, const char*)>(L"CL_GetMilestoneRowNum")(stringTable, comparisonColumn1, value1, comparisonColumn2, value2, comparisonColumn3, value3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneData(const char* indexName, enum milestoneTableColumns_t column) -> const char*
{
  return Zynamic::Forward<const char* (const char*, enum milestoneTableColumns_t)>(L"CL_GetMilestoneData")(indexName, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetFrontEndMilestoneLocalizedName(char* outputString, const int stringLength, int index, enum statsMilestoneTypes_t milestoneType, const char* challengeType) -> void
{
  return Zynamic::Forward<void (char*, const int, int, enum statsMilestoneTypes_t, const char*)>(L"CL_GetFrontEndMilestoneLocalizedName")(outputString, stringLength, index, milestoneType, challengeType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetInGameMilestoneLocalizedName(int localClientNum, char* outputString, const int stringLength, const char* statName, enum statsMilestoneTypes_t milestoneType, int statsTableIndex, int milestoneTier, const char* weaponType) -> bool
{
  return Zynamic::Forward<bool (int, char*, const int, const char*, enum statsMilestoneTypes_t, int, int, const char*)>(L"CL_GetInGameMilestoneLocalizedName")(localClientNum, outputString, stringLength, statName, milestoneType, statsTableIndex, milestoneTier, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneLocalizedName(char* outputString, const int stringLength, const char* statName, enum statsMilestoneTypes_t milestoneType, int statsTableIndex, int milestoneTier, bool isItemClassified, const char* localizedString) -> bool
{
  return Zynamic::Forward<bool (char*, const int, const char*, enum statsMilestoneTypes_t, int, int, bool, const char*)>(L"CL_GetMilestoneLocalizedName")(outputString, stringLength, statName, milestoneType, statsTableIndex, milestoneTier, isItemClassified, localizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FormatStatsMilestoneName(char* outputString, const int stringLength, int milestoneTier, const char* statsName, const char* itemName) -> bool
{
  return Zynamic::Forward<bool (char*, const int, int, const char*, const char*)>(L"FormatStatsMilestoneName")(outputString, stringLength, milestoneTier, statsName, itemName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGlobalChallengeName(const char* name, char* outputString, const int stringLength, int milestoneTier) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int)>(L"PrepareGlobalChallengeName")(name, outputString, stringLength, milestoneTier);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareKillstreakChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareKillstreakChallengeName")(name, outputString, stringLength, index, tierId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGrenadeChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareGrenadeChallengeName")(name, outputString, stringLength, index, tierId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareAttachmentChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareAttachmentChallengeName")(name, outputString, stringLength, index, tierId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareWeaponChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId, bool isItemClassified) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int, bool)>(L"PrepareWeaponChallengeName")(name, outputString, stringLength, index, tierId, isItemClassified);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGroupChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId, const char* weaponNameLocalizedString) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int, const char*)>(L"PrepareGroupChallengeName")(name, outputString, stringLength, index, tierId, weaponNameLocalizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGameModeChallengeName(const char* name, char* outputString, const int stringLength, int index, int tierId, const char* gameModeLocalizedString) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int, const char*)>(L"PrepareGameModeChallengeName")(name, outputString, stringLength, index, tierId, gameModeLocalizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetFrontEndMilestoneLocalizedDesc(char* outputString, const int stringLength, int index, enum statsMilestoneTypes_t milestoneType, const char* challengeType) -> void
{
  return Zynamic::Forward<void (char*, const int, int, enum statsMilestoneTypes_t, const char*)>(L"CL_GetFrontEndMilestoneLocalizedDesc")(outputString, stringLength, index, milestoneType, challengeType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetInGameMilestoneLocalizedDesc(int localClientNum, char* outputString, const int stringLength, const char* statName, enum statsMilestoneTypes_t milestoneType, int statsTableIndex, int milestoneTier, const char* weaponType, int targetValue) -> bool
{
  return Zynamic::Forward<bool (int, char*, const int, const char*, enum statsMilestoneTypes_t, int, int, const char*, int)>(L"CL_GetInGameMilestoneLocalizedDesc")(localClientNum, outputString, stringLength, statName, milestoneType, statsTableIndex, milestoneTier, weaponType, targetValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneLocalizedDesc(char* outputString, const int stringLength, const char* statName, enum statsMilestoneTypes_t milestoneType, int statsTableIndex, int milestoneTier, int targetValue, const char* localizedString) -> bool
{
  return Zynamic::Forward<bool (char*, const int, const char*, enum statsMilestoneTypes_t, int, int, int, const char*)>(L"CL_GetMilestoneLocalizedDesc")(outputString, stringLength, statName, milestoneType, statsTableIndex, milestoneTier, targetValue, localizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGlobalChallengeDescription(const char* name, char* outputString, const int stringLength, int targetValue) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int)>(L"GetGlobalChallengeDescription")(name, outputString, stringLength, targetValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareAttachmentDescription(const char* name, char* outputString, const int stringLength, int index, int targetValue) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareAttachmentDescription")(name, outputString, stringLength, index, targetValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareKillstreakDescription(const char* name, char* outputString, const int stringLength, int index, int targetValue) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareKillstreakDescription")(name, outputString, stringLength, index, targetValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGrenadeDescription(const char* name, char* outputString, const int stringLength, int index, int targetValue) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int)>(L"PrepareGrenadeDescription")(name, outputString, stringLength, index, targetValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareWeaponDescription(const char* name, char* outputString, const int stringLength, int targetValue, int milestoneType, const char* weaponLocalizedString) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, int, const char*)>(L"PrepareWeaponDescription")(name, outputString, stringLength, targetValue, milestoneType, weaponLocalizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareGameModeDescription(const char* name, char* outputString, const int stringLength, int targetValue, const char* gameModeLocalizedString) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, const int, int, const char*)>(L"PrepareGameModeDescription")(name, outputString, stringLength, targetValue, gameModeLocalizedString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneLocalizedXP(char* outputString, const int stringLength, float xpScale, const int tier, const char* indexName) -> bool
{
  return Zynamic::Forward<bool (char*, const int, float, const int, const char*)>(L"CL_GetMilestoneLocalizedXP")(outputString, stringLength, xpScale, tier, indexName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneBackingMaterial(char* backingMaterialName, int stringLength, const char* statName, const char* perkName) -> void
{
  return Zynamic::Forward<void (char*, int, const char*, const char*)>(L"CL_GetMilestoneBackingMaterial")(backingMaterialName, stringLength, statName, perkName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMilestoneMaterial(char* materialName, int stringLength, const char* statName, const char* perkName) -> void
{
  return Zynamic::Forward<void (char*, int, const char*, const char*)>(L"CL_GetMilestoneMaterial")(materialName, stringLength, statName, perkName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto getMilestoneType(const char* statsType) -> enum statsMilestoneTypes_t
{
  return Zynamic::Forward<enum statsMilestoneTypes_t (const char*)>(L"getMilestoneType")(statsType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MilestoneTier_DecToRoman(int milestoneTierId, char* milestoneTierRoman, int stringLength) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"CL_MilestoneTier_DecToRoman")(milestoneTierId, milestoneTierRoman, stringLength);
}

#endif // __UNIMPLEMENTED__
