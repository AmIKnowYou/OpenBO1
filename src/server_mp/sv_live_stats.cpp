//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_GetClientNumForBdOnlineUserID(unsigned __int64 uid) -> int
{
  return Zynamic::Forward<int (unsigned __int64)>(L"SV_GetClientNumForBdOnlineUserID")(uid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetBdUidFromFileInfo(void* data) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (void*)>(L"SV_GetBdUidFromFileInfo")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientFromFileInfo(void* data) -> struct client_t*
{
  return Zynamic::Forward<struct client_t* (void*)>(L"SV_GetClientFromFileInfo")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetPlayerXuid(int clientNum) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (int)>(L"SV_GetPlayerXuid")(clientNum);
}

#endif // __UNIMPLEMENTED__
