//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Session_BuildQoSPayload(struct SessionData_s* session) -> int
{
  return Zynamic::Forward<int (struct SessionData_s*)>(L"Session_BuildQoSPayload")(session);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_GetQosPayloadBuffer() -> unsigned char*
{
  return Zynamic::Forward<unsigned char* ()>(L"Session_GetQosPayloadBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsHost(struct SessionData_s* session, const int clientNum) -> bool
{
  return Zynamic::Forward<bool (struct SessionData_s*, const int)>(L"Session_IsHost")(session, clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_HostNum(struct SessionData_s* session) -> int
{
  return Zynamic::Forward<int (struct SessionData_s*)>(L"Session_HostNum")(session);
}

#endif // __UNIMPLEMENTED__
