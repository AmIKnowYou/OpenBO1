//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_RegisterMissileDvars() -> void
{
  return Zynamic::Forward<void ()>(L"G_RegisterMissileDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RegisterMissileDebugDvars() -> void
{
  return Zynamic::Forward<void ()>(L"G_RegisterMissileDebugDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcMissileNoDrawTime(float speed) -> int
{
  return Zynamic::Forward<int (float)>(L"CalcMissileNoDrawTime")(speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileLandAngles(struct gentity_s* ent, struct trace_t* trace, float* vAngles, int bForceAlign, int bKeepSpeed) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*, float*, int, int)>(L"MissileLandAngles")(ent, trace, vAngles, bForceAlign, bKeepSpeed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileLandAnglesFlat(struct gentity_s* ent, struct trace_t* trace, float* angles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*, float*)>(L"MissileLandAnglesFlat")(ent, trace, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileLandAnglesFlatMaintainingDirection(struct gentity_s* ent, struct trace_t* trace, float* angles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*, float*)>(L"MissileLandAnglesFlatMaintainingDirection")(ent, trace, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ForcedDud(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"ForcedDud")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckCrumpleMissile(struct gentity_s* ent, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct trace_t*)>(L"CheckCrumpleMissile")(ent, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckGrenadeDanger(struct gentity_s* grenadeEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"CheckGrenadeDanger")(grenadeEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto collide_missle_entity_filter(int entnum, struct col_context_t& context) -> int
{
  return Zynamic::Forward<int (int, struct col_context_t&)>(L"collide_missle_entity_filter")(entnum, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MissileTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask, int weapon) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int, int, int)>(L"G_MissileTrace")(results, start, end, passEntityNum, contentmask, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GrenadeBounceVelocity(const float* preBounceVelocity, float dot, const float* normal, int surfType, const struct WeaponDef* weapDef, struct trajectory_t* pos, float* rollSlideSpeed, float* rollSlideDir, bool isDud) -> bool
{
  return Zynamic::Forward<bool (const float*, float, const float*, int, const struct WeaponDef*, struct trajectory_t*, float*, float*, bool)>(L"GrenadeBounceVelocity")(preBounceVelocity, dot, normal, surfType, weapDef, pos, rollSlideSpeed, rollSlideDir, isDud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BounceMissile(struct gentity_s* ent, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct trace_t*)>(L"BounceMissile")(ent, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GrenadeDud(struct gentity_s* ent, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const struct WeaponDef*)>(L"GrenadeDud")(ent, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinProjectile(struct gentity_s* ent, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const struct WeaponDef*)>(L"JavelinProjectile")(ent, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinDud(struct gentity_s* ent, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const struct WeaponDef*)>(L"JavelinDud")(ent, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSplashMethodOfDeath(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"GetSplashMethodOfDeath")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isDud(struct gentity_s* ent, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const struct WeaponDef*)>(L"isDud")(ent, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LinkPlayerToRocket(struct gentity_s* ent, struct gentity_s* player) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"G_LinkPlayerToRocket")(ent, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UnlinkPlayerToRocket(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UnlinkPlayerToRocket")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AttachBoltGrenade(struct gentity_s* ent, struct gentity_s* hitEnt, struct trace_t* trace, enum hitLocation_t hitLocation) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct trace_t*, enum hitLocation_t)>(L"AttachBoltGrenade")(ent, hitEnt, trace, hitLocation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachedMissileOffset(int hitlocation) -> float
{
  return Zynamic::Forward<float (int)>(L"GetAttachedMissileOffset")(hitlocation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AttachMissileToEntity(struct gentity_s* missile, int entnum, int boneName, int hitLocation, float* velocity) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int, int, float*)>(L"AttachMissileToEntity")(missile, entnum, boneName, hitLocation, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StickMissile(struct gentity_s* ent, struct gentity_s* other, const struct WeaponDef* weapDef, struct trace_t* trace, enum hitLocation_t hitLocation, float* velocity) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, const struct WeaponDef*, struct trace_t*, enum hitLocation_t, float*)>(L"StickMissile")(ent, other, weapDef, trace, hitLocation, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isBounceProjectile(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"isBounceProjectile")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto createRetrieveableProjectile(struct gentity_s* ent, struct gentity_s* other, const struct WeaponDef* weapDef, struct trace_t* trace, enum hitLocation_t hitLocation, float* dir, float* endpos) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, const struct WeaponDef*, struct trace_t*, enum hitLocation_t, float*, float*)>(L"createRetrieveableProjectile")(ent, other, weapDef, trace, hitLocation, dir, endpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileImpact(struct gentity_s* ent, struct trace_t* trace, float* dir, float* endpos) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*, float*, float*)>(L"MissileImpact")(ent, trace, dir, endpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TimedObjectThink(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_TimedObjectThink")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ExplodeMissile(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_ExplodeMissile")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_PenetrateGlass(struct trace_t* results, struct gentity_s* ent, const float* start, const float* end, int damage, bool predicted) -> void
{
  return Zynamic::Forward<void (struct trace_t*, struct gentity_s*, const float*, const float*, int, bool)>(L"Missile_PenetrateGlass")(results, ent, start, end, damage, predicted);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawMissileDebug(float* start, float* end) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"DrawMissileDebug")(start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RunMissile_GetPerturbation(float destabilizationCurvatureMax) -> float
{
  return Zynamic::Forward<float (float)>(L"RunMissile_GetPerturbation")(destabilizationCurvatureMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_missile_attractors() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_missile_attractors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_InitAttractors() -> void
{
  return Zynamic::Forward<void ()>(L"Missile_InitAttractors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_FreeAttractorRefs(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Missile_FreeAttractorRefs")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_GetFreeAttractor() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Missile_GetFreeAttractor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateAttractorEnt() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_MissileCreateAttractorEnt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateAttractorOrigin() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_MissileCreateAttractorOrigin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateRepulsorEnt() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_MissileCreateRepulsorEnt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateRepulsorOrigin() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_MissileCreateRepulsorOrigin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileDeleteAttractor() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_MissileDeleteAttractor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_ApplyAttractorsRepulsors(struct gentity_s* missile) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Missile_ApplyAttractorsRepulsors")(missile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RunMissile_Destabilize(struct gentity_s* missile) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"RunMissile_Destabilize")(missile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RunMissile_CreateWaterSplash(const struct gentity_s* missile, const float* hitPos, const struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, const float*, const struct trace_t*)>(L"RunMissile_CreateWaterSplash")(missile, hitPos, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RunMissile_BroadcastActorEvents(struct gentity_s* missile) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"RunMissile_BroadcastActorEvents")(missile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsMissileLockedOn(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"IsMissileLockedOn")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTargetPosition(struct gentity_s* ent, float* result) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"GetTargetPosition")(ent, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileTVGuidedHorzSteerToTarget(struct gentity_s* ent, const float* currentRight, const float* toTargetRelative, float* steer, float accel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, float*, float)>(L"MissileTVGuidedHorzSteerToTarget")(ent, currentRight, toTargetRelative, steer, accel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileHorzSteerToTarget(struct gentity_s* ent, const float* currentRight, const float* toTargetRelative, float currentHorzSpeed, float* steer, bool tvGuided) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, float, float*, bool)>(L"MissileHorzSteerToTarget")(ent, currentRight, toTargetRelative, currentHorzSpeed, steer, tvGuided);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileVerticalSteerToTarget(struct gentity_s* ent, const float* toTargetHorzRelDir, float horzDistToTarg, float vertDistToTarg, float currentHorzSpeed, float* steer) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, float, float, float, float*)>(L"MissileVerticalSteerToTarget")(ent, toTargetHorzRelDir, horzDistToTarg, vertDistToTarg, currentHorzSpeed, steer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileVerticalSteering(struct gentity_s* ent, const float* toTargetRelative, float currentHorzSpeed, float* steer) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, float, float*)>(L"MissileVerticalSteering")(ent, toTargetRelative, currentHorzSpeed, steer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileIsReadyForSteering(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"MissileIsReadyForSteering")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbExceededAngle(struct gentity_s* ent, const float* targetPos) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const float*)>(L"JavelinClimbExceededAngle")(ent, targetPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbWithinDistance(struct gentity_s* ent, const float* targetPos) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const float*)>(L"JavelinClimbWithinDistance")(ent, targetPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbOffset(struct gentity_s* ent, float* targetPos) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"JavelinClimbOffset")(ent, targetPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinMaxDPS(struct gentity_s* ent) -> float
{
  return Zynamic::Forward<float (struct gentity_s*)>(L"JavelinMaxDPS")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VecToQuat(const float* vec, float* quat) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"VecToQuat")(vec, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinRotateDir(struct gentity_s* ent, const float* currentDir, const float* targetDir, float* resultDir) -> float
{
  return Zynamic::Forward<float (struct gentity_s*, const float*, const float*, float*)>(L"JavelinRotateDir")(ent, currentDir, targetDir, resultDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinRotateVelocity(struct gentity_s* ent, const float* currentVel, const float* targetDir, float* resultVel) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, float*)>(L"JavelinRotateVelocity")(ent, currentVel, targetDir, resultVel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbCeiling(struct gentity_s* ent) -> float
{
  return Zynamic::Forward<float (struct gentity_s*)>(L"JavelinClimbCeiling")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbIsAboveCeiling(struct gentity_s* ent, const float* targetPos) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const float*)>(L"JavelinClimbIsAboveCeiling")(ent, targetPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinClimbEnd(struct gentity_s* ent, const float* targetPos) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, const float*)>(L"JavelinClimbEnd")(ent, targetPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto JavelinSteering(struct gentity_s* ent, const struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct WeaponDef*)>(L"JavelinSteering")(ent, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileTrajectoryClientControlled(struct gentity_s* ent, float* result) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"MissileTrajectoryClientControlled")(ent, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GuidedMissileSteering(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"GuidedMissileSteering")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MissileTrajectory(struct gentity_s* ent, float* result) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"MissileTrajectory")(ent, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MakeMissilePickupItem(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_MakeMissilePickupItem")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckForMissileClientControlledDetonation(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"CheckForMissileClientControlledDetonation")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateGuidedMissileFuelTime(struct gentity_s* ent, bool initTimer) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, bool)>(L"UpdateGuidedMissileFuelTime")(ent, initTimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetGrenadeTrType(struct gentity_s* grenade) -> unsigned char
{
  return Zynamic::Forward<unsigned char (struct gentity_s*)>(L"G_GetGrenadeTrType")(grenade);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunMissileInternal(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_RunMissileInternal")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunMissile(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_RunMissile")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawMissilePredictDebug(float* start, float* end) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"DrawMissilePredictDebug")(start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PredictBounceMissile(struct gentity_s* ent, struct trajectory_t* pos, struct trace_t* trace, int time, int velocityTime, float* origin, float* endpos) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trajectory_t*, struct trace_t*, int, int, float*, float*)>(L"PredictBounceMissile")(ent, pos, trace, time, velocityTime, origin, endpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PredictMissile(struct gentity_s* ent, int duration, float* vLandPos, int allowBounce, int* timeAtRest) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int, float*, int, int*)>(L"G_PredictMissile")(ent, duration, vLandPos, allowBounce, timeAtRest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGrenadeEntity(struct gentity_s* parent, struct gentity_s* grenade) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"G_InitGrenadeEntity")(parent, grenade);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGrenadeMovement(struct gentity_s* grenade, const float* start, const float* dir, int rotate, enum WeapRotateType rotateType) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, int, enum WeapRotateType)>(L"G_InitGrenadeMovement")(grenade, start, dir, rotate, rotateType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitGrenadeTimer(const struct gentity_s* parent, struct gentity_s* grenade, const struct WeaponDef* weapDef, int time) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, struct gentity_s*, const struct WeaponDef*, int)>(L"InitGrenadeTimer")(parent, grenade, weapDef, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FireGrenade(struct gentity_s* parent, float* start, float* dir, int grenadeWPID, unsigned char grenModel, int rotate, int time) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, float*, float*, int, unsigned char, int, int)>(L"G_FireGrenade")(parent, start, dir, grenadeWPID, grenModel, rotate, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitRocketTimer(struct gentity_s* bolt, const struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct WeaponDef*)>(L"InitRocketTimer")(bolt, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FireRocket(struct gentity_s* parent, unsigned int weaponIndex, float* start, float* dir, const float* gunVel, struct gentity_s* target, const float* targetOffset) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, unsigned int, float*, float*, const float*, struct gentity_s*, const float*)>(L"G_FireRocket")(parent, weaponIndex, start, dir, gunVel, target, targetOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DropBomb(struct gentity_s* parent, unsigned int weaponIndex, float* start, float* dir, const float* gunVel, struct gentity_s* target, const float* targetOffset) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, unsigned int, float*, float*, const float*, struct gentity_s*, const float*)>(L"G_DropBomb")(parent, weaponIndex, start, dir, gunVel, target, targetOffset);
}

#endif // __UNIMPLEMENTED__
