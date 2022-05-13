//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveBlocked(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_TeamMoveBlocked")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveBlockedClear(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_TeamMoveBlockedClear")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveCheckWaitTimer(struct actor_s* self, enum ai_teammove_t* result) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_teammove_t*)>(L"Actor_TeamMoveCheckWaitTimer")(self, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveNeedToCheckWait(unsigned char moveMode, struct path_t* pPath) -> bool
{
  return Zynamic::Forward<bool (unsigned char, struct path_t*)>(L"Actor_TeamMoveNeedToCheckWait")(moveMode, pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsEnemy(struct actor_s* self, struct sentient_s* other) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct sentient_s*)>(L"Actor_IsEnemy")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CalcInterval(struct actor_s* self, bool bUseInterval, float* fIntervalSqrdOut, float* fWalkIntervalSqrdOut) -> void
{
  return Zynamic::Forward<void (struct actor_s*, bool, float*, float*)>(L"Actor_CalcInterval")(self, bUseInterval, fIntervalSqrdOut, fWalkIntervalSqrdOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveCalcMovementDir(struct team_move_context_t* context, enum ai_teammove_t* result) -> bool
{
  return Zynamic::Forward<bool (struct team_move_context_t*, enum ai_teammove_t*)>(L"Actor_TeamMoveCalcMovementDir")(context, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveDeltaCorrection(struct actor_s* self, float fVelSelfSqrd) -> float
{
  return Zynamic::Forward<float (struct actor_s*, float)>(L"Actor_TeamMoveDeltaCorrection")(self, fVelSelfSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AddToList(int* dodgeEntities, int* dodgeEntityCount, int arraysz, struct actor_s* pOtherActor) -> void
{
  return Zynamic::Forward<void (int*, int*, int, struct actor_s*)>(L"Actor_AddToList")(dodgeEntities, dodgeEntityCount, arraysz, pOtherActor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveSetDodge(struct team_move_context_t* context, struct team_move_other_context_t* context_other) -> void
{
  return Zynamic::Forward<void (struct team_move_context_t*, struct team_move_other_context_t*)>(L"Actor_TeamMoveSetDodge")(context, context_other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveShouldTryDodgeSentient(struct team_move_context_t* context, struct team_move_other_context_t* context_other) -> bool
{
  return Zynamic::Forward<bool (struct team_move_context_t*, struct team_move_other_context_t*)>(L"Actor_TeamMoveShouldTryDodgeSentient")(context, context_other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveTryDodge(struct team_move_context_t* context, struct team_move_other_context_t* context_other) -> bool
{
  return Zynamic::Forward<bool (struct team_move_context_t*, struct team_move_other_context_t*)>(L"Actor_TeamMoveTryDodge")(context, context_other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveConsiderSlowDown(struct team_move_context_t* context, enum ai_teammove_t* eResult) -> bool
{
  return Zynamic::Forward<bool (struct team_move_context_t*, enum ai_teammove_t*)>(L"Actor_TeamMoveConsiderSlowDown")(context, eResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveNoDodge(struct team_move_context_t* context, enum ai_teammove_t eResult) -> enum ai_teammove_t
{
  return Zynamic::Forward<enum ai_teammove_t (struct team_move_context_t*, enum ai_teammove_t)>(L"Actor_TeamMoveNoDodge")(context, eResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveInitializeContext(struct actor_s* self, bool bUseInterval, bool bAllowGoalPileUp, struct team_move_context_t& context) -> void
{
  return Zynamic::Forward<void (struct actor_s*, bool, bool, struct team_move_context_t&)>(L"Actor_TeamMoveInitializeContext")(self, bUseInterval, bAllowGoalPileUp, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveTrimPath(struct path_t* pPath, const struct team_move_context_t& context) -> int
{
  return Zynamic::Forward<int (struct path_t*, const struct team_move_context_t&)>(L"Actor_TeamMoveTrimPath")(pPath, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveTooCloseMoveAway(const struct actor_s* self, int mask, struct team_move_context_t& context) -> void
{
  return Zynamic::Forward<void (const struct actor_s*, int, struct team_move_context_t&)>(L"Actor_TeamMoveTooCloseMoveAway")(self, mask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TeamMoveCheckPileup(struct actor_s* self, struct actor_s* pOtherActor) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct actor_s*)>(L"Actor_TeamMoveCheckPileup")(self, pOtherActor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetTeamMoveStatus(struct actor_s* self, bool bUseInterval, bool bAllowGoalPileUp) -> enum ai_teammove_t
{
  return Zynamic::Forward<enum ai_teammove_t (struct actor_s*, bool, bool)>(L"Actor_GetTeamMoveStatus")(self, bUseInterval, bAllowGoalPileUp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_MoveAlongPathWithTeam(struct actor_s* self, bool bRun, bool bUseInterval, bool bAllowGoalPileUp) -> void
{
  return Zynamic::Forward<void (struct actor_s*, bool, bool, bool)>(L"Actor_MoveAlongPathWithTeam")(self, bRun, bUseInterval, bAllowGoalPileUp);
}

#endif // __UNIMPLEMENTED__
