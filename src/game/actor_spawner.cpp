//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SpotWouldTelefrag(struct gentity_s* spot) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"SpotWouldTelefrag")(spot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointCouldSeeSpawn(const float* vEyePos, const float* vSpawnPos, int iIgnoreEnt1, int iIgnoreEnt2) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int, int)>(L"PointCouldSeeSpawn")(vEyePos, vSpawnPos, iIgnoreEnt1, iIgnoreEnt2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnActor(struct gentity_s* ent, const unsigned int targetname, enum enumForceSpawn forceSpawn, int getEnemyInfo) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, const unsigned int, enum enumForceSpawn, int)>(L"SpawnActor")(ent, targetname, forceSpawn, getEnemyInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DropActorSpawnersToFloor() -> void
{
  return Zynamic::Forward<void ()>(L"G_DropActorSpawnersToFloor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_actor_spawner(struct gentity_s* pEnt, struct SpawnVar& spawnVar) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct SpawnVar&)>(L"SP_actor_spawner")(pEnt, spawnVar);
}

#endif // __UNIMPLEMENTED__
