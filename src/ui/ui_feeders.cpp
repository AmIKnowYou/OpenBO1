//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_BuildPlayerList(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_BuildPlayerList")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederCount(int localClientNum, int contextIndex, float feederID, struct listBoxDef_s* listPtr) -> int
{
  return Zynamic::Forward<int (int, int, float, struct listBoxDef_s*)>(L"UI_FeederCount")(localClientNum, contextIndex, feederID, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Servers(const int localClientNum, int contextIndex, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (const int, int, int, int, struct Material**)>(L"UI_FeederItemText_Servers")(localClientNum, contextIndex, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ServerStatus(int index, int column) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"UI_FeederItemText_ServerStatus")(index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_ServerStatusScoreboard(int index, int column) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"UI_FeederItemText_ServerStatusScoreboard")(index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Mods(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_FeederItemText_Mods")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRecentPlayerInfoString(int minutes) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"GetRecentPlayerInfoString")(minutes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_CommmonPlayerListHandler(int controllerIndex, int feederId, int index, int column, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct Material**, bool*)>(L"UI_FeederItemText_CommmonPlayerListHandler")(controllerIndex, feederId, index, column, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Invites(int controllerIndex, int feederId, int index, int column, struct Material** handle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, int, struct Material**, bool*)>(L"UI_FeederItemText_Invites")(controllerIndex, feederId, index, column, handle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_Playlists(int controllerIndex, int index) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"UI_FeederItemText_Playlists")(controllerIndex, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_NewCategories(int controllerIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_NewCategories")(controllerIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_NewPlaylists(int controllerIndex, struct itemDef_s* item, int index, int column, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, struct itemDef_s*, int, int, struct Material**)>(L"UI_FeederItemText_NewPlaylists")(controllerIndex, item, index, column, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_MuteList(const int localClientNum, int contextIndex, int index, int column) -> const char*
{
  return Zynamic::Forward<const char* (const int, int, int, int)>(L"UI_FeederItemText_MuteList")(localClientNum, contextIndex, index, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText_DynamicMenu(int contextIndex, int index, int column, struct listBoxDef_s* listPtr, struct Material** handle) -> const char*
{
  return Zynamic::Forward<const char* (int, int, int, struct listBoxDef_s*, struct Material**)>(L"UI_FeederItemText_DynamicMenu")(contextIndex, index, column, listPtr, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText(int localClientNum, int contextIndex, struct itemDef_s* item, const float feederID, int index, int column, struct Material** handle, float* angle, bool* useOwnerDraw) -> const char*
{
  return Zynamic::Forward<const char* (int, int, struct itemDef_s*, const float, int, int, struct Material**, float*, bool*)>(L"UI_FeederItemText")(localClientNum, contextIndex, item, feederID, index, column, handle, angle, useOwnerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemOwnerDraw_Invites(int controllerIndex, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const struct rectDef_s*, int, int, const float*)>(L"UI_FeederItemOwnerDraw_Invites")(controllerIndex, contextIndex, item, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemOwnerDraw_OnlineFriends(int controllerIndex, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const struct rectDef_s*, int, int, const float*)>(L"UI_FeederItemOwnerDraw_OnlineFriends")(controllerIndex, contextIndex, item, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemOwnerDraw_RecentPlayers(int controllerIndex, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const struct rectDef_s*, int, int, const float*)>(L"UI_FeederItemOwnerDraw_RecentPlayers")(controllerIndex, contextIndex, item, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemOwnerDraw_FileShareSearchResults(int controllerIndex, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const struct rectDef_s*, int, int, const float*)>(L"UI_FeederItemOwnerDraw_FileShareSearchResults")(controllerIndex, contextIndex, item, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemOwnerDraw(int localClientNum, int contextIndex, struct itemDef_s* item, const float feederID, const struct rectDef_s* rect, int index, int col, const float* color) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const float, const struct rectDef_s*, int, int, const float*)>(L"UI_FeederItemOwnerDraw")(localClientNum, contextIndex, item, feederID, rect, index, col, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor(int controllerIndex, int contextIndex, struct itemDef_s* item, const float feederID, int index, int column, float* color, bool onFocus) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const float, int, int, float*, bool)>(L"UI_FeederItemColor")(controllerIndex, contextIndex, item, feederID, index, column, color, onFocus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_RecentPlayers(const int controllerIndex, int contextIndex, struct itemDef_s* item, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_RecentPlayers")(controllerIndex, contextIndex, item, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_OnlineFriends(const int controllerIndex, int contextIndex, struct itemDef_s* item, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_OnlineFriends")(controllerIndex, contextIndex, item, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_FileShareSearchResults(int localClientNum, int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_FileShareSearchResults")(localClientNum, contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_FileShareMySlots(int localClientNum, int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_FileShareMySlots")(localClientNum, contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Invites(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Invites")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Playlists(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Playlists")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Categories(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Categories")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Gamemodes(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Gamemodes")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Servers(const int localClientNum, int contextIndex, struct itemDef_s* item, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Servers")(localClientNum, contextIndex, item, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Leaderboards(const int localClientNum, int contextIndex, struct itemDef_s* item, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Leaderboards")(localClientNum, contextIndex, item, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetListDetails(int localClientNum, int contextIndex, struct itemDef_s* item, const char* feederName, struct itemDef_s** itemToFocus, int* lastIndex, int* viewMax) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*, struct itemDef_s**, int*, int*)>(L"UI_GetListDetails")(localClientNum, contextIndex, item, feederName, itemToFocus, lastIndex, viewMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideKeyPress(const int localClientNum, int contextIndex, struct itemDef_s* item, int key) -> bool
{
  return Zynamic::Forward<bool (const int, int, struct itemDef_s*, int)>(L"UI_OverrideKeyPress")(localClientNum, contextIndex, item, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_DynamicMenu(int contextIndex, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_DynamicMenu")(contextIndex, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos_Default(const int localClientNum, int contextIndex, float feederID, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (const int, int, float, struct listBoxDef_s*)>(L"UI_OverrideCursorPos_Default")(localClientNum, contextIndex, feederID, listPtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos(int localClientNum, int contextIndex, struct itemDef_s* item) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*)>(L"UI_OverrideCursorPos")(localClientNum, contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_AllMaps(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_AllMaps")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_Servers(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_Servers")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_Invites(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_Invites")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_Playlists(int localClientNum, int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, int, float, int)>(L"UI_FeederSelection_Playlists")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection_Categories(int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (int, float, int)>(L"UI_FeederSelection_Categories")(contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection(const int localClientNum, int contextIndex, float feederID, int index) -> void
{
  return Zynamic::Forward<void (const int, int, float, int)>(L"UI_FeederSelection")(localClientNum, contextIndex, feederID, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_OnlineFriends(int controllerIndex, int index, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*, const char**, float*)>(L"UI_FeederDataExtended_OnlineFriends")(controllerIndex, index, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_RecentPlayers(int controllerIndex, int index, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*, const char**, float*)>(L"UI_FeederDataExtended_RecentPlayers")(controllerIndex, index, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended_DynamicMenu(int index, struct listBoxDef_s* listBox, const char* field, const char** stringResult) -> bool
{
  return Zynamic::Forward<bool (int, struct listBoxDef_s*, const char*, const char**)>(L"UI_FeederDataExtended_DynamicMenu")(index, listBox, field, stringResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDataExtended(int localClientNum, struct itemDef_s* item, const char* field, const char** stringResult, float* floatResult) -> bool
{
  return Zynamic::Forward<bool (int, struct itemDef_s*, const char*, const char**, float*)>(L"UI_FeederDataExtended")(localClientNum, item, field, stringResult, floatResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddToFeeder(struct itemDef_s* item, const char* eventName, int argCount, const char** args) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, const char*, int, const char**)>(L"UI_AddToFeeder")(item, eventName, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddToFeederExtended(struct itemDef_s* item, const char* onActionEvent, const char* onFocusEvent, bool disableCondition, int argCount, const char** args) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, const char*, const char*, bool, int, const char**)>(L"UI_AddToFeederExtended")(item, onActionEvent, onFocusEvent, disableCondition, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ChangeRowStatus(struct itemDef_s* item, int rowToChange, int newStatus) -> void
{
  return Zynamic::Forward<void (struct itemDef_s*, int, int)>(L"UI_ChangeRowStatus")(item, rowToChange, newStatus);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearFeeder(int contextIndex, struct itemDef_s* item, bool resetCursorPos) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, bool)>(L"UI_ClearFeeder")(contextIndex, item, resetCursorPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RaiseFeederEvent(int localClientNum, struct itemDef_s* item, const char* eventName) -> void
{
  return Zynamic::Forward<void (int, struct itemDef_s*, const char*)>(L"UI_RaiseFeederEvent")(localClientNum, item, eventName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederData(int localClientNum, struct itemDef_s* item, const char* field, const char** stringResult, float* numberResult) -> bool
{
  return Zynamic::Forward<bool (int, struct itemDef_s*, const char*, const char**, float*)>(L"UI_FeederData")(localClientNum, item, field, stringResult, numberResult);
}

#endif // __UNIMPLEMENTED__
