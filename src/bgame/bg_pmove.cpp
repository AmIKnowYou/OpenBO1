//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto setup_gjkcc_input(struct pmove_t* pm, struct gjkcc_input_t* gjkcc_in) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct gjkcc_input_t*)>(L"setup_gjkcc_input")(pm, gjkcc_in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_trace(struct pmove_t* pm, struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct trace_t*, const float*, const float*, const float*, const float*, int, int)>(L"PM_trace")(pm, results, start, mins, maxs, end, passEntityNum, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_playerTrace(struct pmove_t* pm, struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct trace_t*, const float*, const float*, const float*, const float*, int, int)>(L"PM_playerTrace")(pm, results, start, mins, maxs, end, passEntityNum, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AddEvent(struct playerState_s* ps, int newEvent) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int)>(L"PM_AddEvent")(ps, newEvent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AddTouchEnt(struct pmove_t* pm, int entityNum) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_AddTouchEnt")(pm, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AddTouchGlass(struct pmove_t* pm, int glassId) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int)>(L"PM_AddTouchGlass")(pm, glassId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ClipVelocity(const float* in, const float* normal, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"PM_ClipVelocity")(in, normal, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ProjectVelocity(const float* velIn, const float* normal, float* velOut) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"PM_ProjectVelocity")(velIn, normal, velOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetEffectiveStance(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"PM_GetEffectiveStance")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetStanceEx(int stance, int backward) -> enum PmStanceFrontBack
{
  return Zynamic::Forward<enum PmStanceFrontBack (int, int)>(L"PM_GetStanceEx")(stance, backward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetSprintLeft(const struct playerState_s* ps, const int gametime) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const int)>(L"PM_GetSprintLeft")(ps, gametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetSprintLeftLastTime(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"PM_GetSprintLeftLastTime")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsSprinting(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"PM_IsSprinting")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_StartSprint(struct playerState_s* ps, struct pmove_t* pm, const struct pml_t* pml, int sprintLeft) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pmove_t*, const struct pml_t*, int)>(L"PM_StartSprint")(ps, pm, pml, sprintLeft);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_EndSprint(struct playerState_s* ps, struct pmove_t* pm, const struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pmove_t*, const struct pml_t*)>(L"PM_EndSprint")(ps, pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SprintStartInterferingButtons(const struct playerState_s* ps, const int forwardSpeed, class bitarray<51>* button_bits) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, const int, class bitarray<51>*)>(L"PM_SprintStartInterferingButtons")(ps, forwardSpeed, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CmdScaleForStance(const struct pmove_t* pm) -> float
{
  return Zynamic::Forward<float (const struct pmove_t*)>(L"PM_CmdScaleForStance")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SprintEndingButtons(const struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (const struct pmove_t*)>(L"PM_SprintEndingButtons")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_not_penetrating(struct pmove_t* pm, const float* start, const float* mins, const float* maxs, const float* end, const int contentMask) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, const float*, const float*, const float*, const float*, const int)>(L"is_not_penetrating")(pm, start, mins, maxs, end, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CanCrouch(struct playerState_s* ps, struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, struct pmove_t*)>(L"PM_CanCrouch")(ps, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CanStand(struct playerState_s* ps, struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, struct pmove_t*)>(L"PM_CanStand")(ps, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateVisionAnims(struct pmove_t* pm, const struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, const struct pml_t*)>(L"PM_UpdateVisionAnims")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateScriptedAnim(struct pmove_t* pm, const struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, const struct pml_t*)>(L"PM_UpdateScriptedAnim")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateSprint(struct pmove_t* pm, const struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, const struct pml_t*)>(L"PM_UpdateSprint")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Friction(struct playerState_s* ps, struct pml_t* pml, struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pml_t*, struct pmove_t*)>(L"PM_Friction")(ps, pml, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Accelerate(struct playerState_s* ps, const struct pml_t* pml, float* wishdir, float wishspeed, float accel) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, const struct pml_t*, float*, float, float)>(L"PM_Accelerate")(ps, pml, wishdir, wishspeed, accel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DoSlideAdjustments(struct playerState_s* ps, const struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, const struct pml_t*)>(L"PM_DoSlideAdjustments")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MoveScale(struct playerState_s* ps, float fmove, float rmove, float umove) -> float
{
  return Zynamic::Forward<float (struct playerState_s*, float, float, float)>(L"PM_MoveScale")(ps, fmove, rmove, umove);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CmdScale(struct playerState_s* ps, struct usercmd_s* cmd) -> float
{
  return Zynamic::Forward<float (struct playerState_s*, struct usercmd_s*)>(L"PM_CmdScale")(ps, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CmdScale_Walk(struct pmove_t* pm, struct usercmd_s* cmd) -> float
{
  return Zynamic::Forward<float (struct pmove_t*, struct usercmd_s*)>(L"PM_CmdScale_Walk")(pm, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DamageScale_Walk(int damage_timer) -> float
{
  return Zynamic::Forward<float (int)>(L"PM_DamageScale_Walk")(damage_timer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetMovementDir(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_SetMovementDir")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GroundSurfaceType(struct playerState_s* ps, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, struct pml_t*)>(L"PM_GroundSurfaceType")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_FlyMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_FlyMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AirMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_AirMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SwimMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_SwimMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_WalkMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_WalkMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DeadMove(struct playerState_s* ps, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pml_t*)>(L"PM_DeadMove")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_NoclipMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_NoclipMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UFOMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UFOMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_FootstepType(struct pmove_t* pm, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*)>(L"PM_FootstepType")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_LightLandingForSurface(struct playerState_s* ps, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, struct pml_t*)>(L"PM_LightLandingForSurface")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_SizeofXAsset<XAnimParts>() -> int
{
  return Zynamic::Forward<int ()>(L"DB_SizeofXAsset<XAnimParts>")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_HardLandingForSurface(struct playerState_s* ps, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, struct pml_t*)>(L"PM_HardLandingForSurface")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DamageLandingForSurface(struct playerState_s* ps, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, struct pml_t*)>(L"PM_DamageLandingForSurface")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CrashLand(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_CrashLand")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CorrectAllSolid(struct pmove_t* pm, struct pml_t* pml, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*, struct trace_t*)>(L"PM_CorrectAllSolid")(pm, pml, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GroundTraceMissed(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_GroundTraceMissed")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GroundTrace(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_GroundTrace")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetWaterLevel(const struct playerState_s* ps, float waterHeight) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, float)>(L"PM_GetWaterLevel")(ps, waterHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetWaterLevel(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_SetWaterLevel")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetViewHeightLerpTime(const struct playerState_s* ps, int iTarget, int bDown) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int, int)>(L"PM_GetViewHeightLerpTime")(ps, iTarget, bDown);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ViewHeightTableLerp(int iFrac, struct viewLerpWaypoint_s* pTable, float* pfPosOfs) -> float
{
  return Zynamic::Forward<float (int, struct viewLerpWaypoint_s*, float*)>(L"PM_ViewHeightTableLerp")(iFrac, pTable, pfPosOfs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetViewHeightLerp(const struct pmove_t* pm, int iFromHeight, int iToHeight) -> float
{
  return Zynamic::Forward<float (const struct pmove_t*, int, int)>(L"PM_GetViewHeightLerp")(pm, iFromHeight, iToHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ViewHeightAdjust(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_ViewHeightAdjust")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayerProneAllowed(struct pmove_t* pm) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*)>(L"PlayerProneAllowed")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsPlayerFrozenByWeapon(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"PM_IsPlayerFrozenByWeapon")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CheckDuck(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_CheckDuck")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_FootstepEvent(struct pmove_t* pm, struct pml_t* pml, int iOldBobCycle, int iNewBobCycle, int bFootStep) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, int, int, int)>(L"PM_FootstepEvent")(pm, pml, iOldBobCycle, iNewBobCycle, bFootStep);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ShouldMakeFootsteps(struct pmove_t* pm) -> int
{
  return Zynamic::Forward<int (struct pmove_t*)>(L"PM_ShouldMakeFootsteps")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Footsteps_TurnAnim(struct clientInfo_t* ci) -> int
{
  return Zynamic::Forward<int (struct clientInfo_t*)>(L"PM_Footsteps_TurnAnim")(ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetNotMovingAnim(int turnAdjust) -> enum scriptAnimMoveTypes_t
{
  return Zynamic::Forward<enum scriptAnimMoveTypes_t (int)>(L"PM_GetNotMovingAnim")(turnAdjust);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ShouldFlinch(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"PM_ShouldFlinch")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Footstep_LadderMove(struct pmove_t* pm, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*)>(L"PM_Footstep_LadderMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Footsteps_NotMoving(struct pmove_t* pm, int stance, bool allow_flinch) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, int, bool)>(L"PM_Footsteps_NotMoving")(pm, stance, allow_flinch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetMaxSpeed(struct pmove_t* pm, int walking, int sprinting) -> float
{
  return Zynamic::Forward<float (struct pmove_t*, int, int)>(L"PM_GetMaxSpeed")(pm, walking, sprinting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetBobMove(struct pmove_t* pm, enum PmStanceFrontBack stance, float xyspeed, float fMaxSpeed, int walking, int sprinting) -> float
{
  return Zynamic::Forward<float (struct pmove_t*, enum PmStanceFrontBack, float, float, int, int)>(L"PM_GetBobMove")(pm, stance, xyspeed, fMaxSpeed, walking, sprinting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LocalClient_GetActiveCount() -> int
{
  return Zynamic::Forward<int ()>(L"CL_LocalClient_GetActiveCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetMoveAnim(struct playerState_s* ps, struct pml_t* pml, enum PmStanceFrontBack stance, int walking, int sprinting) -> enum scriptAnimMoveTypes_t
{
  return Zynamic::Forward<enum scriptAnimMoveTypes_t (struct playerState_s*, struct pml_t*, enum PmStanceFrontBack, int, int)>(L"PM_GetMoveAnim")(ps, pml, stance, walking, sprinting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Footstep_NotTryingToMove(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_Footstep_NotTryingToMove")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_VehicleDrive(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_VehicleDrive")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CalcBob(struct pmove_t* pm, struct pml_t* pml, int old, float bobmove) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*, int, float)>(L"BG_CalcBob")(pm, pml, old, bobmove);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ApplyMovementAnimations(struct pmove_t* pm, struct pml_t* pml, enum PmStanceFrontBack stanceFrontBack, int walking, int sprinting) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, enum PmStanceFrontBack, int, int)>(L"PM_ApplyMovementAnimations")(pm, pml, stanceFrontBack, walking, sprinting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ApplyLegAnimations(struct pmove_t* pm, struct pml_t* pml, int iStance, enum PmStanceFrontBack stanceFrontBack, int walking, int sprinting) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, int, enum PmStanceFrontBack, int, int)>(L"PM_ApplyLegAnimations")(pm, pml, iStance, stanceFrontBack, walking, sprinting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CalcPlayerPitch(struct playerState_s* ps, struct pml_t* pml) -> float
{
  return Zynamic::Forward<float (struct playerState_s*, struct pml_t*)>(L"PM_CalcPlayerPitch")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsInAir(struct pmove_t* pm, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*)>(L"PM_IsInAir")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Footsteps(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_Footsteps")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_FoliageSounds(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_FoliageSounds")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DropTimers(struct playerState_s* ps, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pml_t*)>(L"PM_DropTimers")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateLean(struct playerState_s* ps, float msec, struct usercmd_s* cmd, function* capsuleTrace) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, float, struct usercmd_s*, function *)>(L"PM_UpdateLean")(ps, msec, cmd, capsuleTrace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckProneTurned(struct playerState_s* ps, float newProneYaw, unsigned char handler) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, float, unsigned char)>(L"BG_CheckProneTurned")(ps, newProneYaw, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewLockedEnt(struct playerState_s* ps, struct usercmd_s* cmd, unsigned char handler) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct usercmd_s*, unsigned char)>(L"PM_UpdateViewLockedEnt")(ps, cmd, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_Clamp(struct playerState_s* ps, struct usercmd_s* cmd, unsigned char handler) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct usercmd_s*, unsigned char)>(L"PM_UpdateViewAngles_Clamp")(ps, cmd, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_RangeLimited(struct playerState_s* ps, const float oldYaw) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, const float)>(L"PM_UpdateViewAngles_RangeLimited")(ps, oldYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_LadderClamp(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_UpdateViewAngles_LadderClamp")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_ProneYawClamp(struct playerState_s* ps, float delta, int proneBlocked, float oldViewYaw, float newViewYaw) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, float, int, float, float)>(L"PM_UpdateViewAngles_ProneYawClamp")(ps, delta, proneBlocked, oldViewYaw, newViewYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_PronePitchClamp(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_UpdateViewAngles_PronePitchClamp")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles_Prone(struct playerState_s* ps, float msec, struct usercmd_s* cmd, unsigned char handler, float oldViewYaw) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, float, struct usercmd_s*, unsigned char, float)>(L"PM_UpdateViewAngles_Prone")(ps, msec, cmd, handler, oldViewYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles(int localClientNum, struct playerState_s* ps, float msec, struct usercmd_s* cmd, unsigned char handler) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*, float, struct usercmd_s*, unsigned char)>(L"PM_UpdateViewAngles")(localClientNum, ps, msec, cmd, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdatePronePitch(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdatePronePitch")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetProneMovementOverride(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_SetProneMovementOverride")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdatePlayerWalkingFlag(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PM_UpdatePlayerWalkingFlag")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetLadderFlag(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_SetLadderFlag")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ClearLadderFlag(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_ClearLadderFlag")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CheckLadderMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_CheckLadderMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_LadderMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_LadderMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MeleeChargeClear(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"PM_MeleeChargeClear")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MeleeChargeIsValid(struct pmove_t* pm, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*)>(L"PM_MeleeChargeIsValid")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MeleeChargeStart(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_MeleeChargeStart")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CalcMeleeChargeTime(struct playerState_s* ps, int* outTime, float* outChargeVel) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, int*, float*)>(L"PM_CalcMeleeChargeTime")(ps, outTime, outChargeVel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_CheckMeleeCharge(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_CheckMeleeCharge")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MeleeChargeMove(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_MeleeChargeMove")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TurretNVGTrigger(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"TurretNVGTrigger")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdatePush(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"PM_UpdatePush")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto set_stance(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"set_stance")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PmoveSingle(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"PmoveSingle")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pmove_1(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"Pmove_1")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pmove(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"Pmove")(pm);
}

#endif // __UNIMPLEMENTED__
