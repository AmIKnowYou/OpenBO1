//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto ModelHashTable<ActiveModelNode, 63, 128>::Init() -> void
{
  return Zynamic::Forward<public void ()>(L"ModelHashTable<ActiveModelNode,63,128>::Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ModelHashTable<ActiveModelNode, 63, 128>::Add(const struct ActiveModelNode* newNode) -> bool
{
  return Zynamic::Forward<public bool (const struct ActiveModelNode*)>(L"ModelHashTable<ActiveModelNode,63,128>::Add")(newNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ModelHashTable<ActiveModelNode, 63, 128>::FindByKey(unsigned short key) -> struct ActiveModelNode*
{
  return Zynamic::Forward<public struct ActiveModelNode* (unsigned short)>(L"ModelHashTable<ActiveModelNode,63,128>::FindByKey")(key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ModelIsFullySquashed(unsigned int drawInstIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"ModelIsFullySquashed")(drawInstIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetModelIsFullySquashed(unsigned int drawInstIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SetModelIsFullySquashed")(drawInstIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFoliageSquashFromHash(unsigned int drawInstIndex) -> float
{
  return Zynamic::Forward<float (unsigned int)>(L"GetFoliageSquashFromHash")(drawInstIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GrassPersistForceIsActive(const struct GrassPersistForce& force) -> bool
{
  return Zynamic::Forward<bool (const struct GrassPersistForce&)>(L"GrassPersistForceIsActive")(force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetGrassPersistForceToActive(struct GrassPersistForce& force) -> void
{
  return Zynamic::Forward<void (struct GrassPersistForce&)>(L"SetGrassPersistForceToActive")(force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ClientFoliageInfo::ClientFoliageInfo() -> void
{
  return Zynamic::Forward<public void ()>(L"ClientFoliageInfo::ClientFoliageInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_foliageInfo''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_foliageInfo''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageSetPerFramePersistantForces(struct PerFrameFoliageInfo* frameInfo, const struct ClientFoliageInfo* clientFoliageInfo) -> void
{
  return Zynamic::Forward<void (struct PerFrameFoliageInfo*, const struct ClientFoliageInfo*)>(L"R_FoliageSetPerFramePersistantForces")(frameInfo, clientFoliageInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkDynFoliageModels(struct GfxWorld* gfxWorld) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*)>(L"R_MarkDynFoliageModels")(gfxWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageInitModels(struct GfxWorld* gfxWorld) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*)>(L"R_FoliageInitModels")(gfxWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"R_FoliageShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageSetInitialBurnState() -> void
{
  return Zynamic::Forward<void ()>(L"R_FoliageSetInitialBurnState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetGrassParmShaderConstant(float curSquashAmt, float* out) -> void
{
  return Zynamic::Forward<void (float, float*)>(L"R_GetGrassParmShaderConstant")(curSquashAmt, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetWindBestStrength(const struct GrassWindForce* windForces, unsigned int numWindForces, const float* modelPlacement) -> float
{
  return Zynamic::Forward<float (const struct GrassWindForce*, unsigned int, const float*)>(L"R_GetWindBestStrength")(windForces, numWindForces, modelPlacement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelNeedsCharredTech(unsigned int modelDrawInstIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"R_StaticModelNeedsCharredTech")(modelDrawInstIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AABBOverlapsSphere(const float* boxMin, const float* boxMax, float sphereRadiusSquared, const float* sphereCenter) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, const float*)>(L"AABBOverlapsSphere")(boxMin, boxMax, sphereRadiusSquared, sphereCenter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageNotifyBurn(float* loc, float rad, int* models, int models_count, bool instant) -> void
{
  return Zynamic::Forward<void (float*, float, int*, int, bool)>(L"R_FoliageNotifyBurn")(loc, rad, models, models_count, instant);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddNearMuzzleShakeForce(unsigned int id, const float* forcePos, const float* forwardVector, const struct FoliageShakeParams& params) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*, const struct FoliageShakeParams&)>(L"AddNearMuzzleShakeForce")(id, forcePos, forwardVector, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageNotifyGrenadeExplosion(int localClientNum, float* loc) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"R_FoliageNotifyGrenadeExplosion")(localClientNum, loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageNofityWeaponFiring(int localClientNum, unsigned int id, const float* loc, const float* forwardVector, bool isFlameThrower) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const float*, const float*, bool)>(L"R_FoliageNofityWeaponFiring")(localClientNum, id, loc, forwardVector, isFlameThrower);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawDebugAxis(const float* pos) -> void
{
  return Zynamic::Forward<void (const float*)>(L"DrawDebugAxis")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddInstantForce(const struct GrassForce& force) -> void
{
  return Zynamic::Forward<void (const struct GrassForce&)>(L"AddInstantForce")(force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageSetGrassWindForces(int clientIdx, float* pos, float radius, float strength) -> void
{
  return Zynamic::Forward<void (int, float*, float, float)>(L"R_FoliageSetGrassWindForces")(clientIdx, pos, radius, strength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageNotifyVehiclePosition(int localClientNum, const float* vehiclePos) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"R_FoliageNotifyVehiclePosition")(localClientNum, vehiclePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageSetDefaultShaderConstants(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_FoliageSetDefaultShaderConstants")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynSModelInitGfxState(struct DynSModelGfxState* dynData) -> void
{
  return Zynamic::Forward<void (struct DynSModelGfxState*)>(L"R_DynSModelInitGfxState")(dynData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcVisDynSModelDrawState(const unsigned short* modelIndexList, unsigned int listBegin, unsigned int listEnd, const struct PerFrameFoliageInfo* frameInfo, struct DynSModelClientView* view, struct DynSModelGfxState* dynData, unsigned int persistForceIndexOffset, unsigned int instantForceIndexOffset, const struct ForceBoundsInfo* boundsInfo) -> void
{
  return Zynamic::Forward<void (const unsigned short*, unsigned int, unsigned int, const struct PerFrameFoliageInfo*, struct DynSModelClientView*, struct DynSModelGfxState*, unsigned int, unsigned int, const struct ForceBoundsInfo*)>(L"R_CalcVisDynSModelDrawState")(modelIndexList, listBegin, listEnd, frameInfo, view, dynData, persistForceIndexOffset, instantForceIndexOffset, boundsInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_drawStateWorkerSharedBuffer''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_drawStateWorkerSharedBuffer''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'dyn_smodel_drawstateModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'dyn_smodel_drawstateModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dyn_smodel_drawstateCallback(struct jqBatch* batch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"dyn_smodel_drawstateCallback")(batch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynSModelWaitWorker() -> void
{
  return Zynamic::Forward<void ()>(L"R_DynSModelWaitWorker")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynSModelBuildClientView(const struct DynSModelClient* clientVis, struct DynSModelClientView* view, struct DynSModelGfxState* dynData) -> void
{
  return Zynamic::Forward<void (const struct DynSModelClient*, struct DynSModelClientView*, struct DynSModelGfxState*)>(L"R_DynSModelBuildClientView")(clientVis, view, dynData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FoliageSetStaticModelShaderConstants(struct GfxCmdBufContext* context, unsigned int smodelDrawIndex, const struct DynSModelClientView* smodelClientView, const struct DynSModelGfxState* smodelState) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext*, unsigned int, const struct DynSModelClientView*, const struct DynSModelGfxState*)>(L"R_FoliageSetStaticModelShaderConstants")(context, smodelDrawIndex, smodelClientView, smodelState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynSModelGetCounts(unsigned int& numDynSModelInMap, unsigned int& maxNumDynSModel) -> void
{
  return Zynamic::Forward<void (unsigned int&, unsigned int&)>(L"R_DynSModelGetCounts")(numDynSModelInMap, maxNumDynSModel);
}

#endif // __UNIMPLEMENTED__
