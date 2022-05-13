//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_actor() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_actor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VisCache_Update(struct vis_cache_t* pCache, bool bVisible) -> void
{
  return Zynamic::Forward<void (struct vis_cache_t*, bool)>(L"VisCache_Update")(pCache, bVisible);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SentientInfo_Clear(struct sentient_info_t* pInfo) -> void
{
  return Zynamic::Forward<void (struct sentient_info_t*)>(L"SentientInfo_Clear")(pInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SentientInfo_Copy(struct actor_s* pTo, const struct actor_s* pFrom, int index) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const struct actor_s*, int)>(L"SentientInfo_Copy")(pTo, pFrom, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SentientInfo_ForceCopy(struct sentient_info_t* pTo, const struct sentient_info_t* pFrom) -> void
{
  return Zynamic::Forward<void (struct sentient_info_t*, const struct sentient_info_t*)>(L"SentientInfo_ForceCopy")(pTo, pFrom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_droptofloor(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"Actor_droptofloor")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitActorState(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Actor_InitActorState")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_actor(struct gentity_s* ent, struct SpawnVar* spawnVar) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct SpawnVar*)>(L"SP_actor")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Alloc() -> struct actor_s*
{
  return Zynamic::Forward<struct actor_s* ()>(L"Actor_Alloc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeFields(const struct actor_field_t* fields, unsigned char* base) -> void
{
  return Zynamic::Forward<void (const struct actor_field_t*, unsigned char*)>(L"Scr_FreeFields")(fields, base);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeActorFields(struct actor_s* pActor) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Scr_FreeActorFields")(pActor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Free(struct actor_s* actor) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_Free")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsDeletable(struct actor_s* actor) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_IsDeletable")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FreeExpendable() -> void
{
  return Zynamic::Forward<void ()>(L"Actor_FreeExpendable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitActors() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitActors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetActorIndex(struct actor_s* actor) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"G_GetActorIndex")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetActorAnimTree(struct actor_s* actor) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct actor_s*)>(L"G_GetActorAnimTree")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetDefaults(struct actor_s* actor) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_SetDefaults")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FinishSpawning(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_FinishSpawning")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitAnimScript(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitAnimScript")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FinishSpawningAll() -> void
{
  return Zynamic::Forward<void ()>(L"Actor_FinishSpawningAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_DissociateSentient(struct actor_s* self, struct sentient_s* other, enum team_t eOtherTeam) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*, enum team_t)>(L"Actor_DissociateSentient")(self, other, eOtherTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FirstActor(const int iTeamFlags) -> struct actor_s*
{
  return Zynamic::Forward<struct actor_s* (const int)>(L"Actor_FirstActor")(iTeamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_NextActor(struct actor_s* pPrevActor, const int iTeamFlags) -> struct actor_s*
{
  return Zynamic::Forward<struct actor_s* (struct actor_s*, const int)>(L"Actor_NextActor")(pPrevActor, iTeamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_NodeClaimRevoked(struct actor_s* self, int invalidTime) -> void
{
  return Zynamic::Forward<void (struct actor_s*, int)>(L"Actor_NodeClaimRevoked")(self, invalidTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckClearNodeClaimCloseEnt(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_CheckClearNodeClaimCloseEnt")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_KeepClaimedNode(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_KeepClaimedNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearKeepClaimedNode(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearKeepClaimedNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearArrivalPos(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearArrivalPos")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckNodeClaim(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_CheckNodeClaim")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PreThink(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PreThink")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PostThink(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PostThink")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdatePlayerPush(struct actor_s* self, struct gentity_s* player) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*)>(L"Actor_UpdatePlayerPush")(self, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateCloseEnt(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateCloseEnt")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CallThink(struct actor_s* self) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_CallThink")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckGoalNotify(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_CheckGoalNotify")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckNotify(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_CheckNotify")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsDying(const struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (const struct actor_s*)>(L"Actor_IsDying")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetTargetEntity(struct actor_s* self) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct actor_s*)>(L"Actor_GetTargetEntity")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetTargetSentient(struct actor_s* self) -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* (struct actor_s*)>(L"Actor_GetTargetSentient")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetTargetPosition(struct actor_s* self, float* position) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetTargetPosition")(self, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetTargetLookPosition(struct actor_s* self, float* position) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetTargetLookPosition")(self, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetScriptTargetEntity(struct actor_s* self) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct actor_s*)>(L"Actor_GetScriptTargetEntity")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateActorInfo(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"Actor_UpdateActorInfo")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Think(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Actor_Think")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InScriptedState(const struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (const struct actor_s*)>(L"Actor_InScriptedState")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Touch(struct gentity_s* self, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Actor_Touch")(self, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Pain(struct gentity_s* self, struct gentity_s* pAttacker, int iDamage, const float* vPoint, const int iMod, const float* vDir, const enum hitLocation_t hitLoc, const int weaponIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, const float*, const int, const float*, const enum hitLocation_t, const int)>(L"Actor_Pain")(self, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, weaponIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Die(struct gentity_s* self, struct gentity_s* pInflictor, struct gentity_s* pAttacker, int iDamage, int iMod, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int)>(L"Actor_Die")(self, pInflictor, pAttacker, iDamage, iMod, iWeapon, vDir, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto usingCodeGoal(struct actor_s* actor) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"usingCodeGoal")(actor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isNodeInRegion(struct pathnode_t* node, struct gentity_s* volume) -> int
{
  return Zynamic::Forward<int (struct pathnode_t*, struct gentity_s*)>(L"isNodeInRegion")(node, volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_DebugDrawNodesInVolume(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_DebugDrawNodesInVolume")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EntInfo(struct gentity_s* self, float* source) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*)>(L"Actor_EntInfo")(self, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitMove(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitMove")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsDodgeEntity(struct actor_s* self, int entnum) -> int
{
  return Zynamic::Forward<int (struct actor_s*, int)>(L"Actor_IsDodgeEntity")(self, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_Physics_GetLeftOrRightDodge(struct actor_s* self, bool dodgeRight, float length) -> int
{
  return Zynamic::Forward<int (struct actor_s*, bool, float)>(L"Actor_Physics_GetLeftOrRightDodge")(self, dodgeRight, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PhysicsBackupInputs(struct actor_s* self, struct PhysicsInputs* inputs) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct PhysicsInputs*)>(L"Actor_PhysicsBackupInputs")(self, inputs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PhysicsRestoreInputs(struct actor_s* self, struct PhysicsInputs* inputs) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct PhysicsInputs*)>(L"Actor_PhysicsRestoreInputs")(self, inputs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PhysicsAndDodge(struct actor_s* self) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_PhysicsAndDodge")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AtDifferentElevation(float* vOrgSelf, float* vOrgOther) -> bool
{
  return Zynamic::Forward<bool (float*, float*)>(L"Actor_AtDifferentElevation")(vOrgSelf, vOrgOther);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_MoveAwayNoWorse(struct actor_s* self) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_MoveAwayNoWorse")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CalcultatePlayerPushDelta(const struct actor_s* self, const struct gentity_s* pusher, float* pushDir) -> float
{
  return Zynamic::Forward<float (const struct actor_s*, const struct gentity_s*, float*)>(L"Actor_CalcultatePlayerPushDelta")(self, pusher, pushDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ShouldMoveAwayFromCloseEnt(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_ShouldMoveAwayFromCloseEnt")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PhysicsCheckMoveAwayNoWorse(struct actor_s* self, struct gentity_s* other, int flags, float distanceSqrd, float lengthSqrd) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct gentity_s*, int, float, float)>(L"Actor_PhysicsCheckMoveAwayNoWorse")(self, other, flags, distanceSqrd, lengthSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PhysicsMoveAway(struct actor_s* self) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_PhysicsMoveAway")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_DoMove(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_DoMove")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto actor_controller(const struct gentity_s* self, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int*)>(L"actor_controller")(self, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PointNear(const float* vPoint, const float* vGoalPos) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*)>(L"Actor_PointNear")(vPoint, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PointNearNode(const float* vPoint, const struct pathnode_t* node) -> bool
{
  return Zynamic::Forward<bool (const float*, const struct pathnode_t*)>(L"Actor_PointNearNode")(vPoint, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PointAtGoal(const float* vPoint, const struct actor_goal_s* goal) -> bool
{
  return Zynamic::Forward<bool (const float*, const struct actor_goal_s*)>(L"Actor_PointAtGoal")(vPoint, goal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PointNearPoint(const float* vPoint, const float* vGoalPos, float buffer) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float)>(L"Actor_PointNearPoint")(vPoint, vGoalPos, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PointAt(const float* vPoint, const float* vGoalPos) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*)>(L"Actor_PointAt")(vPoint, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsAtGoal(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsAtGoal")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsAtScriptGoal(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsAtScriptGoal")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsNearClaimedNode(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsNearClaimedNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsKnownEnemyInRegion(const struct actor_s* self, const struct gentity_s* volume, const float* position, float radius) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const struct actor_s*, const struct gentity_s*, const float*, float)>(L"Actor_IsKnownEnemyInRegion")(self, volume, position, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToGoalDirectInternal(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_FindPathToGoalDirectInternal")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_HandleInvalidPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_HandleInvalidPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToGoalDirect(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_FindPathToGoalDirect")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPath(struct actor_s* self, float* vGoalPos, int bAllowNegotiationLinks, bool ignoreSuppression) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, float*, int, bool)>(L"Actor_FindPath")(self, vGoalPos, bAllowNegotiationLinks, ignoreSuppression);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_RecalcPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_RecalcPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToNode(struct actor_s* self, struct pathnode_t* pGoalNode, int bSuppressable) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct pathnode_t*, int)>(L"Actor_FindPathToNode")(self, pGoalNode, bSuppressable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToNode(struct actor_s* self, struct pathnode_t* pGoalNode, int bSuppressable, int bIgnoreBadplaces) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct pathnode_t*, int, int)>(L"Actor_FindPathToNode")(self, pGoalNode, bSuppressable, bIgnoreBadplaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathToSentient(struct actor_s* self, struct sentient_s* pGoalEnt, int bSuppressable) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct sentient_s*, int)>(L"Actor_FindPathToSentient")(self, pGoalEnt, bSuppressable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FindPathInGoalWithLOS(struct actor_s* self, const float* vGoalPos, float fWithinDistSqrd, bool ignoreSuppression) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float*, float, bool)>(L"Actor_FindPathInGoalWithLOS")(self, vGoalPos, fWithinDistSqrd, ignoreSuppression);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlacesChanged() -> void
{
  return Zynamic::Forward<void ()>(L"Actor_BadPlacesChanged")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_HasPath(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_HasPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_InitPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetAnimDeltas(struct actor_s* self, float* rotation, float* translation) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*, float*)>(L"Actor_GetAnimDeltas")(self, rotation, translation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsMovingToMeleeAttack(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsMovingToMeleeAttack")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SkipPathEndActions(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_SkipPathEndActions")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PathEndActions(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PathEndActions")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateAnglesAndDelta(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateAnglesAndDelta")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateOriginAndAngles(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateOriginAndAngles")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PredictOriginAndAngles(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PredictOriginAndAngles")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_PredictAnim(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_PredictAnim")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AtClaimNode(struct actor_s* self) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_AtClaimNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_NearClaimNode(struct actor_s* self, float dist) -> int
{
  return Zynamic::Forward<int (struct actor_s*, float)>(L"Actor_NearClaimNode")(self, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckCollisions(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_CheckCollisions")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdatePileUp(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdatePileUp")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearPileUp(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearPileUp")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClipPathToGoal(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClipPathToGoal")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BeginTrimPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_BeginTrimPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_TrimPathToAttack(struct actor_s* self) -> int
{
  return Zynamic::Forward<int (struct actor_s*)>(L"Actor_TrimPathToAttack")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearMoveHistory(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearMoveHistory")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_MayReacquireMove(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_MayReacquireMove")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetMoveHistoryAverage(struct actor_s* self, float* vDir) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetMoveHistoryAverage")(self, vDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateMoveHistory(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateMoveHistory")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateNetworkLeanAmount(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateNetworkLeanAmount")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateLeanAmount(struct actor_s* self, float* vWishDir) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Path_UpdateLeanAmount")(self, vWishDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateMomentum(struct actor_s* self, float* vWishDir, float fMoveDist) -> float
{
  return Zynamic::Forward<float (struct actor_s*, float*, float)>(L"Path_UpdateMomentum")(self, vWishDir, fMoveDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateMovementDelta(struct actor_s* self, float fMoveDist) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float)>(L"Path_UpdateMovementDelta")(self, fMoveDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetFlashed(struct actor_s* self, int flashed, float strength) -> void
{
  return Zynamic::Forward<void (struct actor_s*, int, float)>(L"Actor_SetFlashed")(self, flashed, strength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AddStationaryMoveHistory(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_AddStationaryMoveHistory")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsMoving(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsMoving")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CheckOverridePos(struct actor_s* self, const float* prevGoalPos) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float*)>(L"Actor_CheckOverridePos")(self, prevGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateGoalPos(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateGoalPos")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetGoalRadius(struct actor_goal_s* goal, float radius) -> void
{
  return Zynamic::Forward<void (struct actor_goal_s*, float)>(L"Actor_SetGoalRadius")(goal, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetGoalHeight(struct actor_goal_s* goal, float height) -> void
{
  return Zynamic::Forward<void (struct actor_goal_s*, float)>(L"Actor_SetGoalHeight")(goal, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsInsideArc(struct actor_s* self, const float* origin, float radius, float angle0, float angle1, float halfHeight) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, float, float, float, float)>(L"Actor_IsInsideArc")(self, origin, radius, angle0, angle1, halfHeight);
}

#endif // __UNIMPLEMENTED__
