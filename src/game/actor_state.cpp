//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_SetDefaultState(struct actor_s* actor) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_SetDefaultState")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_StartState(struct actor_s* self, enum ai_state_t eStartedState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_StartState")(self, eStartedState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FinishState(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_FinishState")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SuspendState(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_SuspendState")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetNextPopedState(struct actor_s* self) -> enum ai_state_t
{
  return Zynamic::Forward<enum ai_state_t (struct actor_s*)>(L"Actor_GetNextPopedState")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ResumeState(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_ResumeState")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_StartDefaultState(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_StartDefaultState")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ResumePopedState(struct actor_s* self, enum ai_state_t state) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_ResumePopedState")(self, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThinkStateTransitions(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ThinkStateTransitions")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetSubState(struct actor_s* self, enum ai_substate_t eSubState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_substate_t)>(L"Actor_SetSubState")(self, eSubState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsStateOnStack(const struct actor_s* self, enum ai_state_t eState) -> int
{
  return Zynamic::Forward<int (const struct actor_s*, enum ai_state_t)>(L"Actor_IsStateOnStack")(self, eState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SimplifyStateTransitions(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_SimplifyStateTransitions")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AllowedToPushState(struct actor_s* self, enum ai_state_t eState) -> int
{
  return Zynamic::Forward<int (struct actor_s*, enum ai_state_t)>(L"Actor_AllowedToPushState")(self, eState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PrepareToPushState(struct actor_s* self, enum ai_state_t eState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_PrepareToPushState")(self, eState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_OnStateChange(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_OnStateChange")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetState(struct actor_s* self, enum ai_state_t eState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_SetState")(self, eState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PushState(struct actor_s* self, enum ai_state_t eState) -> int
{
  return Zynamic::Forward<int (struct actor_s*, enum ai_state_t)>(L"Actor_PushState")(self, eState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PopState(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PopState")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ForceState(struct actor_s* self, enum ai_state_t eState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_ForceState")(self, eState);
}

#endif // __UNIMPLEMENTED__
