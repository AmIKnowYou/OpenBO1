//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_vehicles''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_vehicles''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'bg_vehicleInfos''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'bg_vehicleInfos''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_phys''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_phys''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_g_scr_vehicle() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_scr_vehicle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetVehicleInfo(int index) -> const struct vehicle_info_t*
{
  return Zynamic::Forward<const struct vehicle_info_t* (int)>(L"BG_GetVehicleInfo")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DebugLine(const float* start, const float* end, float r, float g, float b) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float, float)>(L"VEH_DebugLine")(start, end, r, g, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DebugBox(float* pos, float width, float r, float g, float b) -> void
{
  return Zynamic::Forward<void (float*, float, float, float, float)>(L"VEH_DebugBox")(pos, width, r, g, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetVehicle(int entNum) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (int)>(L"VEH_GetVehicle")(entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicle(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"GScr_GetVehicle")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_IsSeatPresent(struct gentity_s* ent, int seatIdx, const struct vehicle_info_t* info) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int, const struct vehicle_info_t*)>(L"VEH_IsSeatPresent")(ent, seatIdx, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatWeaponIndex(struct gentity_s* const vehicle, const int seatIndex) -> int
{
  return Zynamic::Forward<int (struct gentity_s* const, const int)>(L"VEH_GetSeatWeaponIndex")(vehicle, seatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatFiringOriginAngles(struct gentity_s* const vehEnt, const int seatIndex, float* origin, float* angles) -> int
{
  return Zynamic::Forward<int (struct gentity_s* const, const int, float*, float*)>(L"VEH_GetSeatFiringOriginAngles")(vehEnt, seatIndex, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _GetVehicleLogObjectError(struct gentity_s* ent) -> struct scr_vehicle_s*
{
  return Zynamic::Forward<struct scr_vehicle_s* (struct gentity_s*)>(L"_GetVehicleLogObjectError")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeat(struct scr_vehicle_s* veh, int seatIdx) -> struct VehicleSeat*
{
  return Zynamic::Forward<struct VehicleSeat* (struct scr_vehicle_s*, int)>(L"VEH_GetSeat")(veh, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeat(struct gentity_s* vehEnt, int seatIdx) -> struct VehicleSeat*
{
  return Zynamic::Forward<struct VehicleSeat* (struct gentity_s*, int)>(L"VEH_GetSeat")(vehEnt, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatOccupantEntNum(struct scr_vehicle_s* veh, int seatIdx) -> int
{
  return Zynamic::Forward<int (struct scr_vehicle_s*, int)>(L"VEH_GetSeatOccupantEntNum")(veh, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatOccupantEntNum(struct gentity_s* vehEnt, int seatIdx) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"VEH_GetSeatOccupantEntNum")(vehEnt, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetSeatOccupantEntNum(struct scr_vehicle_s* veh, int seatIdx, int occEntNum) -> int
{
  return Zynamic::Forward<int (struct scr_vehicle_s*, int, int)>(L"VEH_SetSeatOccupantEntNum")(veh, seatIdx, occEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitSeat(struct scr_vehicle_s* veh, int seatIdx) -> void
{
  return Zynamic::Forward<void (struct scr_vehicle_s*, int)>(L"VEH_InitSeat")(veh, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatOccupantEntity(struct scr_vehicle_s* veh, int seatIdx) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_vehicle_s*, int)>(L"VEH_GetSeatOccupantEntity")(veh, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetSeatOccupantEntity(struct gentity_s* vehEnt, int seatIdx) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int)>(L"VEH_GetSeatOccupantEntity")(vehEnt, seatIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LoadVehicle(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_LoadVehicle")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetVehicleInfoFromName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"VEH_GetVehicleInfoFromName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetCollMap(const char* modelname) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const char*)>(L"VEH_GetCollMap")(modelname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetWheelOrigin(struct gentity_s* ent, int idx, float* origin, float* quat) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, float*, float*)>(L"VEH_GetWheelOrigin")(ent, idx, origin, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ResetWheels(struct gentity_s* ent, struct vehicle_physic_t* phys) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct vehicle_physic_t*)>(L"VEH_ResetWheels")(ent, phys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetPosition(struct gentity_s* ent, const float* origin, const float* vel, const float* angles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, const float*)>(L"VEH_SetPosition")(ent, origin, vel, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DObjHasRequiredTags(struct gentity_s* ent, int infoIdx) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, int)>(L"VEH_DObjHasRequiredTags")(ent, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitModelAndValidateTags(struct gentity_s* ent, int* infoIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int*)>(L"VEH_InitModelAndValidateTags")(ent, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitEntity(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct scr_vehicle_s*, int)>(L"VEH_InitEntity")(ent, veh, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitFromInfo(struct scr_vehicle_s* veh, const struct vehicle_info_t* info) -> void
{
  return Zynamic::Forward<void (struct scr_vehicle_s*, const struct vehicle_info_t*)>(L"VEH_InitFromInfo")(veh, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitPhysics(struct gentity_s* ent, int infoIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"VEH_InitPhysics")(ent, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_InitVehicle(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct scr_vehicle_s*, int)>(L"VEH_InitVehicle")(ent, veh, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetupCollmap(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_SetupCollmap")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_JoltBody(struct gentity_s* ent, const float* dir, float intensity, float speedFrac, float decel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, float, float, float)>(L"VEH_JoltBody")(ent, dir, intensity, speedFrac, decel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CalcAccel(struct gentity_s* ent, char* move, float* bodyAccel, float* rotAccel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, char*, float*, float*)>(L"VEH_CalcAccel")(ent, move, bodyAccel, rotAccel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ClipVelocity(float* in, float* normal, float* out) -> void
{
  return Zynamic::Forward<void (float*, float*, float*)>(L"VEH_ClipVelocity")(in, normal, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CorrectAllSolid(struct gentity_s* ent, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct trace_t*)>(L"VEH_CorrectAllSolid")(ent, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ClearGround(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_ClearGround")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GroundTrace(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_GroundTrace")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_MoveTrace(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_MoveTrace")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SlideMove(struct gentity_s* ent, int gravity) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"VEH_SlideMove")(ent, gravity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_StepSlideMove(struct gentity_s* ent, int gravity) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"VEH_StepSlideMove")(ent, gravity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GroundMove(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_GroundMove")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_AirMove(struct gentity_s* ent, int gravity) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"VEH_AirMove")(ent, gravity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GroundPlant(struct gentity_s* ent, struct vehicle_physic_t* phys, int gravity) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct vehicle_physic_t*, int)>(L"VEH_GroundPlant")(ent, phys, gravity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_BackupPosition(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_BackupPosition")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AttachedStickyMissile(struct gentity_s* vehicle, struct gentity_s* missile) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct gentity_s*)>(L"AttachedStickyMissile")(vehicle, missile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PushAttachedStickyMissile(struct gentity_s* vehicle, struct gentity_s* missile, float* deltaOrigin, float* deltaAngles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, float*, float*)>(L"PushAttachedStickyMissile")(vehicle, missile, deltaOrigin, deltaAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetBoundingBoxFromCollmap(struct gentity_s* vehicle, float* bbMins, float* bbMaxs) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*, float*)>(L"VEH_GetBoundingBoxFromCollmap")(vehicle, bbMins, bbMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ClampPointToBoundingBox(struct gentity_s* vehicle, const float* point, float* out) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const float*, float*)>(L"VEH_ClampPointToBoundingBox")(vehicle, point, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_PushEntity(struct gentity_s* ent, struct gentity_s* target, float* pushDir, float* deltaOrigin, float* deltaAngles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, float*, float*, float*)>(L"VEH_PushEntity")(ent, target, pushDir, deltaOrigin, deltaAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_TouchEntities(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_TouchEntities")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DebugAim(struct gentity_s* ent, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, int)>(L"VEH_DebugAim")(ent, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateAim(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateAim")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateGunnerAim(struct gentity_s* ent, int gunnerIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"VEH_UpdateGunnerAim")(ent, gunnerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateGunnerAimAll(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateGunnerAimAll")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_FireGunnerWeapon(struct gentity_s* ent, int gunnerIndex, struct gentity_s* attacker) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, struct gentity_s*)>(L"VEH_FireGunnerWeapon")(ent, gunnerIndex, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateGunnerWeapon(struct gentity_s* ent, int gunnerIndex, int msec) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int)>(L"VEH_UpdateGunnerWeapon")(ent, gunnerIndex, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateGunnerWeaponsAll(struct gentity_s* ent, int msec) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"VEH_UpdateGunnerWeaponsAll")(ent, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_AccelerateSpeed(float speed, float tgtSpeed, float accel, float dt) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"VEH_AccelerateSpeed")(speed, tgtSpeed, accel, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateBody(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateBody")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateSteering(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateSteering")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateDriverActions(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateDriverActions")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateDriverWeapons(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateDriverWeapons")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ShouldEjectOccupants(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"VEH_ShouldEjectOccupants")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateClient(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateClient")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClosestPointOnSegment(float* pt1, float* pt2, float* testPt, float* out) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*)>(L"GetClosestPointOnSegment")(pt1, pt2, testPt, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateAvoidance(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateAvoidance")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdatePath(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdatePath")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_IsHovering(struct scr_vehicle_s* veh) -> bool
{
  return Zynamic::Forward<bool (struct scr_vehicle_s*)>(L"VEH_IsHovering")(veh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateAngleAndAngularVel(int index, float desiredAngle, float accel, float decel, float overShoot, struct vehicle_physic_t* phys) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, struct vehicle_physic_t*)>(L"VEH_UpdateAngleAndAngularVel")(index, desiredAngle, accel, decel, overShoot, phys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetHoverGoal(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_SetHoverGoal")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMove_GetDesiredYaw(struct scr_vehicle_s* veh, float* desiredDir) -> float
{
  return Zynamic::Forward<float (struct scr_vehicle_s*, float*)>(L"VEH_UpdateMove_GetDesiredYaw")(veh, desiredDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CalcAccelFraction(float accel, int infoIdx) -> float
{
  return Zynamic::Forward<float (float, int)>(L"VEH_CalcAccelFraction")(accel, infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CalcAngleForAccel(float accelFraction) -> float
{
  return Zynamic::Forward<float (float)>(L"VEH_CalcAngleForAccel")(accelFraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CalcStoppingTime(float accel, float accelFraction) -> float
{
  return Zynamic::Forward<float (float, float)>(L"VEH_CalcStoppingTime")(accel, accelFraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateYawAndNotify(struct gentity_s* ent, float desiredYaw) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"VEH_UpdateYawAndNotify")(ent, desiredYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetAccelForAngles(struct scr_vehicle_s* veh) -> float
{
  return Zynamic::Forward<float (struct scr_vehicle_s*)>(L"VEH_GetAccelForAngles")(veh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_AddFakeDrag(const float* velocity, float maxDragSpeed, float* accelVec) -> void
{
  return Zynamic::Forward<void (const float*, float, float*)>(L"VEH_AddFakeDrag")(velocity, maxDragSpeed, accelVec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateVelocityWithRotation(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateVelocityWithRotation")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMoveOrientation(struct gentity_s* ent, float* desiredDir) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"VEH_UpdateMoveOrientation")(ent, desiredDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CheckHorizontalVelocityToGoal(struct scr_vehicle_s* veh, const float* vecToGoal, float accelMax, float* accelVec) -> void
{
  return Zynamic::Forward<void (struct scr_vehicle_s*, const float*, float, float*)>(L"VEH_CheckHorizontalVelocityToGoal")(veh, vecToGoal, accelMax, accelVec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CheckVerticalVelocityToGoal(struct scr_vehicle_s* veh, float verticalDist, float* accelVec) -> void
{
  return Zynamic::Forward<void (struct scr_vehicle_s*, float, float*)>(L"VEH_CheckVerticalVelocityToGoal")(veh, verticalDist, accelVec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CancelAIMove(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_CancelAIMove")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMove_CheckGoalReached(struct gentity_s* ent, float distToGoal) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, float)>(L"VEH_UpdateMove_CheckGoalReached")(ent, distToGoal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMove_CheckStop(struct scr_vehicle_s* veh, float distToGoal) -> float
{
  return Zynamic::Forward<float (struct scr_vehicle_s*, float)>(L"VEH_UpdateMove_CheckStop")(veh, distToGoal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMove_CheckNearGoal(struct gentity_s* ent, float distToGoal) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"VEH_UpdateMove_CheckNearGoal")(ent, distToGoal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetNewSpeedAndAccel(struct scr_vehicle_s* veh, float dt, int hovering, float speedScale, float* newSpeed, float* accelMax) -> void
{
  return Zynamic::Forward<void (struct scr_vehicle_s*, float, int, float, float*, float*)>(L"VEH_GetNewSpeedAndAccel")(veh, dt, hovering, speedScale, newSpeed, accelMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateYawAngularVel(struct gentity_s* ent, float desiredYaw) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"VEH_UpdateYawAngularVel")(ent, desiredYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CheckIfGoalYawChanged(struct gentity_s* ent, float desiredYaw) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, float)>(L"VEH_CheckIfGoalYawChanged")(ent, desiredYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMoveToGoal(struct gentity_s* ent, const float* goalPos) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*)>(L"VEH_UpdateMoveToGoal")(ent, goalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateHover(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateHover")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DebugPlaneOnCurve(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_DebugPlaneOnCurve")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GenerateCurveForPlane(struct gentity_s* ent, float* goals[0x3], int numGoals, const float* goalAngles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*[0x3], int, const float*)>(L"VEH_GenerateCurveForPlane")(ent, goals, numGoals, goalAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdatePlaneRoll(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdatePlaneRoll")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdatePlaneOnCurve(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdatePlaneOnCurve")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdatePlaneFree(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdatePlaneFree")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateAIMove(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateAIMove")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateChopperPathDrive(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateChopperPathDrive")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetLinkAngleClamps(const struct vehicle_info_t* info, struct gentity_s* player, int seatIndex, float* playerAngles, float* vehicleAngles) -> void
{
  return Zynamic::Forward<void (const struct vehicle_info_t*, struct gentity_s*, int, float*, float*)>(L"VEH_SetLinkAngleClamps")(info, player, seatIndex, playerAngles, vehicleAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetPlayerVehicle(struct gentity_s* ent, bool enable) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, bool)>(L"VEH_SetPlayerVehicle")(ent, enable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_LinkPlayer(struct gentity_s* ent, struct gentity_s* player, int seatIndex, bool changingSeats) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, bool)>(L"VEH_LinkPlayer")(ent, player, seatIndex, changingSeats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_DamageScale(struct gentity_s* pSelf, struct gentity_s* pAttacker, struct gentity_s* pInflictor, const float* point, int mod, int weapon, int* damageFromUnderneath) -> float
{
  return Zynamic::Forward<float (struct gentity_s*, struct gentity_s*, struct gentity_s*, const float*, int, int, int*)>(L"Scr_Vehicle_DamageScale")(pSelf, pAttacker, pInflictor, point, mod, weapon, damageFromUnderneath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ExitPosOkay(struct gentity_s* vehEnt, struct gentity_s* player, int exitIndex, float* origin) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct gentity_s*, int, float*)>(L"VEH_ExitPosOkay")(vehEnt, player, exitIndex, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UnlinkPlayer(struct gentity_s* player, bool changingSeats, char* error_msg) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, bool, char*)>(L"VEH_UnlinkPlayer")(player, changingSeats, error_msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehicleFinishedAnimating(struct gentity_s* player, enum pmoveVehAnimState_t vehAnimState) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, enum pmoveVehAnimState_t)>(L"G_VehicleFinishedAnimating")(player, vehAnimState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SwitchClientToSeat(struct gentity_s* ent, struct gentity_s* player, int seatIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"VEH_SwitchClientToSeat")(ent, player, seatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetNextSeat(const struct vehicle_info_t* info, int currentSeat) -> int
{
  return Zynamic::Forward<int (const struct vehicle_info_t*, int)>(L"VEH_GetNextSeat")(info, currentSeat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_NextAvailableSeat(struct gentity_s* player) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"VEH_NextAvailableSeat")(player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SwitchClientToNextSeat(struct gentity_s* ent, struct gentity_s* player) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"VEH_SwitchClientToNextSeat")(ent, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseScrVehicleInfo() -> void
{
  return Zynamic::Forward<void ()>(L"G_ParseScrVehicleInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_RinitVehiclesUsingInfo(int infoIdx) -> void
{
  return Zynamic::Forward<void (int)>(L"VEH_RinitVehiclesUsingInfo")(infoIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehicleUpdateField(const char* vehicleInfoName, const char* keyValue) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"G_VehicleUpdateField")(vehicleInfoName, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ReloadScrVehicleInfo() -> void
{
  return Zynamic::Forward<void ()>(L"G_ReloadScrVehicleInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitScrVehicles() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitScrVehicles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupScrVehicles() -> void
{
  return Zynamic::Forward<void ()>(L"G_SetupScrVehicles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeScrVehicles() -> void
{
  return Zynamic::Forward<void ()>(L"G_FreeScrVehicles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnVehicle(struct gentity_s* ent, const char* typeName, int load) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*, int)>(L"G_SpawnVehicle")(ent, typeName, load);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeVehicle(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeVehicle")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_HideVehicle(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_HideVehicle")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MakeVehicleUsable(struct gentity_s* ent, bool usable) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, bool)>(L"G_MakeVehicleUsable")(ent, usable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateVehicleTags(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UpdateVehicleTags")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleRemoteControl(int index) -> bool
{
  return Zynamic::Forward<bool (int)>(L"G_IsVehicleRemoteControl")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheVehicle() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheVehicle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicleTreadFXArray() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetVehicleTreadFXArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleOccupied(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"G_IsVehicleOccupied")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetVehicleOccupantsTeam(struct gentity_s* vehEnt) -> enum team_t
{
  return Zynamic::Forward<enum team_t (struct gentity_s*)>(L"G_GetVehicleOccupantsTeam")(vehEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleSeatOccupied(struct gentity_s* ent, int seatIndex) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"G_IsVehicleSeatOccupied")(ent, seatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetVehicleSeatPlayerOccupies(struct gentity_s* ent, struct gentity_s* player) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"G_GetVehicleSeatPlayerOccupies")(ent, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetVehicleSeatToEnter(struct gentity_s* ent, struct gentity_s* player, bool scriptUse, int* entryPoint) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, bool, int*)>(L"G_GetVehicleSeatToEnter")(ent, player, scriptUse, entryPoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntryPointForSeat(struct gentity_s* ent, int seat) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"G_GetEntryPointForSeat")(ent, seat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerVehicleMantlePoint(struct gentity_s* ent, struct gentity_s* player) -> enum VehicleMantlePoints
{
  return Zynamic::Forward<enum VehicleMantlePoints (struct gentity_s*, struct gentity_s*)>(L"G_GetPlayerVehicleMantlePoint")(ent, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleUsable(struct gentity_s* ent, struct gentity_s* player) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"G_IsVehicleUsable")(ent, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleImmune(struct gentity_s* ent, int mod, int damageFlags, int weapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int, int, int)>(L"G_IsVehicleImmune")(ent, mod, damageFlags, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsPlayerDrivingVehicle(const struct gentity_s* player) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*)>(L"G_IsPlayerDrivingVehicle")(player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_Teleport(struct gentity_s* pSelf, float* origin, float* angles, float* vel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*, float*, float*)>(L"VEH_Teleport")(pSelf, origin, angles, vel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateNOClip(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateNOClip")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateDebug(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateDebug")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Controller(const struct gentity_s* pSelf, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int*)>(L"Scr_Vehicle_Controller")(pSelf, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Init(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_Vehicle_Init")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPieceHealth(struct Destructible* dest, unsigned short destructibleLabelString, int& pieceHealth) -> bool
{
  return Zynamic::Forward<bool (struct Destructible*, unsigned short, int&)>(L"GetPieceHealth")(dest, destructibleLabelString, pieceHealth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPieceHealthPercentage(struct Destructible* dest, unsigned short destructibleLabelString, float defaultPercentage) -> float
{
  return Zynamic::Forward<float (struct Destructible*, unsigned short, float)>(L"GetPieceHealthPercentage")(dest, destructibleLabelString, defaultPercentage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayersSeatGunTurning(struct gentity_s* const pVehEnt, int seatIndex, int angle) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s* const, int, int)>(L"PlayersSeatGunTurning")(pVehEnt, seatIndex, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateHealth(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateHealth")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateNitrousPosition(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"VEH_UpdateNitrousPosition")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Think(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_Vehicle_Think")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Pain(struct gentity_s* pSelf, struct gentity_s* pAttacker, int damage, const float* point, const int mod, const float* dir, const enum hitLocation_t hitLoc, const int weaponIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t, const int)>(L"Scr_Vehicle_Pain")(pSelf, pAttacker, damage, point, mod, dir, hitLoc, weaponIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Touch(struct gentity_s* pSelf, struct gentity_s* pOther, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Scr_Vehicle_Touch")(pSelf, pOther, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetVehicleTypeString(int clientNum, int entityNum) -> unsigned short
{
  return Zynamic::Forward<unsigned short (int, int)>(L"G_GetVehicleTypeString")(clientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Use(struct gentity_s* pEnt, struct gentity_s* pOther, struct gentity_s* pActivator) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*)>(L"Scr_Vehicle_Use")(pEnt, pOther, pActivator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Vehicle_Die(struct gentity_s* pSelf, struct gentity_s* pInflictor, struct gentity_s* pAttacker, const int damage, const int mod, const int weapon, const float* dir, const enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const int, const int, const int, const float*, const enum hitLocation_t, int)>(L"Scr_Vehicle_Die")(pSelf, pInflictor, pAttacker, damage, mod, weapon, dir, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_script_vehicle(struct gentity_s* pSelf, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_script_vehicle")(pSelf, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_script_vehicle_collmap(struct gentity_s* pSelf, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_script_vehicle_collmap")(pSelf, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptVehicle_GetMethod(const char** pName) -> function*
{
  return Zynamic::Forward<function * (const char**)>(L"ScriptVehicle_GetMethod")(pName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_AttachPath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_AttachPath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetModel(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetModel")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetAttachPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetAttachPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_StartPath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_StartPath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_DrivePath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_DrivePath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetDrivePathPhysicsScale(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetDrivePathPhysicsScale")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetSwitchNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetSwitchNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetWaitNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetWaitNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetWaitSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetWaitSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_Script_SetSpeed(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"CMD_VEH_Script_SetSpeed")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetSpeedImmediate(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetSpeedImmediate")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSpeedMPH(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSpeedMPH")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetGoalSpeedMPH(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetGoalSpeedMPH")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetBrake(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetBrake")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetAcceleration(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetAcceleration")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetDeceleration(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetDeceleration")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ResumeSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ResumeSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetYawSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetYawSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetMaxPitchRoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetMaxPitchRoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetAirResitance(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetAirResitance")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSteerFactor(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSteerFactor")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetThrottle(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetThrottle")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetTurningAbility(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetTurningAbility")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetJitterParams(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetJitterParams")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetHoverParams(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetHoverParams")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_JoltBody(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_JoltBody")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_FreeVehicle(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_FreeVehicle")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetWheelSurface(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetWheelSurface")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetVehicleOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetVehicleOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_IsVehicleUsable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_IsVehicleUsable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_MakeVehicleUsable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_MakeVehicleUsable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_MakeVehicleUnusable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_MakeVehicleUnusable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_UseVehicle(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_UseVehicle")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetViewClamp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetViewClamp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ResetViewClamp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ResetViewClamp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetVehicleLookatText(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetVehicleLookatText")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_NearGoalNotifyDist(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_NearGoalNotifyDist")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetGoalPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetGoalPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearGoalPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearGoalPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetPlaneGoalPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetPlaneGoalPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetPlaneBarrelRoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetPlaneBarrelRoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetGoalYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetGoalYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearGoalYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearGoalYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetTargetYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetTargetYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearTargetYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearTargetYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetDefaultPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetDefaultPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearDefaultPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearDefaultPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetAngularVelocity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetAngularVelocity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetAngularVelocity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetAngularVelocity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetVehVelocity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetVehVelocity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetTurretTargetVec(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetTurretTargetVec")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetTurretTargetEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetTurretTargetEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearTurretTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearTurretTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetGunnerTargetVec(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetGunnerTargetVec")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetGunnerTargetVec(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetGunnerTargetVec")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetGunnerTargetEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetGunnerTargetEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearGunnerTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearGunnerTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetGunnerTurretOnTargetRange(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetGunnerTurretOnTargetRange")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetGunnerTargetEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetGunnerTargetEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetGunnerAnimPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetGunnerAnimPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetGunnerAnimYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetGunnerAnimYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetLookAtEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetLookAtEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ClearLookAtEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ClearLookAtEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ReturnPlayerControl(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ReturnPlayerControl")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetWeapon(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetWeapon")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetTagBoneIndex(struct gentity_s* ent, int barrel) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"VEH_GetTagBoneIndex")(ent, barrel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_FireWeapon(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_FireWeapon")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_FireGunnerWeapon(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_FireGunnerWeapon")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_StopFireWeapon(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_StopFireWeapon")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_IsTurretReady(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_IsTurretReady")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_ForceMaterialSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_ForceMaterialSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetMaxSpeed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetMaxSpeed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetOccupants(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetOccupants")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSeatOccupant(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSeatOccupant")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetOccupantSeat(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetOccupantSeat")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SetSeatOccupied(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SetSeatOccupied")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_SeatGetWeapon(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_SeatGetWeapon")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSeatFiringOrigin(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSeatFiringOrigin")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetSeatFiringAngles(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetSeatFiringAngles")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_IsGunnerFiring(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_IsGunnerFiring")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_DisableGunnerFiring(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_DisableGunnerFiring")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetTreadHealth(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetTreadHealth")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_finishVehicleDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_finishVehicleDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_finishVehicleRadiusDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_finishVehicleRadiusDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_IsVehicleImmuneToDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_IsVehicleImmuneToDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_IsBoosting(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_IsBoosting")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_VEH_GetBoost(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_VEH_GetBoost")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehSetClientSideTime2Val(struct gentity_s* const ent, const int val, const int mask, const int shift) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const int, const int, const int)>(L"VehSetClientSideTime2Val")(ent, val, mask, shift);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehSetClientSideHealth(struct gentity_s* const ent, float percentage, const int mask, const int shift) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, float, const int, const int)>(L"VehSetClientSideHealth")(ent, percentage, mask, shift);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehSetClientSideGunTurnRate(struct gentity_s* const ent, float percentage, const int mask, const int shift) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, float, const int, const int)>(L"VehSetClientSideGunTurnRate")(ent, percentage, mask, shift);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideHealthPercentageEntity(struct gentity_s* const ent, const float percentage) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const float)>(L"G_VehSetClientSideHealthPercentageEntity")(ent, percentage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideHealthPercentageLeftTread(struct gentity_s* const ent, const float percentage) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const float)>(L"G_VehSetClientSideHealthPercentageLeftTread")(ent, percentage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideHealthPercentageRightTread(struct gentity_s* const ent, const float percentage) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const float)>(L"G_VehSetClientSideHealthPercentageRightTread")(ent, percentage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideSeatOccupancyFlags(struct gentity_s* const ent, const int occupancy_flags) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const int)>(L"G_VehSetClientSideSeatOccupancyFlags")(ent, occupancy_flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideGunTurningYaw(struct gentity_s* const ent, const int seatIndex, const bool turning) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const int, const bool)>(L"G_VehSetClientSideGunTurningYaw")(ent, seatIndex, turning);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideGunTurningPitch(struct gentity_s* const ent, const int seatIndex, const bool turning) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const int, const bool)>(L"G_VehSetClientSideGunTurningPitch")(ent, seatIndex, turning);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetClientSideGunOverheating(struct gentity_s* const ent, const int seatIndex, const bool overheating) -> void
{
  return Zynamic::Forward<void (struct gentity_s* const, const int, const bool)>(L"G_VehSetClientSideGunOverheating")(ent, seatIndex, overheating);
}

#endif // __UNIMPLEMENTED__
