//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketEntities_GetNewEnt(const int newindex, const int to_num_entities, const int to_first_entity, const struct entityState_s** newent, int* newnum) -> void
{
  return Zynamic::Forward<void (const int, const int, const int, const struct entityState_s**, int*)>(L"SV_EmitPacketEntities_GetNewEnt")(newindex, to_num_entities, to_first_entity, newent, newnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketEntities_DebugStart(int* quickBits, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int*, struct msg_t*)>(L"SV_EmitPacketEntities_DebugStart")(quickBits, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketEntities_Debug(struct SnapshotInfo_s* snapInfo, int* quickBits, struct msg_t* msg, const char* str, ...) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, int*, struct msg_t*, const char*, ...)>(L"SV_EmitPacketEntities_Debug")(snapInfo, quickBits, msg, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketEntities(struct SnapshotInfo_s* snapInfo, const int from_num_entities, const int from_first_entity, const int to_num_entities, const int to_first_entity, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, const int, const int, const int, const int, struct msg_t*)>(L"SV_EmitPacketEntities")(snapInfo, from_num_entities, from_first_entity, to_num_entities, to_first_entity, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketClients_GetNewClient(const int newindex, const int to_num_clients, const int to_first_client, const struct clientState_s** newclient, int* newnum) -> void
{
  return Zynamic::Forward<void (const int, const int, const int, const struct clientState_s**, int*)>(L"SV_EmitPacketClients_GetNewClient")(newindex, to_num_clients, to_first_client, newclient, newnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EmitPacketClients(struct SnapshotInfo_s* snapInfo, const int from_num_clients, const int from_first_client, const int to_num_clients, const int to_first_client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, const int, const int, const int, const int, struct msg_t*)>(L"SV_EmitPacketClients")(snapInfo, from_num_clients, from_first_client, to_num_clients, to_first_client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteSnapshotToClient(struct client_t* client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_WriteSnapshotToClient")(client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateServerCommandsToClient(struct client_t* client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_UpdateServerCommandsToClient")(client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateServerCommandsToClient_PreventOverflow(struct client_t* client, struct msg_t* msg, int iMsgSize) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*, int)>(L"SV_UpdateServerCommandsToClient_PreventOverflow")(client, msg, iMsgSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PrintServerCommandsForClient(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_PrintServerCommandsForClient")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddEntToSnapshot(int entnum, struct snapshotEntityNumbers_t* eNums) -> void
{
  return Zynamic::Forward<void (int, struct snapshotEntityNumbers_t*)>(L"SV_AddEntToSnapshot")(entnum, eNums);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddEntitiesVisibleFromPoint(float* org, int clientNum, struct snapshotEntityNumbers_t* eNums) -> void
{
  return Zynamic::Forward<void (float*, int, struct snapshotEntityNumbers_t*)>(L"SV_AddEntitiesVisibleFromPoint")(org, clientNum, eNums);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddCachedEntitiesVisibleFromPoint(int from_num_entities, int from_first_entity, float* org, int clientNum, struct snapshotEntityNumbers_t* eNums, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, int, float*, int, struct snapshotEntityNumbers_t*, struct playerState_s*)>(L"SV_AddCachedEntitiesVisibleFromPoint")(from_num_entities, from_first_entity, org, clientNum, eNums, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FrameIsStillInArchivedSnapshotBuffer(const int frameStart) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"SV_FrameIsStillInArchivedSnapshotBuffer")(frameStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_HasCachedSnapshotInternal(int archivedFrame, int callDepth) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"SV_HasCachedSnapshotInternal")(archivedFrame, callDepth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetCachedSnapshotInternal(int archivedFrame, int depth, bool expectedToSucceed) -> struct cachedSnapshot_t*
{
  return Zynamic::Forward<struct cachedSnapshot_t* (int, int, bool)>(L"SV_GetCachedSnapshotInternal")(archivedFrame, depth, expectedToSucceed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetCachedSnapshot(int* pArchiveTime) -> struct cachedSnapshot_t*
{
  return Zynamic::Forward<struct cachedSnapshot_t* (int*)>(L"SV_GetCachedSnapshot")(pArchiveTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetCurrentClientInfo(int clientNum, struct playerState_s* ps, struct clientState_s* cs) -> int
{
  return Zynamic::Forward<int (int, struct playerState_s*, struct clientState_s*)>(L"SV_GetCurrentClientInfo")(clientNum, ps, cs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientPositionsFromCachedSnap(const struct cachedSnapshot_t* cachedFrame, float* pos[0x3], float* angles[0x3], bool* success) -> void
{
  return Zynamic::Forward<void (const struct cachedSnapshot_t*, float*[0x3], float*[0x3], bool*)>(L"SV_GetClientPositionsFromCachedSnap")(cachedFrame, pos, angles, success);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientPositionsAtTime(int gametime, float* pos[0x3], float* angles[0x3], bool* success) -> bool
{
  return Zynamic::Forward<bool (int, float*[0x3], float*[0x3], bool*)>(L"SV_GetClientPositionsAtTime")(gametime, pos, angles, success);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetEarliestArchivedClientInfoTime() -> int
{
  return Zynamic::Forward<int ()>(L"SV_GetEarliestArchivedClientInfoTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetArchivedClientInfo(int clientNum, int* pArchiveTime, struct playerState_s* ps, struct clientState_s* cs, float* origin, int* health, int* otherFlags) -> int
{
  return Zynamic::Forward<int (int, int*, struct playerState_s*, struct clientState_s*, float*, int*, int*)>(L"SV_GetArchivedClientInfo")(clientNum, pArchiveTime, ps, cs, origin, health, otherFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DecToHex(int decValue, char* hexValue, int hexLength) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"SV_DecToHex")(decValue, hexValue, hexLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AppendToBuffer(char* msgBuffer, int& msgBufferIndex, char* data, int dataSize) -> int
{
  return Zynamic::Forward<int (char*, int&, char*, int)>(L"SV_AppendToBuffer")(msgBuffer, msgBufferIndex, data, dataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddModifiedStatsWithinOffset(int clientNum, int startOffset, int& endOffset, char* msgBuff, int& msgBuffIndex) -> int
{
  return Zynamic::Forward<int (int, int, int&, char*, int&)>(L"SV_AddModifiedStatsWithinOffset")(clientNum, startOffset, endOffset, msgBuff, msgBuffIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AddModifiedStats(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_AddModifiedStats")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BuildClientSnapshot(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_BuildClientSnapshot")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WindowedRateMsec(struct client_t* client) -> int
{
  return Zynamic::Forward<int (struct client_t*)>(L"SV_WindowedRateMsec")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendMessageToClient(struct msg_t* msg, struct client_t* client, bool reliable) -> void
{
  return Zynamic::Forward<void (struct msg_t*, struct client_t*, bool)>(L"SV_SendMessageToClient")(msg, client, reliable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BeginClientSnapshot(struct client_t* client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_BeginClientSnapshot")(client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EndClientSnapshot(struct client_t* client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_EndClientSnapshot")(client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetServerStaticHeader() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetServerStaticHeader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetServerStaticHeader() -> void
{
  return Zynamic::Forward<void ()>(L"SV_GetServerStaticHeader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendClientMessages() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SendClientMessages")();
}

#endif // __UNIMPLEMENTED__
