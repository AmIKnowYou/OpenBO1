//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto IKImport_InitVars(struct IKSystem* ikSystem) -> void
{
  return Zynamic::Forward<void (struct IKSystem*)>(L"IKImport_InitVars")(ikSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Enable() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Enable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Pelvis_Test() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Pelvis_Test")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Foot_Test() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Foot_Test")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Hand_Test() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Hand_Test")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Left_Hand_Lerp_Test() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Left_Hand_Lerp_Test")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Right_Hand_Lerp_Test() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_GetVar_IK_Right_Hand_Lerp_Test")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Debug() -> int
{
  return Zynamic::Forward<int ()>(L"IKImport_GetVar_IK_Debug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Hand_Tuning() -> int
{
  return Zynamic::Forward<int ()>(L"IKImport_GetVar_IK_Hand_Tuning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Hand_Offset_Vec(float* offset) -> void
{
  return Zynamic::Forward<void (float*)>(L"IKImport_GetVar_IK_Hand_Offset_Vec")(offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Hand_Rotation_Vec(float* rotation) -> void
{
  return Zynamic::Forward<void (float*)>(L"IKImport_GetVar_IK_Hand_Rotation_Vec")(rotation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVar_IK_Hand_Tuning(struct IKState* ikState) -> int
{
  return Zynamic::Forward<int (struct IKState*)>(L"IKImport_GetVar_IK_Hand_Tuning")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneStrings(char** outBoneStrings) -> void
{
  return Zynamic::Forward<void (char**)>(L"IKImport_GetBoneStrings")(outBoneStrings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneLookups(struct IKState* ikState, enum IKBoneNames ikBoneName) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, enum IKBoneNames)>(L"IKImport_GetBoneLookups")(ikState, ikBoneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_CalcAnimatedIKBonesBits(struct IKState* ikState, unsigned char* model) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, unsigned char*)>(L"IKImport_CalcAnimatedIKBonesBits")(ikState, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_RecurseSetIKPartBits(const struct DObj* obj, int boneIndex, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int, int*)>(L"IKImport_RecurseSetIKPartBits")(obj, boneIndex, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_SetIKPartBits(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"IKImport_SetIKPartBits")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_CheckIKPartBits(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_CheckIKPartBits")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_AccumulateParentObjBones(struct IKState* ikState, const unsigned char* parentList, int numRootBones, float* transArray, int objBoneIndex, struct DObjAnimMat* matArray, struct DObjAnimMat* localMat) -> void
{
  return Zynamic::Forward<void (struct IKState*, const unsigned char*, int, float*, int, struct DObjAnimMat*, struct DObjAnimMat*)>(L"IKImport_AccumulateParentObjBones")(ikState, parentList, numRootBones, transArray, objBoneIndex, matArray, localMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneMatrixArrayModelBones(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_GetBoneMatrixArrayModelBones")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneMatrixArrayLocalBones(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_GetBoneMatrixArrayLocalBones")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneMatrixArray(struct IKState* ikState, bool isLocalBones) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool)>(L"IKImport_GetBoneMatrixArray")(ikState, isLocalBones);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyIKToSkeletonModelBones(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_ApplyIKToSkeletonModelBones")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyIKToSkeletonLocalBones(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_ApplyIKToSkeletonLocalBones")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyIKToSkeleton(struct IKState* ikState, bool isLocalBones) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool)>(L"IKImport_ApplyIKToSkeleton")(ikState, isLocalBones);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_FetchDObjIKState(const unsigned char* model) -> struct IKState*
{
  return Zynamic::Forward<struct IKState* (const unsigned char*)>(L"IKImport_FetchDObjIKState")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_SetDObjIKState(const unsigned char* model, const struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (const unsigned char*, const struct IKState*)>(L"IKImport_SetDObjIKState")(model, ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsIKEntity_Internal(const unsigned char* model) -> bool
{
  return Zynamic::Forward<bool (const unsigned char*)>(L"IKImport_IsIKEntity_Internal")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsIKEntity(const unsigned char* model) -> bool
{
  return Zynamic::Forward<bool (const unsigned char*)>(L"IKImport_IsIKEntity")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_BypassTerrainMapping(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_BypassTerrainMapping")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyTerrainMapping(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_ApplyTerrainMapping")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyLeftHandIK(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_ApplyLeftHandIK")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ApplyRightHandIK(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_ApplyRightHandIK")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetEntityXform(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_GetEntityXform")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_UpdateCollisionCache(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_UpdateCollisionCache")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_TraceBox(struct IKState* ikState, float* startPos, float* endPos, float boxRadius, float* tracePos, float* outNormal, int hintIndexListItem, float* outTraceFraction, bool bIgnoreStartSolid) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, float*, float*, float, float*, float*, int, float*, bool)>(L"IKImport_TraceBox")(ikState, startPos, endPos, boxRadius, tracePos, outNormal, hintIndexListItem, outTraceFraction, bIgnoreStartSolid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_DrawAxisOrigin(float* mat44[0x4], float colorScale) -> void
{
  return Zynamic::Forward<void (float*[0x4], float)>(L"IKImport_DrawAxisOrigin")(mat44, colorScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_DrawLine(float* start, float* end, int colorType) -> void
{
  return Zynamic::Forward<void (float*, float*, int)>(L"IKImport_DrawLine")(start, end, colorType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_DebugPrint(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"IKImport_DebugPrint")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetClientInfo(struct IKState* ikState) -> struct clientInfo_t*
{
  return Zynamic::Forward<struct clientInfo_t* (struct IKState*)>(L"IKImport_GetClientInfo")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_DrawDebugSkeleton(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_DrawDebugSkeleton")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetFrameNum() -> int
{
  return Zynamic::Forward<int ()>(L"IKImport_GetFrameNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsMainThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"IKImport_IsMainThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetLocalClientIndex(struct IKState* ikState) -> int
{
  return Zynamic::Forward<int (struct IKState*)>(L"IKImport_GetLocalClientIndex")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetLocalClientIndexForModel(unsigned char* model) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"IKImport_GetLocalClientIndexForModel")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsServerModel(unsigned char* model) -> bool
{
  return Zynamic::Forward<bool (unsigned char*)>(L"IKImport_IsServerModel")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsLocalClient(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsLocalClient")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsLeftHandGripIKActive(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsLeftHandGripIKActive")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsClient(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsClient")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetLerpEntityState(struct IKState* ikState, const int inEntityNum) -> struct LerpEntityState*
{
  return Zynamic::Forward<struct LerpEntityState* (struct IKState*, const int)>(L"IKImport_GetLerpEntityState")(ikState, inEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetEntityState(struct IKState* ikState, const int inEntityNum) -> struct entityState_s*
{
  return Zynamic::Forward<struct entityState_s* (struct IKState*, const int)>(L"IKImport_GetEntityState")(ikState, inEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_ConditionLayerTest(bool condition, enum IKLayerNames thisLayer, const enum IKLayerNames* layers, int arraySize) -> bool
{
  return Zynamic::Forward<bool (bool, enum IKLayerNames, const enum IKLayerNames*, int)>(L"IKImport_ConditionLayerTest")(condition, thisLayer, layers, arraySize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetWeaponIndex(struct IKState* ikState) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct IKState*)>(L"IKImport_GetWeaponIndex")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetWeaponVariantDef(struct IKState* ikState) -> const struct WeaponVariantDef*
{
  return Zynamic::Forward<const struct WeaponVariantDef* (struct IKState*)>(L"IKImport_GetWeaponVariantDef")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetWeaponDef(struct IKState* ikState) -> const struct WeaponDef*
{
  return Zynamic::Forward<const struct WeaponDef* (struct IKState*)>(L"IKImport_GetWeaponDef")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsVehicleRemoteControl(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsVehicleRemoteControl")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetLayerLerp(struct IKState* ikState, enum IKLayerNames layerName, float layerLerpTime) -> float
{
  return Zynamic::Forward<float (struct IKState*, enum IKLayerNames, float)>(L"IKImport_GetLayerLerp")(ikState, layerName, layerLerpTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetLayerLerp(struct IKState* ikState, enum IKLayerNames layerName) -> float
{
  return Zynamic::Forward<float (struct IKState*, enum IKLayerNames)>(L"IKImport_GetLayerLerp")(ikState, layerName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetGunnerCrouch(struct IKState* ikState) -> float
{
  return Zynamic::Forward<float (struct IKState*)>(L"IKImport_GetGunnerCrouch")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsMountedTurret(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsMountedTurret")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsFiring(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsFiring")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsCrouching(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsCrouching")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsProne(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsProne")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetBoneControllers(struct IKState* ikState, float* outAngles) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, float*)>(L"IKImport_GetBoneControllers")(ikState, outAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetVelocity(struct IKState* ikState, float* velocity) -> void
{
  return Zynamic::Forward<void (struct IKState*, float*)>(L"IKImport_GetVelocity")(ikState, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsSpectating(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsSpectating")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsMoving(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IKImport_IsMoving")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetIKPriority(struct IKState* ikState) -> int
{
  return Zynamic::Forward<int (struct IKState*)>(L"IKImport_GetIKPriority")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_SetWeaponOffsetType(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_SetWeaponOffsetType")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_UpdateWeaponClass(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_UpdateWeaponClass")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetActorNum(unsigned char* model) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"IKImport_GetActorNum")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_IsValidEntityType(const unsigned char* model) -> bool
{
  return Zynamic::Forward<bool (const unsigned char*)>(L"IKImport_IsValidEntityType")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetPitchWeaponOffset(struct IKState* ikState, bool bIsPitchDirectionUp, float* weapOfsOut) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool, float*)>(L"IKImport_GetPitchWeaponOffset")(ikState, bIsPitchDirectionUp, weapOfsOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_InitCollisionCache(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_InitCollisionCache")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_Profiler(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IKImport_Profiler")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IKImport_GetMaxLayerLerp(struct IKState* ikState) -> float
{
  return Zynamic::Forward<float (struct IKState*)>(L"IKImport_GetMaxLayerLerp")(ikState);
}

#endif // __UNIMPLEMENTED__
