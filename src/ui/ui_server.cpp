//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_ClearDisplayedServers() -> void
{
  return Zynamic::Forward<void ()>(L"UI_ClearDisplayedServers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_InsertServerIntoDisplayList(int num, int position, int nameNum) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"UI_InsertServerIntoDisplayList")(num, position, nameNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BinaryServerInsertion(int num, int nameNum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_BinaryServerInsertion")(num, nameNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BuildServerDisplayList(const int localClientNum, struct uiInfo_s* uiInfo, int force) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*, int)>(L"UI_BuildServerDisplayList")(localClientNum, uiInfo, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BuildServerStatus(const int localClientNum, struct uiInfo_s* uiInfo, int force) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*, int)>(L"UI_BuildServerStatus")(localClientNum, uiInfo, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BuildServerStatusScoreBoard(const int localClientNum, struct uiInfo_s* uiInfo, int force) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*, int)>(L"UI_BuildServerStatusScoreBoard")(localClientNum, uiInfo, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DoServerRefresh(const int localClientNum, struct uiInfo_s* uiInfo) -> void
{
  return Zynamic::Forward<void (const int, struct uiInfo_s*)>(L"UI_DoServerRefresh")(localClientNum, uiInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_StartServerRefresh(const int localClientNum, int contextIndex, int full) -> void
{
  return Zynamic::Forward<void (const int, int, int)>(L"UI_StartServerRefresh")(localClientNum, contextIndex, full);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_StopServerRefresh() -> void
{
  return Zynamic::Forward<void ()>(L"UI_StopServerRefresh")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ServersQsortCompare(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"UI_ServersQsortCompare")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ServersSort(int column, int force) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_ServersSort")(column, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddServerToFavoritesList(const char* pszName, const char* pszAddress) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"UI_AddServerToFavoritesList")(pszName, pszAddress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddServerToFavoritesList(unsigned __int64 uid) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"UI_AddServerToFavoritesList")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RemoveServerFromFavoritesList(int servernum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_RemoveServerFromFavoritesList")(servernum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawServerRefreshDate(int contextIndex, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, struct Font_s*, float, float*, int)>(L"UI_DrawServerRefreshDate")(contextIndex, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateServerToolTips(int localClientNum, struct listBoxDef_s* listPtr) -> void
{
  return Zynamic::Forward<void (int, struct listBoxDef_s*)>(L"UI_UpdateServerToolTips")(localClientNum, listPtr);
}

#endif // __UNIMPLEMENTED__
