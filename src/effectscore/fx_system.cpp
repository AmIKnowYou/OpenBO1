//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_system() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_fx_system")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocateClientMemory_SizeRequired(int maxLocalClients, int maxClients) -> int
{
  return Zynamic::Forward<int (int, int)>(L"FX_AllocateClientMemory_SizeRequired")(maxLocalClients, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocateClientMemory(struct HunkUser* hunk, int maxLocalClients, int maxClients) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, int, int)>(L"FX_AllocateClientMemory")(hunk, maxLocalClients, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeClientMemory(struct HunkUser* hunk, int maxClients) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, int)>(L"FX_FreeClientMemory")(hunk, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSystem(int localClientNum) -> struct FxSystem*
{
  return Zynamic::Forward<struct FxSystem* (int)>(L"FX_GetSystem")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSystemRemote(int localClientNum) -> struct FxSystem*
{
  return Zynamic::Forward<struct FxSystem* (int)>(L"FX_GetSystemRemote")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSystemBuffers(int localClientNum) -> struct FxSystemBuffers*
{
  return Zynamic::Forward<struct FxSystemBuffers* (int)>(L"FX_GetSystemBuffers")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocPool_Generic<FxElem, FxElemContainer>(struct FxEffect* remoteEffect, volatile long* firstFreeIndex, struct FxPool<FxElem, FxElemContainer>* pool, volatile long* activeCount) -> struct FxElem*
{
  return Zynamic::Forward<struct FxElem* (struct FxEffect*, volatile long*, struct FxPool<FxElem,FxElemContainer>*, volatile long*)>(L"FX_AllocPool_Generic<FxElem,FxElemContainer>")(remoteEffect, firstFreeIndex, pool, activeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreePool_Generic<FxTrail, FxTrail>(struct FxEffect* remoteEffect, struct FxTrail* item_slim, volatile long* firstFreeIndex, struct FxPool<FxTrail, FxTrail>* pool, volatile long* activeCount) -> void
{
  return Zynamic::Forward<void (struct FxEffect*, struct FxTrail*, volatile long*, struct FxPool<FxTrail,FxTrail>*, volatile long*)>(L"FX_FreePool_Generic<FxTrail,FxTrail>")(remoteEffect, item_slim, firstFreeIndex, pool, activeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocElem(struct FxEffect* remoteEffect, struct FxSystem* system) -> struct FxElem*
{
  return Zynamic::Forward<struct FxElem* (struct FxEffect*, struct FxSystem*)>(L"FX_AllocElem")(remoteEffect, system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocTrailElem(struct FxEffect* remoteEffect, struct FxSystem* system) -> struct FxTrailElem*
{
  return Zynamic::Forward<struct FxTrailElem* (struct FxEffect*, struct FxSystem*)>(L"FX_AllocTrailElem")(remoteEffect, system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocTrail(struct FxEffect* remoteEffect, struct FxSystem* system) -> struct FxTrail*
{
  return Zynamic::Forward<struct FxTrail* (struct FxEffect*, struct FxSystem*)>(L"FX_AllocTrail")(remoteEffect, system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ResetSystem(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_ResetSystem")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LinkSystemBuffers(struct FxSystem* system, struct FxSystemBuffers* systemBuffers) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxSystemBuffers*)>(L"FX_LinkSystemBuffers")(system, systemBuffers);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InitSystem(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_InitSystem")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ShutdownSystem(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_ShutdownSystem")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullTrailElem(const struct FxCamera* camera, const struct FxElemDef* elemDef, const float* origin, unsigned char sequence) -> bool
{
  return Zynamic::Forward<bool (const struct FxCamera*, const struct FxElemDef*, const float*, unsigned char)>(L"FX_CullTrailElem")(camera, elemDef, origin, sequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElemForSpawn(const struct FxCamera* camera, const struct FxElemDef* elemDef, const float* origin) -> bool
{
  return Zynamic::Forward<bool (const struct FxCamera*, const struct FxElemDef*, const float*)>(L"FX_CullElemForSpawn")(camera, elemDef, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullEffectForSpawn(const struct FxCamera* camera, const struct FxEffectDef* effectDef, const float* origin) -> bool
{
  return Zynamic::Forward<bool (const struct FxCamera*, const struct FxEffectDef*, const float*)>(L"FX_CullEffectForSpawn")(camera, effectDef, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EffectNoLongerReferenced(struct FxSystem* system, struct FxEffect* remoteEffect, unsigned int stackCount) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, unsigned int)>(L"FX_EffectNoLongerReferenced")(system, remoteEffect, stackCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunGarbageCollection_FreeSpotLight(struct FxSystem* system, unsigned short effectHandle) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, unsigned short)>(L"FX_RunGarbageCollection_FreeSpotLight")(system, effectHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunGarbageCollection_FreeTrails(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_RunGarbageCollection_FreeTrails")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunPrioritySorting(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_RunPrioritySorting")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RemoveStaleAttachedEffects(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_RemoveStaleAttachedEffects")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunGarbageCollectionAndPrioritySort(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_RunGarbageCollectionAndPrioritySort")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EffectAffectsGameplay(const struct FxEffectDef* remoteEffectDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEffectDef*)>(L"FX_EffectAffectsGameplay")(remoteEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetEffectRandomSeed(struct FxEffect* effect, const struct FxEffectDef* remoteDef) -> void
{
  return Zynamic::Forward<void (struct FxEffect*, const struct FxEffectDef*)>(L"FX_SetEffectRandomSeed")(effect, remoteDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnEffect_AllocTrails(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_SpawnEffect_AllocTrails")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IsSpotLightEffect(struct FxSystem* system, const struct FxEffectDef* def) -> bool
{
  return Zynamic::Forward<bool (struct FxSystem*, const struct FxEffectDef*)>(L"FX_IsSpotLightEffect")(system, def);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CanAllocSpotLightEffect(const struct FxSystem* system) -> bool
{
  return Zynamic::Forward<bool (const struct FxSystem*)>(L"FX_CanAllocSpotLightEffect")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnEffect_AllocSpotLightEffect(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> bool
{
  return Zynamic::Forward<bool (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"FX_SpawnEffect_AllocSpotLightEffect")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CalculatePackedLighting(struct FxEffect* effect, const float* origin) -> void
{
  return Zynamic::Forward<void (struct FxEffect*, const float*)>(L"FX_CalculatePackedLighting")(effect, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_NeedsPrioritySorting(const struct FxSystem* system) -> bool
{
  return Zynamic::Forward<bool (const struct FxSystem*)>(L"FX_NeedsPrioritySorting")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Fx_ResetPriority(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"Fx_ResetPriority")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetWarningPriority(struct FxSystem* system, unsigned char priority) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, unsigned char)>(L"FX_SetWarningPriority")(system, priority);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InvalidateFrameWarningPriority(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_InvalidateFrameWarningPriority")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetFrameWarningPriority(const struct FxSystem* system) -> int
{
  return Zynamic::Forward<int (const struct FxSystem*)>(L"FX_GetFrameWarningPriority")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Priority_Begin(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_Priority_Begin")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnEffect(struct FxSystem* system, const struct FxEffectDef* remoteDef, int msecBegin, const float* origin, const float* axis[0x3], int dobjHandle, int boneIndex, int runnerSortOrder, unsigned short owner, unsigned int markEntnum, const struct orientation_t* boneOffset) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct FxSystem*, const struct FxEffectDef*, int, const float*, const float*[0x3], int, int, int, unsigned short, unsigned int, const struct orientation_t*)>(L"FX_SpawnEffect")(system, remoteDef, msecBegin, origin, axis, dobjHandle, boneIndex, runnerSortOrder, owner, markEntnum, boneOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnOrientedEffect(int localClientNum, const struct FxEffectDef* def, int msecBegin, const float* origin, const float* axis[0x3], unsigned int markEntnum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, const float*, const float*[0x3], unsigned int)>(L"FX_SpawnOrientedEffect")(localClientNum, def, msecBegin, origin, axis, markEntnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AssertAllocatedEffect(int localClientNum, unsigned int hEffect, const char* error_msg) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const char*)>(L"FX_AssertAllocatedEffect")(localClientNum, hEffect, error_msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffectWithMarkEntity(int localClientNum, const struct FxEffectDef* def, int startMsec, const float* origin, const float* axis[0x3], unsigned int markEntnum) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, const float*, const float*[0x3], unsigned int)>(L"FX_PlayOrientedEffectWithMarkEntity")(localClientNum, def, startMsec, origin, axis, markEntnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffect(int localClientNum, const struct FxEffectDef* def, int startMsec, const float* origin, const float* axis[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, const float*, const float*[0x3])>(L"FX_PlayOrientedEffect")(localClientNum, def, startMsec, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffect(struct FxSystem* system, const struct FxEffectDef* def, int startMsec, const float* origin, const float* axis[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct FxSystem*, const struct FxEffectDef*, int, const float*, const float*[0x3])>(L"FX_PlayOrientedEffect")(system, def, startMsec, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_NeedsBoltUpdate(const struct FxEffectDef* def) -> bool
{
  return Zynamic::Forward<bool (const struct FxEffectDef*)>(L"FX_NeedsBoltUpdate")(def);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnBoltedEffect(int localClientNum, const struct FxEffectDef* def, int msecBegin, int dobjHandle, int boneIndex, const float* origin, const float* axis[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, int, int, const float*, const float*[0x3])>(L"FX_SpawnBoltedEffect")(localClientNum, def, msecBegin, dobjHandle, boneIndex, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnBoltedEffect(int localClientNum, const struct FxEffectDef* def, int msecBegin, int dobjHandle, int boneIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, int, int)>(L"FX_SpawnBoltedEffect")(localClientNum, def, msecBegin, dobjHandle, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayBoltedEffect_DynEnt(int localClientNum, const struct FxEffectDef* def, int startMsec, int absDynEntId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, int)>(L"FX_PlayBoltedEffect_DynEnt")(localClientNum, def, startMsec, absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayBoltedEffect(int localClientNum, const struct FxEffectDef* def, int startMsec, int dobjHandle, int boneIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, int, int)>(L"FX_PlayBoltedEffect")(localClientNum, def, startMsec, dobjHandle, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayBoltedEffect(int localClientNum, const struct FxEffectDef* def, int startMsec, int dobjHandle, int boneIndex, const float* origin, const float* axis[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, const struct FxEffectDef*, int, int, int, const float*, const float*[0x3])>(L"FX_PlayBoltedEffect")(localClientNum, def, startMsec, dobjHandle, boneIndex, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetTrailHandleList_Last(struct FxSystem* system, struct FxEffect* effect, unsigned short* outHandleList, int* outTrailCount) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, unsigned short*, int*)>(L"FX_GetTrailHandleList_Last")(system, effect, outHandleList, outTrailCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RetriggerEffect(int localClientNum, struct FxEffect* effect, int msecBegin) -> void
{
  return Zynamic::Forward<void (int, struct FxEffect*, int)>(L"FX_RetriggerEffect")(localClientNum, effect, msecBegin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RetriggerEffect(int localClientNum, unsigned int hEffect, int msecBegin) -> void
{
  return Zynamic::Forward<void (int, unsigned int, int)>(L"FX_RetriggerEffect")(localClientNum, hEffect, msecBegin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ThroughWithEffect(int localClientNum, unsigned int hEffect, bool forcekill) -> void
{
  return Zynamic::Forward<void (int, unsigned int, bool)>(L"FX_ThroughWithEffect")(localClientNum, hEffect, forcekill);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ThroughWithEffect(struct FxSystem* system, struct FxEffect* effect, bool forcekill) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, bool)>(L"FX_ThroughWithEffect")(system, effect, forcekill);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StopEffectNonRecursive(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_StopEffectNonRecursive")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StopEffect(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_StopEffect")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RemoveAllEffectElems(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_RemoveAllEffectElems")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillEffect(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_KillEffect")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillEffectDef(int localClientNum, const struct FxEffectDef* def) -> void
{
  return Zynamic::Forward<void (int, const struct FxEffectDef*)>(L"FX_KillEffectDef")(localClientNum, def);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillAllEffects(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"FX_KillAllEffects")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetEffectPlayedTime(int localClientNum, unsigned int hEffect) -> int
{
  return Zynamic::Forward<int (int, unsigned int)>(L"FX_GetEffectPlayedTime")(localClientNum, hEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IsEffectDone(int localClientNum, unsigned int hEffect) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int)>(L"FX_IsEffectDone")(localClientNum, hEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RandomlyRotateAxis(const float* axisIn[0x3], int randomSeed, float* axisOut[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], int, float*[0x3])>(L"FX_RandomlyRotateAxis")(axisIn, randomSeed, axisOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnRunner(struct FxSystem* system, struct FxEffect* effect, const struct FxElemDef* remoteElemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, const struct FxElemDef*, const struct FxSpatialFrame*, int, int)>(L"FX_SpawnRunner")(system, effect, remoteElemDef, effectFrameWhenPlayed, randomSeed, msecWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MakePhysId(const struct FxElemDef* elemDef, const float* origin, const float* vel, const int time, int sequence) -> int
{
  return Zynamic::Forward<int (const struct FxElemDef*, const float*, const float*, const int, int)>(L"FX_MakePhysId")(elemDef, origin, vel, time, sequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnModelPhysics(struct FxSystem* system, struct FxEffect* effect, const struct FxElemDef* elemDef, int randomSeed, struct FxElem* elem, int sequence) -> bool
{
  return Zynamic::Forward<bool (struct FxSystem*, struct FxEffect*, const struct FxElemDef*, int, struct FxElem*, int)>(L"FX_SpawnModelPhysics")(system, effect, elemDef, randomSeed, elem, sequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetOriginForElem(struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, float* outOrigin) -> void
{
  return Zynamic::Forward<void (struct FxEffect*, const struct FxElemDef*, const struct FxSpatialFrame*, int, float*)>(L"FX_GetOriginForElem")(effect, elemDef, effectFrameWhenPlayed, randomSeed, outOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnTrailElem_NoCull(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, struct FxTrail* trail, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, struct FxTrail*, const struct FxSpatialFrame*, int, float)>(L"FX_SpawnTrailElem_NoCull")(system, effect, remoteEffect, trail, effectFrameWhenPlayed, msecWhenPlayed, distanceWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnTrailElem_Cull(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, struct FxTrail* trail, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, struct FxTrail*, const struct FxSpatialFrame*, int, float)>(L"FX_SpawnTrailElem_Cull")(system, effect, remoteEffect, trail, effectFrameWhenPlayed, msecWhenPlayed, distanceWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnSound(int localClientNumber, struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed) -> void
{
  return Zynamic::Forward<void (int, struct FxEffect*, const struct FxElemDef*, const struct FxSpatialFrame*, int, int)>(L"FX_SpawnSound")(localClientNumber, effect, elemDef, effectFrameWhenPlayed, randomSeed, msecWhenPlayed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnSpotLightElem(struct FxSystem* system, struct FxElem* elem) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxElem*)>(L"FX_SpawnSpotLightElem")(system, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ElemSpawnVisBits(const struct FxSystem* system, const struct FxElemDef* elemDef, const float* origin) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct FxSystem*, const struct FxElemDef*, const float*)>(L"FX_ElemSpawnVisBits")(system, elemDef, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ImpactMarkWithinRange(const struct FxSystem* system, const float* markLocation) -> bool
{
  return Zynamic::Forward<bool (const struct FxSystem*, const float*)>(L"FX_ImpactMarkWithinRange")(system, markLocation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnElem(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect, int elemDefIndex, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed, int sequence) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*, int, const struct FxSpatialFrame*, int, float, int)>(L"FX_SpawnElem")(system, effect, remoteEffect, elemDefIndex, effectFrameWhenPlayed, msecWhenPlayed, distanceWhenPlayed, sequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeElem(struct FxSystem* system, unsigned short elemHandle, struct FxEffect* effect, struct FxEffect* remoteEffect, unsigned int elemClass) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, unsigned short, struct FxEffect*, struct FxEffect*, unsigned int)>(L"FX_FreeElem")(system, elemHandle, effect, remoteEffect, elemClass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeTrailElem(struct FxSystem* system, unsigned short trailElemHandle, struct FxEffect* effect, struct FxEffect* remoteEffect, struct FxTrail* trail) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, unsigned short, struct FxEffect*, struct FxEffect*, struct FxTrail*)>(L"FX_FreeTrailElem")(system, trailElemHandle, effect, remoteEffect, trail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeSpotLightElem(struct FxSystem* system, unsigned short elemHandle, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, unsigned short, struct FxEffect*)>(L"FX_FreeSpotLightElem")(system, elemHandle, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetClientVisibility(int localClientNum, const float* start, const float* end) -> float
{
  return Zynamic::Forward<float (int, const float*, const float*)>(L"FX_GetClientVisibility")(localClientNum, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ClientVisibilityTest(int localClientNum, const float* start, const float* end) -> bool
{
  return Zynamic::Forward<bool (int, const float*, const float*)>(L"FX_ClientVisibilityTest")(localClientNum, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetActiveSpotLightBoltDobj(int localClientNum, int* dobjHandleOut) -> bool
{
  return Zynamic::Forward<bool (int, int*)>(L"FX_GetActiveSpotLightBoltDobj")(localClientNum, dobjHandleOut);
}

#endif // __UNIMPLEMENTED__
