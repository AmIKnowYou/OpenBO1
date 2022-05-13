//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SortPoints() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_SortPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_GetInfluencerList() -> struct SpawnInfluencer*
{
  return Zynamic::Forward<struct SpawnInfluencer* ()>(L"SpawnSystem_GetInfluencerList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_GetSpawnPoints() -> struct SpawnPoint*
{
  return Zynamic::Forward<struct SpawnPoint* ()>(L"SpawnSystem_GetSpawnPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_GetSpawnPointCount() -> int
{
  return Zynamic::Forward<int ()>(L"SpawnSystem_GetSpawnPointCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SortInfluencers() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_SortInfluencers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SortPointsForTeamByScore(int team) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_SortPointsForTeamByScore")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_Init(bool restart) -> void
{
  return Zynamic::Forward<void (bool)>(L"SpawnSystem_Init")(restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_FindPointByEnt(int entNum) -> int
{
  return Zynamic::Forward<int (int)>(L"SpawnSystem_FindPointByEnt")(entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetRandomVariation(float variation) -> void
{
  return Zynamic::Forward<void (float)>(L"SpawnSystem_SetRandomVariation")(variation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ClearPoints() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_ClearPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_AddPoint(int team, struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (int, struct gentity_s*)>(L"SpawnSystem_AddPoint")(team, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetPointBaseWeight(struct SpawnPoint* point, int teammask, float weight) -> void
{
  return Zynamic::Forward<void (struct SpawnPoint*, int, float)>(L"SpawnSystem_SetPointBaseWeight")(point, teammask, weight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ClearPointsBaseWeight(int teammask) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_ClearPointsBaseWeight")(teammask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetPointsBaseWeight(int teammask, float* objective_position, float angle, float score) -> void
{
  return Zynamic::Forward<void (int, float*, float, float)>(L"SpawnSystem_SetPointsBaseWeight")(teammask, objective_position, angle, score);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_FindFreeInfluencer() -> int
{
  return Zynamic::Forward<int ()>(L"SpawnSystem_FindFreeInfluencer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ComputeInfluencerBounds(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_ComputeInfluencerBounds")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_InsertSortedInfluencer(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_InsertSortedInfluencer")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_RemoveSortedInfluencerByIndex(int influencer_index) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_RemoveSortedInfluencerByIndex")(influencer_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_RemoveSortedInfluencer(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_RemoveSortedInfluencer")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_CalculateCylinderLength(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_CalculateCylinderLength")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_CalculateCylinderAxis(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_CalculateCylinderAxis")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_CalculateCylinderAxisMidpoint(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_CalculateCylinderAxisMidpoint")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_UpdateCylinderInfluencer(struct SpawnInfluencer* influencer) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*)>(L"SpawnSystem_UpdateCylinderInfluencer")(influencer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetPresetData(int influencerIndex, enum eInfluencerType type, enum eInfluencerShape shape, float length, float radius, float score, enum eInfluencerScoreCurve score_curve, const char* description) -> struct SpawnInfluencerPreset*
{
  return Zynamic::Forward<struct SpawnInfluencerPreset* (int, enum eInfluencerType, enum eInfluencerShape, float, float, float, enum eInfluencerScoreCurve, const char*)>(L"SpawnSystem_SetPresetData")(influencerIndex, type, shape, length, radius, score, score_curve, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_InitInfluencer(struct SpawnInfluencer* influencer, enum eInfluencerType type, enum eInfluencerShape shape, const float* origin, const float* forward, const float* up, float radius, float axis_length, float score, enum eInfluencerScoreCurve score_curve, int teamMask, int entNum, int timeout, const char* description) -> void
{
  return Zynamic::Forward<void (struct SpawnInfluencer*, enum eInfluencerType, enum eInfluencerShape, const float*, const float*, const float*, float, float, float, enum eInfluencerScoreCurve, int, int, int, const char*)>(L"SpawnSystem_InitInfluencer")(influencer, type, shape, origin, forward, up, radius, axis_length, score, score_curve, teamMask, entNum, timeout, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_AddSphereInfluencer(enum eInfluencerType type, float* origin, float radius, float score, enum eInfluencerScoreCurve score_curve, int teamMask, int entNum, int timeout, const char* description) -> int
{
  return Zynamic::Forward<int (enum eInfluencerType, float*, float, float, enum eInfluencerScoreCurve, int, int, int, const char*)>(L"SpawnSystem_AddSphereInfluencer")(type, origin, radius, score, score_curve, teamMask, entNum, timeout, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_AddCylinderInfluencer(enum eInfluencerType type, float* origin, float* forward, float* up, float radius, float axis_length, float score, enum eInfluencerScoreCurve score_curve, int teamMask, int entNum, int timeout, const char* description) -> int
{
  return Zynamic::Forward<int (enum eInfluencerType, float*, float*, float*, float, float, float, enum eInfluencerScoreCurve, int, int, int, const char*)>(L"SpawnSystem_AddCylinderInfluencer")(type, origin, forward, up, radius, axis_length, score, score_curve, teamMask, entNum, timeout, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_RemoveInfluencer(int influencer_index) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SpawnSystem_RemoveInfluencer")(influencer_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_EnableInfluencer(int influencer_index, bool enabled) -> bool
{
  return Zynamic::Forward<bool (int, bool)>(L"SpawnSystem_EnableInfluencer")(influencer_index, enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetInfluencerTeamMask(int influencer_index, int team_mask) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"SpawnSystem_SetInfluencerTeamMask")(influencer_index, team_mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ClearEntityInfluencers(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"SpawnSystem_ClearEntityInfluencers")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ClearTimedOutInfluencers() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_ClearTimedOutInfluencers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_UpdateInfluencerBounds() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_UpdateInfluencerBounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_UpdateInfluencerOriginAngles() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_UpdateInfluencerOriginAngles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_Update() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_InfluenceWeight(enum eInfluencerScoreCurve curve_type, float influencer_radius_sq, float distance_sq, float score) -> float
{
  return Zynamic::Forward<float (enum eInfluencerScoreCurve, float, float, float)>(L"SpawnSystem_InfluenceWeight")(curve_type, influencer_radius_sq, distance_sq, score);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ComputeSphereInfluence(struct SpawnInfluencer* influencer, struct SpawnPoint* point) -> float
{
  return Zynamic::Forward<float (struct SpawnInfluencer*, struct SpawnPoint*)>(L"SpawnSystem_ComputeSphereInfluence")(influencer, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ComputeCylinderInfluence(struct SpawnInfluencer* influencer, struct SpawnPoint* point) -> float
{
  return Zynamic::Forward<float (struct SpawnInfluencer*, struct SpawnPoint*)>(L"SpawnSystem_ComputeCylinderInfluence")(influencer, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ComputePointWeight(struct gentity_s* player, int point_team, int influencer_team, struct SpawnPoint* point, bool bIsArchiveCall) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int, struct SpawnPoint*, bool)>(L"SpawnSystem_ComputePointWeight")(player, point_team, influencer_team, point, bIsArchiveCall);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_ComputePointWeights(struct gentity_s* player, int point_team, int influencer_team) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int)>(L"SpawnSystem_ComputePointWeights")(player, point_team, influencer_team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SortPointsByScore(int team) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_SortPointsByScore")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_UpdateSpawnPointsForTeam(int point_team, int influencer_team) -> int
{
  return Zynamic::Forward<int (int, int)>(L"SpawnSystem_UpdateSpawnPointsForTeam")(point_team, influencer_team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_UpdateSpawnPointsForPlayer(struct gentity_s* ent, int point_team, int influencer_team) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int, int)>(L"SpawnSystem_UpdateSpawnPointsForPlayer")(ent, point_team, influencer_team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_GetSortedPointEntNum(int team, int index) -> int
{
  return Zynamic::Forward<int (int, int)>(L"SpawnSystem_GetSortedPointEntNum")(team, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRenderVisibilityBox(float* point1, float* angles1, const float* color) -> void
{
  return Zynamic::Forward<void (float*, float*, const float*)>(L"SpawnSystem_DebugRenderVisibilityBox")(point1, angles1, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRenderVisibilityCheck(float* point1, float* angles1, float* point2, float* angles2, const float* color, float height_offset, struct gentity_s* ignore_entity, bool collision_test) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*, const float*, float, struct gentity_s*, bool)>(L"SpawnSystem_DebugRenderVisibilityCheck")(point1, angles1, point2, angles2, color, height_offset, ignore_entity, collision_test);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_IsSpawnPointVisible(float* origin, float* angles, int other_team, struct gentity_s* ignore_entity, bool render_mode_success) -> bool
{
  return Zynamic::Forward<bool (float*, float*, int, struct gentity_s*, bool)>(L"SpawnSystem_IsSpawnPointVisible")(origin, angles, other_team, ignore_entity, render_mode_success);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_IsSpawnPointVisible(float* origin, float* angles, int other_team, struct gentity_s* ignore_entity) -> bool
{
  return Zynamic::Forward<bool (float*, float*, int, struct gentity_s*)>(L"SpawnSystem_IsSpawnPointVisible")(origin, angles, other_team, ignore_entity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugSideSwitch(bool enabled) -> void
{
  return Zynamic::Forward<void (bool)>(L"SpawnSystem_DebugSideSwitch")(enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRenderTeamPointWeights(int teamMask) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_DebugRenderTeamPointWeights")(teamMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRenderSpawnPointBox(struct SpawnPoint* sp, const float* color, int bDepthTest) -> void
{
  return Zynamic::Forward<void (struct SpawnPoint*, const float*, int)>(L"SpawnSystem_DebugRenderSpawnPointBox")(sp, color, bDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRenderTeamPoints(int teamMask) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_DebugRenderTeamPoints")(teamMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_SetSpawnPointsOrder(int team) -> void
{
  return Zynamic::Forward<void (int)>(L"SpawnSystem_SetSpawnPointsOrder")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugUpdateSpawnPoints(struct gentity_s* player, int point_team, int influencer_team) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int)>(L"SpawnSystem_DebugUpdateSpawnPoints")(player, point_team, influencer_team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnSystem_DebugRender() -> void
{
  return Zynamic::Forward<void ()>(L"SpawnSystem_DebugRender")();
}

#endif // __UNIMPLEMENTED__
