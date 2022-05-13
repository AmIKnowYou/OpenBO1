//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_GoodRandomFloat(int* idum) -> float
{
  return Zynamic::Forward<float (int*)>(L"G_GoodRandomFloat")(idum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_RandomDir(int time, float* x, float* y) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"Bullet_RandomDir")(time, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Endpos(int randSeed, float spread, float* end, float* dir, const struct weaponParms* wp, float maxRange) -> void
{
  return Zynamic::Forward<void (int, float, float*, float*, const struct weaponParms*, float)>(L"Bullet_Endpos")(randSeed, spread, end, dir, wp, maxRange);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_GetDamage(const struct BulletFireParams* bp, const struct BulletTraceResults* br, const struct WeaponDef* weapDef, struct gentity_s* attacker) -> int
{
  return Zynamic::Forward<int (const struct BulletFireParams*, const struct BulletTraceResults*, const struct WeaponDef*, struct gentity_s*)>(L"Bullet_GetDamage")(bp, br, weapDef, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_NofifyActor(const struct BulletFireParams* bp, struct gentity_s* attacker, const float* start, const float* end, struct gentity_s* hitEnt, const struct WeaponVariantDef* weapVariantDef) -> void
{
  return Zynamic::Forward<void (const struct BulletFireParams*, struct gentity_s*, const float*, const float*, struct gentity_s*, const struct WeaponVariantDef*)>(L"Bullet_NofifyActor")(bp, attacker, start, end, hitEnt, weapVariantDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_ImpactEffect(const struct BulletFireParams* bp, const struct BulletTraceResults* br, const float* normal, const struct WeaponVariantDef* weapVariantDef, struct gentity_s* attacker, int impactEffectFlags, struct gentity_s** outTempEnt) -> void
{
  return Zynamic::Forward<void (const struct BulletFireParams*, const struct BulletTraceResults*, const float*, const struct WeaponVariantDef*, struct gentity_s*, int, struct gentity_s**)>(L"Bullet_ImpactEffect")(bp, br, normal, weapVariantDef, attacker, impactEffectFlags, outTempEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_ImpactEffect_SetAdditionalFlags(struct gentity_s* tempEnt, int impactEffectFlags) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Bullet_ImpactEffect_SetAdditionalFlags")(tempEnt, impactEffectFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_IgnoreHitEntity(const struct BulletFireParams* bp, const struct BulletTraceResults* br, struct gentity_s* attacker) -> bool
{
  return Zynamic::Forward<bool (const struct BulletFireParams*, const struct BulletTraceResults*, struct gentity_s*)>(L"Bullet_IgnoreHitEntity")(bp, br, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Trace(const struct BulletFireParams* bp, const struct WeaponVariantDef* weapVariantDef, struct gentity_s* attacker, struct BulletTraceResults* br, int lastSurfaceType) -> bool
{
  return Zynamic::Forward<bool (const struct BulletFireParams*, const struct WeaponVariantDef*, struct gentity_s*, struct BulletTraceResults*, int)>(L"Bullet_Trace")(bp, weapVariantDef, attacker, br, lastSurfaceType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Process(struct BulletFireParams* bp, struct BulletTraceResults* br, const struct WeaponVariantDef* weapVariantDef, struct gentity_s* attacker, int dFlags, int gameTime, int* outImpactFlags, bool processFx) -> void
{
  return Zynamic::Forward<void (struct BulletFireParams*, struct BulletTraceResults*, const struct WeaponVariantDef*, struct gentity_s*, int, int, int*, bool)>(L"Bullet_Process")(bp, br, weapVariantDef, attacker, dFlags, gameTime, outImpactFlags, processFx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_FireExtended(struct BulletFireParams* bp, const struct WeaponVariantDef* weapVariantDef, struct gentity_s* attacker, int gameTime) -> void
{
  return Zynamic::Forward<void (struct BulletFireParams*, const struct WeaponVariantDef*, struct gentity_s*, int)>(L"Bullet_FireExtended")(bp, weapVariantDef, attacker, gameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_FirePenetrate(struct BulletFireParams* bp, const struct WeaponVariantDef* weapVariantDef, struct gentity_s* attacker, int gameTime) -> void
{
  return Zynamic::Forward<void (struct BulletFireParams*, const struct WeaponVariantDef*, struct gentity_s*, int)>(L"Bullet_FirePenetrate")(bp, weapVariantDef, attacker, gameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_ExplodeOnImpact(const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (const struct WeaponDef*)>(L"BG_WeaponBulletFire_ExplodeOnImpact")(weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_ShouldPenetrate(const struct WeaponDef* weapDef) -> bool
{
  return Zynamic::Forward<bool (const struct WeaponDef*)>(L"BG_WeaponBulletFire_ShouldPenetrate")(weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Fire(struct gentity_s* attacker, float spread, const struct weaponParms* wp, const struct gentity_s* weaponEnt, int gameTime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float, const struct weaponParms*, const struct gentity_s*, int)>(L"Bullet_Fire")(attacker, spread, wp, weaponEnt, gameTime);
}

#endif // __UNIMPLEMENTED__
