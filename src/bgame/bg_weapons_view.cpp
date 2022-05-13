//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_GetBobCycle(const struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*)>(L"BG_GetBobCycle")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_VerticalBobFactor(const struct playerState_s* ps, float cycle, float speed) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*, float, float)>(L"BG_CalculateWeaponMovement_VerticalBobFactor")(ps, cycle, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_HorizontalBobFactor(const struct playerState_s* ps, float cycle, float speed) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*, float, float)>(L"BG_CalculateWeaponMovement_HorizontalBobFactor")(ps, cycle, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ComputeAndApplyWeaponMovement_IdleAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ComputeAndApplyWeaponMovement_IdleAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ComputeAndApplyWeaponMovement_DamageKickAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ComputeAndApplyWeaponMovement_DamageKickAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_BaseAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_BaseAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_BaseOrigin(struct weaponState_t* ws, float* origin) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_BaseOrigin")(ws, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_SwayAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_SwayAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_LeanOrigin(struct weaponState_t* ws, float* origin) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_LeanOrigin")(ws, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_BobAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_BobAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyWeaponMovement_BobOrigin(struct weaponState_t* ws, float* origin) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_ApplyWeaponMovement_BobOrigin")(ws, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_GetSprintLerp(const struct weaponState_t* ws, const struct WeaponDef* weapDef) -> float
{
  return Zynamic::Forward<float (const struct weaponState_t*, const struct WeaponDef*)>(L"BG_CalculateWeaponMovement_GetSprintLerp")(ws, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_GetLowReadyLerp(const struct weaponState_t* ws, const struct WeaponDef* weapDef) -> float
{
  return Zynamic::Forward<float (const struct weaponState_t*, const struct WeaponDef*)>(L"BG_CalculateWeaponMovement_GetLowReadyLerp")(ws, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_GetDTPLerp(const struct weaponState_t* ws, const struct WeaponDef* weapDef) -> float
{
  return Zynamic::Forward<float (const struct weaponState_t*, const struct WeaponDef*)>(L"BG_CalculateWeaponMovement_GetDTPLerp")(ws, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_GetSlideLerp(const struct weaponState_t* ws, const struct WeaponDef* weapDef) -> float
{
  return Zynamic::Forward<float (const struct weaponState_t*, const struct WeaponDef*)>(L"BG_CalculateWeaponMovement_GetSlideLerp")(ws, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Base_Internal_WeaponState(const struct weaponState_t* ws, float* targetPos, float* targetAngles) -> void
{
  return Zynamic::Forward<void (const struct weaponState_t*, float*, float*)>(L"BG_CalculateWeaponMovement_Base_Internal_WeaponState")(ws, targetPos, targetAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Base_Internal_Stance(const struct weaponState_t* ws, float* targetPos, float* targetAngles) -> void
{
  return Zynamic::Forward<void (const struct weaponState_t*, float*, float*)>(L"BG_CalculateWeaponMovement_Base_Internal_Stance")(ws, targetPos, targetAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Base_Internal_Movement(const struct weaponState_t* ws, float minSpeed, float* targetPos, float* targetAngles) -> void
{
  return Zynamic::Forward<void (const struct weaponState_t*, float, float*, float*)>(L"BG_CalculateWeaponMovement_Base_Internal_Movement")(ws, minSpeed, targetPos, targetAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Base_Internal_Save(struct weaponState_t* ws, const float* targetPos, const float* targetAngles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, const float*, const float*)>(L"BG_CalculateWeaponMovement_Base_Internal_Save")(ws, targetPos, targetAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Base(struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*)>(L"BG_CalculateWeaponMovement_Base")(ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_GunRecoil_SingleAngle(float* fOffset, float* speed, float fTimeStep, float fOfsCap, float fGunKickAccel, float fGunKickSpeedMax, float fGunKickSpeedDecay, float fGunKickStaticDecay) -> int
{
  return Zynamic::Forward<int (float*, float*, float, float, float, float, float, float)>(L"BG_CalculateWeaponMovement_GunRecoil_SingleAngle")(fOffset, speed, fTimeStep, fOfsCap, fGunKickAccel, fGunKickSpeedMax, fGunKickSpeedDecay, fGunKickStaticDecay);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Recoil(struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*)>(L"BG_CalculateWeaponMovement_Recoil")(ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Sway(struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*)>(L"BG_CalculateWeaponMovement_Sway")(ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement_Bob(struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*)>(L"BG_CalculateWeaponMovement_Bob")(ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetWeaponMovementAngles(struct weaponState_t* ws, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_SetWeaponMovementAngles")(ws, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetWeaponMovementOrigin(struct weaponState_t* ws, float* origin) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*)>(L"BG_SetWeaponMovementOrigin")(ws, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateWeaponMovement(struct weaponState_t* ws, float* origin, float* angles) -> void
{
  return Zynamic::Forward<void (struct weaponState_t*, float*, float*)>(L"BG_CalculateWeaponMovement")(ws, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_VerticalBobFactor(const struct playerState_s* ps, float cycle, float speed) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*, float, float)>(L"BG_CalculateViewMovement_VerticalBobFactor")(ps, cycle, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_HorizontalBobFactor(const struct playerState_s* ps, float cycle, float speed) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*, float, float)>(L"BG_CalculateViewMovement_HorizontalBobFactor")(ps, cycle, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_DamageKick(struct viewState_t* vs, float* angles) -> void
{
  return Zynamic::Forward<void (struct viewState_t*, float*)>(L"BG_CalculateViewMovement_DamageKick")(vs, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_IdleAngles(struct viewState_t* vs, float* angles) -> void
{
  return Zynamic::Forward<void (struct viewState_t*, float*)>(L"BG_CalculateViewMovement_IdleAngles")(vs, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_BobAngles(struct viewState_t* vs, float* angles) -> void
{
  return Zynamic::Forward<void (struct viewState_t*, float*)>(L"BG_CalculateViewMovement_BobAngles")(vs, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovement_AdsBob(struct viewState_t* vs, float* angles) -> void
{
  return Zynamic::Forward<void (struct viewState_t*, float*)>(L"BG_CalculateViewMovement_AdsBob")(vs, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalculateViewMovementAngles(struct viewState_t* vs, float* angles) -> void
{
  return Zynamic::Forward<void (struct viewState_t*, float*)>(L"BG_CalculateViewMovementAngles")(vs, angles);
}

#endif // __UNIMPLEMENTED__
