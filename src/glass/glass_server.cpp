//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'svGlasses''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'svGlasses''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassServer::SetState(enum GlassState::State st, const float* pos, const float* dir) -> void
{
  return Zynamic::Forward<public void (enum GlassState::State, const float*, const float*)>(L"GlassServer::SetState")(st, pos, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::Init() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::Shutdown() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::Update() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::ShatterAllCmd() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::ShatterAllCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::ShatterAll() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::ShatterAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::ResetAllCmd() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::ResetAllCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::ResetAll() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassesServer::ResetAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_Init() -> void
{
  return Zynamic::Forward<void ()>(L"GlassSv_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"GlassSv_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_Update() -> void
{
  return Zynamic::Forward<void ()>(L"GlassSv_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_AreaGlasses(const float* mins, const float* maxs, const struct Glass** glasses, unsigned int maxGlasses) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, const float*, const struct Glass**, unsigned int)>(L"GlassSv_AreaGlasses")(mins, maxs, glasses, maxGlasses);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_ClipMoveTrace(const struct moveclip_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, struct trace_t*)>(L"GlassSv_ClipMoveTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_PointTrace(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct trace_t*)>(L"GlassSv_PointTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_Damage(unsigned int glassId, int damage, int mod, const float* pos, const float* dir) -> void
{
  return Zynamic::Forward<void (unsigned int, int, int, const float*, const float*)>(L"GlassSv_Damage")(glassId, damage, mod, pos, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_RadiusDamage(const float* origin, float radius, float coneAngleCos, float* coneDirection, float innerDamage, float outerDamage, int mod) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float*, float, float, int)>(L"GlassSv_RadiusDamage")(origin, radius, coneAngleCos, coneDirection, innerDamage, outerDamage, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_Touch(unsigned int glassId, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (unsigned int, struct gentity_s*, int)>(L"GlassSv_Touch")(glassId, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_PredictTouch(struct gentity_s* other) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"GlassSv_PredictTouch")(other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassesServer::WriteSnapshotToClient(struct msg_t* msg, int sinceTime) -> void
{
  return Zynamic::Forward<public void (struct msg_t*, int)>(L"GlassesServer::WriteSnapshotToClient")(msg, sinceTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_WriteSnapshotToClient(struct msg_t* msg, int sinceTime) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int)>(L"GlassSv_WriteSnapshotToClient")(msg, sinceTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlassSv_WriteGameState(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"GlassSv_WriteGameState")(msg);
}

#endif // __UNIMPLEMENTED__
