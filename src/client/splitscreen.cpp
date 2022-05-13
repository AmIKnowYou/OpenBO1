//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_LocalClient_IsActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_LocalClient_IsActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LocalClient_IsFirstActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_LocalClient_IsFirstActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AllLocalClientsDisconnected() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_AllLocalClientsDisconnected")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AnyLocalClientStateActive() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_AnyLocalClientStateActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AnyLocalClientChallenging() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_AnyLocalClientChallenging")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LocalClients_SetAllUsedActive() -> void
{
  return Zynamic::Forward<void ()>(L"CL_LocalClients_SetAllUsedActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LocalActiveIndexFromClientNum(const int localClientNum) -> int
{
  return Zynamic::Forward<int (const int)>(L"CL_LocalActiveIndexFromClientNum")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ControllerIndex_GetUsername(int controllerIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CL_ControllerIndex_GetUsername")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
