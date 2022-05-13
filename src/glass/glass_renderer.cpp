//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::operator new(unsigned int size) -> void*
{
  return Zynamic::Forward<public void* (unsigned int)>(L"GlassRenderer::operator new")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::operator delete(void* ptr) -> void
{
  return Zynamic::Forward<public void (void*)>(L"GlassRenderer::operator delete")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GlassRenderer(const struct Glasses* glasses) -> void
{
  return Zynamic::Forward<public void (const struct Glasses*)>(L"GlassRenderer::GlassRenderer")(glasses);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::~GlassRenderer() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::~GlassRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::Reset() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassRenderer::InitShardMeshVertexLists() -> void
{
  return Zynamic::Forward<private void ()>(L"GlassRenderer::InitShardMeshVertexLists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::RemoveGlassShards(unsigned int glassIndex) -> void
{
  return Zynamic::Forward<public void (unsigned int)>(L"GlassRenderer::RemoveGlassShards")(glassIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AllocShard() -> struct GlassShard*
{
  return Zynamic::Forward<public struct GlassShard* ()>(L"GlassRenderer::AllocShard")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::FreeShard(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"GlassRenderer::FreeShard")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AllocPhysics() -> struct GlassPhysics*
{
  return Zynamic::Forward<public struct GlassPhysics* ()>(L"GlassRenderer::AllocPhysics")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::FreePhysics(struct GlassPhysics* phys) -> void
{
  return Zynamic::Forward<public void (struct GlassPhysics*)>(L"GlassRenderer::FreePhysics")(phys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::RemovePhysicsShards() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::RemovePhysicsShards")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddGroupChange(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"GlassRenderer::AddGroupChange")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::DoGroupChanges() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::DoGroupChanges")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::Update(int threadId) -> void
{
  return Zynamic::Forward<public void (int)>(L"GlassRenderer::Update")(threadId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GenerateVerts(int localClientNum, unsigned int viewIndex, unsigned int threadId) -> void
{
  return Zynamic::Forward<public void (int, unsigned int, unsigned int)>(L"GlassRenderer::GenerateVerts")(localClientNum, viewIndex, threadId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassRenderer::ExplosionEvent(const float* origin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<private void (const float*, const float, const float, const float, int)>(L"GlassRenderer::ExplosionEvent")(origin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassRenderer::TracePoint(const float* p0, const float* p1) -> int
{
  return Zynamic::Forward<private int (const float*, const float*)>(L"GlassRenderer::TracePoint")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassRenderer::Melee(const float* eyePos, const float* forward, const float* right, const float* up, float range) -> void
{
  return Zynamic::Forward<private void (const float*, const float*, const float*, const float*, float)>(L"GlassRenderer::Melee")(eyePos, forward, right, up, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::CalcPackedPos(const float* pos) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (const float*)>(L"GlassRenderer::CalcPackedPos")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GetShardGroup(const float* pos, const struct GlassDef* glassDef) -> struct ShardGroup*
{
  return Zynamic::Forward<public struct ShardGroup* (const float*, const struct GlassDef*)>(L"GlassRenderer::GetShardGroup")(pos, glassDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GetShardGroup(unsigned int packedPos, const struct GlassDef* glassDef) -> struct ShardGroup*
{
  return Zynamic::Forward<public struct ShardGroup* (unsigned int, const struct GlassDef*)>(L"GlassRenderer::GetShardGroup")(packedPos, glassDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::FreeShardGroup(struct ShardGroup* grp) -> void
{
  return Zynamic::Forward<public void (struct ShardGroup*)>(L"GlassRenderer::FreeShardGroup")(grp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AllocateShardMemory(unsigned int size, struct GlassShard* shard) -> void*
{
  return Zynamic::Forward<public void* (unsigned int, struct GlassShard*)>(L"GlassRenderer::AllocateShardMemory")(size, shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::FreeShardMemory(void* ptr) -> void
{
  return Zynamic::Forward<public void (void*)>(L"GlassRenderer::FreeShardMemory")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::ShardMemorySize(void* ptr) -> int
{
  return Zynamic::Forward<public int (void*)>(L"GlassRenderer::ShardMemorySize")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::SortedShardsList::Insert(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"GlassRenderer::SortedShardsList::Insert")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::SortedShardsList::InsertReverse(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"GlassRenderer::SortedShardsList::InsertReverse")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddColidingShard(struct GlassShard* shard) -> bool
{
  return Zynamic::Forward<public bool (struct GlassShard*)>(L"GlassRenderer::AddColidingShard")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::RemoveColidingShard(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"GlassRenderer::RemoveColidingShard")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GetSmallestColidingShard() -> struct GlassShard*
{
  return Zynamic::Forward<public struct GlassShard* ()>(L"GlassRenderer::GetSmallestColidingShard")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::IsVisible(const float* minmax, int localClientNum) -> bool
{
  return Zynamic::Forward<public bool (const float*, int)>(L"GlassRenderer::IsVisible")(minmax, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddShatterAction(struct GlassClient* glass, const float* hitPos, const float* hitDir, bool gameState) -> void
{
  return Zynamic::Forward<public void (struct GlassClient*, const float*, const float*, bool)>(L"GlassRenderer::AddShatterAction")(glass, hitPos, hitDir, gameState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddExplosionAction(const float* origin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<public void (const float*, const float, const float, const float, int)>(L"GlassRenderer::AddExplosionAction")(origin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddTraceAction(const float* p0, const float* p1) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"GlassRenderer::AddTraceAction")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddMeleeAction(const float* eyePos, const float* forward, const float* right, const float* up, float range) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, const float*, const float*, float)>(L"GlassRenderer::AddMeleeAction")(eyePos, forward, right, up, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassRenderer::ExecuteActions() -> void
{
  return Zynamic::Forward<private void ()>(L"GlassRenderer::ExecuteActions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::StartMaintenance() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::StartMaintenance")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GetSmallestShards(unsigned int maxShards, bool checkVisible, bool isVisible) -> void
{
  return Zynamic::Forward<public void (unsigned int, bool, bool)>(L"GlassRenderer::GetSmallestShards")(maxShards, checkVisible, isVisible);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::GetLargestShards(unsigned int maxShards, bool checkVisible, bool isVisible) -> void
{
  return Zynamic::Forward<public void (unsigned int, bool, bool)>(L"GlassRenderer::GetLargestShards")(maxShards, checkVisible, isVisible);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::AddUsedShardMaterial(struct Material* material) -> void
{
  return Zynamic::Forward<public void (struct Material*)>(L"GlassRenderer::AddUsedShardMaterial")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::DoMaintenance() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::DoMaintenance")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::CrashGlassCmd() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::CrashGlassCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::StartCrashGlass() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::StartCrashGlass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::CrashGlass() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::CrashGlass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::PrintHwmCmd() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::PrintHwmCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::PrintHwm() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::PrintHwm")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::Broom() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::Broom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::DrawDebug() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::DrawDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassRenderer::BeginUpdate() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassRenderer::BeginUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::Init(unsigned int p, const struct GlassDef* gd) -> void
{
  return Zynamic::Forward<public void (unsigned int, const struct GlassDef*)>(L"ShardGroup::Init")(p, gd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::Reset() -> void
{
  return Zynamic::Forward<public void ()>(L"ShardGroup::Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::Add(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"ShardGroup::Add")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::Remove(struct GlassShard* shard) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"ShardGroup::Remove")(shard);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::RemoveGlassShards(unsigned int glassIndex) -> void
{
  return Zynamic::Forward<public void (unsigned int)>(L"ShardGroup::RemoveGlassShards")(glassIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::UpdateBBox() -> void
{
  return Zynamic::Forward<public void ()>(L"ShardGroup::UpdateBBox")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::Update(float deltaTime) -> void
{
  return Zynamic::Forward<public void (float)>(L"ShardGroup::Update")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::GenerateVerts(bool firstView, int localClientNum) -> void
{
  return Zynamic::Forward<public void (bool, int)>(L"ShardGroup::GenerateVerts")(firstView, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::FreeRenderMemory() -> void
{
  return Zynamic::Forward<public void ()>(L"ShardGroup::FreeRenderMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::AllocateIndices(int numIndices) -> unsigned short*
{
  return Zynamic::Forward<public unsigned short* (int)>(L"ShardGroup::AllocateIndices")(numIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::AllocateVerts(int numVerts, unsigned short& vertsBaseIndex) -> struct GfxPackedVertex*
{
  return Zynamic::Forward<public struct GfxPackedVertex* (int, unsigned short&)>(L"ShardGroup::AllocateVerts")(numVerts, vertsBaseIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::ExplosionEvent(const float* origin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<public void (const float*, const float, const float, const float, int)>(L"ShardGroup::ExplosionEvent")(origin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ShardGroup::TracePoint(const float* p0, const float* p1) -> int
{
  return Zynamic::Forward<public int (const float*, const float*)>(L"ShardGroup::TracePoint")(p0, p1);
}

#endif // __UNIMPLEMENTED__
