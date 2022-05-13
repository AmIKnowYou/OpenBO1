//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'AI_THREAT_DISTANCE_RATE''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'AI_THREAT_DISTANCE_RATE''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckIgnore(struct sentient_s* self, struct sentient_s* enemy) -> int
{
  return Zynamic::Forward<int (struct sentient_s*, struct sentient_s*)>(L"Actor_CheckIgnore")(self, enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitThreatBiasGroups() -> void
{
  return Zynamic::Forward<void ()>(L"Actor_InitThreatBiasGroups")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetThreatBias(int groupSelf, int groupEnemy) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Actor_GetThreatBias")(groupSelf, groupEnemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FlagEnemyUnattackable(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_FlagEnemyUnattackable")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CaresAboutInfo(struct actor_s* self, struct sentient_s* pOther) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*)>(L"Actor_CaresAboutInfo")(self, pOther);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugResetThreatStrings(const struct actor_s* self) -> void
{
  return Zynamic::Forward<void (const struct actor_s*)>(L"DebugResetThreatStrings")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugSetThreatString(enum ThreatDebugStringCategory category, int threat) -> void
{
  return Zynamic::Forward<void (enum ThreatDebugStringCategory, int)>(L"DebugSetThreatString")(category, threat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugSetThreatStringFromString(enum ThreatDebugStringCategory category, const char* string) -> void
{
  return Zynamic::Forward<void (enum ThreatDebugStringCategory, const char*)>(L"DebugSetThreatStringFromString")(category, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugThreatStringAll(const struct actor_s* self, struct sentient_s* enemy, int threat) -> void
{
  return Zynamic::Forward<void (const struct actor_s*, struct sentient_s*, int)>(L"DebugThreatStringAll")(self, enemy, threat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugThreatStringSimple(const struct actor_s* self, struct gentity_s* enemy, const char* string, const float* color) -> void
{
  return Zynamic::Forward<void (const struct actor_s*, struct gentity_s*, const char*, const float*)>(L"DebugThreatStringSimple")(self, enemy, string, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugThreatNodes(const struct actor_s* self, struct sentient_s* enemy, struct pathnode_t* selfNode, struct pathnode_t* enemyNode, const float* color) -> void
{
  return Zynamic::Forward<void (const struct actor_s*, struct sentient_s*, struct pathnode_t*, struct pathnode_t*, const float*)>(L"DebugThreatNodes")(self, enemy, selfNode, enemyNode, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatFromScariness(const float fScariness) -> int
{
  return Zynamic::Forward<int (const float)>(L"Actor_ThreatFromScariness")(fScariness);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatFromDistance(const float fDistance) -> int
{
  return Zynamic::Forward<int (const float)>(L"Actor_ThreatFromDistance")(fDistance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanBePathedTo(struct actor_s* self, struct sentient_s* enemy, int isCurrentEnemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*, int)>(L"Actor_CanBePathedTo")(self, enemy, isCurrentEnemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsFullyAware(struct actor_s* self, struct sentient_s* enemy, int isCurrentEnemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*, int)>(L"Actor_IsFullyAware")(self, enemy, isCurrentEnemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatFromVisibilityAndAwareness(int isVisible, int isFullyAware, int friendlyTimingOut) -> int
{
  return Zynamic::Forward<int (int, int, int)>(L"Actor_ThreatFromVisibilityAndAwareness")(isVisible, isFullyAware, friendlyTimingOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatFromAttackerCount(struct actor_s* self, struct sentient_s* enemy, int isCurrentEnemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*, int)>(L"Actor_ThreatFromAttackerCount")(self, enemy, isCurrentEnemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ShouldIgnoreFromAttackerCount(struct actor_s* self, struct sentient_s* enemy, int isCurrentEnemy) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct sentient_s*, int)>(L"Actor_ShouldIgnoreFromAttackerCount")(self, enemy, isCurrentEnemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatBonusForCurrentEnemy(int isCurrentEnemy, int isFullyAware, int friendlyTimingOut, int isPlayer, int isDamaged) -> int
{
  return Zynamic::Forward<int (int, int, int, int, int)>(L"Actor_ThreatBonusForCurrentEnemy")(isCurrentEnemy, isFullyAware, friendlyTimingOut, isPlayer, isDamaged);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatCoveringFire(struct actor_s* self, struct sentient_s* enemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*)>(L"Actor_ThreatCoveringFire")(self, enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ThreatFlashed(struct sentient_s* enemy) -> int
{
  return Zynamic::Forward<int (struct sentient_s*)>(L"Actor_ThreatFlashed")(enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetScarinessForDistance(struct sentient_s* self, struct sentient_s* enemy, float fDist) -> float
{
  return Zynamic::Forward<float (struct sentient_s*, struct sentient_s*, float)>(L"Sentient_GetScarinessForDistance")(self, enemy, fDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateSingleThreat(struct actor_s* self, struct sentient_s* enemy) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct sentient_s*)>(L"Actor_UpdateSingleThreat")(self, enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitThreatUpdateInterval(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitThreatUpdateInterval")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IncrementThreatTime(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_IncrementThreatTime")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateThreat(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateThreat")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetPotentialThreat(struct potential_threat_t* self, float yaw) -> void
{
  return Zynamic::Forward<void (struct potential_threat_t*, float)>(L"Actor_SetPotentialThreat")(self, yaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearPotentialThreat(struct potential_threat_t* self) -> void
{
  return Zynamic::Forward<void (struct potential_threat_t*)>(L"Actor_ClearPotentialThreat")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PotentialThreat_Debug(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PotentialThreat_Debug")(self);
}

#endif // __UNIMPLEMENTED__
