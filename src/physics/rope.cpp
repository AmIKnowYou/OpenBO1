//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_ropeCurve''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_ropeCurve''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Create(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_Create")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_IsValid(int rope_index) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Rope_IsValid")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Activate(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_Activate")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_SetFlag(int rope_index, int flags, int onoff) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"Rope_SetFlag")(rope_index, flags, onoff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Reset(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_Reset")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Reset() -> void
{
  return Zynamic::Forward<void ()>(L"Rope_Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_SetMaterial(int rope_index, struct Material* const material) -> void
{
  return Zynamic::Forward<void (int, struct Material* const)>(L"Rope_SetMaterial")(rope_index, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_GetNumParticles(int rope_index) -> int
{
  return Zynamic::Forward<int (int)>(L"Rope_GetNumParticles")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_AddParticle(int rope_index, const float* pos) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Rope_AddParticle")(rope_index, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Init(int rope_index, int npars, const float* p0, const float* p1, float rope_len, float rope_width, float scale, float force_scale, int static_rope) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const float*, float, float, float, float, int)>(L"Rope_Init")(rope_index, npars, p0, p1, rope_len, rope_width, scale, force_scale, static_rope);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_AddAnchor(int rope_index, int particle_index, const float* p, int entity_index, int bone_name_hash, enum rope_constraint_e type) -> void
{
  return Zynamic::Forward<void (int, int, const float*, int, int, enum rope_constraint_e)>(L"Rope_AddAnchor")(rope_index, particle_index, p, entity_index, bone_name_hash, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_AddDynEntAnchor(int rope_index, int particle_index, const float* p, int entity_index) -> void
{
  return Zynamic::Forward<void (int, int, const float*, int)>(L"Rope_AddDynEntAnchor")(rope_index, particle_index, p, entity_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_AddEntAnchor(int rope_index, int particle_index, const float* p, int entity_index, int bone_name_hash) -> void
{
  return Zynamic::Forward<void (int, int, const float*, int, int)>(L"Rope_AddEntAnchor")(rope_index, particle_index, p, entity_index, bone_name_hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_RemoveAnchor(int rope_index, int particle_index) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Rope_RemoveAnchor")(rope_index, particle_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ApplyPhysics(int rope_index, float dt) -> void
{
  return Zynamic::Forward<void (int, float)>(L"Rope_ApplyPhysics")(rope_index, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ApplyContactConstraint(int rope_index, int contact_index) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Rope_ApplyContactConstraint")(rope_index, contact_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ApplyConstraint(int rope_index, int constraint_index) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Rope_ApplyConstraint")(rope_index, constraint_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ApplyConstraints(int rope_index, bool forward) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Rope_ApplyConstraints")(rope_index, forward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ExplosionEvent(int rope_index, const float* origin, float innerRadius, float outerRadius, int innerDamage, int outerDamage) -> void
{
  return Zynamic::Forward<void (int, const float*, float, float, int, int)>(L"Rope_ExplosionEvent")(rope_index, origin, innerRadius, outerRadius, innerDamage, outerDamage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_UpdateVisible(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_UpdateVisible")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Tick(const struct RopeUpdateCmdData* cmd, int rope_index, float dt, bool force_update) -> void
{
  return Zynamic::Forward<void (const struct RopeUpdateCmdData*, int, float, bool)>(L"Rope_Tick")(cmd, rope_index, dt, force_update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_DebugDraw(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_DebugDraw")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_BuildCurve(const struct RopeUpdateCmdData* cmd, int rope_index) -> void
{
  return Zynamic::Forward<void (const struct RopeUpdateCmdData*, int)>(L"Rope_BuildCurve")(cmd, rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Draw(int rope_index, int localClientNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Rope_Draw")(rope_index, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Create(int rope_index, const float* start, const float* end, const float length, const float scale, const float width, const float force_scale, int static_rope) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const float, const float, const float, const float, int)>(L"Rope_Create")(rope_index, start, end, length, scale, width, force_scale, static_rope);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_UpdateInternal(const struct RopeUpdateCmdData* cmd) -> void
{
  return Zynamic::Forward<void (const struct RopeUpdateCmdData*)>(L"Rope_UpdateInternal")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Update(int localClientNum, int curtime) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Rope_Update")(localClientNum, curtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Render(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_Render")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Settle(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_Settle")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ExplosionEvent(const float* origin, float innerRadius, float outerRadius, int innerDamage, int outerDamage) -> void
{
  return Zynamic::Forward<void (const float*, float, float, int, int)>(L"Rope_ExplosionEvent")(origin, innerRadius, outerRadius, innerDamage, outerDamage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_through_sphere(const float* p, const float* ud, const float* ctr, const float r, float& t, float* hitp) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*, const float, float&, float*)>(L"trace_point_through_sphere")(p, ud, ctr, r, t, hitp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_Trace(const float* p0, const float* p1) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"Rope_Trace")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_CollideWorld(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_CollideWorld")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_CollideEntitiesHelper(int rope_index, const float* origin) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Rope_CollideEntitiesHelper")(rope_index, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_CollideEntities(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"Rope_CollideEntities")(rope_index);
}

#endif // __UNIMPLEMENTED__
