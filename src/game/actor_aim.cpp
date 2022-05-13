//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_FillWeaponParms(struct actor_s* self, struct weaponParms* wp) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct weaponParms*)>(L"Actor_FillWeaponParms")(self, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitWeaponParms(struct actor_s* self, unsigned int weapon, struct weaponParms* wp) -> void
{
  return Zynamic::Forward<void (struct actor_s*, unsigned int, struct weaponParms*)>(L"Actor_InitWeaponParms")(self, weapon, wp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Melee(struct actor_s* self, const float* direction) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct actor_s*, const float*)>(L"Actor_Melee")(self, direction);
}

#endif // __UNIMPLEMENTED__
