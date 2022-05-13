//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Helicopter_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Helicopter_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HELI_CmdScale(const char* move, float* outFracs) -> void
{
  return Zynamic::Forward<void (const char*, float*)>(L"HELI_CmdScale")(move, outFracs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HELI_UpdateJitter(struct VehicleJitter* jitter) -> void
{
  return Zynamic::Forward<void (struct VehicleJitter*)>(L"HELI_UpdateJitter")(jitter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HELI_CalcAccel(struct gentity_s* ent, char* move, float* bodyAccel, float* rotAccel, float* viewangles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, char*, float*, float*, float*)>(L"HELI_CalcAccel")(ent, move, bodyAccel, rotAccel, viewangles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HELI_CancelAIMove(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"HELI_CancelAIMove")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_TestSlideMove(struct gentity_s* ent, float* outPos) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, float*)>(L"VEH_TestSlideMove")(ent, outPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HELI_SoftenCollisions(struct gentity_s* ent, float* worldAccel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"HELI_SoftenCollisions")(ent, worldAccel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CheckForPredictedCrash(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_CheckForPredictedCrash")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CheckForCrash(struct gentity_s* ent, float* newPosition) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"VEH_CheckForCrash")(ent, newPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_HandleHeliLockHeight(struct gentity_s* ent) -> char
{
  return Zynamic::Forward<char (struct gentity_s*)>(L"VEH_HandleHeliLockHeight")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateClientChopper(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateClientChopper")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_GetFakeLift(float* planeForward, float* planeUp, const struct vehicle_info_t* info) -> float
{
  return Zynamic::Forward<float (float*, float*, const struct vehicle_info_t*)>(L"Vehicle_GetFakeLift")(planeForward, planeUp, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_AdjustRollForInputDeadZone(float rollPercent, const struct vehicle_info_t* info) -> float
{
  return Zynamic::Forward<float (float, const struct vehicle_info_t*)>(L"Vehicle_AdjustRollForInputDeadZone")(rollPercent, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_AddRotate(struct vehicle_physic_t* phys, float fRoll, float fPitch, float fYaw) -> void
{
  return Zynamic::Forward<void (struct vehicle_physic_t*, float, float, float)>(L"Vehicle_AddRotate")(phys, fRoll, fPitch, fYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateClientPlane(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateClientPlane")(ent);
}

#endif // __UNIMPLEMENTED__
