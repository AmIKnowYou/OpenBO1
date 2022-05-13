//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_g_combat() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_combat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_Strcpy(unsigned char* pMember, const char* pKeyValue) -> void
{
  return Zynamic::Forward<void (unsigned char*, const char*)>(L"VEH_Strcpy")(pMember, pKeyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseHitLocDmgTable() -> void
{
  return Zynamic::Forward<void ()>(L"G_ParseHitLocDmgTable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LookAtKiller(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*)>(L"LookAtKiller")(self, inflictor, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MeansOfDeathFromScriptParam(int scrParam) -> enum meansOfDeath_t
{
  return Zynamic::Forward<enum meansOfDeath_t (int)>(L"G_MeansOfDeathFromScriptParam")(scrParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DeathGrenadeDrop(struct gentity_s* self, int meansOfDeath) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"DeathGrenadeDrop")(self, meansOfDeath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto player_die(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int meansOfDeath, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int)>(L"player_die")(self, inflictor, attacker, damage, meansOfDeath, iWeapon, vDir, hitLoc, psTimeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetWeaponHitLocationMultiplier(enum hitLocation_t hitLoc, int weapon) -> float
{
  return Zynamic::Forward<float (enum hitLocation_t, int)>(L"G_GetWeaponHitLocationMultiplier")(hitLoc, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetWeaponIndexForEntity(const struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*)>(L"G_GetWeaponIndexForEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DamageClient(struct gentity_s* targ, struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dflags, int mod, int weapon, enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const float*, const float*, int, int, int, int, enum hitLocation_t, int)>(L"G_DamageClient")(targ, inflictor, attacker, dir, point, damage, dflags, mod, weapon, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DamageActor(struct gentity_s* targ, struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dflags, int mod, int weapon, enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const float*, const float*, int, int, int, int, enum hitLocation_t, int)>(L"G_DamageActor")(targ, inflictor, attacker, dir, point, damage, dflags, mod, weapon, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DamageVehicle(struct gentity_s* targ, struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dflags, int mod, int weapon, enum hitLocation_t hitLoc, int timeOffset, unsigned int modelIndex, unsigned int partName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const float*, const float*, int, int, int, int, enum hitLocation_t, int, unsigned int, unsigned int)>(L"G_DamageVehicle")(targ, inflictor, attacker, dir, point, damage, dflags, mod, weapon, hitLoc, timeOffset, modelIndex, partName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DamageNotify(unsigned short notify, struct gentity_s* targ, struct gentity_s* attacker, const float* dir, const float* point, int damage, int mod, int dFlags, unsigned int modelIndex, unsigned int partName, const char* weaponName) -> void
{
  return Zynamic::Forward<void (unsigned short, struct gentity_s*, struct gentity_s*, const float*, const float*, int, int, int, unsigned int, unsigned int, const char*)>(L"G_DamageNotify")(notify, targ, attacker, dir, point, damage, mod, dFlags, modelIndex, partName, weaponName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Damage(struct gentity_s* targ, struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dFlags, int mod, int weapon, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const float*, const float*, int, int, int, int, enum hitLocation_t, unsigned int, unsigned int, int)>(L"G_Damage")(targ, inflictor, attacker, dir, point, damage, dFlags, mod, weapon, hitLoc, modelIndex, partName, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanDamage(struct gentity_s* targ, struct gentity_s* inflictor, const float* centerPos, float coneAngleCos, float* coneDirection, int contentMask) -> float
{
  return Zynamic::Forward<float (struct gentity_s*, struct gentity_s*, const float*, float, float*, int)>(L"CanDamage")(targ, inflictor, centerPos, coneAngleCos, coneDirection, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EntDistToPoint(const float* origin, struct gentity_s* ent) -> float
{
  return Zynamic::Forward<float (const float*, struct gentity_s*)>(L"EntDistToPoint")(origin, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetEntListForRadius(const float* origin, float radius_max, float radius_min, int* entList, int* entListCount) -> void
{
  return Zynamic::Forward<void (const float*, float, float, int*, int*)>(L"GetEntListForRadius")(origin, radius_max, radius_min, entList, entListCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddScrTeamName(enum team_t team) -> void
{
  return Zynamic::Forward<void (enum team_t)>(L"AddScrTeamName")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanEntityBeFlashbanged(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"CanEntityBeFlashbanged")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFlashbangViewPos(struct gentity_s* ent, float* origin) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"GetFlashbangViewPos")(ent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFlashbangViewDirection(struct gentity_s* ent, float* dir) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"GetFlashbangViewDirection")(ent, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FlashbangBlastEnt(struct gentity_s* ent, const float* blastOrigin, float radius_max, float radius_min, struct gentity_s* attacker, enum team_t team) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, float, float, struct gentity_s*, enum team_t)>(L"FlashbangBlastEnt")(ent, blastOrigin, radius_max, radius_min, attacker, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FlashbangBlast(const float* origin, float radius_max, float radius_min, struct gentity_s* attacker, enum team_t team) -> void
{
  return Zynamic::Forward<void (const float*, float, float, struct gentity_s*, enum team_t)>(L"G_FlashbangBlast")(origin, radius_max, radius_min, attacker, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetRadiusDamageDistanceSquared(const float* damageOrigin, struct gentity_s* ent) -> float
{
  return Zynamic::Forward<float (const float*, struct gentity_s*)>(L"G_GetRadiusDamageDistanceSquared")(damageOrigin, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_WithinDamageRadius(const float* damageOrigin, float radiusSquared, struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (const float*, float, struct gentity_s*)>(L"G_WithinDamageRadius")(damageOrigin, radiusSquared, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RadiusDamage(const float* origin, struct gentity_s* inflictor, struct gentity_s* attacker, float fInnerDamage, float fOuterDamage, float radius, float coneAngleCos, float* coneDirection, struct gentity_s* ignore, int mod, int weapon) -> int
{
  return Zynamic::Forward<int (const float*, struct gentity_s*, struct gentity_s*, float, float, float, float, float*, struct gentity_s*, int, int)>(L"G_RadiusDamage")(origin, inflictor, attacker, fInnerDamage, fOuterDamage, radius, coneAngleCos, coneDirection, ignore, mod, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetHitLocationString(enum hitLocation_t hitLoc) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum hitLocation_t)>(L"G_GetHitLocationString")(hitLoc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetHitLocationIndexFromString(unsigned short sString) -> enum hitLocation_t
{
  return Zynamic::Forward<enum hitLocation_t (unsigned short)>(L"G_GetHitLocationIndexFromString")(sString);
}

#endif // __UNIMPLEMENTED__
