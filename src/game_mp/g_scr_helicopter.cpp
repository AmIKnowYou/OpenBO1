//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CMD_Heli_FreeHelicopter(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_Heli_FreeHelicopter")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_Heli_SetDamageStage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_Heli_SetDamageStage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_Heli_SetHeliHeightLock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_Heli_SetHeliHeightLock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_Heli_IsInsideHeliHeightLock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"CMD_Heli_IsInsideHeliHeightLock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Helicopter_GetMethod(const char** pName) -> function*
{
  return Zynamic::Forward<function * (const char**)>(L"Helicopter_GetMethod")(pName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Heli_InitFirstThink(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Heli_InitFirstThink")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnHelicopter(struct gentity_s* ent, struct gentity_s* owner, const char* vehicleInfoName, const char* modelName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, const char*, const char*)>(L"G_SpawnHelicopter")(ent, owner, vehicleInfoName, modelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Helicopter_Pain(struct gentity_s* pSelf, struct gentity_s* pAttacker, int damage, const float* point, const int mod, const float* dir, const enum hitLocation_t hitLoc, const int weaponIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t, const int)>(L"Helicopter_Pain")(pSelf, pAttacker, damage, point, mod, dir, hitLoc, weaponIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Helicopter_Die(struct gentity_s* pSelf, struct gentity_s* pInflictor, struct gentity_s* pAttacker, const int damage, const int mod, const int weapon, const float* dir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const int, const int, const int, const float*, const enum hitLocation_t, int)>(L"Helicopter_Die")(pSelf, pInflictor, pAttacker, damage, mod, weapon, dir, hitLoc, psTimeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Helicopter_Controller(const struct gentity_s* pSelf, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int*)>(L"Helicopter_Controller")(pSelf, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Helicopter_Think(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Helicopter_Think")(ent);
}

#endif // __UNIMPLEMENTED__
