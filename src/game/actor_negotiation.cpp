//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_Negotiation_Start(struct actor_s* pSelf, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_Negotiation_Start")(pSelf, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Negotiation_Think(struct actor_s* pSelf) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_Negotiation_Think")(pSelf);
}

#endif // __UNIMPLEMENTED__
