//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_TransformPosFromLocalToWorld(const struct FxSpatialFrame* frame, const float* posLocal, float* posWorld) -> void
{
  return Zynamic::Forward<void (const struct FxSpatialFrame*, const float*, float*)>(L"FX_TransformPosFromLocalToWorld")(frame, posLocal, posWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OffsetSpawnOrigin(const struct FxSpatialFrame* effectFrame, const struct FxElemDef* elemDef, int randomSeed, float* spawnOrigin) -> void
{
  return Zynamic::Forward<void (const struct FxSpatialFrame*, const struct FxElemDef*, int, float*)>(L"FX_OffsetSpawnOrigin")(effectFrame, elemDef, randomSeed, spawnOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetOriginForTrailElem(struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, float* outOrigin, float* outRight, float* outUp) -> void
{
  return Zynamic::Forward<void (struct FxEffect*, const struct FxElemDef*, const struct FxSpatialFrame*, int, float*, float*, float*)>(L"FX_GetOriginForTrailElem")(effect, elemDef, effectFrameWhenPlayed, randomSeed, outOrigin, outRight, outUp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSpawnOrigin(const struct FxSpatialFrame* effectFrame, const struct FxElemDef* elemDef, int randomSeed, float* spawnOrigin) -> void
{
  return Zynamic::Forward<void (const struct FxSpatialFrame*, const struct FxElemDef*, int, float*)>(L"FX_GetSpawnOrigin")(effectFrame, elemDef, randomSeed, spawnOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpatialFrameToOrientation(const struct FxSpatialFrame* frame, struct orientation_t* orient) -> void
{
  return Zynamic::Forward<void (const struct FxSpatialFrame*, struct orientation_t*)>(L"FX_SpatialFrameToOrientation")(frame, orient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OrientationDirToWorldDir(const struct orientation_t* orient, const float* dir, float* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const float*, float*)>(L"FX_OrientationDirToWorldDir")(orient, dir, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetOrientation(const struct FxElemDef* elemDef, const struct FxSpatialFrame* frameAtSpawn, const struct FxSpatialFrame* frameNow, int randomSeed, struct orientation_t* orient) -> void
{
  return Zynamic::Forward<void (const struct FxElemDef*, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, struct orientation_t*)>(L"FX_GetOrientation")(elemDef, frameAtSpawn, frameNow, randomSeed, orient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetVelocityAtTimeInFrame(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, const float* rangeLerp, const float* weight, float* velocity) -> void
{
  return Zynamic::Forward<void (const struct FxElemVelStateInFrame*, const struct FxElemVelStateInFrame*, const float*, const float*, float*)>(L"FX_GetVelocityAtTimeInFrame")(statePrev, stateNext, rangeLerp, weight, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetVelocityAtTime(const struct FxElemDef* elemDef, int randomSeed, float msecLifeSpan, float msecElapsed, const struct orientation_t* orient, const float* baseVel, float* velocity) -> void
{
  return Zynamic::Forward<void (const struct FxElemDef*, int, float, float, const struct orientation_t*, const float*, float*)>(L"FX_GetVelocityAtTime")(elemDef, randomSeed, msecLifeSpan, msecElapsed, orient, baseVel, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OrientationPosToWorldPos(const struct orientation_t* orient, const float* pos, float* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const float*, float*)>(L"FX_OrientationPosToWorldPos")(orient, pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OrientationPosFromWorldPos(const struct orientation_t* orient, const float* pos, float* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const float*, float*)>(L"FX_OrientationPosFromWorldPos")(orient, pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AddVisBlocker(struct FxSystem* system, const float* posWorld, float radius, float opacity) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, const float*, float, float)>(L"FX_AddVisBlocker")(system, posWorld, radius, opacity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ToggleVisBlockerFrame(struct FxSystem* system, struct FxSystem* remoteSystem) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxSystem*)>(L"FX_ToggleVisBlockerFrame")(system, remoteSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullSphere(const struct FxCamera* camera, unsigned int frustumPlaneCount, const float* posWorld, float radius) -> bool
{
  return Zynamic::Forward<bool (const struct FxCamera*, unsigned int, const float*, float)>(L"FX_CullSphere")(camera, frustumPlaneCount, posWorld, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AnglesToOrientedAxis(const float* anglesInRad, const struct orientation_t* orient, float* axisOut[0x3]) -> void
{
  return Zynamic::Forward<void (const float*, const struct orientation_t*, float*[0x3])>(L"FX_AnglesToOrientedAxis")(anglesInRad, orient, axisOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetElemAxis(const struct FxElemDef* elemDef, int randomSeed, const struct orientation_t* orient, float msecElapsed, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct FxElemDef*, int, const struct orientation_t*, float, float*[0x3])>(L"FX_GetElemAxis")(elemDef, randomSeed, orient, msecElapsed, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetElemLifeSpanMsec(int elemRandomSeed, float elemWindInterpolate, const struct FxElemDef* elemDef) -> int
{
  return Zynamic::Forward<int (int, float, const struct FxElemDef*)>(L"FX_GetElemLifeSpanMsec")(elemRandomSeed, elemWindInterpolate, elemDef);
}

#endif // __UNIMPLEMENTED__
