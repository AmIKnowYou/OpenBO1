//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_GetBasicTrainingGameTypeCount() -> int
{
  return Zynamic::Forward<int ()>(L"UI_GetBasicTrainingGameTypeCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederCount_WeaponGroups() -> int
{
  return Zynamic::Forward<int ()>(L"UI_FeederCount_WeaponGroups")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederCount_CustomClasses(const int localClientNum) -> int
{
  return Zynamic::Forward<int (const int)>(L"UI_FeederCount_CustomClasses")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMilestoneType(const float feederID) -> int
{
  return Zynamic::Forward<int (const float)>(L"UI_GetMilestoneType")(feederID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederCount_KillstreakNumKills() -> int
{
  return Zynamic::Forward<int ()>(L"UI_FeederCount_KillstreakNumKills")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederCount(const int localClientNum, int contextIndex, float feederID, struct listBoxDef_s* listPtr) -> int
{
  return Zynamic::Forward<int (const int, int, float, struct listBoxDef_s*)>(L"UI_Project_FeederCount")(localClientNum, contextIndex, feederID, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Maps(int controllerIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_Maps")(controllerIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetBasicTrainingGametypeIdForNum(const int num) -> int
{
  return Zynamic::Forward<int (const int)>(L"UI_GetBasicTrainingGametypeIdForNum")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CustomGametypes(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_FeederItemText_CustomGametypes")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_GametypesBase(int contextIndex, int controllerIndex, int index, int column, struct itemDef_s* item, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct itemDef_s*, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_GametypesBase")(contextIndex, controllerIndex, index, column, item, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_GametypesInGame(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_GametypesInGame")(contextIndex, controllerIndex, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_SystemLinkLobbyMembers(const int localClientNum, int contextIndex) -> const char*
{
  return Zynamic::Forward<const char* (const int, int)>(L"UI_FeederItemText_SystemLinkLobbyMembers")(localClientNum, contextIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Feeder_HandleItemList(int controllerIndex, int itemIndex, int column, bool isSelectedItem, bool itemLocked, int cost, const char* itemName, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, bool, bool, int, const char*, struct Material**)>(L"UI_Feeder_HandleItemList")(controllerIndex, itemIndex, column, isSelectedItem, itemLocked, cost, itemName, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_WeaponOptions(const int localClientNum, int contextIndex, int controllerIndex, float feederID, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (const int, int, int, float, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_WeaponOptions")(localClientNum, contextIndex, controllerIndex, feederID, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CommonListColorHandler(int controllerIndex, bool isSelectedItem, bool isGrey, int cost) -> void
{
  return Zynamic::Forward<void (int, bool, bool, int)>(L"UI_FeederItemText_CommonListColorHandler")(controllerIndex, isSelectedItem, isGrey, cost);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Attachments(int contextIndex, int controllerIndex, float feederID, int index, int column, struct itemDef_s* item, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, float, int, int, struct itemDef_s*, struct Material**)>(L"UI_FeederItemText_Attachments")(contextIndex, controllerIndex, feederID, index, column, item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_WeaponGroups(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_WeaponGroups")(controllerIndex, contextIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ClanTagFeatures(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_ClanTagFeatures")(controllerIndex, contextIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ClanTagFeaturesEdit(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_ClanTagFeaturesEdit")(controllerIndex, contextIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CustomClasses(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, int, int)>(L"UI_FeederItemText_CustomClasses")(controllerIndex, contextIndex, item, index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CustomGametypeClasses(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, int, int)>(L"UI_FeederItemText_CustomGametypeClasses")(controllerIndex, contextIndex, item, index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ChallengesPerks(int contextIndex, int controllerIndex, float feederID, int index, int column, struct itemDef_s* item, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, float, int, int, struct itemDef_s*, struct Material**)>(L"UI_FeederItemText_ChallengesPerks")(contextIndex, controllerIndex, feederID, index, column, item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ItemInSlot(int contextIndex, int controllerIndex, float feederID, int index, int column, struct itemDef_s* item, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, float, int, int, struct itemDef_s*, struct Material**)>(L"UI_FeederItemText_ItemInSlot")(contextIndex, controllerIndex, feederID, index, column, item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CustomPerksInSlot(int contextIndex, int controllerIndex, float feederID, int index, int column, struct itemDef_s* item, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, float, int, int, struct itemDef_s*, struct Material**)>(L"UI_FeederItemText_CustomPerksInSlot")(contextIndex, controllerIndex, feederID, index, column, item, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ChallengesKillstreaks(int contextIndex, int controllerIndex, struct itemDef_s* item, float feederID, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, float, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_ChallengesKillstreaks")(contextIndex, controllerIndex, item, feederID, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_SortedItems(int contextIndex, int controllerIndex, struct itemDef_s* item, float feederID, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, float, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_SortedItems")(contextIndex, controllerIndex, item, feederID, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CustomKillstreaks(int contextIndex, int controllerIndex, struct itemDef_s* item, float feederID, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, float, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_CustomKillstreaks")(contextIndex, controllerIndex, item, feederID, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_AARScoreboard(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, float feederID) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, float)>(L"UI_FeederItemText_AARScoreboard")(contextIndex, controllerIndex, index, column, listPtr, handle, feederID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_InGamePlayerList(int contextIndex, int controllerIndex, int index, int column, struct Material** handle, enum team_t team) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct Material**, enum team_t)>(L"UI_FeederItemText_InGamePlayerList")(contextIndex, controllerIndex, index, column, handle, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_InGamePlayers(int contextIndex, int controllerIndex, int index, int column, struct Material** handle, int feederID, struct itemDef_s* item) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct Material**, int, struct itemDef_s*)>(L"UI_FeederItemText_InGamePlayers")(contextIndex, controllerIndex, index, column, handle, feederID, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Contracts(int contextIndex, int controllerIndex, int index, int column, struct itemDef_s* item, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct itemDef_s*, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_Contracts")(contextIndex, controllerIndex, index, column, item, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_PersonalBests(int contextIndex, int controllerIndex, int index, int column, struct itemDef_s* item, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct itemDef_s*, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_PersonalBests")(contextIndex, controllerIndex, index, column, item, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ChallengeCompletionStatus(int column, int currentValue, int targetValue, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, bool*)>(L"UI_ChallengeCompletionStatus")(column, currentValue, targetValue, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PrepareStatsMilestoneName(int challengeIndex, int milestone, const char* statName, const char* itemName) -> char*
{
  return Zynamic::Forward<char* (int, int, const char*, const char*)>(L"UI_PrepareStatsMilestoneName")(challengeIndex, milestone, statName, itemName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_WeaponGroupMilestones(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, bool*)>(L"UI_FeederItemText_WeaponGroupMilestones")(contextIndex, controllerIndex, index, column, listPtr, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_StatsMilestones(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, bool* useOwnerDraw, int milestoneType) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, bool*, int)>(L"UI_FeederItemText_StatsMilestones")(contextIndex, controllerIndex, index, column, listPtr, handle, useOwnerDraw, milestoneType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_GlobalChallenges(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, bool*)>(L"UI_FeederItemText_GlobalChallenges")(contextIndex, controllerIndex, index, column, listPtr, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ChallengesAttachments(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, bool*)>(L"UI_FeederItemText_ChallengesAttachments")(contextIndex, controllerIndex, index, column, listPtr, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_KillstreakNumKills(int contextIndex, int controllerIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct listBoxDef_s*, struct Material**, bool*)>(L"UI_FeederItemText_KillstreakNumKills")(contextIndex, controllerIndex, index, column, listPtr, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederItemText(const int localClientNum, int contextIndex, struct itemDef_s* item, float feederID, int index, int column, struct Material** handle, float* angle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (const int, int, struct itemDef_s*, float, int, int, struct Material**, float*, bool*)>(L"UI_Project_FeederItemText")(localClientNum, contextIndex, item, feederID, index, column, handle, angle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_Contracts(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool)>(L"UI_FeederItemColor_Contracts")(controllerIndex, contextIndex, item, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_ItemList(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, int cost, bool itemPurchased, bool itemLocked, bool itemClassified, float* color) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, int, bool, bool, bool, float*)>(L"UI_FeederItemColor_ItemList")(controllerIndex, contextIndex, item, index, column, cost, itemPurchased, itemLocked, itemClassified, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_ItemsInSlot(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool)>(L"UI_FeederItemColor_ItemsInSlot")(controllerIndex, contextIndex, item, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_WeaponOptions(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool)>(L"UI_FeederItemColor_WeaponOptions")(controllerIndex, contextIndex, item, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_InGamePlayerList(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus, enum team_t team) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool, enum team_t)>(L"UI_FeederItemColor_InGamePlayerList")(controllerIndex, contextIndex, item, index, column, color, onFocus, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_InGamePlayers(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus, int feederType) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool, int)>(L"UI_FeederItemColor_InGamePlayers")(controllerIndex, contextIndex, item, index, column, color, onFocus, feederType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_GlobalMilestones(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool)>(L"UI_FeederItemColor_GlobalMilestones")(controllerIndex, contextIndex, item, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_PerksMilestones(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool)>(L"UI_FeederItemColor_PerksMilestones")(controllerIndex, contextIndex, item, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_StatsMilestones(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color, bool onFocus, int milestoneType) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*, bool, int)>(L"UI_FeederItemColor_StatsMilestones")(controllerIndex, contextIndex, item, index, column, color, onFocus, milestoneType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_AARScoreboard(int controllerIndex, int contextIndex, float feederID, struct itemDef_s* item, int index, int column, float* color) -> bool
{
  return Zynamic::Forward<bool (int, int, float, struct itemDef_s*, int, int, float*)>(L"UI_FeederItemColor_AARScoreboard")(controllerIndex, contextIndex, feederID, item, index, column, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor_KillstreakNumKills(int controllerIndex, int contextIndex, struct itemDef_s* item, int index, int column, float* color) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, int, int, float*)>(L"UI_FeederItemColor_KillstreakNumKills")(controllerIndex, contextIndex, item, index, column, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederItemOwnerDraw(int localClientNum, int contextIndex, const float feederID, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, const float, const struct rectDef_s*, int, int, const float*)>(L"UI_Project_FeederItemOwnerDraw")(localClientNum, contextIndex, feederID, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederItemColor(int controllerIndex, int contextIndex, struct itemDef_s* item, const float feederID, int index, int column, float* color, bool onFocus) -> bool
{
  return Zynamic::Forward<bool (int, int, struct itemDef_s*, const float, int, int, float*, bool)>(L"UI_Project_FeederItemColor")(controllerIndex, contextIndex, item, feederID, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDoubleClick(const int localClientNum, int contextIndex, float feederID, int index) -> int
{
  return Zynamic::Forward<int (const int, int, float, int)>(L"UI_FeederDoubleClick")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDoubleClickDlcMaps(const int localClientNum, int contextIndex, int index) -> void
{
  return Zynamic::Forward<void (const int, int, int)>(L"UI_FeederDoubleClickDlcMaps")(localClientNum, contextIndex, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemEnabled(const int localClientNum, int contextIndex, float feederID, int index) -> int
{
  return Zynamic::Forward<int (const int, int, float, int)>(L"UI_FeederItemEnabled")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemImage(const float feederID, int index, int column) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const float, int, int)>(L"UI_FeederItemImage")(feederID, index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_FriendsStatsCompare(const int localClientNum, int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_FriendsStatsCompare")(localClientNum, contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapLoadNameForCurrentIndex(int index) -> char*
{
  return Zynamic::Forward<char* (int)>(L"UI_GetMapLoadNameForCurrentIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Maps(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Maps")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetBasicTrainingGametypeNumFromId(const int id) -> int
{
  return Zynamic::Forward<int (const int)>(L"UI_GetBasicTrainingGametypeNumFromId")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomGametypes_GetSelectedGameTypeIndex() -> int
{
  return Zynamic::Forward<int ()>(L"UI_CustomGametypes_GetSelectedGameTypeIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomGametypes_IsInvalidCursorPos(int cursorPos) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_CustomGametypes_IsInvalidCursorPos")(cursorPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_CustomGametypes(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_CustomGametypes")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Gametypes(const int localClientNum, int contextIndex, struct listBoxDef_s* listPtr, float feederID) -> void
{
  return Zynamic::Forward<void (const int, int, struct listBoxDef_s*, float)>(L"UI_OverrideCursorPos_Gametypes")(localClientNum, contextIndex, listPtr, feederID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_GameVariants(const int localClientNum, int contextIndex, struct listBoxDef_s* listPtr, int feederID) -> void
{
  return Zynamic::Forward<void (const int, int, struct listBoxDef_s*, int)>(L"UI_OverrideCursorPos_GameVariants")(localClientNum, contextIndex, listPtr, feederID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_ItemsInSlot(const int localClientNum, int contextIndex, struct listBoxDef_s* listPtr, int feederID) -> void
{
  return Zynamic::Forward<void (const int, int, struct listBoxDef_s*, int)>(L"UI_OverrideCursorPos_ItemsInSlot")(localClientNum, contextIndex, listPtr, feederID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Contracts(const int localClientNum, int contextIndex, struct itemDef_s* item, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Contracts")(localClientNum, contextIndex, item, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_OverrideCursorPos(const int localClientNum, int contextIndex, struct itemDef_s* item) -> bool
{
  return Zynamic::Forward<bool (const int, int, struct itemDef_s*)>(L"UI_Project_OverrideCursorPos")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_Maps(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_Maps")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_CustomGametypes(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_CustomGametypes")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_GametypesBase(int localClientNum, int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, int, float, int)>(L"UI_FeederSelection_GametypesBase")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_GametypesInGame(int localClientNum, int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, int, float, int)>(L"UI_FeederSelection_GametypesInGame")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederSelection(const int localClientNum, int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (const int, int, float, int)>(L"UI_Project_FeederSelection")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_FriendsStatsCompare(int controllerIndex, int index, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*, const char**, float*)>(L"UI_FeederDataExtended_FriendsStatsCompare")(controllerIndex, index, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_InGamePlayers(int controllerIndex, int index, int feederType, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, int, const char*, const char**, float*)>(L"UI_FeederDataExtended_InGamePlayers")(controllerIndex, index, feederType, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_AARScoreboard(int controllerIndex, int index, int feederType, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, int, const char*, const char**, float*)>(L"UI_FeederDataExtended_AARScoreboard")(controllerIndex, index, feederType, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Project_FeederDataExtended(int controllerIndex, int contextIndex, int feederID, struct listBoxDef_s* listBox, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, int, struct listBoxDef_s*, const char*, const char**, float*)>(L"UI_Project_FeederDataExtended")(controllerIndex, contextIndex, feederID, listBox, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederBackColor(const int localClientNum, int contextIndex, struct itemDef_s* item, const float feederID, int index, float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const float, int, float*)>(L"UI_FeederBackColor")(localClientNum, contextIndex, item, feederID, index, color);
}

#endif // __UNIMPLEMENTED__
