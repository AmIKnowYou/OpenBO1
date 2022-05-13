//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Turret_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Turret_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitTurrets() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitTurrets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_GetRemainingConvergenceTime(const struct TurretInfo* turretInfo, int type) -> int
{
  return Zynamic::Forward<int (const struct TurretInfo*, int)>(L"Turret_GetRemainingConvergenceTime")(turretInfo, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_FillWeaponParms(const struct gentity_s* ent, const struct gentity_s* activator, unsigned int weapon, struct weaponParms* wp) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, const struct gentity_s*, unsigned int, struct weaponParms*)>(L"Turret_FillWeaponParms")(ent, activator, weapon, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Fire_Lead(struct gentity_s* ent, struct gentity_s* activator, int bUseAccuracy) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Fire_Lead")(ent, activator, bUseAccuracy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerTurretPositionAndBlend(struct gentity_s* ent, struct gentity_s* pTurretEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"G_PlayerTurretPositionAndBlend")(ent, pTurretEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_clientaim(struct gentity_s* self, struct gentity_s* other) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"turret_clientaim")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_shoot_internal(struct gentity_s* self, struct gentity_s* other) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"turret_shoot_internal")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_is_overheating(struct gentity_s* self) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"turret_is_overheating")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_track(struct gentity_s* self, struct gentity_s* other) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"turret_track")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_UpdateSound(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_UpdateSound")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClientStopUsingTurret(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_ClientStopUsingTurret")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_CalculateConvergenceAngularVelocity(const struct gentity_s* self, const float* desiredAngles, float* angularVelocity) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, const float*, float*)>(L"turret_CalculateConvergenceAngularVelocity")(self, desiredAngles, angularVelocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_think_client(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_think_client")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_ScanStart(struct gentity_s* self, const struct WeaponDef* weapDef, float deltaYaw) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct WeaponDef*, float)>(L"Turret_ScanStart")(self, weapDef, deltaYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_ScanStop(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Turret_ScanStop")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_ScanForEnemies(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Turret_ScanForEnemies")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_UpdateTargetAngles(struct gentity_s* self, const float* desiredAngles, int bManned) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, const float*, int)>(L"turret_UpdateTargetAngles")(self, desiredAngles, bManned);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_IsFiringInternal(int state) -> int
{
  return Zynamic::Forward<int (int)>(L"turret_IsFiringInternal")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_IsFiring(struct gentity_s* self) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"turret_IsFiring")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_SetState(struct gentity_s* self, int state) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"turret_SetState")(self, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_ClearTargetEnt(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_ClearTargetEnt")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_ReturnToDefaultPos(struct gentity_s* self, int bManned) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"turret_ReturnToDefaultPos")(self, bManned);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_SetDefaultDropPitch(struct gentity_s* self, float pitch) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"turret_SetDefaultDropPitch")(self, pitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_SetScanningPitch(struct gentity_s* self, float pitch) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"turret_SetScanningPitch")(self, pitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_shoot(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_shoot")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_CanTargetPoint(const struct gentity_s* self, const float* vPoint, float* vSource, float* localAngles) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, const float*, float*, float*)>(L"turret_CanTargetPoint")(self, vPoint, vSource, localAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PredictPosition(const struct gentity_s* ent, const struct playerState_s* ps, float* vPos) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, const struct playerState_s*, float*)>(L"Turret_PredictPosition")(ent, ps, vPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_CanTargetSentient(const struct gentity_s* self, const struct sentient_s* sentient, float* targetPosition, float* muzzlePosition, float* localAngles) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, const struct sentient_s*, float*, float*, float*)>(L"turret_CanTargetSentient")(self, sentient, targetPosition, muzzlePosition, localAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_aimat_vector_internal(struct gentity_s* self, const float* origin, int bShoot, const float* desiredAngles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, int, const float*)>(L"turret_aimat_vector_internal")(self, origin, bShoot, desiredAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_aimat_vector(struct gentity_s* self, float* origin, int bShoot, float* desiredAngles) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, float*, int, float*)>(L"turret_aimat_vector")(self, origin, bShoot, desiredAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_SetTargetEnt(struct gentity_s* self, struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"turret_SetTargetEnt")(self, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_aimat_Sentient_Internal(struct gentity_s* self, struct sentient_s* enemy, int bShoot, int missTime, float* desiredAngles) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct sentient_s*, int, int, float*)>(L"turret_aimat_Sentient_Internal")(self, enemy, bShoot, missTime, desiredAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_aimat_Sentient(struct gentity_s* self, struct sentient_s* enemy, int bShoot, int missTime) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct sentient_s*, int, int)>(L"turret_aimat_Sentient")(self, enemy, bShoot, missTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_aimat_Ent(struct gentity_s* self, struct gentity_s* ent, int bShoot) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int)>(L"turret_aimat_Ent")(self, ent, bShoot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_SightTrace(const float* start, const float* end, int passEnt1, int passEnt2, struct gentity_s* turret) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int, int, struct gentity_s*)>(L"turret_SightTrace")(start, end, passEnt1, passEnt2, turret);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_isTargetVisible(struct gentity_s* self, const struct gentity_s* target, float* distSqr) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, const struct gentity_s*, float*)>(L"turret_isTargetVisible")(self, target, distSqr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_findBestKillstreakTarget(struct gentity_s* self) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*)>(L"turret_findBestKillstreakTarget")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_findBestTarget(struct gentity_s* self) -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* (struct gentity_s*)>(L"turret_findBestTarget")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_target_sentient(struct gentity_s* self, struct TurretInfo* turretInfo) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct TurretInfo*)>(L"turret_target_sentient")(self, turretInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_target_killstreak(struct gentity_s* self, struct TurretInfo* turretInfo) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct TurretInfo*)>(L"turret_target_killstreak")(self, turretInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_think_auto_nonai(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_think_auto_nonai")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_think_init(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_think_init")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_RestoreDefaultDropPitch(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_RestoreDefaultDropPitch")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_think(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"turret_think")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_controller(const struct gentity_s* self, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int*)>(L"turret_controller")(self, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_behind(struct gentity_s* self, struct gentity_s* other) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"turret_behind")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeTurret(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeTurret")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsTurretUsable(struct gentity_s* self, struct gentity_s* owner) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"G_IsTurretUsable")(self, owner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DeactivateTurret(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_DeactivateTurret")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_find_max_angles(struct gentity_s* pOwner, struct gentity_s* pTurret) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"turret_find_max_angles")(pOwner, pTurret);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto turret_use(struct gentity_s* self, struct gentity_s* owner, struct gentity_s* activator) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*)>(L"turret_use")(self, owner, activator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnTurret(struct gentity_s* self, const char* weaponinfoname, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*, struct SpawnVar*)>(L"G_SpawnTurret")(self, weaponinfoname, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_turret(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_turret")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetTurretCarried(struct gentity_s* self, int carried) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Turret_SetTurretCarried")(self, carried);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetTurretOwner(struct gentity_s* self, struct gentity_s* owner) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"Turret_SetTurretOwner")(self, owner);
}

#endif // __UNIMPLEMENTED__
