//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_Generic_Finish(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_Generic_Finish")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Generic_Suspend(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_Generic_Suspend")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Generic_Resume(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_Generic_Resume")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Generic_Pain(struct actor_s* self, struct gentity_s* attacker, int iDamage, const float* vPoint, const int iMod, const float* vDir, const enum hitLocation_t hitLoc) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t)>(L"Actor_Generic_Pain")(self, attacker, iDamage, vPoint, iMod, vDir, hitLoc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Generic_Touch(struct actor_s* self, struct gentity_s* pOther) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*)>(L"Actor_Generic_Touch")(self, pOther);
}

#endif // __UNIMPLEMENTED__
