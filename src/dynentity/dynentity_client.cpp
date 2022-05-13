//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DynEntCl_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntCl_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_IsHealthGone(const struct DynEntityDef* dynEntDef, const struct DynEntityClient* dynEntClient) -> bool
{
  return Zynamic::Forward<bool (const struct DynEntityDef*, const struct DynEntityClient*)>(L"DynEntCl_IsHealthGone")(dynEntDef, dynEntClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_GetCurrentXModel(const struct DynEntityDef* dynEntDef, const struct DynEntityClient* dynEntClient) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const struct DynEntityDef*, const struct DynEntityClient*)>(L"DynEntCl_GetCurrentXModel")(dynEntDef, dynEntClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_UpdateBModelWorldBounds(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose) -> float
{
  return Zynamic::Forward<float (const struct DynEntityDef*, const struct GfxPlacement*)>(L"DynEntCl_UpdateBModelWorldBounds")(dynEntDef, pose);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_LinkModel(unsigned short dynEntId) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntCl_LinkModel")(dynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_LinkBrush(unsigned short dynEntId) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntCl_LinkBrush")(dynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_UnlinkEntity(unsigned short dynEntId, enum DynEntityDrawType drawType) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType)>(L"DynEntCl_UnlinkEntity")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_DestroyPhysics(enum PhysWorld worldIndex, const struct DynEntityDef* dynEntDef, struct DynEntityClient* dynEntClient) -> void
{
  return Zynamic::Forward<void (enum PhysWorld, const struct DynEntityDef*, struct DynEntityClient*)>(L"DynEnt_DestroyPhysics")(worldIndex, dynEntDef, dynEntClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_Shutdown(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DynEntCl_Shutdown")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_InitEntities(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DynEntCl_InitEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_DestroyEntityModel(unsigned short id) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntCl_DestroyEntityModel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_CleanUpOldModels() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntCl_CleanUpOldModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_AddEntityModel() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"DynEntCl_AddEntityModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetDamage(struct DynEntityClient* dynEntClient, const struct DynEntityDef* dynEntDef) -> int
{
  return Zynamic::Forward<int (struct DynEntityClient*, const struct DynEntityDef*)>(L"DynEnt_GetDamage")(dynEntClient, dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_FixupLightConstraints(int localClientNum, int entnum, int primaryLightIndex) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"DynEnt_FixupLightConstraints")(localClientNum, entnum, primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UpdateLightConstraint(int localClientNum, const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose) -> void
{
  return Zynamic::Forward<void (int, const struct DynEntityDef*, const struct DynEntityPose*)>(L"DynEnt_UpdateLightConstraint")(localClientNum, dynEntDef, dynEntPose);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UpdateConstraints(int localClientNum, struct DynEntityClient* dynEntClient, const struct DynEntityDef* dynEntDef) -> void
{
  return Zynamic::Forward<void (int, struct DynEntityClient*, const struct DynEntityDef*)>(L"DynEnt_UpdateConstraints")(localClientNum, dynEntClient, dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_ProcessEntities(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"DynEntCl_ProcessEntities")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_SetupConstraints(const struct DynEntityDef* dynEntDef) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*)>(L"DynEnt_SetupConstraints")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetSurfaceType(const struct DynEntityDef* dynEntDef) -> int
{
  return Zynamic::Forward<int (const struct DynEntityDef*)>(L"DynEnt_GetSurfaceType")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_CalcPhysPreset(const struct DynEntityDef* dynEntDef) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*)>(L"DynEnt_CalcPhysPreset")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_CreatePhysObj(const struct DynEntityDef* dynEntDef, struct DynEntityClient* dynEntClient, const struct GfxPlacement* pose) -> int
{
  return Zynamic::Forward<int (const struct DynEntityDef*, struct DynEntityClient*, const struct GfxPlacement*)>(L"DynEntCl_CreatePhysObj")(dynEntDef, dynEntClient, pose);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_CreateEntityModel(struct XModel* model, const float* quat, const float* origin, const float* hitPos, const float* hitDir, const int mod, struct PhysPreset* preset) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct XModel*, const float*, const float*, const float*, const float*, const int, struct PhysPreset*)>(L"DynEntCl_CreateEntityModel")(model, quat, origin, hitPos, hitDir, mod, preset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PointTrace_r(enum DynEntityDrawType drawType, const struct pointtrace_t* clip, unsigned int sectorIndex, float* p1, float* p2, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (enum DynEntityDrawType, const struct pointtrace_t*, unsigned int, float*, float*, struct trace_t*)>(L"DynEntCl_PointTrace_r")(drawType, clip, sectorIndex, p1, p2, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PointTrace(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct trace_t*)>(L"DynEntCl_PointTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_AreaEntities_r(enum DynEntityDrawType drawType, unsigned int sectorIndex, struct DynEntityAreaParms* areaParms) -> void
{
  return Zynamic::Forward<void (enum DynEntityDrawType, unsigned int, struct DynEntityAreaParms*)>(L"DynEntCl_AreaEntities_r")(drawType, sectorIndex, areaParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_AreaEntities(enum DynEntityDrawType drawType, const float* mins, const float* maxs, int contentMask, unsigned short dynEntMaxCount, unsigned short* dynEntList) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum DynEntityDrawType, const float*, const float*, int, unsigned short, unsigned short*)>(L"DynEntCl_AreaEntities")(drawType, mins, maxs, contentMask, dynEntMaxCount, dynEntList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PlayEventFx(const struct FxEffectDef* def, const float* origin, const float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct FxEffectDef*, const float*, const float*[0x3])>(L"DynEntCl_PlayEventFx")(def, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PlayImpactEffects(int localClientNum, int sourceEntityNum, int surfType, const float* hitPos, const float* hitNormal) -> void
{
  return Zynamic::Forward<void (int, int, int, const float*, const float*)>(L"DynEntCl_PlayImpactEffects")(localClientNum, sourceEntityNum, surfType, hitPos, hitNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_TurnOffLight(const struct DynEntityDef* dynEntDef) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*)>(L"DynEntCl_TurnOffLight")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_Damage(int localClientNum, unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitDir, int damage) -> void
{
  return Zynamic::Forward<void (int, unsigned short, enum DynEntityDrawType, const float*, const float*, int)>(L"DynEntCl_Damage")(localClientNum, dynEntId, drawType, hitPos, hitDir, damage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_EventNeedsProcessed(int localClientNum, int sourceEntityNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"DynEntCl_EventNeedsProcessed")(localClientNum, sourceEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PlayBoltedFX(const struct FxEffectDef* fx, unsigned short absDynEntId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct FxEffectDef*, unsigned short)>(L"DynEntCl_PlayBoltedFX")(fx, absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_RemoveFromFadeList(unsigned short absDynEntId) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntCl_RemoveFromFadeList")(absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_SetFadeOut(unsigned short dynEntId, enum DynEntityDrawType drawType) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType)>(L"DynEntCl_SetFadeOut")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UpdateFading(int currentTime) -> void
{
  return Zynamic::Forward<void (int)>(L"DynEnt_UpdateFading")(currentTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_GetFadeTime(unsigned short dynEntId, enum DynEntityDrawType drawType) -> float
{
  return Zynamic::Forward<float (unsigned short, enum DynEntityDrawType)>(L"DynEntCl_GetFadeTime")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_SetBurning(unsigned short dynEntId, enum DynEntityDrawType drawType, bool burning) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType, bool)>(L"DynEntCl_SetBurning")(dynEntId, drawType, burning);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ResetFading() -> void
{
  return Zynamic::Forward<void ()>(L"DynEnt_ResetFading")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ResetBurning() -> void
{
  return Zynamic::Forward<void ()>(L"DynEnt_ResetBurning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UpdateBurning() -> void
{
  return Zynamic::Forward<void ()>(L"DynEnt_UpdateBurning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_FlameDamage(int localClientNum, unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitVel, int damage) -> void
{
  return Zynamic::Forward<void (int, unsigned short, enum DynEntityDrawType, const float*, const float*, int)>(L"DynEntCl_FlameDamage")(localClientNum, dynEntId, drawType, hitPos, hitVel, damage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_SetBurnFrac(unsigned short dynEntId, enum DynEntityDrawType drawType, float frac) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType, float)>(L"DynEntCl_SetBurnFrac")(dynEntId, drawType, frac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_GetBurnTime(unsigned short dynEntId, enum DynEntityDrawType drawType) -> float
{
  return Zynamic::Forward<float (unsigned short, enum DynEntityDrawType)>(L"DynEntCl_GetBurnTime")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_MeleeEvent(int localClientNum, int attackerEntNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"DynEntCl_MeleeEvent")(localClientNum, attackerEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_EntityImpactEvent(const struct trace_t* trace, int localClientNum, int sourceEntityNum, const float* start, const float* hitPos, bool isMelee) -> void
{
  return Zynamic::Forward<void (const struct trace_t*, int, int, const float*, const float*, bool)>(L"DynEntCl_EntityImpactEvent")(trace, localClientNum, sourceEntityNum, start, hitPos, isMelee);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_DynEntImpactEvent(int localClientNum, int sourceEntityNum, const float* start, const float* end, int damage, bool isMelee) -> bool
{
  return Zynamic::Forward<bool (int, int, const float*, const float*, int, bool)>(L"DynEntCl_DynEntImpactEvent")(localClientNum, sourceEntityNum, start, end, damage, isMelee);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CompareRagdollsForExplosion(const struct RagdollSortStruct& ent1, const struct RagdollSortStruct& ent2) -> bool
{
  return Zynamic::Forward<bool (const struct RagdollSortStruct&, const struct RagdollSortStruct&)>(L"Ragdoll_CompareRagdollsForExplosion")(ent1, ent2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_GetClosestEntities(enum DynEntityDrawType drawType, const float* radiusMins, const float* radiusMaxs, const float* origin, unsigned short* hitEnts, bool isCylinder) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum DynEntityDrawType, const float*, const float*, const float*, unsigned short*, bool)>(L"DynEntCl_GetClosestEntities")(drawType, radiusMins, radiusMaxs, origin, hitEnts, isCylinder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_ExplosionEvent(int localClientNum, bool isCylinder, const float* origin, float innerRadius, float outerRadius, const float* impulse, float inScale, int innerDamage, int outerDamage) -> void
{
  return Zynamic::Forward<void (int, bool, const float*, float, float, const float*, float, int, int)>(L"DynEntCl_ExplosionEvent")(localClientNum, isCylinder, origin, innerRadius, outerRadius, impulse, inScale, innerDamage, outerDamage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_DestroyEvent(int localClientNum, unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitDir) -> void
{
  return Zynamic::Forward<void (int, unsigned short, enum DynEntityDrawType, const float*, const float*)>(L"DynEntCl_DestroyEvent")(localClientNum, dynEntId, drawType, hitPos, hitDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateRopes(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CreateRopes")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MapHitLocationToRagdollBoneName(enum hitLocation_t hitLoc, unsigned int& boneName) -> void
{
  return Zynamic::Forward<void (enum hitLocation_t, unsigned int&)>(L"MapHitLocationToRagdollBoneName")(hitLoc, boneName);
}

#endif // __UNIMPLEMENTED__
