//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto CL_GetLocalClientUIGlobals(const int localClientNum) -> struct clientUIActive_t*
{
  return Zynamic::Forward<struct clientUIActive_t* (const int)>(L"CL_GetLocalClientUIGlobals")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_GetLocalClientVoiceCommunication(const int localClientNum) -> struct voiceCommunication_t*
{
  return Zynamic::Forward<struct voiceCommunication_t* (const int)>(L"CL_GetLocalClientVoiceCommunication")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_GetLocalClientGlobals(const int localClientNum) -> struct clientActive_t*
{
  return Zynamic::Forward<struct clientActive_t* (const int)>(L"CL_GetLocalClientGlobals")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_GetLocalClientConnection(const int localClientNum) -> struct clientConnection_t*
{
  return Zynamic::Forward<struct clientConnection_t* (const int)>(L"CL_GetLocalClientConnection")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_GetLocalClientConnectionState(const int localClientNum) -> enum connstate_t
{
  return Zynamic::Forward<enum connstate_t (const int)>(L"CL_GetLocalClientConnectionState")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_SetLocalClientConnectionState(int client, enum connstate_t state) -> void
{
  return Zynamic::Forward<void (int, enum connstate_t)>(L"CL_SetLocalClientConnectionState")(client, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_LocalClient_IsCUIFlagSet(int localClientNum, int flag) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CL_LocalClient_IsCUIFlagSet")(localClientNum, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_LocalClient_SetCUIFlag(int localClientNum, int flag) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_LocalClient_SetCUIFlag")(localClientNum, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CL_LocalClient_ClearCUIFlag(int localClientNum, int flag) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_LocalClient_ClearCUIFlag")(localClientNum, flag);
}

#endif // __UNIMPLEMENTED__
