//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_main() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_main")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_irand(int min, int max) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_irand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_flrand(float min, float max) -> float
{
  return Zynamic::Forward<float (float, float)>(L"CG_flrand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_rand() -> int
{
  return Zynamic::Forward<int ()>(L"CG_rand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_random() -> float
{
  return Zynamic::Forward<float ()>(L"CG_random")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_HasClientSystemBeenInitialzed() -> bool
{
  return Zynamic::Forward<bool ()>(L"CG_HasClientSystemBeenInitialzed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientDoneWithInitialization() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClientDoneWithInitialization")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetClientInitializationState() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ResetClientInitializationState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponIndexForName(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"CG_GetWeaponIndexForName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterVehicle(const char* name, short index) -> void
{
  return Zynamic::Forward<void (const char*, short)>(L"CG_RegisterVehicle")(name, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterVehicleMaterial(short index) -> void
{
  return Zynamic::Forward<void (short)>(L"CG_RegisterVehicleMaterial")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Veh_Init(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Veh_Init")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Veh_RegisterMaterials(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Veh_RegisterMaterials")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehicleUpdateField(const char* vehicleInfoName, const char* keyValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"CG_VehicleUpdateField")(vehicleInfoName, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsVehicleRemoteControl(int index) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_IsVehicleRemoteControl")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateUIDeviceContexts(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_UpdateUIDeviceContexts")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetDefaultFovForView() -> float
{
  return Zynamic::Forward<float ()>(L"CG_GetDefaultFovForView")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateFov(float value) -> void
{
  return Zynamic::Forward<void (float)>(L"CG_UpdateFov")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetThirdPerson(int value) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SetThirdPerson")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsEntWalkable(int localClientNum, int entityNum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_IsEntWalkable")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScriptMover_UpdateMove(struct trajectory_t* pTr, float* vCurrPos, const float fSpeed, const float fMidTime, const float fDecelTime, const float* vPos1, const float* vPos2, const float* vPos3) -> int
{
  return Zynamic::Forward<int (struct trajectory_t*, float*, const float, const float, const float, const float*, const float*, const float*)>(L"CScriptMover_UpdateMove")(pTr, vCurrPos, fSpeed, fMidTime, fDecelTime, vPos1, vPos2, vPos3);
}

#endif // __UNIMPLEMENTED__
