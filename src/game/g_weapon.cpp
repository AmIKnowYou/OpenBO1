//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Weapon_SetWeaponParamsWeapon(struct weaponParms* wp, unsigned int weapon) -> void
{
  return Zynamic::Forward<void (struct weaponParms*, unsigned int)>(L"Weapon_SetWeaponParamsWeapon")(wp, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AntiLagRewindClientPos(int gameTime, struct AntilagClientStore* antilagStore) -> void
{
  return Zynamic::Forward<void (int, struct AntilagClientStore*)>(L"G_AntiLagRewindClientPos")(gameTime, antilagStore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AntiLag_RestoreClientPos(struct AntilagClientStore* antilagStore) -> void
{
  return Zynamic::Forward<void (struct AntilagClientStore*)>(L"G_AntiLag_RestoreClientPos")(antilagStore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Melee_Trace(struct gentity_s* ent, struct weaponParms* wp, int damage, float range, float width, float height, struct trace_t* traceResult, float* hitOrigin) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct weaponParms*, int, float, float, float, struct trace_t*, float*)>(L"Melee_Trace")(ent, wp, damage, range, width, height, traceResult, hitOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Melee_internal(struct gentity_s* ent, struct weaponParms* wp, float range, float width, float height) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, struct weaponParms*, float, float, float)>(L"Weapon_Melee_internal")(ent, wp, range, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Melee(struct gentity_s* ent, struct weaponParms* wp, float range, float width, float height, int gametime) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, struct weaponParms*, float, float, float, int)>(L"Weapon_Melee")(ent, wp, range, width, height, gametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gunrandom(float* x, float* y) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"gunrandom")(x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Throw_Grenade(struct gentity_s* ent, int grenType, unsigned char grenModel, struct weaponParms* wp) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, unsigned char, struct weaponParms*)>(L"Weapon_Throw_Grenade")(ent, grenType, grenModel, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_GrenadeLauncher_Fire(struct gentity_s* ent, int grenType, unsigned char grenModel, struct weaponParms* wp) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, unsigned char, struct weaponParms*)>(L"Weapon_GrenadeLauncher_Fire")(ent, grenType, grenModel, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_RocketLauncher_Fire(struct gentity_s* ent, unsigned int weaponIndex, float spread, struct weaponParms* wp, const float* gunVel, struct gentity_s* target, const float* targetOffset) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, unsigned int, float, struct weaponParms*, const float*, struct gentity_s*, const float*)>(L"Weapon_RocketLauncher_Fire")(ent, weaponIndex, spread, wp, gunVel, target, targetOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_BombDrop_Fire(struct gentity_s* ent, unsigned int weaponIndex, float spread, struct weaponParms* wp, const float* gunVel, struct gentity_s* target, const float* targetOffset) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, unsigned int, float, struct weaponParms*, const float*, struct gentity_s*, const float*)>(L"Weapon_BombDrop_Fire")(ent, weaponIndex, spread, wp, gunVel, target, targetOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Overheat_Update(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Weapon_Overheat_Update")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Flamethrower_Update(struct gentity_s* ent, struct weaponParms* wp) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct weaponParms*)>(L"Weapon_Flamethrower_Update")(ent, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Flamethrower_Fire(struct gentity_s* ent, struct weaponParms* wp) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct weaponParms*)>(L"Weapon_Flamethrower_Fire")(ent, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Napalm_Flame(struct gentity_s* ent, struct trace_t* trace, int count) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*, int)>(L"Weapon_Napalm_Flame")(ent, trace, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LogAccuracyHit(struct gentity_s* target, struct gentity_s* attacker) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"LogAccuracyHit")(target, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcMuzzlePoints(const struct gentity_s* ent, struct weaponParms* wp, int shotCount) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, struct weaponParms*, int)>(L"G_CalcMuzzlePoints")(ent, wp, shotCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireWeapon(struct gentity_s* ent, int gametime, int shotCount) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int)>(L"FireWeapon")(ent, gametime, shotCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DeployWeapon(struct gentity_s* ent, int gametime, float height) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, float)>(L"DeployWeapon")(ent, gametime, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BreakDownWeapon(struct gentity_s* ent, int gametime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"BreakDownWeapon")(ent, gametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UseOffHand(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UseOffHand")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireWeaponMelee(struct gentity_s* ent, int gametime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"FireWeaponMelee")(ent, gametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GivePlayerWeapon(struct playerState_s* pPS, int iWeaponIndex, unsigned char altModelIndex, struct renderOptions_s weaponOptions) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, int, unsigned char, struct renderOptions_s)>(L"G_GivePlayerWeapon")(pPS, iWeaponIndex, altModelIndex, weaponOptions);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupWeaponDef() -> void
{
  return Zynamic::Forward<void ()>(L"G_SetupWeaponDef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetWeaponIndexForName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_GetWeaponIndexForName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SelectWeaponIndex(int clientNum, int iWeaponIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"G_SelectWeaponIndex")(clientNum, iWeaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetEquippedOffHand(int clientNum, int offHandIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"G_SetEquippedOffHand")(clientNum, offHandIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerTurretWeaponIdx(const struct playerState_s* ps) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct playerState_s*)>(L"G_PlayerTurretWeaponIdx")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerVehicleWeapon(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"G_GetPlayerVehicleWeapon")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerWeapon(const struct playerState_s* ps, const int localClientNum) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, const int)>(L"G_GetPlayerWeapon")(ps, localClientNum);
}

#endif // __UNIMPLEMENTED__
