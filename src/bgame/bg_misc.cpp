//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"BG_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetEntityTypeName(const int eType) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"BG_GetEntityTypeName")(eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindItemForWeapon(int weapon, int model) -> const struct gitem_s*
{
  return Zynamic::Forward<const struct gitem_s* (int, int)>(L"BG_FindItemForWeapon")(weapon, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindItem(const char* pickupName, int model) -> const struct gitem_s*
{
  return Zynamic::Forward<const struct gitem_s* (const char*, int)>(L"G_FindItem")(pickupName, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerTouchesItem(const struct playerState_s* ps, const struct entityState_s* item, int atTime) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const struct entityState_s*, int)>(L"BG_PlayerTouchesItem")(ps, item, atTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HaveRoomForAmmo(const struct playerState_s* ps, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, unsigned int)>(L"HaveRoomForAmmo")(ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerCanPickUpWeaponType(const struct WeaponDef* weapDef, const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct WeaponDef*, const struct playerState_s*)>(L"BG_PlayerCanPickUpWeaponType")(weapDef, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponEntCanBeGrabbed(const struct entityState_s* weaponEntState, const struct playerState_s* ps, int touched, unsigned int weapIdx) -> bool
{
  return Zynamic::Forward<bool (const struct entityState_s*, const struct playerState_s*, int, unsigned int)>(L"WeaponEntCanBeGrabbed")(weaponEntState, ps, touched, weapIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanItemBeGrabbed(const struct entityState_s* ent, const struct playerState_s* ps, int touched) -> int
{
  return Zynamic::Forward<int (const struct entityState_s*, const struct playerState_s*, int)>(L"BG_CanItemBeGrabbed")(ent, ps, touched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerHasRoomForEntAllAmmoTypes(const struct entityState_s* ent, const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct entityState_s*, const struct playerState_s*)>(L"BG_PlayerHasRoomForEntAllAmmoTypes")(ent, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EvaluateTrajectory(const struct trajectory_t* tr, int atTime, float* result) -> void
{
  return Zynamic::Forward<void (const struct trajectory_t*, int, float*)>(L"BG_EvaluateTrajectory")(tr, atTime, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EvaluateTrajectoryDelta(const struct trajectory_t* tr, int atTime, float* result) -> void
{
  return Zynamic::Forward<void (const struct trajectory_t*, int, float*)>(L"BG_EvaluateTrajectoryDelta")(tr, atTime, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ValidateOrigin(const float* pos, unsigned int xyBits, unsigned int zBits, const float* mapCenter) -> bool
{
  return Zynamic::Forward<bool (const float*, unsigned int, unsigned int, const float*)>(L"BG_ValidateOrigin")(pos, xyBits, zBits, mapCenter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ValidateOriginValue(const float val, unsigned int bits, const float mapCenterValue) -> bool
{
  return Zynamic::Forward<bool (const float, unsigned int, const float)>(L"BG_ValidateOriginValue")(val, bits, mapCenterValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddEvent<int, unsigned int>(int newEvent, unsigned int eventParm, short* eventSequence, int* events, unsigned int* eventParms, const unsigned int eventTime, const char addType) -> void
{
  return Zynamic::Forward<void (int, unsigned int, short*, int*, unsigned int*, const unsigned int, const char)>(L"BG_AddEvent<int,unsigned int>")(newEvent, eventParm, eventSequence, events, eventParms, eventTime, addType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddPredictableEventToPlayerstate(int newEvent, unsigned int eventParm, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, unsigned int, struct playerState_s*)>(L"BG_AddPredictableEventToPlayerstate")(newEvent, eventParm, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddUnpredictableEventToPlayerstate(int newEvent, unsigned int eventParm, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, unsigned int, struct playerState_s*)>(L"BG_AddUnpredictableEventToPlayerstate")(newEvent, eventParm, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddEntityStateEvent(int newEvent, unsigned int eventParm, struct entityState_s* es, const int eventTime) -> void
{
  return Zynamic::Forward<void (int, unsigned int, struct entityState_s*, const int)>(L"BG_AddEntityStateEvent")(newEvent, eventParm, es, eventTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntityShouldAddEvent(int event) -> bool
{
  return Zynamic::Forward<bool (int)>(L"BG_PlayerToEntityShouldAddEvent")(event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntityProcessEvents_Internal(struct entityState_s* s, unsigned char handler, short* eventSequence, short* oldEventSequence, int* events, unsigned int* eventParms, const unsigned int eventTime) -> void
{
  return Zynamic::Forward<void (struct entityState_s*, unsigned char, short*, short*, int*, unsigned int*, const unsigned int)>(L"BG_PlayerToEntityProcessEvents_Internal")(s, handler, eventSequence, oldEventSequence, events, eventParms, eventTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntityProcessEvents(struct playerState_s* ps, struct entityState_s* s, unsigned char handler) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*, unsigned char)>(L"BG_PlayerToEntityProcessEvents")(ps, s, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntitySetFlags(struct playerState_s* ps, struct entityState_s* s) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*)>(L"BG_PlayerToEntitySetFlags")(ps, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntitySetPitchAngles(struct playerState_s* ps, struct entityState_s* s) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*)>(L"BG_PlayerToEntitySetPitchAngles")(ps, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntitySetMisc(struct playerState_s* ps, struct entityState_s* s) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*)>(L"BG_PlayerToEntitySetMisc")(ps, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerToEntitySetTrajectory(struct playerState_s* ps, struct entityState_s* s, int snap) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*, int)>(L"BG_PlayerToEntitySetTrajectory")(ps, s, snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerStateToEntityState(struct playerState_s* ps, struct entityState_s* s, int snap, unsigned char handler) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*, int, unsigned char)>(L"BG_PlayerStateToEntityState")(ps, s, snap, handler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckProne(const struct playerState_s* ps, int passEntityNum, const float* vPos, const float fSize, const float fHeight, const float fYaw, float* pfTorsoPitch, float* pfWaistPitch, bool isAlreadyProne, bool isOnGround, bool groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*, int, const float*, const float, const float, const float, float*, float*, bool, bool, bool, unsigned char, enum proneCheckType_t, float)>(L"BG_CheckProne")(ps, passEntityNum, vPos, fSize, fHeight, fYaw, pfTorsoPitch, pfWaistPitch, isAlreadyProne, isOnGround, groundIsWalkable, handler, proneCheckType, prone_feet_dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerViewOrigin(const struct playerState_s* ps, float* origin, int time) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*, int)>(L"BG_GetPlayerViewOrigin")(ps, origin, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerViewDirection(const struct playerState_s* ps, float* forward, float* right, float* up) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*, float*, float*)>(L"BG_GetPlayerViewDirection")(ps, forward, right, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LerpHudColors(const struct hudelem_s* elem, int time, union hudelem_color_t* toColor) -> void
{
  return Zynamic::Forward<void (const struct hudelem_s*, int, union hudelem_color_t*)>(L"BG_LerpHudColors")(elem, time, toColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadShellShockDvars(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"BG_LoadShellShockDvars")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetShellShockParmsFromDvars(struct shellshock_parms_t* parms) -> void
{
  return Zynamic::Forward<void (struct shellshock_parms_t*)>(L"BG_SetShellShockParmsFromDvars")(parms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SaveShellShockDvars(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"BG_SaveShellShockDvars")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetShellshockParms(const int index) -> struct shellshock_parms_t*
{
  return Zynamic::Forward<struct shellshock_parms_t* (const int)>(L"BG_GetShellshockParms")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsShellshockAnim(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"BG_IsShellshockAnim")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CreateXAnim(struct XAnim_s* anims, unsigned int animIndex, const char* name) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, const char*)>(L"BG_CreateXAnim")(anims, animIndex, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckThread() -> void
{
  return Zynamic::Forward<void ()>(L"BG_CheckThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetMaxSprintTime(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"BG_GetMaxSprintTime")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClipMoveToDobj(const struct entityState_s* es) -> bool
{
  return Zynamic::Forward<bool (const struct entityState_s*)>(L"BG_ClipMoveToDobj")(es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFriendlyFireStatus() -> int
{
  return Zynamic::Forward<int ()>(L"BG_GetFriendlyFireStatus")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_DisplayName(const struct clientInfo_t* ci, int type) -> const char*
{
  return Zynamic::Forward<const char* (const struct clientInfo_t*, int)>(L"BG_DisplayName")(ci, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ClipCameraToHeliPatch(float* origin, float* oldpos, float* velocity, float* breachPos[0x3]) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*[0x3])>(L"BG_ClipCameraToHeliPatch")(origin, oldpos, velocity, breachPos);
}

#endif // __UNIMPLEMENTED__
