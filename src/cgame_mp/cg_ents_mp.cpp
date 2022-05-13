//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_GetLightingOrigin(struct centity_s* cent, float* lightingOrigin) -> void
{
  return Zynamic::Forward<void (struct centity_s*, float*)>(L"CG_GetLightingOrigin")(cent, lightingOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetShadowHintForRefEntity(int eFlags) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int)>(L"CG_GetShadowHintForRefEntity")(eFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_General(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_General")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Item(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Item")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityEffects(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_EntityEffects")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMG42Anims(struct centity_s* cent) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (struct centity_s*)>(L"CG_GetMG42Anims")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FakeEntityEffects(int localClientNum, struct centity_s* cent, struct fake_centity_s* fakeEnt) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, struct fake_centity_s*)>(L"CG_FakeEntityEffects")(localClientNum, cent, fakeEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Player_PreControllers(struct DObj* obj, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct DObj*, struct centity_s*)>(L"CG_Player_PreControllers")(obj, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_mg42_OverheatUpdate(int localClientNum, const struct DObj* obj, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, const struct DObj*, struct centity_s*)>(L"CG_mg42_OverheatUpdate")(localClientNum, obj, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_mg42_PreControllers(struct DObj* obj, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct DObj*, struct centity_s*)>(L"CG_mg42_PreControllers")(obj, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsCarriedTurretEnt(int localClientNum, struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (int, struct centity_s*)>(L"CG_IsCarriedTurretEnt")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_mg42(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_mg42")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetBallisticAngles(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"SetBallisticAngles")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsWeaponRetrieveable(int localClientNum, const struct centity_s* cent, const struct WeaponDef* weapDef, const unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*, const struct WeaponDef*, const unsigned int)>(L"IsWeaponRetrieveable")(localClientNum, cent, weapDef, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Missile(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Missile")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateBModelWorldBounds(int localClientNum, struct centity_s* cent, int forceFilter) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_UpdateBModelWorldBounds")(localClientNum, cent, forceFilter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScriptMover_GetBurnFraction(int localClientNum, struct centity_s* cent) -> float
{
  return Zynamic::Forward<float (int, struct centity_s*)>(L"CG_ScriptMover_GetBurnFraction")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScriptMover_GetDObj(int localClientNum, struct centity_s* cent) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (int, struct centity_s*)>(L"CG_ScriptMover_GetDObj")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScriptMover(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_ScriptMover")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldAdjustPositionForMover(const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*)>(L"ShouldAdjustPositionForMover")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AdjustPositionForMover(int localClientNum, const float* in, int moverNum, int fromTime, int toTime, float* out, float* outDeltaAngles) -> void
{
  return Zynamic::Forward<void (int, const float*, int, int, int, float*, float*)>(L"CG_AdjustPositionForMover")(localClientNum, in, moverNum, fromTime, toTime, out, outDeltaAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetFrameInterpolation(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SetFrameInterpolation")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_GetFootColor(enum eFoot foot, float* color) -> void
{
  return Zynamic::Forward<void (enum eFoot, float*)>(L"CScr_GetFootColor")(foot, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_isSoundAlias(const char* notifyName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"CG_isSoundAlias")(notifyName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayClientSoundNoteTracks(int localClientNum, int entnum, const float* origin, const char* notifyName, bool isViewArms) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const char*, bool)>(L"CG_PlayClientSoundNoteTracks")(localClientNum, entnum, origin, notifyName, isViewArms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugDrawFootFalls(int localClientNum, const struct centity_s* cent, enum eFoot foot) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, enum eFoot)>(L"CG_DebugDrawFootFalls")(localClientNum, cent, foot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoFootStep(int localClientNum, struct centity_s* cent, enum eFoot foot) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, enum eFoot)>(L"CG_DoFootStep")(localClientNum, cent, foot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DoFootsteps(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_DoFootsteps")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessClientNote(const class XAnimClientNotify* note, int entityNum, struct cg_s* cgameGlob, struct centity_s* cent, int localClientNum) -> void
{
  return Zynamic::Forward<void (const class XAnimClientNotify*, int, struct cg_s*, struct centity_s*, int)>(L"CG_ProcessClientNote")(note, entityNum, cgameGlob, cent, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessClientNoteTracks(int localClientNum, int entityNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ProcessClientNoteTracks")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateClientDobjPartBits(struct centity_s* cent, int entnum, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int, int)>(L"CG_UpdateClientDobjPartBits")(cent, entnum, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPacketEntity(int localClientNum, int entnum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_AddPacketEntity")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LoopFx(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_LoopFx")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClampPrimaryLightOrigin(struct GfxLight* light, const struct ComPrimaryLight* refLight) -> void
{
  return Zynamic::Forward<void (struct GfxLight*, const struct ComPrimaryLight*)>(L"CG_ClampPrimaryLightOrigin")(light, refLight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClampPrimaryLightDir(struct GfxLight* light, const struct ComPrimaryLight* refLight) -> void
{
  return Zynamic::Forward<void (struct GfxLight*, const struct ComPrimaryLight*)>(L"CG_ClampPrimaryLightDir")(light, refLight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrimaryLight(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_PrimaryLight")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessFakeEntity(int localClientNum, struct fake_centity_s* fakeEnt) -> void
{
  return Zynamic::Forward<void (int, struct fake_centity_s*)>(L"CG_ProcessFakeEntity")(localClientNum, fakeEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldDelayEntityPacketPostPS(int localClientNum, struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (int, struct centity_s*)>(L"CG_ShouldDelayEntityPacketPostPS")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdatePacketEnt(int localClientNum, int entnum, int timeNow, int* postPSEntNum, bool contextKey) -> void
{
  return Zynamic::Forward<void (int, int, int, int*, bool)>(L"UpdatePacketEnt")(localClientNum, entnum, timeNow, postPSEntNum, contextKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DelayListInit(struct DelayListInfo* listInfo) -> void
{
  return Zynamic::Forward<void (struct DelayListInfo*)>(L"DelayListInit")(listInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DelayListAdd(struct DelayListInfo* listInfo, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct DelayListInfo*, struct centity_s*)>(L"DelayListAdd")(listInfo, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DelayListRemove(struct DelayListInfo* listInfo, struct centity_s* cent, struct centity_s* centPrev) -> void
{
  return Zynamic::Forward<void (struct DelayListInfo*, struct centity_s*, struct centity_s*)>(L"DelayListRemove")(listInfo, cent, centPrev);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EntPacketUpdateNeedsDelayed(int localClientNum, struct centity_s* cent, bool contextKey) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*, bool)>(L"EntPacketUpdateNeedsDelayed")(localClientNum, cent, contextKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateDelayedPacketEnts(int localClientNum, struct DelayListInfo* delayList, int* postPSEntNum, bool contextKey) -> void
{
  return Zynamic::Forward<void (int, struct DelayListInfo*, int*, bool)>(L"UpdateDelayedPacketEnts")(localClientNum, delayList, postPSEntNum, contextKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPacketEntities(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_AddPacketEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjUpdateInfo(const struct cg_s* cgameGlob, struct DObj* obj, int notifyFlags) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct DObj*, int)>(L"CG_DObjUpdateInfo")(cgameGlob, obj, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetLocalBoneMatrix(const struct cpose_t* pose, struct DObj* obj, int boneIndex) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct cpose_t*, struct DObj*, int)>(L"CG_DObjGetLocalBoneMatrix")(pose, obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetLocalTagMatrix(const struct cpose_t* pose, struct DObj* obj, unsigned int tagName) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct cpose_t*, struct DObj*, unsigned int)>(L"CG_DObjGetLocalTagMatrix")(pose, obj, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldBoneMatrix(const struct cpose_t* pose, struct DObj* obj, int boneIndex, float* tagMat[0x3], float* origin) -> int
{
  return Zynamic::Forward<int (const struct cpose_t*, struct DObj*, int, float*[0x3], float*)>(L"CG_DObjGetWorldBoneMatrix")(pose, obj, boneIndex, tagMat, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldTagMatrix(const struct cpose_t* pose, struct DObj* obj, unsigned int tagName, float* tagMat[0x3], float* origin) -> int
{
  return Zynamic::Forward<int (const struct cpose_t*, struct DObj*, unsigned int, float*[0x3], float*)>(L"CG_DObjGetWorldTagMatrix")(pose, obj, tagName, tagMat, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldTagPos(const struct cpose_t* pose, struct DObj* obj, unsigned int tagName, float* pos) -> int
{
  return Zynamic::Forward<int (const struct cpose_t*, struct DObj*, unsigned int, float*)>(L"CG_DObjGetWorldTagPos")(pose, obj, tagName, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPose(int localClientNum, int handle) -> const struct cpose_t*
{
  return Zynamic::Forward<const struct cpose_t* (int, int)>(L"CG_GetPose")(localClientNum, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Vehicle(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Vehicle")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StartFx(int localClientNum, struct centity_s* cent, int startAtTime) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, struct centity_s*, int)>(L"CG_StartFx")(localClientNum, cent, startAtTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Fx(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Fx")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InterpolateEntityPosition(struct cg_s* cgameGlob, struct centity_s* cent, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct centity_s*, int)>(L"CG_InterpolateEntityPosition")(cgameGlob, cent, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LerpTrajectory(const struct cg_s* cgameGlob, struct trajectory_t* trFrom, struct trajectory_t* trTo, float lerp, struct trajectory_t* trResult, bool isAngle) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct trajectory_t*, struct trajectory_t*, float, struct trajectory_t*, bool)>(L"CG_LerpTrajectory")(cgameGlob, trFrom, trTo, lerp, trResult, isAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InterpolateVehicleDriver(const struct cg_s* cgameGlob, struct centity_s* cent, int curTime) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct centity_s*, int)>(L"CG_InterpolateVehicleDriver")(cgameGlob, cent, curTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsLocalClientDriving(const struct cg_s* cgameGlob, int vehicleEntNum) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, int)>(L"IsLocalClientDriving")(cgameGlob, vehicleEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnyLocalClientDriving(struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (struct centity_s*)>(L"AnyLocalClientDriving")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldInterpolateFromNitrousVehicleLocally(const struct cg_s* cgameGlob, struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, struct centity_s*)>(L"ShouldInterpolateFromNitrousVehicleLocally")(cgameGlob, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldUpdateNitrousVehicleFromNetwork(const struct cg_s* cgameGlob, struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, struct centity_s*)>(L"ShouldUpdateNitrousVehicleFromNetwork")(cgameGlob, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InterpolateVehicle(const struct cg_s* cgameGlob, struct centity_s* cent, int curTime) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct centity_s*, int)>(L"CG_InterpolateVehicle")(cgameGlob, cent, curTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CreateRagdollObject(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_CreateRagdollObject")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateRagdollPose(struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CG_UpdateRagdollPose")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcEntityRagdollPositions(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_CalcEntityRagdollPositions")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcEntityLerpPositions(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_CalcEntityLerpPositions")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetAnimations(int localClientNum, int entIndex, int entType) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (int, int, int)>(L"CG_GetAnimations")(localClientNum, entIndex, entType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTags(struct centity_s* ent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CG_UpdateTags")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddClientScriptAttachedModel(struct centity_s* cent, struct DObjModel_s* dobjModels, unsigned int numModels, int localClientNum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct centity_s*, struct DObjModel_s*, unsigned int, int)>(L"CG_AddClientScriptAttachedModel")(cent, dobjModels, numModels, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddVehicleAttachedModel(struct centity_s* cent, struct DObjModel_s* dobjModels, unsigned int numModels, int localClientNum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct centity_s*, struct DObjModel_s*, unsigned int, int)>(L"CG_AddVehicleAttachedModel")(cent, dobjModels, numModels, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddScriptMoverAttachedModel(struct centity_s* cent, struct DObjModel_s* dobjModels, unsigned int numModels, int localClientNum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct centity_s*, struct DObjModel_s*, unsigned int, int)>(L"CG_AddScriptMoverAttachedModel")(cent, dobjModels, numModels, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PreProcess_GetDObj(int localClientNum, int entIndex, int entType, struct XModel* model, struct XModel* model2) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (int, int, int, struct XModel*, struct XModel*)>(L"CG_PreProcess_GetDObj")(localClientNum, entIndex, entType, model, model2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjCalcBone(const struct cpose_t* pose, struct DObj* obj, int boneIndex) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, struct DObj*, int)>(L"CG_DObjCalcBone")(pose, obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearUnion(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_ClearUnion")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetUnionType(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_SetUnionType")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePoseUnion(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdatePoseUnion")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagCallback(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_ClientFlagCallback")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessEntity(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_ProcessEntity")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessFxEntity(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_ProcessFxEntity")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcFxEntityLerpPositions(struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CG_CalcFxEntityLerpPositions")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPacketFxEntity(int localClientNum, int entnum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_AddPacketFxEntity")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseOrigin(const struct cpose_t* pose, float* origin) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, float*)>(L"CG_GetPoseOrigin")(pose, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseAxis(const struct cpose_t* pose, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, float*[0x3])>(L"CG_GetPoseAxis")(pose, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseQuat(const struct cpose_t* pose, float* quat) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, float*)>(L"CG_GetPoseQuat")(pose, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityOrigin(int localClientNum, unsigned int entnum) -> const float*
{
  return Zynamic::Forward<const float* (int, unsigned int)>(L"CG_GetEntityOrigin")(localClientNum, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelNumBones(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelNumBones")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetSkinCacheEntry(const struct cpose_t* pose) -> struct GfxSkinCacheEntry*
{
  return Zynamic::Forward<struct GfxSkinCacheEntry* (const struct cpose_t*)>(L"CG_GetSkinCacheEntry")(pose);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PredictiveSkinCEntity(struct GfxSceneEntity* sceneEnt) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*)>(L"CG_PredictiveSkinCEntity")(sceneEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetOrigin(struct centity_s* ent, const float* origin) -> void
{
  return Zynamic::Forward<void (struct centity_s*, const float*)>(L"CG_SetOrigin")(ent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetAngle(struct centity_s* ent, const float* angle) -> void
{
  return Zynamic::Forward<void (struct centity_s*, const float*)>(L"CG_SetAngle")(ent, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WhatModelShouldLocalPlayerSee(int localClientNum, const struct cg_s* cgameGlob, const struct centity_s* cent, int centTeam, int friendlyModel, int enemyModel) -> int
{
  return Zynamic::Forward<int (int, const struct cg_s*, const struct centity_s*, int, int, int)>(L"CG_WhatModelShouldLocalPlayerSee")(localClientNum, cgameGlob, cent, centTeam, friendlyModel, enemyModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetDriverClientNumFromVehicle(int localClientNum, const struct centity_s* vehicle) -> int
{
  return Zynamic::Forward<int (int, const struct centity_s*)>(L"CG_GetDriverClientNumFromVehicle")(localClientNum, vehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagResetAll(struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CG_ClientFlagResetAll")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagSet(struct centity_s* cent, int flagNum) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int)>(L"CG_ClientFlagSet")(cent, flagNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagClear(struct centity_s* cent, int flagNum) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int)>(L"CG_ClientFlagClear")(cent, flagNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagIsActive(const struct centity_s* cent, int flagNum) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*, int)>(L"CG_ClientFlagIsActive")(cent, flagNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClientFlagIsSet(const struct centity_s* cent, int flagNum) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*, int)>(L"CG_ClientFlagIsSet")(cent, flagNum);
}

#endif // __UNIMPLEMENTED__
