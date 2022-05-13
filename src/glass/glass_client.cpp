//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::InitAllocator(struct Glasses* glasses) -> void
{
  return Zynamic::Forward<public void (struct Glasses*)>(L"GlassesClient::InitAllocator")(glasses);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::Allocate(int size, const char* file, int line) -> void*
{
  return Zynamic::Forward<public void* (int, const char*, int)>(L"GlassesClient::Allocate")(size, file, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::Free(void* ptr) -> void
{
  return Zynamic::Forward<public void (void*)>(L"GlassesClient::Free")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::GetFreeMem() -> unsigned int
{
  return Zynamic::Forward<public unsigned int ()>(L"GlassesClient::GetFreeMem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::operator new(unsigned int size) -> void*
{
  return Zynamic::Forward<public void* (unsigned int)>(L"GlassesClient::operator new")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::GlassesClient(const struct Glasses* glss) -> void
{
  return Zynamic::Forward<public void (const struct Glasses*)>(L"GlassesClient::GlassesClient")(glss);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::~GlassesClient() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesClient::~GlassesClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::GetGlass(int idx) -> const struct GlassClient*
{
  return Zynamic::Forward<public const struct GlassClient* (int)>(L"GlassesClient::GetGlass")(idx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::Reset() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesClient::Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::Update(int localClientNum) -> void
{
  return Zynamic::Forward<public void (int)>(L"GlassesClient::Update")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::ParseSnapshot(int localClientNum, struct msg_t* msg, bool gameState) -> void
{
  return Zynamic::Forward<public void (int, struct msg_t*, bool)>(L"GlassesClient::ParseSnapshot")(localClientNum, msg, gameState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::WriteDemoSnapshot(struct msg_t* msg) -> void
{
  return Zynamic::Forward<public void (struct msg_t*)>(L"GlassesClient::WriteDemoSnapshot")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::PreShatterNext() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesClient::PreShatterNext")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Init(const struct Glass* gls) -> void
{
  return Zynamic::Forward<public void (const struct Glass*)>(L"GlassClient::Init")(gls);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Reset() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassClient::Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::SetState(int localClientNum, enum GlassState::State newState, const float* hitPos, const float* hitDir, bool gameState) -> void
{
  return Zynamic::Forward<public void (int, enum GlassState::State, const float*, const float*, bool)>(L"GlassClient::SetState")(localClientNum, newState, hitPos, hitDir, gameState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compareOutlineEdges(const void* s1, const void* s2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compareOutlineEdges")(s1, s2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::PlayShatterFX(int localClientNum, const float* hitPos, const float* hitDir) -> void
{
  return Zynamic::Forward<public void (int, const float*, const float*)>(L"GlassClient::PlayShatterFX")(localClientNum, hitPos, hitDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Update(int localClientNum) -> void
{
  return Zynamic::Forward<public void (int)>(L"GlassClient::Update")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::SetBrushMaterial(enum GlassState::State state) -> void
{
  return Zynamic::Forward<public void (enum GlassState::State)>(L"GlassClient::SetBrushMaterial")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Shatter(const float* pos, const float* dir) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"GlassClient::Shatter")(pos, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::PreShatter() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassClient::PreShatter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Outlines::CalcMemorySize(struct GlassShard** shards, int numShards) -> int
{
  return Zynamic::Forward<public int (struct GlassShard**, int)>(L"GlassClient::Outlines::CalcMemorySize")(shards, numShards);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Outlines::Outlines(const struct GlassShard* baseShard, struct GlassShard** shards, int numShards) -> void
{
  return Zynamic::Forward<public void (const struct GlassShard*, struct GlassShard**, int)>(L"GlassClient::Outlines::Outlines")(baseShard, shards, numShards);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassClient::Outlines::InitShards(const struct GlassShard* baseShard, struct GlassShard** shards, int maxNewShards) -> int
{
  return Zynamic::Forward<public int (const struct GlassShard*, struct GlassShard**, int)>(L"GlassClient::Outlines::InitShards")(baseShard, shards, maxNewShards);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_AllocateMemory() -> void
{
  return Zynamic::Forward<void ()>(L"GlassCl_AllocateMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_FreeMemory() -> void
{
  return Zynamic::Forward<void ()>(L"GlassCl_FreeMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_Reset(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"GlassCl_Reset")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_Update(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"GlassCl_Update")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_ReadGameState(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"GlassCl_ReadGameState")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_ParseSnapshot(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"GlassCl_ParseSnapshot")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_WriteDemoSnapshot(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"GlassCl_WriteDemoSnapshot")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_BeginUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"GlassCl_BeginUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_BeginGenerateVerts(int localClientNum, unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"GlassCl_BeginGenerateVerts")(localClientNum, viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_WaitGenerateVerts() -> void
{
  return Zynamic::Forward<void ()>(L"GlassCl_WaitGenerateVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_GenerateVerts(int localClientNum, unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"GlassCl_GenerateVerts")(localClientNum, viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_ExplosionEvent(int localClientNum, const float* origin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<void (int, const float*, const float, const float, const float, int)>(L"GlassCl_ExplosionEvent")(localClientNum, origin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_TracePoint(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct trace_t*)>(L"GlassCl_TracePoint")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::TracePoint(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<public void (const struct pointtrace_t*, struct trace_t*)>(L"GlassesClient::TracePoint")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_MeleeEvent(int localClientNum, int attackerEntNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"GlassCl_MeleeEvent")(localClientNum, attackerEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_DrawDebug() -> void
{
  return Zynamic::Forward<void ()>(L"GlassCl_DrawDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_AreaGlasses(const float* mins, const float* maxs, const struct Glass** glasses, unsigned int maxGlasses) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, const float*, const struct Glass**, unsigned int)>(L"GlassCl_AreaGlasses")(mins, maxs, glasses, maxGlasses);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::AreaGlasses(const float* mins, const float* maxs, const struct Glass** glss, unsigned int maxGlasses) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (const float*, const float*, const struct Glass**, unsigned int)>(L"GlassesClient::AreaGlasses")(mins, maxs, glss, maxGlasses);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassCl_ClipMoveTrace(const struct moveclip_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, struct trace_t*)>(L"GlassCl_ClipMoveTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesClient::ClipMoveTrace(const struct moveclip_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<public void (const struct moveclip_t*, struct trace_t*)>(L"GlassesClient::ClipMoveTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
