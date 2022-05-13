//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetWeaponAnimRate(int localClientNum, const struct WeaponVariantDef* weapVariantDef, struct XAnim_s* anims, int animIndex) -> float
{
  return Zynamic::Forward<float (int, const struct WeaponVariantDef*, struct XAnim_s*, int)>(L"GetWeaponAnimRate")(localClientNum, weapVariantDef, anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponAnimTimeFrac(int localClientNum, const struct WeaponVariantDef* weapVariantDef, struct XAnim_s* anims, int animIndex) -> float
{
  return Zynamic::Forward<float (int, const struct WeaponVariantDef*, struct XAnim_s*, int)>(L"GetWeaponAnimTimeFrac")(localClientNum, weapVariantDef, anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StartWeaponAnim(int localClientNum, int weaponNum, struct DObj* obj, int animIndex, float transitionTime, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, int, struct DObj*, int, float, int)>(L"StartWeaponAnim")(localClientNum, weaponNum, obj, animIndex, transitionTime, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StartCameraAnim(int localClientNum, int weaponNum, struct DObj* obj, int animIndex, float transitionTime, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, int, struct DObj*, int, float, int)>(L"StartCameraAnim")(localClientNum, weaponNum, obj, animIndex, transitionTime, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StopCameraAnim(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"StopCameraAnim")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayIdleAnim(int localClientNum, const struct playerState_s* ps, struct ViewModelInfo* viewModelInfo, struct DObj* obj, int weaponIndex, float transitionTime, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, struct ViewModelInfo*, struct DObj*, int, float, int)>(L"PlayIdleAnim")(localClientNum, ps, viewModelInfo, obj, weaponIndex, transitionTime, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayADSAnim(float weaponPosFrac, int weaponNum, struct DObj* obj, int animIndex) -> void
{
  return Zynamic::Forward<void (float, int, struct DObj*, int)>(L"PlayADSAnim")(weaponPosFrac, weaponNum, obj, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_JavelinADS(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_JavelinADS")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockBlink(int localClientNum, float blinkPerSec) -> bool
{
  return Zynamic::Forward<bool (int, float)>(L"CG_UICheckWeapLockBlink")(localClientNum, blinkPerSec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockAttackTop(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_UICheckWeapLockAttackTop")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockAttackDirect(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_UICheckWeapLockAttackDirect")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckForValidAnimIDDW(int animID) -> int
{
  return Zynamic::Forward<int (int)>(L"CheckForValidAnimIDDW")(animID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EnsureValidLeftAnim(int localClientNum, struct DObj* obj, struct ViewModelInfo* viewModelInfo, struct XAnimTree_s* pAnimTree, int weaponIndex, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, struct DObj*, struct ViewModelInfo*, struct XAnimTree_s*, int, int)>(L"EnsureValidLeftAnim")(localClientNum, obj, viewModelInfo, pAnimTree, weaponIndex, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponRunXModelAnims(int localClientNum, const struct playerState_s* ps, struct ViewModelInfo* viewModelInfo, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, struct ViewModelInfo*, int)>(L"WeaponRunXModelAnims")(localClientNum, ps, viewModelInfo, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetWeaponAnimTrees(int localClientNum, const struct playerState_s* ps, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, int)>(L"CG_ResetWeaponAnimTrees")(localClientNum, ps, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WeaponDObjHandle(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_WeaponDObjHandle")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NonDualWieldAnimsValid(const struct WeaponVariantDef* weapVariantDef) -> bool
{
  return Zynamic::Forward<bool (const struct WeaponVariantDef*)>(L"CG_NonDualWieldAnimsValid")(weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CreateWeaponViewModelXAnim(struct ViewModelInfo* viewModelInfo, const struct WeaponVariantDef* weapVariantDef) -> void
{
  return Zynamic::Forward<void (struct ViewModelInfo*, const struct WeaponVariantDef*)>(L"CG_CreateWeaponViewModelXAnim")(viewModelInfo, weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WeaponMyChanges() -> void
{
  return Zynamic::Forward<void ()>(L"CG_WeaponMyChanges")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetWeaponHidePartBits(const struct WeaponVariantDef* weapVariantDef, struct ViewModelInfo* viewModelInfo, struct DObj* obj, int modelNum) -> void
{
  return Zynamic::Forward<void (const struct WeaponVariantDef*, struct ViewModelInfo*, struct DObj*, int)>(L"CG_SetWeaponHidePartBits")(weapVariantDef, viewModelInfo, obj, modelNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeWeapons(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_FreeWeapons")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterWeapon(int localClientNum, int weaponNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_RegisterWeapon")(localClientNum, weaponNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldRebuildTree(int localClientNum, const struct weaponInfo_s* weapInfo, int weaponNum, unsigned char weaponModel, struct XModel* newHands) -> bool
{
  return Zynamic::Forward<bool (int, const struct weaponInfo_s*, int, unsigned char, struct XModel*)>(L"ShouldRebuildTree")(localClientNum, weapInfo, weaponNum, weaponModel, newHands);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldRebuildAnims(int localClientNum, const struct ViewModelInfo* viewModelInfo, int weaponNum) -> bool
{
  return Zynamic::Forward<bool (int, const struct ViewModelInfo*, int)>(L"ShouldRebuildAnims")(localClientNum, viewModelInfo, weaponNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ChangeViewmodelDobj(int localClientNum, const struct playerState_s* ps, int weaponNum, unsigned char weaponModel, struct XModel* newHands, struct XModel* newGoggles, struct XModel* newRocket, bool updateClientInfo, bool forceRebuildTree) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, int, unsigned char, struct XModel*, struct XModel*, struct XModel*, bool, bool)>(L"ChangeViewmodelDobj")(localClientNum, ps, weaponNum, weaponModel, newHands, newGoggles, newRocket, updateClientInfo, forceRebuildTree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ViewmodelRocketShouldBeAttached(int localClientNum, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int)>(L"ViewmodelRocketShouldBeAttached")(localClientNum, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TouchViewModels(int localClientNum, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*)>(L"CG_TouchViewModels")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWeaponViewmodels(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateWeaponViewmodels")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateHandViewmodels(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateHandViewmodels")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayNoteMappedSoundAliases(int localClientNum, const char* noteName, const struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (int, const char*, const struct WeaponDef*)>(L"PlayNoteMappedSoundAliases")(localClientNum, noteName, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProcessWeaponNoteTracks(int localClientNum, const struct playerState_s* predictedPlayerState, bool isViewArms) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, bool)>(L"ProcessWeaponNoteTracks")(localClientNum, predictedPlayerState, isViewArms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterItemVisuals(int localClientNum, int weapIdx) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_RegisterItemVisuals")(localClientNum, weapIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterItems(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_RegisterItems")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalculateWeaponPostion_PositionToADS(struct cg_s* cgameGlob, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct playerState_s*)>(L"CalculateWeaponPostion_PositionToADS")(cgameGlob, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponFlash(int localClientNum, int dobjHandle, int weaponNum, int bViewFlash, unsigned int flashTag) -> void
{
  return Zynamic::Forward<void (int, int, int, int, unsigned int)>(L"WeaponFlash")(localClientNum, dobjHandle, weaponNum, bViewFlash, flashTag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_HoldBreathInit(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_HoldBreathInit")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HoldBreathSoundLerp(int localClientNum, float lerp) -> void
{
  return Zynamic::Forward<void (int, float)>(L"HoldBreathSoundLerp")(localClientNum, lerp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HoldBreathUpdate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"HoldBreathUpdate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewModelPose(const struct DObj* obj, int localClientNum) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int)>(L"CG_UpdateViewModelPose")(obj, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateMinigunSounds(int localClientNum, struct cg_s* cgameGlob, struct centity_s* cent, const struct WeaponDef* weaponDef) -> void
{
  return Zynamic::Forward<void (int, struct cg_s*, struct centity_s*, const struct WeaponDef*)>(L"CG_UpdateMinigunSounds")(localClientNum, cgameGlob, cent, weaponDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateMinigunSpin(int localClientNum, struct cg_s* cgameGlob, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct cg_s*, struct centity_s*)>(L"CG_UpdateMinigunSpin")(localClientNum, cgameGlob, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateMinigunTag(struct cg_s* cgameGlob, struct centity_s* cent, const struct DObj* obj, unsigned short name, int axis, int* partBits) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct centity_s*, const struct DObj*, unsigned short, int, int*)>(L"UpdateMinigunTag")(cgameGlob, cent, obj, name, axis, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateMinigunTags(struct cg_s* cgameGlob, struct centity_s* cent, const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct centity_s*, const struct DObj*, int*)>(L"CG_UpdateMinigunTags")(cgameGlob, cent, obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewModelMinigun(struct cg_s* cgameGlob, struct DObj* obj, const struct WeaponDef* weapDef, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct DObj*, const struct WeaponDef*, struct centity_s*)>(L"CG_UpdateViewModelMinigun")(cgameGlob, obj, weapDef, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewModelStackCounter(struct cg_s* cgameGlob, const struct playerState_s* ps, const struct DObj* obj, const struct WeaponDef* weapDef) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const struct playerState_s*, const struct DObj*, const struct WeaponDef*)>(L"CG_UpdateViewModelStackCounter")(cgameGlob, ps, obj, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldIgnoreHitEntity(int attackerNum, int hitEntNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"ShouldIgnoreHitEntity")(attackerNum, hitEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BulletTrace(int localClientNum, const struct BulletFireParams* bp, const struct WeaponDef* weapDef, const struct centity_s* attacker, struct BulletTraceResults* br, int lastSurfaceType) -> bool
{
  return Zynamic::Forward<bool (int, const struct BulletFireParams*, const struct WeaponDef*, const struct centity_s*, struct BulletTraceResults*, int)>(L"BulletTrace")(localClientNum, bp, weapDef, attacker, br, lastSurfaceType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsEntityNotDoingClientSideBullets(int localClientNum, int entityNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"IsEntityNotDoingClientSideBullets")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireBulletPenetrate(int localClientNum, struct BulletFireParams* bp, unsigned int weaponIndex, const struct centity_s* attacker, float* tracerStart, bool drawTracer, bool isPlayer, struct BulletTraceResults& br, bool traceHit) -> void
{
  return Zynamic::Forward<void (int, struct BulletFireParams*, unsigned int, const struct centity_s*, float*, bool, bool, struct BulletTraceResults&, bool)>(L"FireBulletPenetrate")(localClientNum, bp, weaponIndex, attacker, tracerStart, drawTracer, isPlayer, br, traceHit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BulletTrace_Start(int localClientNum, struct BulletFireParams* bp, unsigned int weaponIndex, const struct centity_s* attacker, float* tracerStart, bool drawTracer, bool isPlayer) -> void
{
  return Zynamic::Forward<void (int, struct BulletFireParams*, unsigned int, const struct centity_s*, float*, bool, bool)>(L"BulletTrace_Start")(localClientNum, bp, weaponIndex, attacker, tracerStart, drawTracer, isPlayer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsPlayerCrouching(struct clientInfo_t* ci, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (struct clientInfo_t*, const struct centity_s*)>(L"CG_IsPlayerCrouching")(ci, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsPlayerProne(struct clientInfo_t* ci, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (struct clientInfo_t*, const struct centity_s*)>(L"CG_IsPlayerProne")(ci, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsPlayerADS(struct clientInfo_t* ci, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (struct clientInfo_t*, const struct centity_s*)>(L"CG_IsPlayerADS")(ci, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GuessSpreadForWeapon(int localClientNum, const struct centity_s* cent, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const struct WeaponDef*, float*, float*)>(L"CG_GuessSpreadForWeapon")(localClientNum, cent, weapDef, minSpread, maxSpread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RandomBulletDir(int randSeed, float* x, float* y) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"RandomBulletDir")(randSeed, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletEndpos(int randSeed, const float spread, const float* start, float* end, float* dir, const float* forwardDir, const float* rightDir, const float* upDir, const float maxRange) -> void
{
  return Zynamic::Forward<void (int, const float, const float*, float*, float*, const float*, const float*, const float*, const float)>(L"CG_BulletEndpos")(randSeed, spread, start, end, dir, forwardDir, rightDir, upDir, maxRange);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerViewOrigin(int localClientNum, const struct playerState_s* ps, float* origin) -> bool
{
  return Zynamic::Forward<bool (int, const struct playerState_s*, float*)>(L"CG_GetPlayerViewOrigin")(localClientNum, ps, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalClientCGameGlobFromEntNum(int entnumber) -> struct cg_s*
{
  return Zynamic::Forward<struct cg_s* (int)>(L"CG_GetLocalClientCGameGlobFromEntNum")(entnumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawBulletImpacts(int localClientNum, const struct centity_s* ent, const unsigned short boneName, const struct playerState_s* ps, unsigned int weapon, int event, bool isPlayer) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const unsigned short, const struct playerState_s*, unsigned int, int, bool)>(L"DrawBulletImpacts")(localClientNum, ent, boneName, ps, weapon, event, isPlayer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShowMuzzleFlash(struct cg_s* cgameGlob, struct centity_s* cent, int bViewModel) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, struct centity_s*, int)>(L"CG_ShowMuzzleFlash")(cgameGlob, cent, bViewModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPlayerWeapon(int localClientNum, const struct GfxScaledPlacement* placement, const struct playerState_s* ps, struct centity_s* cent, int bDrawGun) -> void
{
  return Zynamic::Forward<void (int, const struct GfxScaledPlacement*, const struct playerState_s*, struct centity_s*, int)>(L"CG_AddPlayerWeapon")(localClientNum, placement, ps, cent, bDrawGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_DrawAxisOrigin(struct orientation_t orient, float colorScale) -> void
{
  return Zynamic::Forward<void (struct orientation_t, float)>(L"Weapon_DrawAxisOrigin")(orient, colorScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_DrawTagAxis(int localClientNum, int entityNum, int weaponNum, int bViewModel) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"Weapon_DrawTagAxis")(localClientNum, entityNum, weaponNum, bViewModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Anim_DrawTags(int localClientNum, int entityNum, int weaponNum, struct cpose_t* pose, int flags) -> void
{
  return Zynamic::Forward<void (int, int, int, struct cpose_t*, int)>(L"Anim_DrawTags")(localClientNum, entityNum, weaponNum, pose, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateViewmodelAttachments(int localClientNum, int weaponNum, unsigned char weaponModel, struct weaponInfo_s* weapInfo) -> bool
{
  return Zynamic::Forward<bool (int, int, unsigned char, struct weaponInfo_s*)>(L"UpdateViewmodelAttachments")(localClientNum, weaponNum, weaponModel, weapInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NeedToRebuildViewmodel(int localClientNum, int weaponIndex, unsigned char weaponModel, const struct ViewModelInfo* viewModelInfo, struct weaponInfo_s* weapInfo) -> bool
{
  return Zynamic::Forward<bool (int, int, unsigned char, const struct ViewModelInfo*, struct weaponInfo_s*)>(L"NeedToRebuildViewmodel")(localClientNum, weaponIndex, weaponModel, viewModelInfo, weapInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewWeaponAnim(int localClientNum, int newPlayerstate) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_UpdateViewWeaponAnim")(localClientNum, newPlayerstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_LocalToWorld(const struct cg_s* cgameGlob, float* origin) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*)>(L"CG_CalculateWeaponMovement_LocalToWorld")(cgameGlob, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_Landing(const struct cg_s* cgameGlob, float* origin) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*)>(L"CG_CalculateWeaponMovement_Landing")(cgameGlob, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_SaveOrigin(struct cg_s* cgameGlob, float* origin) -> void
{
  return Zynamic::Forward<void (struct cg_s*, float*)>(L"CG_CalculateWeaponMovement_SaveOrigin")(cgameGlob, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_Debug(const struct cg_s* cgameGlob, float* origin) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*)>(L"CG_CalculateWeaponMovement_Debug")(cgameGlob, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_SaveAngles(struct cg_s* cgameGlob, float* angles, struct GfxScaledPlacement* placement) -> void
{
  return Zynamic::Forward<void (struct cg_s*, float*, struct GfxScaledPlacement*)>(L"CG_CalculateWeaponMovement_SaveAngles")(cgameGlob, angles, placement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateWeaponMovement_ClientSpecific(struct cg_s* cgameGlob, struct GfxScaledPlacement* placement, float* angles) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct GfxScaledPlacement*, float*)>(L"CG_CalculateWeaponMovement_ClientSpecific")(cgameGlob, placement, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BuildWeaponState(struct cg_s* cgameGlob, struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct weaponState_t*)>(L"CG_BuildWeaponState")(cgameGlob, ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SaveWeaponState(const struct weaponState_t* ws, struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (const struct weaponState_t*, struct cg_s*)>(L"CG_SaveWeaponState")(ws, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddViewWeapon(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_AddViewWeapon")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CancelOffhand(struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*)>(L"CG_CancelOffhand")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponCycleAllowed(struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*)>(L"WeaponCycleAllowed")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NextWeapon_f() -> void
{
  return Zynamic::Forward<void ()>(L"CG_NextWeapon_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrevWeapon_f() -> void
{
  return Zynamic::Forward<void ()>(L"CG_PrevWeapon_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VerifyPlayerAltModeWeapon(int localClientNum, unsigned int weaponIndex) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int)>(L"VerifyPlayerAltModeWeapon")(localClientNum, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OutOfAmmoChange(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_OutOfAmmoChange")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NextWeapInCycle(int localClientNum, const struct playerState_s* ps, enum weapInventoryType_t type, unsigned int startWeaponIndex, bool cycleForward, bool skipEmpties, bool skipHaveNoAlts) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct playerState_s*, enum weapInventoryType_t, unsigned int, bool, bool, bool)>(L"NextWeapInCycle")(localClientNum, ps, type, startWeaponIndex, cycleForward, skipEmpties, skipHaveNoAlts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CycleWeapPrimary(int localClientNum, int cycleForward, int bIgnoreEmpty) -> bool
{
  return Zynamic::Forward<bool (int, int, int)>(L"CycleWeapPrimary")(localClientNum, cycleForward, bIgnoreEmpty);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLastWeaponForAlt(const struct cg_s* cgameGlob, const struct playerState_s* ps, unsigned int weapIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct cg_s*, const struct playerState_s*, unsigned int)>(L"CG_GetLastWeaponForAlt")(cgameGlob, ps, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetAltWeapon(const struct cg_s* cgameGlob, int weapIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct cg_s*, int)>(L"CG_GetAltWeapon")(cgameGlob, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AltWeaponToggleIndex(int localClientNum, const struct cg_s* cgameGlob, unsigned int* primaryWeapon) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct cg_s*, unsigned int*)>(L"CG_AltWeaponToggleIndex")(localClientNum, cgameGlob, primaryWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ToggleWeaponAltMode(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"ToggleWeaponAltMode")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActionSlotUsageAllowed(struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*)>(L"ActionSlotUsageAllowed")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActionParms(int* slotResult) -> bool
{
  return Zynamic::Forward<bool (int*)>(L"ActionParms")(slotResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPuttingAwayKillstreakWeapon(int oldWeapon, int newWeapon) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CG_CheckPuttingAwayKillstreakWeapon")(oldWeapon, newWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ActionSlotDown_f() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ActionSlotDown_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ActionSlotUp_f() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ActionSlotUp_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EjectWeaponBrass(int localClientNum, const struct entityState_s* ent, int event, int weapon) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, int, int)>(L"CG_EjectWeaponBrass")(localClientNum, ent, event, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TakeClipOnlyWeaponIfEmpty(int localClientNum, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*)>(L"TakeClipOnlyWeaponIfEmpty")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehicleJolt(struct centity_s* cent, float* origin, float* dir) -> void
{
  return Zynamic::Forward<void (struct centity_s*, float*, float*)>(L"CG_VehicleJolt")(cent, origin, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehicleFire(struct centity_s* cent, const unsigned short tagName) -> void
{
  return Zynamic::Forward<void (struct centity_s*, const unsigned short)>(L"CG_VehicleFire")(cent, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsCharacter(bool isPlayer, int eType) -> bool
{
  return Zynamic::Forward<bool (bool, int)>(L"CG_IsCharacter")(isPlayer, eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon_GenerateMark(struct centity_s* cent, const struct playerState_s* ps, const struct WeaponDef* weaponDef, bool isPlayer) -> bool
{
  return Zynamic::Forward<bool (struct centity_s*, const struct playerState_s*, const struct WeaponDef*, bool)>(L"CG_FireWeapon_GenerateMark")(cent, ps, weaponDef, isPlayer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon_LocalPlayerUsingVehicleWeapon(struct centity_s* cent, const struct playerState_s* ps, int event) -> bool
{
  return Zynamic::Forward<bool (struct centity_s*, const struct playerState_s*, int)>(L"CG_FireWeapon_LocalPlayerUsingVehicleWeapon")(cent, ps, event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon_LocalPlayerUsingTurretWeapon(struct centity_s* cent, const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct centity_s*, const struct playerState_s*)>(L"CG_FireWeapon_LocalPlayerUsingTurretWeapon")(cent, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon_VehicleFire(int localClientNum, struct centity_s* cent, const struct playerState_s* ps, int event, const unsigned short tagName) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct playerState_s*, int, const unsigned short)>(L"CG_FireWeapon_VehicleFire")(localClientNum, cent, ps, event, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon_OriginAndDirection(int localClientNum, struct centity_s* cent, const unsigned short tagName, bool isPlayer, float* origin, float* direction) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const unsigned short, bool, float*, float*)>(L"CG_FireWeapon_OriginAndDirection")(localClientNum, cent, tagName, isPlayer, origin, direction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon(int localClientNum, struct centity_s* cent, int event, const unsigned short tagName, unsigned int weapon, const struct playerState_s* ps, bool leftGun) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int, const unsigned short, unsigned int, const struct playerState_s*, bool)>(L"CG_FireWeapon")(localClientNum, cent, event, tagName, weapon, ps, leftGun);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FakeFireWeapon(int localClientNum, struct centity_s* cent, unsigned int weapon, float* origin, int count) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, unsigned int, float*, int)>(L"CG_FakeFireWeapon")(localClientNum, cent, weapon, origin, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndWeaponFakeFireNotify(int localClientNum, int entNum, struct centity_s* shot_ent, float* origin) -> void
{
  return Zynamic::Forward<void (int, int, struct centity_s*, float*)>(L"CG_SndWeaponFakeFireNotify")(localClientNum, entNum, shot_ent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndWeaponFakeFire(struct snd_weapon_shot* shot, const struct WeaponDef* weaponDef) -> void
{
  return Zynamic::Forward<void (struct snd_weapon_shot*, const struct WeaponDef*)>(L"CG_SndWeaponFakeFire")(shot, weaponDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndWeaponFire(struct snd_weapon_shot* shot) -> void
{
  return Zynamic::Forward<void (struct snd_weapon_shot*)>(L"CG_SndWeaponFire")(shot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndAutoSimReset() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndAutoSimReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndPingAutoSim(struct snd_weapon_shot* shot) -> void
{
  return Zynamic::Forward<void (struct snd_weapon_shot*)>(L"CG_SndPingAutoSim")(shot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndKillAutoSimEnt(union SndEntHandle ent) -> void
{
  return Zynamic::Forward<void (union SndEntHandle)>(L"CG_SndKillAutoSimEnt")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndUpdateAutoSim() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndUpdateAutoSim")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WeaponFireSingle(int localClientNum, union SndEntHandle shooter, unsigned int weapon, bool shooterIsPlayer, bool shooterIsLocalPlayer, bool isLastShotInClip, const float* origin, const float* direction, unsigned int tagName, bool doubleTap) -> void
{
  return Zynamic::Forward<void (int, union SndEntHandle, unsigned int, bool, bool, bool, const float*, const float*, unsigned int, bool)>(L"CG_WeaponFireSingle")(localClientNum, shooter, weapon, shooterIsPlayer, shooterIsLocalPlayer, isLastShotInClip, origin, direction, tagName, doubleTap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WeaponFireFake(int localClientNum, union SndEntHandle shooter, unsigned int weapon, const float* origin, const float* direction, int count) -> void
{
  return Zynamic::Forward<void (int, union SndEntHandle, unsigned int, const float*, const float*, int)>(L"CG_WeaponFireFake")(localClientNum, shooter, weapon, origin, direction, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SpawnTracer(int localClientNum, const float* pstart, const float* pend, int type, float width, float length) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, int, float, float)>(L"CG_SpawnTracer")(localClientNum, pstart, pend, type, width, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcTracerFinalScale(float tracerScaleDistRange, float dist, float tracerScale) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"CalcTracerFinalScale")(tracerScaleDistRange, dist, tracerScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScaleTracer(const float* start, const float* finish, const float* viewOrg, float* startWidth, float* finishWidth) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float*, float*)>(L"ScaleTracer")(start, finish, viewOrg, startWidth, finishWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawTracer(const float* start, const float* finish, const struct refdef_s* refdef, struct localEntity_s* le) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const struct refdef_s*, struct localEntity_s*)>(L"CG_DrawTracer")(start, finish, refdef, le);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalClientGlobalsForEnt(int localClientNum, int entityNum) -> struct cg_s*
{
  return Zynamic::Forward<struct cg_s* (int, int)>(L"CG_GetLocalClientGlobalsForEnt")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetViewDirection(int localClientNum, int entityNum, float* forward, float* right, float* up) -> void
{
  return Zynamic::Forward<void (int, int, float*, float*, float*)>(L"CG_GetViewDirection")(localClientNum, entityNum, forward, right, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcEyePoint(int localClientNum, int entityNum, float* eyePos) -> void
{
  return Zynamic::Forward<void (int, int, float*)>(L"CG_CalcEyePoint")(localClientNum, entityNum, eyePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcMuzzlePoint(int localClientNum, int entityNum, float* muzzle, unsigned int flashTag) -> void
{
  return Zynamic::Forward<void (int, int, float*, unsigned int)>(L"CalcMuzzlePoint")(localClientNum, entityNum, muzzle, flashTag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BulletTrajectoryEffects(int localClientNum, int sourceEntityNum, int weaponIndex, const float* startPos, const float* position, int surfType, unsigned int flashTag, unsigned char impactFlags, int damage, float* tracerStart) -> void
{
  return Zynamic::Forward<void (int, int, int, const float*, const float*, int, unsigned int, unsigned char, int, float*)>(L"BulletTrajectoryEffects")(localClientNum, sourceEntityNum, weaponIndex, startPos, position, surfType, flashTag, impactFlags, damage, tracerStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RandomEffectAxis(const float* forward, float* left, float* up) -> void
{
  return Zynamic::Forward<void (const float*, float*, float*)>(L"CG_RandomEffectAxis")(forward, left, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ImpactEffectForWeapon(int weaponIndex, int surfType, int impactFlags, const struct FxEffectDef** outFx, unsigned int* outSnd) -> void
{
  return Zynamic::Forward<void (int, int, int, const struct FxEffectDef**, unsigned int*)>(L"CG_ImpactEffectForWeapon")(weaponIndex, surfType, impactFlags, outFx, outSnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitEvent_Internal(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, const float* seeThruDecalNormal, int surfType, int event, unsigned char eventParam, int damage, int hitContents, unsigned char boneIndex) -> void
{
  return Zynamic::Forward<void (int, int, int, int, const float*, const float*, const float*, const float*, int, int, unsigned char, int, int, unsigned char)>(L"CG_BulletHitEvent_Internal")(localClientNum, sourceEntityNum, targetEntityNum, weaponIndex, startPos, position, normal, seeThruDecalNormal, surfType, event, eventParam, damage, hitContents, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitEvent_GenExitDir(int localClientNum, int sourceEntityNum, const float* position, float* outExitDir) -> void
{
  return Zynamic::Forward<void (int, int, const float*, float*)>(L"CG_BulletHitEvent_GenExitDir")(localClientNum, sourceEntityNum, position, outExitDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitEvent(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, const float* seeThruDecalNormal, int surfType, int event, unsigned char eventParam, int damage, int hitContents, unsigned char boneIndex) -> void
{
  return Zynamic::Forward<void (int, int, int, int, const float*, const float*, const float*, const float*, int, int, unsigned char, int, int, unsigned char)>(L"CG_BulletHitEvent")(localClientNum, sourceEntityNum, targetEntityNum, weaponIndex, startPos, position, normal, seeThruDecalNormal, surfType, event, eventParam, damage, hitContents, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitClientEvent(int localClientNum, int sourceEntityNum, int weaponNum, int hitEntityNum, const float* startPos, const float* position, int surfType, int event, int damage) -> void
{
  return Zynamic::Forward<void (int, int, int, int, const float*, const float*, int, int, int)>(L"CG_BulletHitClientEvent")(localClientNum, sourceEntityNum, weaponNum, hitEntityNum, startPos, position, surfType, event, damage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DogBloodEvent(int localClientNum, int entnum, float* position, int boneIndex) -> void
{
  return Zynamic::Forward<void (int, int, float*, int)>(L"CG_DogBloodEvent")(localClientNum, entnum, position, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MeleeBloodEvent(int localClientNum, const struct centity_s* cent, int eventParm) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, int)>(L"CG_MeleeBloodEvent")(localClientNum, cent, eventParm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetBaseWeaponForStats(const struct WeaponVariantDef* weapVariantDef) -> void
{
  return Zynamic::Forward<void (const struct WeaponVariantDef*)>(L"CG_SetBaseWeaponForStats")(weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupWeaponConfigString(int configStringIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SetupWeaponConfigString")(configStringIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupWeaponDef(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SetupWeaponDef")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ValidLatestPrimaryWeapIdx(const struct cg_s* cgameGlob, unsigned int weaponIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct cg_s*, unsigned int)>(L"ValidLatestPrimaryWeapIdx")(cgameGlob, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetLastWeaponForAlt(struct cg_s* cgameGlob, const struct playerState_s* ps, unsigned int altWeapon, unsigned int weapon) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, const struct playerState_s*, unsigned int, unsigned int)>(L"CG_SetLastWeaponForAlt")(cgameGlob, ps, altWeapon, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateLastWeaponForAlt(struct cg_s* cgameGlob, const struct playerState_s* ps, unsigned int oldweapon, unsigned int weapon) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, const struct playerState_s*, unsigned int, unsigned int)>(L"CG_UpdateLastWeaponForAlt")(cgameGlob, ps, oldweapon, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SelectWeaponIndex(int localClientNum, const struct playerState_s* ps, unsigned int weaponIndex) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, unsigned int)>(L"CG_SelectWeaponIndex")(localClientNum, ps, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SelectWeaponIndex(int localClientNum, unsigned int weaponIndex) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"CG_SelectWeaponIndex")(localClientNum, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DisplayViewmodelAnim(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DisplayViewmodelAnim")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScopeIsOverlayed(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ScopeIsOverlayed")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurretWeaponIdx(int localClientNum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int)>(L"CG_PlayerTurretWeaponIdx")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerVehicleWeapon(const struct playerState_s* ps, const int localClientNum) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const int)>(L"CG_GetPlayerVehicleWeapon")(ps, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerMeleeWeapon(const struct playerState_s* ps, const int localClientNum) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const int)>(L"CG_GetPlayerMeleeWeapon")(ps, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerWeapon(const struct playerState_s* ps, const int localClientNum) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const int)>(L"CG_GetPlayerWeapon")(ps, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetClientWeapon(int clientNum, const int localClientNum) -> int
{
  return Zynamic::Forward<int (int, const int)>(L"CG_GetClientWeapon")(clientNum, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerUsingScopedTurret(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_PlayerUsingScopedTurret")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerUsingHandbrakeInVehicle(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_PlayerUsingHandbrakeInVehicle")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerVehicleHandbrakeTurnSpeedValue(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetPlayerVehicleHandbrakeTurnSpeedValue")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ApplyWeaponTurnRateCap(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ApplyWeaponTurnRateCap")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MolotovFloat(int localClientNum, const struct centity_s* cent, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const struct entityState_s*)>(L"CG_MolotovFloat")(localClientNum, cent, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponOverlay(int localClientNum, int weaponIndex) -> struct Material*
{
  return Zynamic::Forward<struct Material* (int, int)>(L"CG_GetWeaponOverlay")(localClientNum, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsInGuidedMissile(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"CG_IsInGuidedMissile")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsInGuidedMissileStatic(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"CG_IsInGuidedMissileStatic")(ps);
}

#endif // __UNIMPLEMENTED__
