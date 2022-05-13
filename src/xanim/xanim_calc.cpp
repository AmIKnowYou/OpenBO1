//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XAnim_SetTime(const float time, const int frameCount, struct XAnimTime* animTime) -> void
{
  return Zynamic::Forward<void (const float, const int, struct XAnimTime*)>(L"XAnim_SetTime")(time, frameCount, animTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_GetTimeIndex<unsigned char>(const struct XAnimTime* animTime, const unsigned char* indices, const int tableSize, int* keyFrameIndex, float* keyFrameLerpFrac) -> void
{
  return Zynamic::Forward<void (const struct XAnimTime*, const unsigned char*, const int, int*, float*)>(L"XAnim_GetTimeIndex<unsigned char>")(animTime, indices, tableSize, keyFrameIndex, keyFrameLerpFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsInfoAdditive(const struct XAnimInfo* info) -> bool
{
  return Zynamic::Forward<bool (const struct XAnimInfo*)>(L"IsInfoAdditive")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearRotTransArray(const struct DObj* obj, struct DObjAnimMat* rotTransArray, struct XAnimCalcAnimInfo* info) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct DObjAnimMat*, struct XAnimCalcAnimInfo*)>(L"XAnimClearRotTransArray")(obj, rotTransArray, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimWeightedAccumLerpedTrans(const union float4& fromVec, const union float4& toVec, float keyFrameLerpFrac, float weightScale, int* dataInt, struct DObjAnimMat* totalRotTrans) -> void
{
  return Zynamic::Forward<void (const union float4&, const union float4&, float, float, int*, struct DObjAnimMat*)>(L"XAnimWeightedAccumLerpedTrans")(fromVec, toVec, keyFrameLerpFrac, weightScale, dataInt, totalRotTrans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimWeightedAccumTrans(float weightScale, int* dataInt, struct DObjAnimMat* totalRotTrans) -> void
{
  return Zynamic::Forward<void (float, int*, struct DObjAnimMat*)>(L"XAnimWeightedAccumTrans")(weightScale, dataInt, totalRotTrans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcNonLoopEnd(const struct XAnimParts* parts, const unsigned char* animToModel, float weightScale, struct DObjAnimMat* rotTransArray, const class bitarray<160>* ignorePartBits) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, const unsigned char*, float, struct DObjAnimMat*, const class bitarray<160>*)>(L"XAnimCalcNonLoopEnd")(parts, animToModel, weightScale, rotTransArray, ignorePartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcParts<unsigned char>(const struct XAnimParts* parts, const unsigned char* animToModel, const float time, const float weightScale, struct DObjAnimMat* rotTransArray, const class bitarray<160>* ignorePartBits) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, const unsigned char*, const float, const float, struct DObjAnimMat*, const class bitarray<160>*)>(L"XAnimCalcParts<unsigned char>")(parts, animToModel, time, weightScale, rotTransArray, ignorePartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcLeafInternal(const struct XAnimParts* parts, unsigned short animToModelIndex, float time, float weightScale, struct DObjAnimMat* rotTransArray, class bitarray<160>& animPartBits, const class bitarray<160>& ignorePartBits) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, unsigned short, float, float, struct DObjAnimMat*, class bitarray<160>&, const class bitarray<160>&)>(L"XAnimCalcLeafInternal")(parts, animToModelIndex, time, weightScale, rotTransArray, animPartBits, ignorePartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcLeaf(struct XAnimInfo* info, float weightScale, struct DObjAnimMat* rotTransArray, struct XAnimCalcAnimInfo* animInfo) -> void
{
  return Zynamic::Forward<void (struct XAnimInfo*, float, struct DObjAnimMat*, struct XAnimCalcAnimInfo*)>(L"XAnimCalcLeaf")(info, weightScale, rotTransArray, animInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetCalcBuffer(struct XAnimCalcAnimInfo* info, const struct DObj* obj, int* rotTransArrayIndex) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (struct XAnimCalcAnimInfo*, const struct DObj*, int*)>(L"XAnimGetCalcBuffer")(info, obj, rotTransArrayIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimScaleRotTransArray(int numBones, const struct XAnimCalcAnimInfo* info, struct DObjAnimMat* rotTransArray) -> void
{
  return Zynamic::Forward<void (int, const struct XAnimCalcAnimInfo*, struct DObjAnimMat*)>(L"XAnimScaleRotTransArray")(numBones, info, rotTransArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimNormalizeRotScaleTransArray(int numBones, const struct XAnimCalcAnimInfo* info, float weightScale, struct DObjAnimMat* rotTransArray) -> void
{
  return Zynamic::Forward<void (int, const struct XAnimCalcAnimInfo*, float, struct DObjAnimMat*)>(L"XAnimNormalizeRotScaleTransArray")(numBones, info, weightScale, rotTransArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimMadRotTransArray(int numBones, const struct XAnimCalcAnimInfo* info, float weightScale, const struct DObjAnimMat* rotTrans, struct DObjAnimMat* totalRotTrans) -> void
{
  return Zynamic::Forward<void (int, const struct XAnimCalcAnimInfo*, float, const struct DObjAnimMat*, struct DObjAnimMat*)>(L"XAnimMadRotTransArray")(numBones, info, weightScale, rotTrans, totalRotTrans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimApplyAdditives(struct DObjAnimMat* rotTransArray, struct DObjAnimMat* additiveArray, float weight, int boneCount, struct XAnimCalcAnimInfo* info) -> void
{
  return Zynamic::Forward<void (struct DObjAnimMat*, struct DObjAnimMat*, float, int, struct XAnimCalcAnimInfo*)>(L"XAnimApplyAdditives")(rotTransArray, additiveArray, weight, boneCount, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalc(const struct DObj* obj, struct XAnimInfo* info, float weightScale, bool bClear, bool bNormQuat, struct XAnimCalcAnimInfo* animInfo, int rotTransArrayIndex, struct DObjAnimMat* rotTransArray) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct XAnimInfo*, float, bool, bool, struct XAnimCalcAnimInfo*, int, struct DObjAnimMat*)>(L"XAnimCalc")(obj, info, weightScale, bClear, bNormQuat, animInfo, rotTransArrayIndex, rotTransArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcAnim(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"DObjCalcAnim")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcRotDeltaDuring<unsigned char>(const struct XAnimDeltaPart* animDelta, const float time, const int frameCount, float* rotDelta) -> void
{
  return Zynamic::Forward<void (const struct XAnimDeltaPart*, const float, const int, float*)>(L"XAnim_CalcRotDeltaDuring<unsigned char>")(animDelta, time, frameCount, rotDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcPosDeltaDuring<unsigned char>(const struct XAnimDeltaPart* animDelta, const float time, const int frameCount, union float4& posDelta) -> void
{
  return Zynamic::Forward<void (const struct XAnimDeltaPart*, const float, const int, union float4&)>(L"XAnim_CalcPosDeltaDuring<unsigned char>")(animDelta, time, frameCount, posDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcRotDeltaEntire(const struct XAnimDeltaPart* animDelta, float* rotDelta) -> void
{
  return Zynamic::Forward<void (const struct XAnimDeltaPart*, float*)>(L"XAnim_CalcRotDeltaEntire")(animDelta, rotDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcPosDeltaEntire(const struct XAnimDeltaPart* animDelta, union float4& posDelta) -> void
{
  return Zynamic::Forward<void (const struct XAnimDeltaPart*, union float4&)>(L"XAnim_CalcPosDeltaEntire")(animDelta, posDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcDeltaForTime(const struct XAnimParts* anim, const float time, float* rotDelta, union float4& posDelta) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, const float, float*, union float4&)>(L"XAnim_CalcDeltaForTime")(anim, time, rotDelta, posDelta);
}

#endif // __UNIMPLEMENTED__
