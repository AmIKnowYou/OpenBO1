//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_ParsePenetrationDepthTable(const char* penetrateType, float* depthTable, const char* buffer) -> void
{
  return Zynamic::Forward<void (const char*, float*, const char*)>(L"BG_ParsePenetrationDepthTable")(penetrateType, depthTable, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadPenetrationDepthTable() -> void
{
  return Zynamic::Forward<void ()>(L"BG_LoadPenetrationDepthTable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AdvanceTrace(struct BulletFireParams* bp, struct BulletTraceResults* br, float dist) -> bool
{
  return Zynamic::Forward<bool (struct BulletFireParams*, struct BulletTraceResults*, float)>(L"BG_AdvanceTrace")(bp, br, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetSurfacePenetrationDepth(const struct WeaponDef* weapDef, int surfaceType) -> float
{
  return Zynamic::Forward<float (const struct WeaponDef*, int)>(L"BG_GetSurfacePenetrationDepth")(weapDef, surfaceType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_StartWeaponAnim(struct playerState_s* ps, int anim, int leftAnim) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, int)>(L"PM_StartWeaponAnim")(ps, anim, leftAnim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ContinueWeaponAnim(struct playerState_s* ps, int anim, int leftAnim) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, int)>(L"PM_ContinueWeaponAnim")(ps, anim, leftAnim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetImpactTypeName(int impactTypeIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_GetImpactTypeName")(impactTypeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetViewmodelWeaponIndex(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_GetViewmodelWeaponIndex")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFirstAvailableOffhand(const struct playerState_s* ps, int offhandSlot) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"BG_GetFirstAvailableOffhand")(ps, offhandSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFirstEquippedOffhand(const struct playerState_s* ps, int offhandSlot) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"BG_GetFirstEquippedOffhand")(ps, offhandSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponState(struct playerState_s* ps, bool leftGun) -> int*
{
  return Zynamic::Forward<int* (struct playerState_s*, bool)>(L"BG_GetWeaponState")(ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponTime(struct playerState_s* ps, bool leftGun) -> int*
{
  return Zynamic::Forward<int* (struct playerState_s*, bool)>(L"BG_GetWeaponTime")(ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponDelay(struct playerState_s* ps, bool leftGun) -> int*
{
  return Zynamic::Forward<int* (struct playerState_s*, bool)>(L"BG_GetWeaponDelay")(ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponShotCount(struct playerState_s* ps, bool leftGun) -> unsigned int*
{
  return Zynamic::Forward<unsigned int* (struct playerState_s*, bool)>(L"BG_GetWeaponShotCount")(ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAimDownSightWeapon(unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"BG_IsAimDownSightWeapon")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanPlayerHaveWeapon(unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_CanPlayerHaveWeapon")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ValidateWeaponNumber(unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_ValidateWeaponNumber")(weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsWeaponValid(const struct playerState_s* ps, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, unsigned int)>(L"BG_IsWeaponValid")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBlocksProne(unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_WeaponBlocksProne")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsOverheatingWeapon(unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_IsOverheatingWeapon")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsBayonetWeapon(unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_IsBayonetWeapon")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsUseAsMeleeWeapon(unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"BG_IsUseAsMeleeWeapon")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_TakeHeldWeapon(struct playerState_s* ps, unsigned int weaponIndex) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int)>(L"BG_TakeHeldWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_TakePlayerWeapon(struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, unsigned int)>(L"BG_TakePlayerWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetSpreadForWeapon(const struct playerState_s* ps, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, const struct WeaponDef*, float*, float*)>(L"BG_GetSpreadForWeapon")(ps, weapDef, minSpread, maxSpread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsAdsAllowed(struct pmove_t* pm, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*)>(L"PM_IsAdsAllowed")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateAimDownSightFlag(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdateAimDownSightFlag")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ExitAimDownSight(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_ExitAimDownSight")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateScopeZoom(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdateScopeZoom")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateSpinLerp(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdateSpinLerp")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateAimDownSightLerp(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdateAimDownSightLerp")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_StartHoldBreath(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_StartHoldBreath")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_EndHoldBreath(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_EndHoldBreath")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_HoldBreathFire(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_HoldBreathFire")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateHoldBreath(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdateHoldBreath")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UsingVehicleWeapon(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_UsingVehicleWeapon")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ADSFullyUp(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_ADSFullyUp")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UsingSniperScope(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_UsingSniperScope")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_InteruptWeaponWithProneMove(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"PM_InteruptWeaponWithProneMove")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponOverheating(const struct playerState_s* ps, int weapon) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, int)>(L"BG_PlayerWeaponOverheating")(ps, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponOverheatUpdate(struct playerState_s* ps, int weapon, float amount) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int, float)>(L"BG_PlayerWeaponOverheatUpdate")(ps, weapon, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsWeaponMinFireTimeElapsed(struct playerState_s* ps, bool leftGun) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, bool)>(L"PM_IsWeaponMinFireTimeElapsed")(ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishRechamber(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_FinishRechamber")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForRechamber(struct playerState_s* ps, int delayedAction) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, int)>(L"PM_Weapon_CheckForRechamber")(ps, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetWeaponIndexForHand(struct playerState_s* ps) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct playerState_s*)>(L"PM_GetWeaponIndexForHand")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetWeaponReloadAddAmmoDelay(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_SetWeaponReloadAddAmmoDelay")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetReloadingState(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_SetReloadingState")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayDWThirdPersonReload(struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*)>(L"BG_PlayDWThirdPersonReload")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_BeginWeaponReload(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_BeginWeaponReload")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAltSwitch(struct playerState_s* ps, unsigned int lastWeapon, unsigned int weapon) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, unsigned int, unsigned int)>(L"BG_IsAltSwitch")(ps, lastWeapon, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanFastSwitch(const struct WeaponDef* weapDef, int weaponState) -> bool
{
  return Zynamic::Forward<bool (const struct WeaponDef*, int)>(L"BG_CanFastSwitch")(weapDef, weaponState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsQuickSwitch(unsigned int oldweapon, unsigned int newweapon, int weaponState) -> bool
{
  return Zynamic::Forward<bool (unsigned int, unsigned int, int)>(L"BG_IsQuickSwitch")(oldweapon, newweapon, weaponState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_BeginWeaponChange(struct pmove_t* pm, unsigned int newweapon, const bool quick) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, unsigned int, const bool)>(L"PM_BeginWeaponChange")(pm, newweapon, quick);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_BeginWeaponRaise(struct playerState_s* ps, unsigned int anim, unsigned int time, float aim, int altSwitch) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, unsigned int, float, int)>(L"PM_Weapon_BeginWeaponRaise")(ps, anim, time, aim, altSwitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_TakeClipOnlyWeaponIfEmpty(struct playerState_s* ps, int weaponIndex) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int)>(L"BG_TakeClipOnlyWeaponIfEmpty")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckIfDualWieldEmpty(struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*)>(L"BG_CheckIfDualWieldEmpty")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SwitchWeaponsIfEmpty(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"BG_SwitchWeaponsIfEmpty")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetValidPrimaryWeaponForAltMode(const struct playerState_s* ps, unsigned int newWeapon, unsigned int lastWeaponAltModeSwitch) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct playerState_s*, unsigned int, unsigned int)>(L"BG_GetValidPrimaryWeaponForAltMode")(ps, newWeapon, lastWeaponAltModeSwitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishWeaponChange(struct pmove_t* pm, int previousWeaponState) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_FinishWeaponChange")(pm, previousWeaponState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishWeaponRaise(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_FinishWeaponRaise")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_AllowReload(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"PM_Weapon_AllowReload")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_ReloadDelayedAction(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_ReloadDelayedAction")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishReloadStart(struct pmove_t* pm, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_FinishReloadStart")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishReload(struct pmove_t* pm, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_FinishReload")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishReloadEnd(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_FinishReloadEnd")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckFuelTime(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_Weapon_CheckFuelTime")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CheckForReloadInterferingWeaponStates(struct pmove_t* pm, struct playerState_s* ps, int weaponState) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct playerState_s*, int)>(L"PM_CheckForReloadInterferingWeaponStates")(pm, ps, weaponState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForReload(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForReload")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AdjustAimSpreadScale(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_AdjustAimSpreadScale")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShotLimitReached(struct playerState_s* ps, const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, const struct WeaponDef*)>(L"ShotLimitReached")(ps, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BurstFirePending(struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*)>(L"BurstFirePending")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponUsesBurstCooldown(unsigned int weaponIdx) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"WeaponUsesBurstCooldown")(weaponIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdatePendingTriggerPull(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"UpdatePendingTriggerPull")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckStackedFire(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"CheckStackedFire")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_WeaponTimeAdjust(struct pmove_t* pm, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*)>(L"PM_Weapon_WeaponTimeAdjust")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForChangeWeapon(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForChangeWeapon")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetWeaponFireButton(unsigned int weapon) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"PM_GetWeaponFireButton")(weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_ShouldBeFiring(struct pmove_t* pm, int delayedAction, bool testOnly) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, int, bool)>(L"PM_Weapon_ShouldBeFiring")(pm, delayedAction, testOnly);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckIfLastShot(struct playerState_s* ps, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, unsigned int)>(L"BG_CheckIfLastShot")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_StartFiring(struct pmove_t* pm, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_StartFiring")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckFiringAmmo(struct pmove_t* pm) -> int
{
  return Zynamic::Forward<int (struct pmove_t*)>(L"PM_Weapon_CheckFiringAmmo")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_Jam(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_Jam")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_SetFPSFireAnim(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_SetFPSFireAnim")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_AddFiringAimSpreadScale(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_AddFiringAimSpreadScale")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawPlantDebug(float* start, float* end) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"DrawPlantDebug")(start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_IsHoldingGrenade(struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*)>(L"PM_Weapon_IsHoldingGrenade")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponAllowPlant(struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*)>(L"PM_WeaponAllowPlant")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FireWeapon(struct pmove_t* pm, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_FireWeapon")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_GetMeleeWeapDef(struct playerState_s* ps) -> const struct WeaponDef*
{
  return Zynamic::Forward<const struct WeaponDef* (struct playerState_s*)>(L"PM_Weapon_GetMeleeWeapDef")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_MeleeEnd(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_MeleeEnd")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_MeleeFire(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_MeleeFire")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_MeleeInit(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_MeleeInit")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForMelee(struct pmove_t* pm, struct pml_t* pml, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, int)>(L"PM_Weapon_CheckForMelee")(pm, pml, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_Idle(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_Idle")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHandInit(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_OffHandInit")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHandPrepare(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_OffHandPrepare")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHandHold(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_OffHandHold")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHandStart(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_OffHandStart")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHand(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_OffHand")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_OffHandEnd(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_OffHandEnd")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SendEmtpyOffhandEvent(struct playerState_s* ps, enum OffhandSlot offhandSlot) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, enum OffhandSlot)>(L"PM_SendEmtpyOffhandEvent")(ps, offhandSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForOffHand(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForOffHand")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateGrenadeThrow(struct playerState_s* ps, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, struct pml_t*)>(L"PM_UpdateGrenadeThrow")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckGrenadeHold(struct pmove_t* pm, int delayedAction) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, int)>(L"PM_Weapon_CheckGrenadeHold")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForDetonation(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForDetonation")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForGrenadeThrowCancel(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForGrenadeThrowCancel")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Detonate(struct playerState_s* ps, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int)>(L"PM_Detonate")(ps, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForNightVision(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForNightVision")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishNightVisionWear(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_FinishNightVisionWear")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_FinishNightVisionRemove(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_Weapon_FinishNightVisionRemove")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponSwimIn(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_WeaponSwimIn")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WeaponSwimOut(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_WeaponSwimOut")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sprint_State_Raise(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Sprint_State_Raise")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sprint_State_Loop(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Sprint_State_Loop")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sprint_State_Drop(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Sprint_State_Drop")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ContinuousFire_State_In(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"ContinuousFire_State_In")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ContinuousFire_State_Loop(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"ContinuousFire_State_Loop")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ContinuousFire_State_Out(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"ContinuousFire_State_Out")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_State_In(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Dtp_State_In")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Slide_State_In(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Slide_State_In")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_State_Out(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Dtp_State_Out")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_State_Loop(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Dtp_State_Loop")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Deploy_State_Deploy(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Deploy_State_Deploy")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Deploy_State_Breakdown(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Deploy_State_Breakdown")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForSprint(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForSprint")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForContinuousFire(struct pmove_t* pm, int delayedAction) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_Weapon_CheckForContinuousFire")(pm, delayedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForDtp(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForDtp")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForSlide(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForSlide")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForDeploy(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForDeploy")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_CheckForMantle(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Weapon_CheckForMantle")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckForUniversalActionDW(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"BG_CheckForUniversalActionDW")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_Weapon")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon_Turret(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_Weapon_Turret")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ResetWeaponState(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_ResetWeaponState")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponFireRecoil(const struct playerState_s* ps, float* recoilSpeed, float* kickAVel) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*, float*)>(L"BG_WeaponFireRecoil")(ps, recoilSpeed, kickAVel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponCountPrimaryTypes(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_PlayerWeaponCountPrimaryTypes")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponsFull_Primaries(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"BG_PlayerWeaponsFull_Primaries")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerHasCompatibleWeapon(const struct playerState_s* ps, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, unsigned int)>(L"BG_PlayerHasCompatibleWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ThrowingBackGrenade(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"BG_ThrowingBackGrenade")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalcVehicleTurretWeaponPosOffset(const float positionFrac, const struct WeaponDef* weapDef, float* outOffset) -> void
{
  return Zynamic::Forward<void (const float, const struct WeaponDef*, float*)>(L"BG_CalcVehicleTurretWeaponPosOffset")(positionFrac, weapDef, outOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponVariantDef_LoadObj(const char* name) -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* (const char*)>(L"BG_LoadWeaponVariantDef_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponVariantDef_FastFile(const char* name) -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* (const char*)>(L"BG_LoadWeaponVariantDef_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponVariantDef(const char* name) -> struct WeaponVariantDef*
{
  return Zynamic::Forward<struct WeaponVariantDef* (const char*)>(L"BG_LoadWeaponVariantDef")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AssertOffhandIndexOrNone(int offHandIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"BG_AssertOffhandIndexOrNone")(offHandIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFuelTankTime(const struct playerState_s* ps, unsigned int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, unsigned int)>(L"BG_GetFuelTankTime")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetFuelTankTime(struct playerState_s* ps, unsigned int weaponIndex, int time) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, int)>(L"BG_SetFuelTankTime")(ps, weaponIndex, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddFuelTankTime(struct playerState_s* ps, unsigned int weaponIndex, int time) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int, int)>(L"BG_AddFuelTankTime")(ps, weaponIndex, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_HoldWeapon(struct playerState_s* ps, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, unsigned int)>(L"BG_HoldWeapon")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponName(int weapon) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_WeaponName")(weapon);
}

#endif // __UNIMPLEMENTED__
