//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_IsDemoPlaying() -> bool
{
  return Zynamic::Forward<bool ()>(L"FX_IsDemoPlaying")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetUpdateElemDef(const struct FxUpdateElem* update) -> const struct FxElemDef*
{
  return Zynamic::Forward<const struct FxElemDef* (const struct FxUpdateElem*)>(L"FX_GetUpdateElemDef")(update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnTrailLoopingElems(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, struct FxTrail* trail, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, struct FxTrail*, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, int, int, float, float)>(L"FX_SpawnTrailLoopingElems")(system, effect, remoteEffect, trail, frameBegin, frameEnd, msecWhenPlayed, msecUpdateBegin, msecUpdateEnd, distanceTravelledBegin, distanceTravelledEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LimitStabilizeTimeForElemDef_SelfOnly(const struct FxElemDef* elemDef, bool needToSpawnSystem) -> int
{
  return Zynamic::Forward<int (const struct FxElemDef*, bool)>(L"FX_LimitStabilizeTimeForElemDef_SelfOnly")(elemDef, needToSpawnSystem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LimitStabilizeTimeForEffectDef_Recurse(const struct FxEffectDef* remoteEffectDef, int originalUpdateTime) -> int
{
  return Zynamic::Forward<int (const struct FxEffectDef*, int)>(L"FX_LimitStabilizeTimeForEffectDef_Recurse")(remoteEffectDef, originalUpdateTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LimitStabilizeTimeForElemDef_Recurse(const struct FxElemDef* elemDef, bool needToSpawnSystem, int originalUpdateTime) -> int
{
  return Zynamic::Forward<int (const struct FxElemDef*, bool, int)>(L"FX_LimitStabilizeTimeForElemDef_Recurse")(elemDef, needToSpawnSystem, originalUpdateTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnLoopingElems(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefIndex, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, int, int)>(L"FX_SpawnLoopingElems")(system, effect, remoteEffect, elemDefIndex, frameBegin, frameEnd, msecWhenPlayed, msecUpdateBegin, msecUpdateEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnOneShotElems(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefIndex, const struct FxSpatialFrame* frameWhenPlayed, int msecWhenPlayed) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, const struct FxSpatialFrame*, int)>(L"FX_SpawnOneShotElems")(system, effect, remoteEffect, elemDefIndex, frameWhenPlayed, msecWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ProcessLooping(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, int, int, float, float)>(L"FX_ProcessLooping")(system, effect, remoteEffect, elemDefFirst, elemDefCount, frameBegin, frameEnd, msecWhenPlayed, msecUpdateBegin, msecUpdateEnd, distanceTravelledBegin, distanceTravelledEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnAllFutureLooping(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, int)>(L"FX_SpawnAllFutureLooping")(system, effect, remoteEffect, elemDefFirst, elemDefCount, frameBegin, frameEnd, msecWhenPlayed, msecUpdateBegin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginLooping(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameWhenPlayed, const struct FxSpatialFrame* frameNow, int msecWhenPlayed, int msecNow) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, const struct FxSpatialFrame*, const struct FxSpatialFrame*, int, int)>(L"FX_BeginLooping")(system, effect, remoteEffect, elemDefFirst, elemDefCount, frameWhenPlayed, frameNow, msecWhenPlayed, msecNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_TriggerOneShot(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameWhenPlayed, int msecWhenPlayed) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, const struct FxSpatialFrame*, int)>(L"FX_TriggerOneShot")(system, effect, remoteEffect, elemDefFirst, elemDefCount, frameWhenPlayed, msecWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StartNewEffect(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_StartNewEffect")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ProcessEmitting(struct FxSystem* system, const struct FxUpdateElem* update, unsigned char emitResidual, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd) -> unsigned char
{
  return Zynamic::Forward<unsigned char (struct FxSystem*, const struct FxUpdateElem*, unsigned char, const struct FxSpatialFrame*, const struct FxSpatialFrame*)>(L"FX_ProcessEmitting")(system, update, emitResidual, frameBegin, frameEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateVelocityFromZeroInSegment(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, float* weight, const float* amplitudeScale, float integralScale, float* pos) -> void
{
  return Zynamic::Forward<void (const struct FxElemVelStateInFrame*, const struct FxElemVelStateInFrame*, float*, const float*, float, float*)>(L"FX_IntegrateVelocityFromZeroInSegment")(statePrev, stateNext, weight, amplitudeScale, integralScale, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateVelocityAcrossSegments(int elemDefFlags, const struct orientation_t* orient, const struct FxElemVelStateSample* velState0, const struct FxElemVelStateSample* velState1, float t0, float t1, const float* amplitudeScale, float integralScale, float* posLocal, float* posWorld) -> void
{
  return Zynamic::Forward<void (int, const struct orientation_t*, const struct FxElemVelStateSample*, const struct FxElemVelStateSample*, float, float, const float*, float, float*, float*)>(L"FX_IntegrateVelocityAcrossSegments")(elemDefFlags, orient, velState0, velState1, t0, t1, amplitudeScale, integralScale, posLocal, posWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateVelocityInSegmentInFrame(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, const float* weight, const float* amplitudeScale, float integralScale, float* pos) -> void
{
  return Zynamic::Forward<void (const struct FxElemVelStateInFrame*, const struct FxElemVelStateInFrame*, const float*, const float*, float, float*)>(L"FX_IntegrateVelocityInSegmentInFrame")(statePrev, stateNext, weight, amplitudeScale, integralScale, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateVelocityInSegment(int elemDefFlags, const struct orientation_t* orient, const struct FxElemVelStateSample* velState, float t0, float t1, const float* amplitudeScale, float integralScale, float* posLocal, float* posWorld) -> void
{
  return Zynamic::Forward<void (int, const struct orientation_t*, const struct FxElemVelStateSample*, float, float, const float*, float, float*, float*)>(L"FX_IntegrateVelocityInSegment")(elemDefFlags, orient, velState, t0, t1, amplitudeScale, integralScale, posLocal, posWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateVelocity(const struct FxUpdateElem* update, float t0, float t1, float* posLocal, float* posWorld) -> void
{
  return Zynamic::Forward<void (const struct FxUpdateElem*, float, float, float*, float*)>(L"FX_IntegrateVelocity")(update, t0, t1, posLocal, posWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_NextElementPosition_NoExternalForces(struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd, float* posLocal, float* posWorld) -> void
{
  return Zynamic::Forward<void (struct FxUpdateElem*, int, int, float*, float*)>(L"FX_NextElementPosition_NoExternalForces")(update, msecUpdateBegin, msecUpdateEnd, posLocal, posWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_NextElementPosition(struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd) -> void
{
  return Zynamic::Forward<void (struct FxUpdateElem*, int, int)>(L"FX_NextElementPosition")(update, msecUpdateBegin, msecUpdateEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_TraceHitSomething(const struct trace_t* trace) -> bool
{
  return Zynamic::Forward<bool (const struct trace_t*)>(L"FX_TraceHitSomething")(trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetAtRestFraction(const struct FxUpdateElem* update, float msec) -> float
{
  return Zynamic::Forward<float (const struct FxUpdateElem*, float)>(L"FX_GetAtRestFraction")(update, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnImpactEffect(struct FxSystem* system, const struct FxUpdateElem* update, const struct FxEffectDef* impactEffect, int msecOnImpact, const float* impactNormal) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, const struct FxUpdateElem*, const struct FxEffectDef*, int, const float*)>(L"FX_SpawnImpactEffect")(system, update, impactEffect, msecOnImpact, impactNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CollisionResponse(struct FxSystem* system, struct FxUpdateElem* update, const struct trace_t* trace, int msecUpdateBegin, int msecUpdateEnd, float* xyzWorldOld) -> int
{
  return Zynamic::Forward<int (struct FxSystem*, struct FxUpdateElem*, const struct trace_t*, int, int, float*)>(L"FX_CollisionResponse")(system, update, trace, msecUpdateBegin, msecUpdateEnd, xyzWorldOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElementPosition_CollidingStep(struct FxSystem* system, struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd, float* xyzWorldOld) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxSystem*, struct FxUpdateElem*, int, int, float*)>(L"FX_UpdateElementPosition_CollidingStep")(system, update, msecUpdateBegin, msecUpdateEnd, xyzWorldOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElementPosition_Colliding(struct FxSystem* system, struct FxUpdateElem* update) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxSystem*, struct FxUpdateElem*)>(L"FX_UpdateElementPosition_Colliding")(system, update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElementPosition_NonColliding(struct FxUpdateElem* update) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxUpdateElem*)>(L"FX_UpdateElementPosition_NonColliding")(update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElementPosition_Local(struct FxUpdateElem* update) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxUpdateElem*)>(L"FX_UpdateElementPosition_Local")(update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElementPosition(struct FxSystem* system, struct FxUpdateElem* update) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxSystem*, struct FxUpdateElem*)>(L"FX_UpdateElementPosition")(system, update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetQuatForOrientation(const struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* frameNow, const struct orientation_t* orient, float* quat) -> void
{
  return Zynamic::Forward<void (const struct FxEffect*, const struct FxElemDef*, const struct FxSpatialFrame*, const struct orientation_t*, float*)>(L"FX_GetQuatForOrientation")(effect, elemDef, frameNow, orient, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnDeathEffect(struct FxSystem* system, struct FxUpdateElem* update) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxUpdateElem*)>(L"FX_SpawnDeathEffect")(system, update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_SetupUpdate(struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd, int elemDefIndex, int elemAtRestFraction, int elemMsecBegin, int elemSequence, float* elemOrigin, float elemWindInterp, struct FxUpdateElem* update) -> bool
{
  return Zynamic::Forward<bool (struct FxEffect*, int, int, int, int, int, int, float*, float, struct FxUpdateElem*)>(L"FX_UpdateElement_SetupUpdate")(effect, msecUpdateBegin, msecUpdateEnd, elemDefIndex, elemAtRestFraction, elemMsecBegin, elemSequence, elemOrigin, elemWindInterp, update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_TruncateToElemEnd(struct FxUpdateElem* update, enum FxUpdateResult* outUpdateResult) -> void
{
  return Zynamic::Forward<void (struct FxUpdateElem*, enum FxUpdateResult*)>(L"FX_UpdateElement_TruncateToElemEnd")(update, outUpdateResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_HandleEmitting(struct FxSystem* system, struct FxElem* elem, const struct FxUpdateElem* update, const float* elemOriginPrev, enum FxUpdateResult* outUpdateResult) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxElem*, const struct FxUpdateElem*, const float*, enum FxUpdateResult*)>(L"FX_UpdateElement_HandleEmitting")(system, elem, update, elemOriginPrev, outUpdateResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_HandleAttachedEffect(struct FxSystem* system, struct FxElem* elem, const struct FxUpdateElem* update) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxElem*, const struct FxUpdateElem*)>(L"FX_UpdateElement_HandleAttachedEffect")(system, elem, update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayElementSpawnSound(int localClientNum, const struct FxElemDef* elemDef, const float* origin) -> void
{
  return Zynamic::Forward<void (int, const struct FxElemDef*, const float*)>(L"FX_PlayElementSpawnSound")(localClientNum, elemDef, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_TruncateToElemBegin(struct FxUpdateElem* update, enum FxUpdateResult* outUpdateResult) -> bool
{
  return Zynamic::Forward<bool (struct FxUpdateElem*, enum FxUpdateResult*)>(L"FX_UpdateElement_TruncateToElemBegin")(update, outUpdateResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateTrailElement(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, struct FxTrailElem* trailElem, int msecUpdateBegin, int msecUpdateEnd) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxSystem*, struct FxEffect*, struct FxTrail*, struct FxTrailElem*, int, int)>(L"FX_UpdateTrailElement")(system, effect, trail, trailElem, msecUpdateBegin, msecUpdateEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement(struct FxSystem* system, struct FxEffect* effect, struct FxElem* elem, int msecUpdateBegin, int msecUpdateEnd) -> enum FxUpdateResult
{
  return Zynamic::Forward<enum FxUpdateResult (struct FxSystem*, struct FxEffect*, struct FxElem*, int, int)>(L"FX_UpdateElement")(system, effect, elem, msecUpdateBegin, msecUpdateEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetBoltTemporalBits(int localClientNum, int dobjHandle) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, int)>(L"FX_GetBoltTemporalBits")(localClientNum, dobjHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetBoneOrientation_IsDObjEntityValid(int localClientNum, int dobjHandle) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"FX_GetBoneOrientation_IsDObjEntityValid")(localClientNum, dobjHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetBoneOrientation(int localClientNum, int dobjHandle, int boneIndex, struct orientation_t* orient) -> bool
{
  return Zynamic::Forward<bool (int, int, int, struct orientation_t*)>(L"FX_GetBoneOrientation")(localClientNum, dobjHandle, boneIndex, orient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateSpotLightEffectPartial(struct FxSystem* system, struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, int, int)>(L"FX_UpdateSpotLightEffectPartial")(system, effect, msecUpdateBegin, msecUpdateEnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffectPartialForClass(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int msecUpdateBegin, int msecUpdateEnd, unsigned short elemHandleStart, unsigned short elemHandleStop, unsigned int elemClass) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, unsigned short, unsigned short, unsigned int)>(L"FX_UpdateEffectPartialForClass")(system, effect, remoteEffect, msecUpdateBegin, msecUpdateEnd, elemHandleStart, elemHandleStop, elemClass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffectPartialTrail(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, struct FxTrail* trail, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, unsigned short trailElemHandleStart, unsigned short trailElemHandleStop, struct FxSpatialFrame* frameNow) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, struct FxTrail*, int, int, float, float, unsigned short, unsigned short, struct FxSpatialFrame*)>(L"FX_UpdateEffectPartialTrail")(system, effect, remoteEffect, trail, msecUpdateBegin, msecUpdateEnd, distanceTravelledBegin, distanceTravelledEnd, trailElemHandleStart, trailElemHandleStop, frameNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffectPartial(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, unsigned short* elemHandleStart, unsigned short* elemHandleStop, volatile unsigned short* trailElemStart, volatile unsigned short* trailElemStop) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, int, float, float, unsigned short*, unsigned short*, volatile unsigned short*, volatile unsigned short*)>(L"FX_UpdateEffectPartial")(system, effect, remoteEffect, msecUpdateBegin, msecUpdateEnd, distanceTravelledBegin, distanceTravelledEnd, elemHandleStart, elemHandleStop, trailElemStart, trailElemStop);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CanKillImmediate(const struct FxEffectDef* def) -> bool
{
  return Zynamic::Forward<bool (const struct FxEffectDef*)>(L"FX_CanKillImmediate")(def);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffectBolt(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_UpdateEffectBolt")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffect(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_UpdateEffect")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateSpotLightEffect(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_UpdateSpotLightEffect")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ShouldProcessEffect(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, bool nonBoltedEffectsOnly) -> bool
{
  return Zynamic::Forward<bool (struct FxSystem*, struct FxEffect*, struct FxEffect*, bool)>(L"FX_ShouldProcessEffect")(system, effect, remoteEffect, nonBoltedEffectsOnly);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateBatch(struct FxSystem* system, struct FxSystem* remoteSystem, int localClientNum, bool nonBoltedEffectsOnly, int firstEffect, int lastEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxSystem*, int, bool, int, int)>(L"FX_UpdateBatch")(system, remoteSystem, localClientNum, nonBoltedEffectsOnly, firstEffect, lastEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Update(struct FxSystem* system, struct FxSystem* remoteSystem, int localClientNum, bool nonBoltedEffectsOnly) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxSystem*, int, bool)>(L"FX_Update")(system, remoteSystem, localClientNum, nonBoltedEffectsOnly);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateSpotLight(struct FxCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxCmd*)>(L"FX_UpdateSpotLight")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateNonDependent(struct FxCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxCmd*)>(L"FX_UpdateNonDependent")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateRemaining(struct FxCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxCmd*)>(L"FX_UpdateRemaining")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginUpdate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_BeginUpdate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EndUpdate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_EndUpdate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AddNonSpriteDrawSurfs(struct FxCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxCmd*)>(L"FX_AddNonSpriteDrawSurfs")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RewindTo_Setup(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_RewindTo_Setup")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RewindTo_Finish(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_RewindTo_Finish")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RewindTo(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_RewindTo")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_RestartEffects_Begin() -> void
{
  return Zynamic::Forward<void ()>(L"DB_RestartEffects_Begin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_RestartEffects_Finish() -> void
{
  return Zynamic::Forward<void ()>(L"DB_RestartEffects_Finish")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetupCamera(struct FxCamera* camera, const float* vieworg, const float* viewaxis[0x3], const float tanHalfFovX, const float tanHalfFovY, const float zfar) -> void
{
  return Zynamic::Forward<void (struct FxCamera*, const float*, const float*[0x3], const float, const float, const float)>(L"FX_SetupCamera")(camera, vieworg, viewaxis, tanHalfFovX, tanHalfFovY, zfar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetCameraUpdateFromRefdefAndZFar(struct FxCameraUpdate* cameraUpdate, const struct refdef_s* refdef, float zfar) -> void
{
  return Zynamic::Forward<void (struct FxCameraUpdate*, const struct refdef_s*, float)>(L"FX_GetCameraUpdateFromRefdefAndZFar")(cameraUpdate, refdef, zfar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetExtraCamera(int localClientNum, const struct FxCameraUpdate* cameraUpdate) -> void
{
  return Zynamic::Forward<void (int, const struct FxCameraUpdate*)>(L"FX_SetExtraCamera")(localClientNum, cameraUpdate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetNextUpdateCamera(int localClientNum, const struct FxCameraUpdate* cameraUpdate) -> void
{
  return Zynamic::Forward<void (int, const struct FxCameraUpdate*)>(L"FX_SetNextUpdateCamera")(localClientNum, cameraUpdate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetNextUpdateTime(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FX_SetNextUpdateTime")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillUpdateCmd(int localClientNum, struct FxCmd* cmd) -> void
{
  return Zynamic::Forward<void (int, struct FxCmd*)>(L"FX_FillUpdateCmd")(localClientNum, cmd);
}

#endif // __UNIMPLEMENTED__
