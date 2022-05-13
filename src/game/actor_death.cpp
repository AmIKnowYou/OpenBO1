//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_Death_Start(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_Death_Start")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Death_Cleanup(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_Death_Cleanup")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Death_Think(struct actor_s* self) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_Death_Think")(self);
}

#endif // __UNIMPLEMENTED__
