//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_Trigger(struct gentity_s* self, struct gentity_s* other) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"G_Trigger")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitTrigger(struct gentity_s* self) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"InitTrigger")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitTriggerWait(struct gentity_s* ent, int spawnflag, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, struct SpawnVar*)>(L"InitTriggerWait")(ent, spawnflag, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitSentientTrigger(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"InitSentientTrigger")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto multi_trigger(struct gentity_s* ent, struct gentity_s* activator) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"multi_trigger")(ent, activator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Touch_Multi(struct gentity_s* self, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Touch_Multi")(self, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_multiple(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_multiple")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto init_trigger_radius(struct gentity_s* ent, float radius, float height) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float, float)>(L"init_trigger_radius")(ent, radius, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_radius(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_radius")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_radius_use(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_radius_use")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_disk(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_disk")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto hurt_touch(struct gentity_s* self, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"hurt_touch")(self, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto hurt_use(struct gentity_s* self, struct gentity_s* other, struct gentity_s* activator) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*)>(L"hurt_use")(self, other, activator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_hurt(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_hurt")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_once(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_once")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Respond_trigger_damage(struct gentity_s* pEnt, int iMOD) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"Respond_trigger_damage")(pEnt, iMOD);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Activate_trigger_damage(struct gentity_s* pEnt, struct gentity_s* pOther, int iDamage, int iMOD) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, int)>(L"Activate_trigger_damage")(pEnt, pOther, iDamage, iMOD);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Use_trigger_damage(struct gentity_s* pEnt, struct gentity_s* pOther, struct gentity_s* pActivator) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*)>(L"Use_trigger_damage")(pEnt, pOther, pActivator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pain_trigger_damage(struct gentity_s* pSelf, struct gentity_s* pAttacker, int iDamage, const float* vPoint, const int iMod, const float* vDir, const enum hitLocation_t hitLoc, int weaponIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t, int)>(L"Pain_trigger_damage")(pSelf, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_trigger_damage(struct gentity_s* pSelf, struct gentity_s* pAttacker, int iDamage, const float* vPoint, const int iMod, const float* vDir, const enum hitLocation_t hitLoc, const int weaponIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t, const int)>(L"Flame_trigger_damage")(pSelf, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, weaponIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Die_trigger_damage(struct gentity_s* pSelf, struct gentity_s* pInflictor, struct gentity_s* pAttacker, int iDamage, int iMod, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int)>(L"Die_trigger_damage")(pSelf, pInflictor, pAttacker, iDamage, iMod, iWeapon, vDir, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_damage(struct gentity_s* pSelf, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_damage")(pSelf, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CheckHitTriggerDamage(struct gentity_s* pActivator, const float* vStart, const float* vEnd, int iDamage, int iMOD) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*, int, int)>(L"G_CheckHitTriggerDamage")(pActivator, vStart, vEnd, iDamage, iMOD);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GrenadeTouchTriggerDamage(struct gentity_s* pActivator, float* vStart, float* vEnd, int iDamage, int iMOD) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*, float*, int, int)>(L"G_GrenadeTouchTriggerDamage")(pActivator, vStart, vEnd, iDamage, iMOD);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_lookat(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_lookat")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trigger_ik_playerclip_terrain_touch(struct gentity_s* ent, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"trigger_ik_playerclip_terrain_touch")(ent, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_trigger_ik_playerclip_terrain(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_trigger_ik_playerclip_terrain")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trigger_ik_disable_terrain_mapping_touch(struct gentity_s* ent, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"trigger_ik_disable_terrain_mapping_touch")(ent, other, bTouched);
}

#endif // __UNIMPLEMENTED__
