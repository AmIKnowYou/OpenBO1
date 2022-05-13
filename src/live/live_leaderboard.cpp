//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_lbGlob''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_lbGlob''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_NeedToReadLeaderBoard(int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"LB_NeedToReadLeaderBoard")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ForceRefresh() -> void
{
  return Zynamic::Forward<void ()>(L"LB_ForceRefresh")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_InitStructure(struct LbStructure* const structure, const int type) -> void
{
  return Zynamic::Forward<void (struct LbStructure* const, const int)>(L"LB_InitStructure")(structure, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_RegisterStat(struct LbStructure* const structure, const enum LbStatEnum statType, const bool isRating) -> void
{
  return Zynamic::Forward<void (struct LbStructure* const, const enum LbStatEnum, const bool)>(L"LB_RegisterStat")(structure, statType, isRating);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_RegisterStructure(struct LbLookup* const lookup, const struct LbStructure structure, int type) -> void
{
  return Zynamic::Forward<void (struct LbLookup* const, const struct LbStructure, int)>(L"LB_RegisterStructure")(lookup, structure, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_InitGlobalStructure(struct LbGlobalStructure* const globalStructures, const int lbIndex) -> void
{
  return Zynamic::Forward<void (struct LbGlobalStructure* const, const int)>(L"LB_InitGlobalStructure")(globalStructures, lbIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_RegisterGlobalStat(struct LbGlobalStructure* const globalStructures, const enum GlobalLbStatEnum globalStatType, const bool isRating) -> void
{
  return Zynamic::Forward<void (struct LbGlobalStructure* const, const enum GlobalLbStatEnum, const bool)>(L"LB_RegisterGlobalStat")(globalStructures, globalStatType, isRating);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_RegisterGlobalStructure(struct LbLookup* const lookup, const struct LbGlobalStructure globalStructures, int lbIndex) -> void
{
  return Zynamic::Forward<void (struct LbLookup* const, const struct LbGlobalStructure, int)>(L"LB_RegisterGlobalStructure")(lookup, globalStructures, lbIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetLbIndex(enum LbType type, enum LbResetPeriod resetPeriod, bool isPrestigeLb, bool isHiddenLb) -> int
{
  return Zynamic::Forward<int (enum LbType, enum LbResetPeriod, bool, bool)>(L"LB_GetLbIndex")(type, resetPeriod, isPrestigeLb, isHiddenLb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetNumMatchesPlayedForPlayerFromLb(struct Leaderboard* lb, int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (struct Leaderboard*, int)>(L"LB_GetNumMatchesPlayedForPlayerFromLb")(lb, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetByRank(struct Leaderboard* lb, const int controllerIndex, const unsigned int topRank) -> bool
{
  return Zynamic::Forward<bool (struct Leaderboard*, const int, const unsigned int)>(L"LB_GetByRank")(lb, controllerIndex, topRank);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetByPlayer(struct Leaderboard* lb, const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (struct Leaderboard*, const int)>(L"LB_GetByPlayer")(lb, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetStatsByXuids(const int controllerIndex, struct Leaderboard* lb) -> bool
{
  return Zynamic::Forward<bool (const int, struct Leaderboard*)>(L"LB_GetStatsByXuids")(controllerIndex, lb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetPlayerStats(const int controllerIndex, struct Leaderboard* lb) -> bool
{
  return Zynamic::Forward<bool (const int, struct Leaderboard*)>(L"LB_GetPlayerStats")(controllerIndex, lb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetFriends(struct Leaderboard* lb, const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (struct Leaderboard*, const int)>(L"LB_GetFriends")(lb, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_CalcOffset(const int offset, struct Leaderboard* lb) -> bool
{
  return Zynamic::Forward<bool (const int, struct Leaderboard*)>(L"LB_CalcOffset")(offset, lb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

class LeaderBoardResult<LeaderBoardRow<10>,100>* auto LB_UpdateLeaderboard(const int localClientNum, enum LbType lbType, const int index) -> 
{
  return Zynamic::Forward<class LeaderBoardResult<LeaderBoardRow<10>,100>* (const int, enum LbType, const int)>(L"LB_UpdateLeaderboard")(localClientNum, lbType, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_FeederCount(const int localClientNum) -> int
{
  return Zynamic::Forward<int (const int)>(L"LB_FeederCount")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_FeederSelection(int index) -> void
{
  return Zynamic::Forward<void (int)>(L"LB_FeederSelection")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_OnSelect(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"LB_OnSelect")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetSelectedPlayerInfo(const int localClientNum, struct LBSelectedPlayerInfo* info) -> void
{
  return Zynamic::Forward<void (const int, struct LBSelectedPlayerInfo*)>(L"LB_GetSelectedPlayerInfo")(localClientNum, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_OverrideCursorPos(const int viewmax, int* cursorPos, int* startPos) -> void
{
  return Zynamic::Forward<void (const int, int*, int*)>(L"LB_OverrideCursorPos")(viewmax, cursorPos, startPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetXUserCol(struct LbLookup* g_lbLookup, class LeaderBoardRow<10>* row, int type, const enum LbStatEnum colId) -> int
{
  return Zynamic::Forward<int (struct LbLookup*, class LeaderBoardRow<10>*, int, const enum LbStatEnum)>(L"LB_GetXUserCol")(g_lbLookup, row, type, colId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetRankIconForXp(class LeaderBoardRow<10>* row, enum LbType type, struct Material** handle) -> void
{
  return Zynamic::Forward<void (class LeaderBoardRow<10>*, enum LbType, struct Material**)>(L"LB_GetRankIconForXp")(row, type, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_CalcPlayerIndex(const int localControllerIndex, struct Leaderboard* lb) -> int
{
  return Zynamic::Forward<int (const int, struct Leaderboard*)>(L"LB_CalcPlayerIndex")(localControllerIndex, lb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_CompareXUserStatsRowRanks(const void* r1, const void* r2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"LB_CompareXUserStatsRowRanks")(r1, r2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_SortXUserStatsByRank(struct Leaderboard* lb) -> void
{
  return Zynamic::Forward<void (struct Leaderboard*)>(L"LB_SortXUserStatsByRank")(lb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_MakeRow(int controllerIndex, const struct LbPlayerStat* const stats, const int type, const int lbIndex, class LeaderBoardRow<10>* const row, bool statWriteTypeAdd) -> bool
{
  return Zynamic::Forward<bool (int, const struct LbPlayerStat* const, const int, const int, class LeaderBoardRow<10>* const, bool)>(L"LB_MakeRow")(controllerIndex, stats, type, lbIndex, row, statWriteTypeAdd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_MakeGlobalRow(int controllerIndex, const struct LbPlayerStat* const stats, const int lbIndex, class LeaderBoardRow<10>* const row) -> bool
{
  return Zynamic::Forward<bool (int, const struct LbPlayerStat* const, const int, class LeaderBoardRow<10>* const)>(L"LB_MakeGlobalRow")(controllerIndex, stats, lbIndex, row);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_openDownloadingMenuCmd() -> void
{
  return Zynamic::Forward<void ()>(L"LB_openDownloadingMenuCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ReportUser() -> void
{
  return Zynamic::Forward<void ()>(L"LB_ReportUser")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_IncrementEscrow() -> void
{
  return Zynamic::Forward<void ()>(L"LB_IncrementEscrow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_SetGametypeDvar() -> bool
{
  return Zynamic::Forward<bool ()>(L"LB_SetGametypeDvar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_SetStatsForRow(const int controllerIndex, const char* gameModePrefix, bool setMatchDelta) -> void
{
  return Zynamic::Forward<void (const int, const char*, bool)>(L"LB_SetStatsForRow")(controllerIndex, gameModePrefix, setMatchDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ReadHiddenLeaderboardComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_ReadHiddenLeaderboardComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ReadLeaderboardMatchesCountComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_ReadLeaderboardMatchesCountComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ReadLeaderboardComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_ReadLeaderboardComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ClearPlayerStats(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LB_ClearPlayerStats")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_SetStat(const int localControllerIndex, int statId, int value) -> void
{
  return Zynamic::Forward<void (const int, int, int)>(L"LB_SetStat")(localControllerIndex, statId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_UpdateNeeded(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LB_UpdateNeeded")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_UploadPlayerGlobalStats(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LB_UploadPlayerGlobalStats")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Lb_ReadHiddenLeaderboardEntry(const int controllerIndex, class LeaderBoardRow<10>* userStats, int lbIndex, enum LbTaskEnum task) -> void
{
  return Zynamic::Forward<void (const int, class LeaderBoardRow<10>*, int, enum LbTaskEnum)>(L"Lb_ReadHiddenLeaderboardEntry")(controllerIndex, userStats, lbIndex, task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Lb_InitiateWeeklyAndMonthlyLbWrite(const int controllerIndex, enum LbType type) -> void
{
  return Zynamic::Forward<void (const int, enum LbType)>(L"Lb_InitiateWeeklyAndMonthlyLbWrite")(controllerIndex, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_UploadPlayerStats(const int localControllerIndex) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"LB_UploadPlayerStats")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_UploadPlayerStatsComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_UploadPlayerStatsComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_WriteStatsToLbComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_WriteStatsToLbComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_IncrementEscrowComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_IncrementEscrowComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ResolveEscrowComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_ResolveEscrowComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_RetrieveEscrowBalanceComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_RetrieveEscrowBalanceComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ClearEscrowComplete(const int slot) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"LB_ClearEscrowComplete")(slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_FeederItemText(const int localClientNum, int index, int column, struct Material** material) -> const char*
{
  return Zynamic::Forward<const char* (const int, int, int, struct Material**)>(L"LB_FeederItemText")(localClientNum, index, column, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_ReadRowForUser(const int controllerIndex, const unsigned __int64 entityID, const unsigned int leaderboardID, const int taskType, class LeaderBoardRow<10>* userStats) -> void
{
  return Zynamic::Forward<void (const int, const unsigned __int64, const unsigned int, const int, class LeaderBoardRow<10>*)>(L"LB_ReadRowForUser")(controllerIndex, entityID, leaderboardID, taskType, userStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_WriteRows(const int controllerIndex, class bdStatsInfo** statsInfo, int numStats, const int taskType) -> void
{
  return Zynamic::Forward<void (const int, class bdStatsInfo**, int, const int)>(L"LB_WriteRows")(controllerIndex, statsInfo, numStats, taskType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_InitAndRegisterStructure(struct LbStructure* const structure, int type) -> void
{
  return Zynamic::Forward<void (struct LbStructure* const, int)>(L"LB_InitAndRegisterStructure")(structure, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_InitAndRegisterStructureForSpecialLeaderboards(struct LbGlobalStructure* const globalStructures, int lbIndex, int type) -> void
{
  return Zynamic::Forward<void (struct LbGlobalStructure* const, int, int)>(L"LB_InitAndRegisterStructureForSpecialLeaderboards")(globalStructures, lbIndex, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_Init() -> void
{
  return Zynamic::Forward<void ()>(L"LB_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_CheckOngoingTasks() -> void
{
  return Zynamic::Forward<void ()>(L"LB_CheckOngoingTasks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_EndOngoingTasks() -> void
{
  return Zynamic::Forward<void ()>(L"LB_EndOngoingTasks")();
}

#endif // __UNIMPLEMENTED__
