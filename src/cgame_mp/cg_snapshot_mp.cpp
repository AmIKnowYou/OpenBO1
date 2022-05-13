//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_CopyCorpseInfo(struct clientInfo_t* corpseInfo, const struct clientInfo_t* ci) -> void
{
  return Zynamic::Forward<void (struct clientInfo_t*, const struct clientInfo_t*)>(L"CG_CopyCorpseInfo")(corpseInfo, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CopyActorCorpseInfo(struct actorInfo_t* corpseInfo, const struct actorInfo_t* ai) -> void
{
  return Zynamic::Forward<void (struct actorInfo_t*, const struct actorInfo_t*)>(L"CG_CopyActorCorpseInfo")(corpseInfo, ai);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShutdownEntity(int localClientNum, struct centity_s* cent, bool shutdown_script_for_local_client) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, bool)>(L"CG_ShutdownEntity")(localClientNum, cent, shutdown_script_for_local_client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetEntity(int localClientNum, struct centity_s* cent, int newEntity) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_ResetEntity")(localClientNum, cent, newEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShutdownEntities(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ShutdownEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetInitialSnapshot(int localClientNum, struct snapshot_s* snap) -> void
{
  return Zynamic::Forward<void (int, struct snapshot_s*)>(L"CG_SetInitialSnapshot")(localClientNum, snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TransitionKillcam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_TransitionKillcam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TransitionSnapshot(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_TransitionSnapshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UnpackMatchState(int localClientNum, struct MatchState* matchState) -> void
{
  return Zynamic::Forward<void (int, struct MatchState*)>(L"CG_UnpackMatchState")(localClientNum, matchState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CopyScoreFromClientState(int localClientNum, struct clientInfo_t* ci, struct clientState_s* cs) -> void
{
  return Zynamic::Forward<void (int, struct clientInfo_t*, struct clientState_s*)>(L"CG_CopyScoreFromClientState")(localClientNum, ci, cs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CopyUIVisibilityBitsFomClientState(int localClientNum, struct clientInfo_t* ci, struct clientState_s* cs) -> void
{
  return Zynamic::Forward<void (int, struct clientInfo_t*, struct clientState_s*)>(L"CG_CopyUIVisibilityBitsFomClientState")(localClientNum, ci, cs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateScoreData(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateScoreData")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateClientFlags(int localClientNum, struct centity_s* cent, int oldEFlags2, bool newEnt) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int, bool)>(L"CG_UpdateClientFlags")(localClientNum, cent, oldEFlags2, newEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LocalPlayerRespawned(int localClientNum, struct snapshot_s* snap) -> bool
{
  return Zynamic::Forward<bool (int, struct snapshot_s*)>(L"CG_LocalPlayerRespawned")(localClientNum, snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetNextSnap(int localClientNum, struct snapshot_s* snap) -> void
{
  return Zynamic::Forward<void (int, struct snapshot_s*)>(L"CG_SetNextSnap")(localClientNum, snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ReadNextSnapshot(int localClientNum) -> struct snapshot_s*
{
  return Zynamic::Forward<struct snapshot_s* (int)>(L"CG_ReadNextSnapshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessSnapshots(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ProcessSnapshots")(localClientNum);
}

#endif // __UNIMPLEMENTED__
