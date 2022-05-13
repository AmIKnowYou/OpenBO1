//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_GetClientState(int localClientNum, struct uiClientState_s* state) -> void
{
  return Zynamic::Forward<void (int, struct uiClientState_s*)>(L"CL_GetClientState")(localClientNum, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AllowPopup(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_AllowPopup")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Key_KeynumToStringBuf(int keynum, char* buf, int buflen) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"Key_KeynumToStringBuf")(keynum, buf, buflen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetClientName(int localClientNum, int index, char* buf, int size, bool addClanName) -> int
{
  return Zynamic::Forward<int (int, int, char*, int, bool)>(L"CL_GetClientName")(localClientNum, index, buf, size, addClanName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetClientClanName(int localClientNum, int index, char* buf, int size) -> int
{
  return Zynamic::Forward<int (int, int, char*, int)>(L"CL_GetClientClanName")(localClientNum, index, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LocalClientIsInGame(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CL_LocalClientIsInGame")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownUI() -> int
{
  return Zynamic::Forward<int ()>(L"CL_ShutdownUI")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitUI() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitUI")();
}

#endif // __UNIMPLEMENTED__
