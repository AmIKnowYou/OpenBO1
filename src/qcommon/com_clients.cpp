//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_InitClientGameStates() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitClientGameStates")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SwapClients(int clientA, int clientB) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SwapClients")(clientA, clientB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClients_CompressClients() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LocalClients_CompressClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClients_AssignUIContextsForInGame() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LocalClients_AssignUIContextsForInGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClients_AssignUIContextsForFrontEnd() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LocalClients_AssignUIContextsForFrontEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_GetUIContextIndex(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"Com_LocalClient_GetUIContextIndex")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_GetControllerIndex(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"Com_LocalClient_GetControllerIndex")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_GetNetworkID(int localClientNum) -> enum netsrc_t
{
  return Zynamic::Forward<enum netsrc_t (int)>(L"Com_LocalClient_GetNetworkID")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_SetControllerIndex(int localClientNum, int controllerIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Com_LocalClient_SetControllerIndex")(localClientNum, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_ClearAllPrimary() -> void
{
  return Zynamic::Forward<void ()>(L"Com_LocalClient_ClearAllPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_SetPrimary(int localClientNum, bool primary) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Com_LocalClient_SetPrimary")(localClientNum, primary);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClients_GetPrimary() -> int
{
  return Zynamic::Forward<int ()>(L"Com_LocalClients_GetPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_IsPrimary(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Com_LocalClient_IsPrimary")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_IsBeingUsed(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Com_LocalClient_IsBeingUsed")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClient_SetBeingUsed(int localClientNum, bool beingUsed) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Com_LocalClient_SetBeingUsed")(localClientNum, beingUsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LocalClients_GetUsedControllerCount() -> int
{
  return Zynamic::Forward<int ()>(L"Com_LocalClients_GetUsedControllerCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ControllerIndex_GetLocalClientNum(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"Com_ControllerIndex_GetLocalClientNum")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ControllerIndex_GetUIContextIndex(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"Com_ControllerIndex_GetUIContextIndex")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ControllerIndexes_GetPrimary() -> int
{
  return Zynamic::Forward<int ()>(L"Com_ControllerIndexes_GetPrimary")();
}

#endif // __UNIMPLEMENTED__
