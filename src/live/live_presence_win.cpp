//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Live_GetMapCount() -> int
{
  return Zynamic::Forward<int ()>(L"Live_GetMapCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_SetPlaylistVersion(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"Live_SetPlaylistVersion")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_SetPlaylistNum(int controllerIndex, int playlistNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Live_SetPlaylistNum")(controllerIndex, playlistNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetMapIndex(const char* mapname) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Live_GetMapIndex")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetMapSource(const int mapIndex) -> int
{
  return Zynamic::Forward<int (const int)>(L"Live_GetMapSource")(mapIndex);
}

#endif // __UNIMPLEMENTED__
