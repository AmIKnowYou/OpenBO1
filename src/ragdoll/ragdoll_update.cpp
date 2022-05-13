//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetDObjLocalBoneMatrix(const struct cpose_t* pose, struct DObj* obj, unsigned char boneIndex) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct cpose_t*, struct DObj*, unsigned char)>(L"Ragdoll_GetDObjLocalBoneMatrix")(pose, obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetDObjWorldBoneOriginQuat(int localClientNum, const struct cpose_t* pose, struct DObj* obj, unsigned char boneIndex, float* origin, float* quat) -> bool
{
  return Zynamic::Forward<bool (int, const struct cpose_t*, struct DObj*, unsigned char, float*, float*)>(L"Ragdoll_GetDObjWorldBoneOriginQuat")(localClientNum, pose, obj, boneIndex, origin, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetDObjBaseBoneMatrix(struct DObj* obj, unsigned char boneIndex, struct DObjAnimMat* outMat) -> void
{
  return Zynamic::Forward<void (struct DObj*, unsigned char, struct DObjAnimMat*)>(L"Ragdoll_GetDObjBaseBoneMatrix")(obj, boneIndex, outMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetDObjBaseBoneOrigin(struct DObj* obj, const float* offset, const float* axis[0x3], unsigned char boneIndex, float* origin) -> bool
{
  return Zynamic::Forward<bool (struct DObj*, const float*, const float*[0x3], unsigned char, float*)>(L"Ragdoll_GetDObjBaseBoneOrigin")(obj, offset, axis, boneIndex, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetDObjBaseBoneOriginQuat(struct DObj* obj, const float* offset, const float* axis[0x3], unsigned char boneIndex, float* origin, float* quat) -> bool
{
  return Zynamic::Forward<bool (struct DObj*, const float*, const float*[0x3], unsigned char, float*, float*)>(L"Ragdoll_GetDObjBaseBoneOriginQuat")(obj, offset, axis, boneIndex, origin, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_PoseInvAxis(const struct cpose_t* pose, float* invAxis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, float*[0x3])>(L"Ragdoll_PoseInvAxis")(pose, invAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_AnimMatToMat43(const struct DObjAnimMat* mat, float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, float*[0x3])>(L"Ragdoll_AnimMatToMat43")(mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SnapshotBaseLerpBones(struct RagdollBody* body, struct BoneOrientation* snapshot) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, struct BoneOrientation*)>(L"Ragdoll_SnapshotBaseLerpBones")(body, snapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SnapshotBonePositions(struct RagdollBody* body, struct BoneOrientation* boneSnapshot) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, struct BoneOrientation*)>(L"Ragdoll_SnapshotBonePositions")(body, boneSnapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SnapshotAnimOrientations(struct RagdollBody* body, struct BoneOrientation* snapshot) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, struct BoneOrientation*)>(L"Ragdoll_SnapshotAnimOrientations")(body, snapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SetCurrentPoseFromSnapshot(struct RagdollBody* body, struct BoneOrientation* snapshot) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, struct BoneOrientation*)>(L"Ragdoll_SetCurrentPoseFromSnapshot")(body, snapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ValidateBodyObj(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_ValidateBodyObj")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreatePhysObj(struct RagdollBody* body, struct BoneDef* boneDef, struct Bone* bone) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, struct BoneDef*, struct Bone*)>(L"Ragdoll_CreatePhysObj")(body, boneDef, bone);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreatePhysJoint(struct RagdollBody* body, struct JointDef* jointDef, struct Joint* joint) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, struct JointDef*, struct Joint*)>(L"Ragdoll_CreatePhysJoint")(body, jointDef, joint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreatePhysJoints(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_CreatePhysJoints")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreatePhysObjs(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_CreatePhysObjs")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_DestroyPhysJoints(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_DestroyPhysJoints")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_DestroyPhysObjs(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_DestroyPhysObjs")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SnapshotBaseLerpOffsets(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_SnapshotBaseLerpOffsets")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreateBodyPhysics(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_CreateBodyPhysics")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_RemoveBodyPhysics(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_RemoveBodyPhysics")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_RebindBody(int ragdollHandle) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Ragdoll_RebindBody")(ragdollHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ValidatePrecalcBoneDef(struct RagdollDef* def, struct BoneDef* bone) -> bool
{
  return Zynamic::Forward<bool (struct RagdollDef*, struct BoneDef*)>(L"Ragdoll_ValidatePrecalcBoneDef")(def, bone);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetTorsoPosition(struct RagdollBody* body, float* center) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, float*)>(L"Ragdoll_GetTorsoPosition")(body, center);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ExplosionEvent(int localClientNum, bool isCylinder, const float* origin, float innerRadius, float outerRadius, const float* impulse, float inScale) -> void
{
  return Zynamic::Forward<void (int, bool, const float*, float, float, const float*, float)>(L"Ragdoll_ExplosionEvent")(localClientNum, isCylinder, origin, innerRadius, outerRadius, impulse, inScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Launch(const int localClientNum, int ragdollHandle, const float* force, const enum hitLocation_t hitloc) -> void
{
  return Zynamic::Forward<void (const int, int, const float*, const enum hitLocation_t)>(L"Ragdoll_Launch")(localClientNum, ragdollHandle, force, hitloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_LaunchUpdate(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_LaunchUpdate")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_EstimateInitialVelocities(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_EstimateInitialVelocities")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Attach(const int localClientNum, int ragdollHandle, int attachEnt, const enum hitLocation_t hitloc) -> void
{
  return Zynamic::Forward<void (const int, int, int, const enum hitLocation_t)>(L"Ragdoll_Attach")(localClientNum, ragdollHandle, attachEnt, hitloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_AttachUpdate(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_AttachUpdate")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BoneTrace(struct trace_t* trace, struct trace_t* revTrace, const float* start, const float* end) -> bool
{
  return Zynamic::Forward<bool (struct trace_t*, struct trace_t*, const float*, const float*)>(L"Ragdoll_BoneTrace")(trace, revTrace, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_TunnelTest(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_TunnelTest")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_PrintTunnelFail(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_PrintTunnelFail")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_EnterTunnelTest(struct RagdollBody* body, enum RagdollBodyState prevState, enum RagdollBodyState curState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_EnterTunnelTest")(body, prevState, curState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_UpdateVelocityCapture(struct RagdollBody* body, int msec) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, int)>(L"Ragdoll_UpdateVelocityCapture")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_UpdateFriction(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_UpdateFriction")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_DebugRender(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_DebugRender")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CheckIdle(struct RagdollBody* body, int msec) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, int)>(L"Ragdoll_CheckIdle")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_EnterDead(struct RagdollBody* body, enum RagdollBodyState prevState, enum RagdollBodyState curState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_EnterDead")(body, prevState, curState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ExitDead(struct RagdollBody* body, enum RagdollBodyState prevState, enum RagdollBodyState curState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_ExitDead")(body, prevState, curState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ExitDObjWait(struct RagdollBody* body, enum RagdollBodyState prevState, enum RagdollBodyState curState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_ExitDObjWait")(body, prevState, curState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ExitIdle(struct RagdollBody* body, enum RagdollBodyState curState, enum RagdollBodyState newState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_ExitIdle")(body, curState, newState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_EnterIdle(struct RagdollBody* body, enum RagdollBodyState curState, enum RagdollBodyState newState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_EnterIdle")(body, curState, newState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_UpdateDObjWait(struct RagdollBody* body, int msec) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, int)>(L"Ragdoll_UpdateDObjWait")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_EnterDobjWait(struct RagdollBody* body, enum RagdollBodyState prevState, enum RagdollBodyState curState) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState, enum RagdollBodyState)>(L"Ragdoll_EnterDobjWait")(body, prevState, curState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_FilterBonePositions(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_FilterBonePositions")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_UpdateRunning(struct RagdollBody* body, int msec) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, int)>(L"Ragdoll_UpdateRunning")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyNewState(struct RagdollBody* body, enum RagdollBodyState state) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*, enum RagdollBodyState)>(L"Ragdoll_BodyNewState")(body, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyUpdate(int msec, struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (int, struct RagdollBody*)>(L"Ragdoll_BodyUpdate")(msec, body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Update(int msec) -> void
{
  return Zynamic::Forward<void (int)>(L"Ragdoll_Update")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_RemoveConstraintsForRope(int rope_id) -> void
{
  return Zynamic::Forward<void (int)>(L"Ragdoll_RemoveConstraintsForRope")(rope_id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetRBForBone(int entnum, unsigned int boneName) -> int
{
  return Zynamic::Forward<int (int, unsigned int)>(L"Ragdoll_GetRBForBone")(entnum, boneName);
}

#endif // __UNIMPLEMENTED__
