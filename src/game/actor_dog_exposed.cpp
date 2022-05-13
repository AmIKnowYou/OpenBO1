//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_Exposed_Start(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_Dog_Exposed_Start")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_Exposed_Finish(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_Dog_Exposed_Finish")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_Exposed_Suspend(struct actor_s* self, enum ai_state_t eNextState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_Dog_Exposed_Suspend")(self, eNextState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_IsInSyncedMelee(struct actor_s* self, struct sentient_s* enemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*)>(L"Actor_Dog_IsInSyncedMelee")(self, enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_Attack(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_Dog_Attack")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToGoalNearestNode(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_FindPathToGoalNearestNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetMeleeAttackSpot(struct actor_s* self, const float* enemyPosition, float* attackPosition) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, float*)>(L"Actor_SetMeleeAttackSpot")(self, enemyPosition, attackPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateMeleeGoalPos(struct actor_s* self, const float* goalPos) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float*)>(L"Actor_UpdateMeleeGoalPos")(self, goalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_GetEnemyPos(struct actor_s* self, struct sentient_s* enemy, float* enemyPos) -> float
{
  return Zynamic::Forward<float (struct actor_s*, struct sentient_s*, float*)>(L"Actor_Dog_GetEnemyPos")(self, enemy, enemyPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_PointNearAttackPoint(const float* vPoint, const float* vGoalPos, float buffer) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float)>(L"Actor_Dog_PointNearAttackPoint")(vPoint, vGoalPos, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_ObstacleInPath(const struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (const struct actor_s*)>(L"Actor_Dog_ObstacleInPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_GetDeltaTurnYaw(struct actor_s* self) -> float
{
  return Zynamic::Forward<float (struct actor_s*)>(L"Actor_Dog_GetDeltaTurnYaw")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_ShouldTurn(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_Dog_ShouldTurn")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_IsEnemyInAttackRange(struct actor_s* self, struct sentient_s* enemy, int* goalPosSet) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*, int*)>(L"Actor_Dog_IsEnemyInAttackRange")(self, enemy, goalPosSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Dog_Exposed_Think(struct actor_s* self) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_Dog_Exposed_Think")(self);
}

#endif // __UNIMPLEMENTED__
