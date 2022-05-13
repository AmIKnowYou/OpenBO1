//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_g_mover() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_mover")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto mover_info_t::init(const float* origin, const float* angles, const bool do_collision) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, const bool)>(L"mover_info_t::init")(origin, angles, do_collision);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto mover_info_t::init(const float* origin, const float* angles, const float* prev_origin, const float* prev_angles, const bool do_collision) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, const float*, const float*, const bool)>(L"mover_info_t::init")(origin, angles, prev_origin, prev_angles, do_collision);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto mover_info_t::update(const float* origin, const float* angles) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"mover_info_t::update")(origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto mover_info_t::apply_rotation(float* v) -> void
{
  return Zynamic::Forward<public void (float*)>(L"mover_info_t::apply_rotation")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto mover_info_t::apply_rotation_translation(float* v) -> void
{
  return Zynamic::Forward<public void (float*)>(L"mover_info_t::apply_rotation_translation")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_mover_info_map''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_mover_info_map''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_mover_info_allocator''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_mover_info_allocator''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_mover_info(struct gentity_s* ent) -> class mover_info_t*
{
  return Zynamic::Forward<class mover_info_t* (struct gentity_s*)>(L"get_mover_info")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_mover_info(struct gentity_s* ent) -> class mover_info_t*
{
  return Zynamic::Forward<class mover_info_t* (struct gentity_s*)>(L"create_mover_info")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto entity_is_a_mover(const int entnum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"entity_is_a_mover")(entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PushEntity(struct gentity_s* check, struct gentity_s* pusher, const float* move, const float* amove, const class mover_info_t& mi) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, const float*, const float*, const class mover_info_t&)>(L"G_PushEntity")(check, pusher, move, amove, mi);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsEntityLinkedToMe(struct gentity_s* self, struct gentity_s* other) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct gentity_s*)>(L"IsEntityLinkedToMe")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MoverPush(struct gentity_s* pusher, const class mover_info_t& mi) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const class mover_info_t&)>(L"G_MoverPush")(pusher, mi);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetEntity(const unsigned short& targetname) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const unsigned short&)>(L"GetEntity")(targetname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CreatePhysicsObject(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_CreatePhysicsObject")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateConstraint(struct PhysConstraint& constraint) -> void
{
  return Zynamic::Forward<void (struct PhysConstraint&)>(L"CreateConstraint")(constraint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DeleteConstraint(int rope_index) -> void
{
  return Zynamic::Forward<void (int)>(L"DeleteConstraint")(rope_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdatePhysicsPose(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UpdatePhysicsPose")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcEntityPhysicsPositions(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_CalcEntityPhysicsPositions")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MoverTeam(struct gentity_s* ent, const class mover_info_t& mi) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const class mover_info_t&)>(L"G_MoverTeam")(ent, mi);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MoverTeam_New(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_MoverTeam_New")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunMover(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_RunMover")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trigger_use_shared(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"trigger_use_shared")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trigger_use(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"trigger_use")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
