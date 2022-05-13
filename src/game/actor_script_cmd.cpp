//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_Get(struct scr_entref_t entref) -> struct actor_s*
{
  return Zynamic::Forward<struct actor_s* (struct scr_entref_t)>(L"Actor_Get")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetScriptGoalPos(struct actor_s* self, float* vGoalPos, struct pathnode_t* node, float* ang) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*, struct pathnode_t*, float*)>(L"Actor_SetScriptGoalPos")(self, vGoalPos, node, ang);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_StartArrivalState(struct actor_s* self, enum ai_state_t newState) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_state_t)>(L"Actor_StartArrivalState")(self, newState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_StartCoverArrival(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_StartCoverArrival")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_StartTraverseArrival(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_StartTraverseArrival")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_Melee(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_Melee")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ReacquireStep(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ReacquireStep")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_FindReacquireNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_FindReacquireNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetReacquireNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetReacquireNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_UseReacquireNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_UseReacquireNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_FindReacquireDirectPath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_FindReacquireDirectPath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_FindReacquireProximatePath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_FindReacquireProximatePath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_TrimPathToAttack(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_TrimPathToAttack")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ReacquireMove(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ReacquireMove")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_FlagEnemyUnattackable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_FlagEnemyUnattackable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearPitchOrient(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearPitchOrient")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetLookAtAnimNodes(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetLookAtAnimNodes")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetLookAt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetLookAt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetLookAtYawLimits(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetLookAtYawLimits")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_StopLookAt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_StopLookAt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_CanSee(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_CanSee")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DEBUGMAYMOVE(const float* vec1, const float* vec2, const float* color, enum DEBUGMAYMOVE_LIFT_ENUM liftBehavior) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, enum DEBUGMAYMOVE_LIFT_ENUM)>(L"DEBUGMAYMOVE")(vec1, vec2, color, liftBehavior);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MayMove_TraceCheck(struct actor_s* self, const float* vStart, const float* vEnd, int allowStartSolid, int checkDrop) -> int
{
  return Zynamic::Forward<int (struct actor_s*, const float*, const float*, int, int)>(L"MayMove_TraceCheck")(self, vStart, vEnd, allowStartSolid, checkDrop);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_MayMoveToPoint(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_MayMoveToPoint")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_MayMoveFromPointToPoint(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_MayMoveFromPointToPoint")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_Teleport(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_Teleport")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ForceTeleport(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ForceTeleport")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_WithinApproxPathDist(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_WithinApproxPathDist")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsPathDirect(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsPathDirect")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_AllowedStances(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_AllowedStances")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsStanceAllowed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsStanceAllowed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_Knockback(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_Knockback")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_TraverseMode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_TraverseMode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_AnimMode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_AnimMode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_OrientMode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_OrientMode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetMotionAngle(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetMotionAngle")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetAnglesToLikelyEnemyPath(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetAnglesToLikelyEnemyPath")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_LerpPosition(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_LerpPosition")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_PredictOriginAndAngles(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_PredictOriginAndAngles")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_PredictAnim(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_PredictAnim")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetEntType(int entnum) -> void
{
  return Zynamic::Forward<void (int)>(L"Actor_GetEntType")(entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetHitEntType(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetHitEntType")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetHitYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetHitYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetGroundEntType(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetGroundEntType")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsDeflected(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsDeflected")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_animcustom(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_animcustom")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_CanAttackEnemyNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_CanAttackEnemyNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetNegotiationStartNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetNegotiationStartNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetNegotiationEndNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetNegotiationEndNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_CheckProne(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_CheckProne")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_PushPlayer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_PushPlayer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetScriptGoalVolume(struct actor_s* self, struct gentity_s* volume) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*)>(L"Actor_SetScriptGoalVolume")(self, volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetGoalNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetGoalNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetScriptGoalEntity(struct actor_s* self, struct gentity_s* pGoalEnt) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*)>(L"Actor_SetScriptGoalEntity")(self, pGoalEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetGoalPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetGoalPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetGoalEntity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetGoalEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetGoalVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetGoalVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetGoalVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetGoalVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearGoalVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearGoalVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetFixedNodeSafeVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetFixedNodeSafeVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetFixedNodeSafeVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetFixedNodeSafeVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearFixedNodeSafeVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearFixedNodeSafeVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsInGoal(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsInGoal")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetOverrideRunToPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetOverrideRunToPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearOverrideRunToPos(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearOverrideRunToPos")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_NearNode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_NearNode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearEnemy(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearEnemy")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetEntityTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetEntityTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearEntityTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearEntityTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearEntityOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearEntityOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetEntityOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetEntityOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetPotentialThreat(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetPotentialThreat")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_ClearPotentialThreat(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_ClearPotentialThreat")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetPerfectInfo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetPerfectInfo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetFlashBanged(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetFlashBanged")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetFlashbangImmunity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetFlashbangImmunity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetFlashBangedStrength(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetFlashBangedStrength")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsKnownEnemyInRadius(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsKnownEnemyInRadius")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_IsKnownEnemyInVolume(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_IsKnownEnemyInVolume")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetTalkToSpecies(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetTalkToSpecies")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_GetDeltaTurnYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_GetDeltaTurnYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetAnimState(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetAnimState")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_SetAimAnimWeights(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_SetAimAnimWeights")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCmd_finishActorDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ActorCmd_finishActorDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetMethod(const char** pName) -> function*
{
  return Zynamic::Forward<function * (const char**)>(L"Actor_GetMethod")(pName);
}

#endif // __UNIMPLEMENTED__
