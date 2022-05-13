//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ikMatrixIdentity44(float* out[0x4]) -> void
{
  return Zynamic::Forward<void (float*[0x4])>(L"ikMatrixIdentity44")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMatrixSet44(float* out[0x4], const float* origin, const float* axis[0x3], float scale) -> void
{
  return Zynamic::Forward<void (float*[0x4], const float*, const float*[0x3], float)>(L"ikMatrixSet44")(out, origin, axis, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMatrixTransformVector34(const float* in1, const float* in2[0x4], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x4], float*)>(L"ikMatrixTransformVector34")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikQuatTransToMatrix44(const float* quat, const float* trans, float* out[0x4]) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*[0x4])>(L"ikQuatTransToMatrix44")(quat, trans, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMatrix44ToQuatTrans(float* mat[0x4], float* quat, float* trans) -> void
{
  return Zynamic::Forward<void (float*[0x4], float*, float*)>(L"ikMatrix44ToQuatTrans")(mat, quat, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikAxisToQuat(const float* mat[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"ikAxisToQuat")(mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMat44Set(float* mat[0x4], const float* v1, const float* v2, const float* v3, const float* pos) -> void
{
  return Zynamic::Forward<void (float*[0x4], const float*, const float*, const float*, const float*)>(L"ikMat44Set")(mat, v1, v2, v3, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikCalcBoneModelMatrix_r(struct IKState* ikState, int boneNum, float* inMatArray, float* out[0x4]) -> void
{
  return Zynamic::Forward<void (struct IKState*, int, float*, float*[0x4])>(L"ikCalcBoneModelMatrix_r")(ikState, boneNum, inMatArray, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikCalcBoneModelMatrix(struct IKState* ikState, int boneNum, float* inMatArray, float* out[0x4]) -> void
{
  return Zynamic::Forward<void (struct IKState*, int, float*, float*[0x4])>(L"ikCalcBoneModelMatrix")(ikState, boneNum, inMatArray, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikSolve2D(const float* BaseJoint, const float* ModelTarget, float UpperIKc, float LowerIKc, float UpperIKInvc, float LowerIKInvc, float* ModelTargetDir, float& SinUpper, float& CosUpper, float& SinLower, float& CosLower) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float, float, float, float*, float&, float&, float&, float&)>(L"ikSolve2D")(BaseJoint, ModelTarget, UpperIKc, LowerIKc, UpperIKInvc, LowerIKInvc, ModelTargetDir, SinUpper, CosUpper, SinLower, CosLower);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMap2DTo3D(float UpperLimbLength, float SinUpper, float CosUpper, float SinLower, float CosLower, const float* ModelBaseJoint, const float* ModelTargetDir, const float* ModelMidJointDir, float sinTwist, float cosTwist, float* UpperLocalToModel[0x4], float* LowerLocalToModel[0x4]) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, const float*, const float*, const float*, float, float, float*[0x4], float*[0x4])>(L"ikMap2DTo3D")(UpperLimbLength, SinUpper, CosUpper, SinLower, CosLower, ModelBaseJoint, ModelTargetDir, ModelMidJointDir, sinTwist, cosTwist, UpperLocalToModel, LowerLocalToModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikSolveLegJoint(struct IKState* ikState, struct IKJointBones* jointBones, struct IKJointVars* jointVars, float* footPos, float* outParentMat[0x4], float* outJointMat[0x4], bool flipHack) -> void
{
  return Zynamic::Forward<void (struct IKState*, struct IKJointBones*, struct IKJointVars*, float*, float*[0x4], float*[0x4], bool)>(L"ikSolveLegJoint")(ikState, jointBones, jointVars, footPos, outParentMat, outJointMat, flipHack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikSolveArmJoint(struct IKState* ikState, struct IKJointBones* jointBones, struct IKJointVars* jointVars, float* handPos, float* outParentMat[0x4], float* outJointMat[0x4], bool flipHack) -> void
{
  return Zynamic::Forward<void (struct IKState*, struct IKJointBones*, struct IKJointVars*, float*, float*[0x4], float*[0x4], bool)>(L"ikSolveArmJoint")(ikState, jointBones, jointVars, handPos, outParentMat, outJointMat, flipHack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_FlipHack(float* mat[0x4]) -> void
{
  return Zynamic::Forward<void (float*[0x4])>(L"IK_FlipHack")(mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikNormalizedMatrixAssert_func(float* mat[0x4]) -> void
{
  return Zynamic::Forward<void (float*[0x4])>(L"ikNormalizedMatrixAssert_func")(mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikRotateBone(struct IKState* ikState, enum IKBoneNames boneName, float* rot, bool local) -> void
{
  return Zynamic::Forward<void (struct IKState*, enum IKBoneNames, float*, bool)>(L"ikRotateBone")(ikState, boneName, rot, local);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ikMatrixLerp44(float* from[0x4], float* to[0x4], float lerp, float* res[0x4]) -> void
{
  return Zynamic::Forward<void (float*[0x4], float*[0x4], float, float*[0x4])>(L"ikMatrixLerp44")(from, to, lerp, res);
}

#endif // __UNIMPLEMENTED__
