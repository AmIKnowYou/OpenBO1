//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto _GetNumFriends<4>() -> int
{
  return Zynamic::Forward<int ()>(L"_GetNumFriends<4>")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _GetFriendXuid<4>(int index) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (int)>(L"_GetFriendXuid<4>")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _GetFriendPersonaName<4>(const int index, char* buf, const int size) -> void
{
  return Zynamic::Forward<void (const int, char*, const int)>(L"_GetFriendPersonaName<4>")(index, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _GetFriendPersonaNameByXuid<4>(unsigned __int64 xuid, char* buf, const int size) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, char*, const int)>(L"_GetFriendPersonaNameByXuid<4>")(xuid, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetNumFriends() -> int
{
  return Zynamic::Forward<int ()>(L"LiveSteam_GetNumFriends")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetNumFriendsOnTheServer() -> int
{
  return Zynamic::Forward<int ()>(L"LiveSteam_GetNumFriendsOnTheServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetFriendXuid(int index) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (int)>(L"LiveSteam_GetFriendXuid")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetFriendPersonaName(const int index, char* buf, const int size) -> void
{
  return Zynamic::Forward<void (const int, char*, const int)>(L"LiveSteam_GetFriendPersonaName")(index, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetFriendOnTheServerPersonaName(const int index, char* buf, const int size) -> void
{
  return Zynamic::Forward<void (const int, char*, const int)>(L"LiveSteam_GetFriendOnTheServerPersonaName")(index, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetFriendPersonaState(unsigned __int64 xuid) -> enum LiveSteam_PersonaState
{
  return Zynamic::Forward<enum LiveSteam_PersonaState (unsigned __int64)>(L"LiveSteam_GetFriendPersonaState")(xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GetFriendPersonaStateByIndex(int index) -> enum LiveSteam_PersonaState
{
  return Zynamic::Forward<enum LiveSteam_PersonaState (int)>(L"LiveSteam_GetFriendPersonaStateByIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_Update(int __formal) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Friends_Update")(__formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_GetCount(int __formal, int type, int __formal) -> int
{
  return Zynamic::Forward<int (int, int, int)>(L"Friends_GetCount")(__formal, type, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_GetByIndex(int controllerIndex, int filter, int index, struct FriendInfo* info) -> bool
{
  return Zynamic::Forward<bool (int, int, int, struct FriendInfo*)>(L"Friends_GetByIndex")(controllerIndex, filter, index, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_GetByID(int controllerIndex, unsigned __int64 id, struct FriendInfo* info) -> bool
{
  return Zynamic::Forward<bool (int, unsigned __int64, struct FriendInfo*)>(L"Friends_GetByID")(controllerIndex, id, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friend_GetByName(int controllerIndex, const char* friendName, unsigned __int64* uid) -> bool
{
  return Zynamic::Forward<bool (int, const char*, unsigned __int64*)>(L"Friend_GetByName")(controllerIndex, friendName, uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_GetPeopleOnServer() -> void
{
  return Zynamic::Forward<void ()>(L"Friends_GetPeopleOnServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friend_PrintNamesOnServer_f() -> void
{
  return Zynamic::Forward<void ()>(L"Friend_PrintNamesOnServer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Friends_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetRecentPlayerName(unsigned __int64 uid, char* buf, int bufsize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, char*, int)>(L"Live_GetRecentPlayerName")(uid, buf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _GetSortedFriendIndex(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"_GetSortedFriendIndex")(index);
}

#endif // __UNIMPLEMENTED__
