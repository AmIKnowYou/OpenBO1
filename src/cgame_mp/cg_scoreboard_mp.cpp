//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_BackdropWidth(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_BackdropWidth")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BackdropLeft(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_BackdropLeft")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BackdropTop(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_BackdropTop")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetNameForScoreboardColumn(int localClientNum, int columnNumber) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"CG_GetNameForScoreboardColumn")(localClientNum, columnNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetColumnValue(int localClientNum, const struct score_s* score, enum scoreboardColumnType_t columnType) -> int
{
  return Zynamic::Forward<int (int, const struct score_s*, enum scoreboardColumnType_t)>(L"CG_GetColumnValue")(localClientNum, score, columnType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetColumnValueString(int localClientNum, const struct score_s* score, enum scoreboardColumnType_t columnType) -> const char*
{
  return Zynamic::Forward<const char* (int, const struct score_s*, enum scoreboardColumnType_t)>(L"CG_GetColumnValueString")(localClientNum, score, columnType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddSBColumnToMatchScoreBoard(int localClientNum, enum listColumnTypes_t columnType, float columnWidth, const char* columnName, int alignment, enum scoreboardColumnType_t sbColumnType) -> void
{
  return Zynamic::Forward<void (int, enum listColumnTypes_t, float, const char*, int, enum scoreboardColumnType_t)>(L"CG_AddSBColumnToMatchScoreBoard")(localClientNum, columnType, columnWidth, columnName, alignment, sbColumnType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateMatchScoreboard(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateMatchScoreboard")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchScoreboardClientCount(int localClientNum, enum team_t team) -> int
{
  return Zynamic::Forward<int (int, enum team_t)>(L"CG_GetMatchScoreboardClientCount")(localClientNum, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchScoreboardIndexForTeam(int localClientNum, int index, enum team_t team) -> int
{
  return Zynamic::Forward<int (int, int, enum team_t)>(L"CG_GetMatchScoreboardIndexForTeam")(localClientNum, index, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchscoreboardTeam(int localClientNum, int index) -> enum team_t
{
  return Zynamic::Forward<enum team_t (int, int)>(L"CG_GetMatchscoreboardTeam")(localClientNum, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetInGamePlayerListIcon(int localClientNum, int column, int index, enum team_t team, struct Material** handle) -> void
{
  return Zynamic::Forward<void (int, int, int, enum team_t, struct Material**)>(L"CG_GetInGamePlayerListIcon")(localClientNum, column, index, team, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchScoreboardInfo(int localClientNum, int column, int index, enum team_t team) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, enum team_t)>(L"CG_GetMatchScoreboardInfo")(localClientNum, column, index, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsInGamePlayerListPlayerTalking(int localClientNum, int clientNum, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct Material**)>(L"CG_IsInGamePlayerListPlayerTalking")(localClientNum, clientNum, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchInGamePlayerListInfo(int localClientNum, int column, int index, enum team_t team, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, enum team_t, struct Material**)>(L"CG_GetMatchInGamePlayerListInfo")(localClientNum, column, index, team, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchInGamePlayersInfo(int localClientNum, int column, int index, int feederType, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct Material**)>(L"CG_GetMatchInGamePlayersInfo")(localClientNum, column, index, feederType, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchInGamePlayerXuid(int localClientNum, int index, enum team_t team) -> const char*
{
  return Zynamic::Forward<const char* (int, int, enum team_t)>(L"CG_GetMatchInGamePlayerXuid")(localClientNum, index, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchInGamePlayersXUID(int localClientNum, int index, int feederType, unsigned __int64& retXUID) -> bool
{
  return Zynamic::Forward<bool (int, int, int, unsigned __int64&)>(L"CG_GetMatchInGamePlayersXUID")(localClientNum, index, feederType, retXUID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMatchScoreboardRankIcon(int localClientNum, int index, enum team_t team, struct Material** handle) -> void
{
  return Zynamic::Forward<void (int, int, enum team_t, struct Material**)>(L"CG_GetMatchScoreboardRankIcon")(localClientNum, index, team, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetIndexIntoMatchScoreboard(int localClientNum, int controllerIndex) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_GetIndexIntoMatchScoreboard")(localClientNum, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWagerPlaceForMatchScoreboard(int localClientNum, int matchScoreboardIndex) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_GetWagerPlaceForMatchScoreboard")(localClientNum, matchScoreboardIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClientScore(int localClientNum, int clientNum) -> const struct score_s*
{
  return Zynamic::Forward<const struct score_s* (int, int)>(L"GetClientScore")(localClientNum, clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetOurClientScore(int localClientNum) -> const struct score_s*
{
  return Zynamic::Forward<const struct score_s* (int)>(L"UI_GetOurClientScore")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetScoreAtRank(int localClientNum, int rank) -> const struct score_s*
{
  return Zynamic::Forward<const struct score_s* (int, int)>(L"UI_GetScoreAtRank")(localClientNum, rank);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawBackdropServerInfo(int localClientNum, float alpha) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_DrawBackdropServerInfo")(localClientNum, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetGametypeDescription(int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CG_GetGametypeDescription")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard_Backdrop(int localClientNum, float alpha) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_DrawScoreboard_Backdrop")(localClientNum, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetScoreboardInfo(int localClientNum, const struct listColumnInfo_t** colInfo, int* numFields) -> void
{
  return Zynamic::Forward<void (int, const struct listColumnInfo_t**, int*)>(L"CG_GetScoreboardInfo")(localClientNum, colInfo, numFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard_ListColumnHeaders(int localClientNum, const float* color, float y, float h, float listWidth) -> float
{
  return Zynamic::Forward<float (int, const float*, float, float, float)>(L"CG_DrawScoreboard_ListColumnHeaders")(localClientNum, color, y, h, listWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckDrawScoreboardLine(int localClientNum, int* drawLine, float y, float lineHeight) -> int
{
  return Zynamic::Forward<int (int, int*, float, float)>(L"CG_CheckDrawScoreboardLine")(localClientNum, drawLine, y, lineHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard_GetTeamColorIndex(int team, int localClientNum) -> char
{
  return Zynamic::Forward<char (int, int)>(L"CG_DrawScoreboard_GetTeamColorIndex")(team, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLivePlayersOnTeam(int localClientNum, int team) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_GetLivePlayersOnTeam")(localClientNum, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard_ListBanner(int localClientNum, const float* color, float y, float w, float h, int team, int* piDrawLine) -> float
{
  return Zynamic::Forward<float (int, const float*, float, float, float, int, int*)>(L"CG_DrawScoreboard_ListBanner")(localClientNum, color, y, w, h, team, piDrawLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcXAdj(int align, float maxw, float w) -> float
{
  return Zynamic::Forward<float (int, float, float)>(L"CalcXAdj")(align, maxw, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawListString(int localClientNum, const char* string, float x, float y, float width, int alignment, struct Font_s* font, float scale, int style, const float* color) -> void
{
  return Zynamic::Forward<void (int, const char*, float, float, float, int, struct Font_s*, float, int, const float*)>(L"DrawListString")(localClientNum, string, x, y, width, alignment, font, scale, style, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawClientPing(int localClientNum, int ping, float x, float y, float maxWidth, float maxHeight) -> void
{
  return Zynamic::Forward<void (int, int, float, float, float, float)>(L"CG_DrawClientPing")(localClientNum, ping, x, y, maxWidth, maxHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawClientScore(int localClientNum, int clientNum, const float* color, float y, const struct score_s* score, float listWidth, int selection) -> float
{
  return Zynamic::Forward<float (int, int, const float*, float, const struct score_s*, float, int)>(L"CG_DrawClientScore")(localClientNum, clientNum, color, y, score, listWidth, selection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScoreboardTotalLines(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_ScoreboardTotalLines")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawTeamOfClientScore(int localClientNum, const float* color, float y, int team, float listWidth, int* drawLine) -> float
{
  return Zynamic::Forward<float (int, const float*, float, int, float, int*)>(L"CG_DrawTeamOfClientScore")(localClientNum, color, y, team, listWidth, drawLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScrollbar(int localClientNum, float top) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_DrawScrollbar")(localClientNum, top);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard_ScoresList(int localClientNum, float alpha) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_DrawScoreboard_ScoresList")(localClientNum, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CenterViewOnClient(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"CenterViewOnClient")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawScoreboard(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_DrawScoreboard")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsScoreboardDisplayed(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_IsScoreboardDisplayed")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsIntermission(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_IsIntermission")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScrollScoreboardUp(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_ScrollScoreboardUp")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScrollScoreboardDown(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_ScrollScoreboardDown")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetFocusScoreboardCmd() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SetFocusScoreboardCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitScoreboard() -> void
{
  return Zynamic::Forward<void ()>(L"CG_InitScoreboard")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterScoreboardDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_RegisterScoreboardDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterScoreboardGraphics() -> void
{
  return Zynamic::Forward<void ()>(L"CG_RegisterScoreboardGraphics")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scoreboard_HandleInput(int localClientNum, int key) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Scoreboard_HandleInput")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamercard_HandleInput(int localClientNum, int key) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Gamercard_HandleInput")(localClientNum, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlaceWithTiesForScore(const int localClientNum, int score) -> int
{
  return Zynamic::Forward<int (const int, int)>(L"CG_GetPlaceWithTiesForScore")(localClientNum, score);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetKills(int localClientNum, const struct score_s* score) -> int
{
  return Zynamic::Forward<int (int, const struct score_s*)>(L"CG_GetKills")(localClientNum, score);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetDeaths(int localClientNum, const struct score_s* score) -> int
{
  return Zynamic::Forward<int (int, const struct score_s*)>(L"CG_GetDeaths")(localClientNum, score);
}

#endif // __UNIMPLEMENTED__
