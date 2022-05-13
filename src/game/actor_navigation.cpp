//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Path_GetPathDir(float* delta, const float* vFrom, const float* vTo) -> float
{
  return Zynamic::Forward<float (float*, const float*, const float*)>(L"Path_GetPathDir")(delta, vFrom, vTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetNegotiationNode(const struct path_t* pPath) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (const struct path_t*)>(L"Path_GetNegotiationNode")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IncrementNodeUserCount(struct path_t* pPath) -> void
{
  return Zynamic::Forward<void (struct path_t*)>(L"Path_IncrementNodeUserCount")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DecrementNodeUserCount(struct path_t* pPath) -> void
{
  return Zynamic::Forward<void (struct path_t*)>(L"Path_DecrementNodeUserCount")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetDistToPathSegment(const float* vStartPos, const struct pathpoint_t* pt) -> float
{
  return Zynamic::Forward<float (const float*, const struct pathpoint_t*)>(L"Path_GetDistToPathSegment")(vStartPos, pt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AddTrimmedAmount(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_AddTrimmedAmount")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_SubtractTrimmedAmount(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_SubtractTrimmedAmount")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_SetLookaheadToStart(struct path_t* pPath, const float* vStartPos, int bTrimAmount) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, int)>(L"Path_SetLookaheadToStart")(pPath, vStartPos, bTrimAmount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_TransferLookahead(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_TransferLookahead")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GeneratePath(struct path_t* pPath, enum team_t eTeam, const float* vStartPos, const float* vGoalPos, struct pathnode_t* pNodeFrom, struct pathnode_t* pNodeTo, int bIncludeGoalPos, int bAllowNegotiationLinks) -> int
{
  return Zynamic::Forward<int (struct path_t*, enum team_t, const float*, const float*, struct pathnode_t*, struct pathnode_t*, int, int)>(L"Path_GeneratePath")(pPath, eTeam, vStartPos, vGoalPos, pNodeFrom, pNodeTo, bIncludeGoalPos, bAllowNegotiationLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AStarAlgorithm<CustomSearchInfo_FindCloseNode>(struct path_t* pPath, enum team_t eTeam, const float* vStartPos, struct pathnode_t* pNodeFrom, const float* vGoalPos, int bIncludeGoalInPath, int bAllowNegotiationLinks, class CustomSearchInfo_FindCloseNode& custom, int bIgnoreBadPlaces) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, const float*, struct pathnode_t*, const float*, int, int, class CustomSearchInfo_FindCloseNode&, int)>(L"Path_AStarAlgorithm<CustomSearchInfo_FindCloseNode>")(pPath, eTeam, vStartPos, pNodeFrom, vGoalPos, bIncludeGoalInPath, bAllowNegotiationLinks, custom, bIgnoreBadPlaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindCloseNode::IgnoreNode(struct pathnode_t* pNode) -> const bool
{
  return Zynamic::Forward<public const bool (struct pathnode_t*)>(L"CustomSearchInfo_FindCloseNode::IgnoreNode")(pNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindCloseNode(enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vGoalPos, int bAllowNegotiationLinks) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (enum team_t, struct pathnode_t*, const float*, int)>(L"Path_FindCloseNode")(eTeam, pNodeFrom, vGoalPos, bAllowNegotiationLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindPath::EvaluateHeuristic(struct pathnode_t* pSuccessor, const float* vGoalPos) -> const float
{
  return Zynamic::Forward<public const float (struct pathnode_t*, const float*)>(L"CustomSearchInfo_FindPath::EvaluateHeuristic")(pSuccessor, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPath(struct path_t* pPath, enum team_t eTeam, const float* vStartPos, const float* vGoalPos, int bAllowNegotiationLinks) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, const float*, const float*, int)>(L"Path_FindPath")(pPath, eTeam, vStartPos, vGoalPos, bAllowNegotiationLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathFrom(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, const float* vGoalPos, int bAllowNegotiationLinks, int bIgnoreBadplaces) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, const float*, int, int)>(L"Path_FindPathFrom")(pPath, eTeam, pNodeFrom, vStartPos, vGoalPos, bAllowNegotiationLinks, bIgnoreBadplaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathFromTo(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, struct pathnode_t* pNodeTo, const float* vGoalPos, int bAllowNegotiationLinks, int bIgnoreBadplaces) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, struct pathnode_t*, const float*, int, int)>(L"Path_FindPathFromTo")(pPath, eTeam, pNodeFrom, vStartPos, pNodeTo, vGoalPos, bAllowNegotiationLinks, bIgnoreBadplaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindPathWithWidth::EvaluateHeuristic(struct pathnode_t* pSuccessor, const float* vGoalPos) -> const float
{
  return Zynamic::Forward<public const float (struct pathnode_t*, const float*)>(L"CustomSearchInfo_FindPathWithWidth::EvaluateHeuristic")(pSuccessor, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathWithWidth(struct path_t* pPath, enum team_t eTeam, const float* vStartPos, const float* vGoalPos, int bAllowNegotiationLinks, float width, float* perp) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, const float*, const float*, int, float, float*)>(L"Path_FindPathWithWidth")(pPath, eTeam, vStartPos, vGoalPos, bAllowNegotiationLinks, width, perp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathFromToWithWidth(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, struct pathnode_t* pNodeTo, const float* vGoalPos, int bAllowNegotiationLinks, float width, float* perp) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, struct pathnode_t*, const float*, int, float, float*)>(L"Path_FindPathFromToWithWidth")(pPath, eTeam, pNodeFrom, vStartPos, pNodeTo, vGoalPos, bAllowNegotiationLinks, width, perp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindPathNotCrossPlanes::IgnoreNode(struct pathnode_t* pNode) -> const bool
{
  return Zynamic::Forward<public const bool (struct pathnode_t*)>(L"CustomSearchInfo_FindPathNotCrossPlanes::IgnoreNode")(pNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathFromNotCrossPlanes(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, const float* vGoalPos, float* vNormal[0x2], float* fDist, int iPlaneCount, int bAllowNegotiationLinks, int bIgnoreBadplaces) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, const float*, float*[0x2], float*, int, int, int)>(L"Path_FindPathFromNotCrossPlanes")(pPath, eTeam, pNodeFrom, vStartPos, vGoalPos, vNormal, fDist, iPlaneCount, bAllowNegotiationLinks, bIgnoreBadplaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathFromToNotCrossPlanes(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, struct pathnode_t* pNodeTo, const float* vGoalPos, float* vNormal[0x2], float* fDist, int iPlaneCount, int bAllowNegotiationLinks, int bIgnoreBadplaces) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, struct pathnode_t*, const float*, float*[0x2], float*, int, int, int)>(L"Path_FindPathFromToNotCrossPlanes")(pPath, eTeam, pNodeFrom, vStartPos, pNodeTo, vGoalPos, vNormal, fDist, iPlaneCount, bAllowNegotiationLinks, bIgnoreBadplaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindPathWithLOS::EvaluateHeuristic(struct pathnode_t* pSuccessor, const float* vGoalPos) -> const float
{
  return Zynamic::Forward<public const float (struct pathnode_t*, const float*)>(L"CustomSearchInfo_FindPathWithLOS::EvaluateHeuristic")(pSuccessor, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathInCylinderWithLOS(struct path_t* pPath, enum team_t eTeam, const float* vStartPos, const float* vGoalPos, const struct actor_goal_s* goal, float fWithinDistSqrd, int bAllowNegotiationLinks) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, const float*, const float*, const struct actor_goal_s*, float, int)>(L"Path_FindPathInCylinderWithLOS")(pPath, eTeam, vStartPos, vGoalPos, goal, fWithinDistSqrd, bAllowNegotiationLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindFacingNode(struct sentient_s* pSelf, struct sentient_s* pOther, struct sentient_info_t* pInfo) -> const struct pathnode_t*
{
  return Zynamic::Forward<const struct pathnode_t* (struct sentient_s*, struct sentient_s*, struct sentient_info_t*)>(L"Path_FindFacingNode")(pSelf, pOther, pInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CustomSearchInfo_FindPathClosestPossible::EvaluateHeuristic(struct pathnode_t* pSuccessor, const float* vGoalPos) -> const float
{
  return Zynamic::Forward<public const float (struct pathnode_t*, const float*)>(L"CustomSearchInfo_FindPathClosestPossible::EvaluateHeuristic")(pSuccessor, vGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindPathGetCloseAsPossible(struct path_t* pPath, enum team_t eTeam, struct pathnode_t* pNodeFrom, const float* vStartPos, struct pathnode_t* pNodeTo, const float* vGoalPos, int bAllowNegotiationLinks) -> const int
{
  return Zynamic::Forward<const int (struct path_t*, enum team_t, struct pathnode_t*, const float*, struct pathnode_t*, const float*, int)>(L"Path_FindPathGetCloseAsPossible")(pPath, eTeam, pNodeFrom, vStartPos, pNodeTo, vGoalPos, bAllowNegotiationLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_TrimLastNodes(struct path_t* pPath, const int iNodeCount, bool bMaintainGoalPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const int, bool)>(L"Path_TrimLastNodes")(pPath, iNodeCount, bMaintainGoalPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ClipToGoal(struct path_t* pPath, const struct actor_goal_s* goal) -> int
{
  return Zynamic::Forward<int (struct path_t*, const struct actor_goal_s*)>(L"Path_ClipToGoal")(pPath, goal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BeginTrim(struct path_t* pPath, struct path_trim_t* pTrim) -> void
{
  return Zynamic::Forward<void (struct path_t*, struct path_trim_t*)>(L"Path_BeginTrim")(pPath, pTrim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_TrimToSeePoint(struct path_t* pPath, struct path_trim_t* pTrim, struct actor_s* pActor, float fMaxDistSqrd, int iIgnoreEntityNum, const float* vPoint) -> int
{
  return Zynamic::Forward<int (struct path_t*, struct path_trim_t*, struct actor_s*, float, int, const float*)>(L"Path_TrimToSeePoint")(pPath, pTrim, pActor, fMaxDistSqrd, iIgnoreEntityNum, vPoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Begin(struct path_t* pPath) -> void
{
  return Zynamic::Forward<void (struct path_t*)>(L"Path_Begin")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Clear(struct path_t* pPath) -> void
{
  return Zynamic::Forward<void (struct path_t*)>(L"Path_Clear")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Exists(const struct path_t* pPath) -> const bool
{
  return Zynamic::Forward<const bool (const struct path_t*)>(L"Path_Exists")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CompleteLookahead(const struct path_t* pPath) -> const int
{
  return Zynamic::Forward<const int (const struct path_t*)>(L"Path_CompleteLookahead")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AttemptedCompleteLookahead(const struct path_t* pPath) -> const int
{
  return Zynamic::Forward<const int (const struct path_t*)>(L"Path_AttemptedCompleteLookahead")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UsesObstacleNegotiation(const struct path_t* pPath) -> const int
{
  return Zynamic::Forward<const int (const struct path_t*)>(L"Path_UsesObstacleNegotiation")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_HasNegotiationNode(const struct path_t* path) -> bool
{
  return Zynamic::Forward<bool (const struct path_t*)>(L"Path_HasNegotiationNode")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AllowsObstacleNegotiation(const struct path_t* pPath) -> const int
{
  return Zynamic::Forward<const int (const struct path_t*)>(L"Path_AllowsObstacleNegotiation")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetObstacleNegotiationScript(const struct path_t* pPath, struct scr_animscript_t* animscript) -> void
{
  return Zynamic::Forward<void (const struct path_t*, struct scr_animscript_t*)>(L"Path_GetObstacleNegotiationScript")(pPath, animscript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NeedsReevaluation(const struct path_t* pPath) -> bool
{
  return Zynamic::Forward<bool (const struct path_t*)>(L"Path_NeedsReevaluation")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DistanceGreaterThan(struct path_t* pPath, float fDist) -> int
{
  return Zynamic::Forward<int (struct path_t*, float)>(L"Path_DistanceGreaterThan")(pPath, fDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ReduceLookaheadAmount(struct path_t* pPath, float maxLookaheadAmountIfReduce) -> void
{
  return Zynamic::Forward<void (struct path_t*, float)>(L"Path_ReduceLookaheadAmount")(pPath, maxLookaheadAmountIfReduce);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FailedLookahead(struct path_t* pPath) -> int
{
  return Zynamic::Forward<int (struct path_t*)>(L"Path_FailedLookahead")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IncreaseLookaheadAmount(struct path_t* pPath) -> void
{
  return Zynamic::Forward<void (struct path_t*)>(L"Path_IncreaseLookaheadAmount")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_PredictionTraceCheckForEntities(const float* vStartPos, const float* vEndPos, const int* entities, const int entityCount, int entityIgnore, int mask, float* vTraceEndPos) -> enum PredictionTraceResult
{
  return Zynamic::Forward<enum PredictionTraceResult (const float*, const float*, const int*, const int, int, int, float*)>(L"Path_PredictionTraceCheckForEntities")(vStartPos, vEndPos, entities, entityCount, entityIgnore, mask, vTraceEndPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_PredictionTrace(const float* vStartPos, const float* vEndPos, int entityIgnore, int mask, float* vTraceEndPos, float stepheight, int allowStartSolid) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, int, int, float*, float, int)>(L"Path_PredictionTrace")(vStartPos, vEndPos, entityIgnore, mask, vTraceEndPos, stepheight, allowStartSolid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_LookaheadPredictionTrace(struct path_t* pPath, const float* vStartPos, const float* vEndPos) -> int
{
  return Zynamic::Forward<int (struct path_t*, const float*, const float*)>(L"Path_LookaheadPredictionTrace")(pPath, vStartPos, vEndPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateLookaheadAmount(struct path_t* pPath, const float* vStartPos, const float* vLookaheadPos, int bReduceLookaheadAmount, float dist, int lookaheadNextNode, float maxLookaheadAmountIfReduce, int bAllowRestore) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, const float*, int, float, int, float, int)>(L"Path_UpdateLookaheadAmount")(pPath, vStartPos, vLookaheadPos, bReduceLookaheadAmount, dist, lookaheadNextNode, maxLookaheadAmountIfReduce, bAllowRestore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IsTrimmed(struct path_t* pPath) -> int
{
  return Zynamic::Forward<int (struct path_t*)>(L"Path_IsTrimmed")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_RemoveCompletedPathPoints(struct path_t* pPath, int pathPointIndex) -> void
{
  return Zynamic::Forward<void (struct path_t*, int)>(L"Path_RemoveCompletedPathPoints")(pPath, pathPointIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_TrimCompletedPath(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_TrimCompletedPath")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BacktrackCompletedPath(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_BacktrackCompletedPath")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CalcLookahead_Completed(struct path_t* pPath, const float* vStartPos, int bReduceLookaheadAmount, float totalArea, int bAllowRestore) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, int, float, int)>(L"Path_CalcLookahead_Completed")(pPath, vStartPos, bReduceLookaheadAmount, totalArea, bAllowRestore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PathCalcLookahead_CheckMinLookaheadNodes(struct path_t* pPath, const struct pathpoint_t* pt, int currentNode) -> void
{
  return Zynamic::Forward<void (struct path_t*, const struct pathpoint_t*, int)>(L"PathCalcLookahead_CheckMinLookaheadNodes")(pPath, pt, currentNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CalcLookahead(struct path_t* pPath, const float* vStartPos, int bReduceLookaheadAmount, int bAllowRestore) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, int, int)>(L"Path_CalcLookahead")(pPath, vStartPos, bReduceLookaheadAmount, bAllowRestore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetForwardStartPos(struct path_t* pPath, const float* vStartPos, float* vForwardStartPos) -> int
{
  return Zynamic::Forward<int (struct path_t*, const float*, float*)>(L"Path_GetForwardStartPos")(pPath, vStartPos, vForwardStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateForwardLookahead_IncompletePath(struct path_t* pPath, const struct pathpoint_t* pt, const float* vForwardStartPos, float area, float height) -> void
{
  return Zynamic::Forward<void (struct path_t*, const struct pathpoint_t*, const float*, float, float)>(L"Path_UpdateForwardLookahead_IncompletePath")(pPath, pt, vForwardStartPos, area, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateForwardLookahead(struct path_t* pPath, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*)>(L"Path_UpdateForwardLookahead")(pPath, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateLookahead_NonCodeMove(struct path_t* pPath, const float* vPrevPos, const float* vStartPos) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, const float*)>(L"Path_UpdateLookahead_NonCodeMove")(pPath, vPrevPos, vStartPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateLookahead(struct path_t* pPath, const float* vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, int bAllowRestore) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, int, int, int, int)>(L"Path_UpdateLookahead")(pPath, vStartPos, bReduceLookaheadAmount, bTrimAmount, bAllowBacktrack, bAllowRestore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DebugDraw(struct path_t* pPath, const float* vStartPos, int bDrawLookahead, int entId) -> void
{
  return Zynamic::Forward<void (struct path_t*, const float*, int, int)>(L"Path_DebugDraw")(pPath, vStartPos, bDrawLookahead, entId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_WithinApproxDist(struct path_t* pPath, float checkDist) -> bool
{
  return Zynamic::Forward<bool (struct path_t*, float)>(L"Path_WithinApproxDist")(pPath, checkDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AllowedStancesForPath(struct path_t* pPath) -> enum ai_stance_e
{
  return Zynamic::Forward<enum ai_stance_e (struct path_t*)>(L"Path_AllowedStancesForPath")(pPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckNodeCountForDodge(struct path_t* pPath, int numNeeded, struct pathpoint_t** pt, int* startIndex) -> void
{
  return Zynamic::Forward<void (struct path_t*, int, struct pathpoint_t**, int*)>(L"Path_CheckNodeCountForDodge")(pPath, numNeeded, pt, startIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DodgeDrawRaisedLine(const float* start, const float* end, const float* color) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*)>(L"Path_DodgeDrawRaisedLine")(start, end, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AttemptDodge(struct path_t* pPath, const float* vOrg, const float* vDodgeStart, const float* vDodgeEnd, int startIndex, const int* entities, const int entityCount, int entityIgnore, int mask, int bCheckLookahead) -> bool
{
  return Zynamic::Forward<bool (struct path_t*, const float*, const float*, const float*, int, const int*, const int, int, int, int)>(L"Path_AttemptDodge")(pPath, vOrg, vDodgeStart, vDodgeEnd, startIndex, entities, entityCount, entityIgnore, mask, bCheckLookahead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MayFaceEnemy(struct path_t* pPath, float* vEnemyDir, float* vOrg) -> int
{
  return Zynamic::Forward<int (struct path_t*, float*, float*)>(L"Path_MayFaceEnemy")(pPath, vEnemyDir, vOrg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_TrimToBadPlaceLink(struct path_t* pPath, enum team_t eTeam) -> void
{
  return Zynamic::Forward<void (struct path_t*, enum team_t)>(L"Path_TrimToBadPlaceLink")(pPath, eTeam);
}

#endif // __UNIMPLEMENTED__
