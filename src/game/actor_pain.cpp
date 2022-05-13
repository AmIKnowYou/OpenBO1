//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_InPain(const struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (const struct actor_s*)>(L"Actor_InPain")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Pain_Start(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_Pain_Start")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Pain_Finish(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_Pain_Finish")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Pain_Think(struct actor_s* self) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_Pain_Think")(self);
}

#endif // __UNIMPLEMENTED__
