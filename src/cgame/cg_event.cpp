//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_Obituary(int localClientNum, const struct entityState_s* ent) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"CG_Obituary")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ObituaryRevive(int localClientNum, const struct entityState_s* ent) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"CG_ObituaryRevive")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DirectionalHitIndicator(int localClientNum, const struct entityState_s* ent) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"CG_DirectionalHitIndicator")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ItemPickup(int localClientNum, int weapIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ItemPickup")(localClientNum, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetWetness(int localClientNum, int entNum, float wetness, int invert) -> void
{
  return Zynamic::Forward<void (int, int, float, int)>(L"CG_SetWetness")(localClientNum, entNum, wetness, invert);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExplosionEvent(int localClientNum, const float* origin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<void (int, const float*, const float, const float, const float, int)>(L"CG_ExplosionEvent")(localClientNum, origin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetBoneIndex(int localClientNum, const int dobjHandle, unsigned int boneName, unsigned char* boneIndex) -> int
{
  return Zynamic::Forward<int (int, const int, unsigned int, unsigned char*)>(L"CG_GetBoneIndex")(localClientNum, dobjHandle, boneName, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayBoltedEffect(int localClientNum, const struct FxEffectDef* fxDef, int dobjHandle, unsigned int boneName) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, unsigned int)>(L"CG_PlayBoltedEffect")(localClientNum, fxDef, dobjHandle, boneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayFx(int localClientNum, struct centity_s* cent, const float* angles) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const float*)>(L"CG_PlayFx")(localClientNum, cent, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayFxOnTag(int localClientNum, struct centity_s* cent, int eventParm) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_PlayFxOnTag")(localClientNum, cent, eventParm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetInvalidCmdHint(struct cg_s* cgameGlob, enum InvalidCmdHintType hintType) -> void
{
  return Zynamic::Forward<void (struct cg_s*, enum InvalidCmdHintType)>(L"CG_SetInvalidCmdHint")(cgameGlob, hintType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetInvalidStanceHint(struct cg_s* cgameGlob, enum invalid_cmd_hint_t type) -> void
{
  return Zynamic::Forward<void (struct cg_s*, enum invalid_cmd_hint_t)>(L"CG_SetInvalidStanceHint")(cgameGlob, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopWeaponSound(const int localClientNum, bool isPlayerView, const struct WeaponDef* weaponDef, const int entitynum, enum weaponstate_t weaponstate) -> void
{
  return Zynamic::Forward<void (const int, bool, const struct WeaponDef*, const int, enum weaponstate_t)>(L"CG_StopWeaponSound")(localClientNum, isPlayerView, weaponDef, entitynum, weaponstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoFootstepEvent(int localClientNum, struct centity_s* cent, bool isPlayerView, int event, int surfaceType, bool quiet, bool do_footprint_effect) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, bool, int, int, bool, bool)>(L"CG_DoFootstepEvent")(localClientNum, cent, isPlayerView, event, surfaceType, quiet, do_footprint_effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoJumpEvent(int localClientNum, struct centity_s* cent, bool isPlayerView, int surfaceType, bool quiet) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, bool, int, bool)>(L"CG_DoJumpEvent")(localClientNum, cent, isPlayerView, surfaceType, quiet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoLandEvent(int localClientNum, struct centity_s* cent, bool isPlayerView, int surfaceType, bool quiet, bool damagePlayer) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, bool, int, bool, bool)>(L"CG_DoLandEvent")(localClientNum, cent, isPlayerView, surfaceType, quiet, damagePlayer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoFoliageEvent(int localClientNum, struct centity_s* cent, bool isPlayerView, bool quiet) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, bool, bool)>(L"CG_DoFoliageEvent")(localClientNum, cent, isPlayerView, quiet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityEvent(int localClientNum, struct centity_s* cent, int event) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_EntityEvent")(localClientNum, cent, event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PhysLaunch(int localClientNum, struct centity_s* cent, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct entityState_s*)>(L"CG_PhysLaunch")(localClientNum, cent, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckEvents(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_CheckEvents")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckEntEvents(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_CheckEntEvents")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckIfDualWieldEmpty(struct playerState_s* ps, int weapIndex) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, int)>(L"CG_CheckIfDualWieldEmpty")(ps, weapIndex);
}

#endif // __UNIMPLEMENTED__
