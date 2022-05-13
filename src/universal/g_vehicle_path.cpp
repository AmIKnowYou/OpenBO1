//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto VP_ResetLinks() -> void
{
  return Zynamic::Forward<void ()>(L"VP_ResetLinks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetNextFreePathNode() -> short
{
  return Zynamic::Forward<short ()>(L"VP_GetNextFreePathNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_AddDebugLine(const float* start, const float* end, int forceDraw) -> void
{
  return Zynamic::Forward<void (const float*, const float*, int)>(L"VP_AddDebugLine")(start, end, forceDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_DebugArrow(const float* pos, const float* angles) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"VP_DebugArrow")(pos, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_SetScriptVariable(const char* key, const char* value, struct vehicle_node_t* node) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct vehicle_node_t*)>(L"VP_SetScriptVariable")(key, value, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_ParseField(const char* key, const char* value, struct vehicle_node_t* node, const bool setScriptVariable) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct vehicle_node_t*, const bool)>(L"VP_ParseField")(key, value, node, setScriptVariable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_ParseFields(struct vehicle_node_t* node, const struct SpawnVar& spawnVar, const bool setScriptVariable) -> void
{
  return Zynamic::Forward<void (struct vehicle_node_t*, const struct SpawnVar&, const bool)>(L"VP_ParseFields")(node, spawnVar, setScriptVariable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_ZeroNode(struct vehicle_node_t* node) -> void
{
  return Zynamic::Forward<void (struct vehicle_node_t*)>(L"VP_ZeroNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_ClearNode(struct vehicle_node_t* node) -> void
{
  return Zynamic::Forward<void (struct vehicle_node_t*)>(L"VP_ClearNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_InitNode(struct vehicle_node_t* node, short nodeIdx) -> void
{
  return Zynamic::Forward<void (struct vehicle_node_t*, short)>(L"VP_InitNode")(node, nodeIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_CopyNode(const struct vehicle_node_t* src, struct vehicle_node_t* dst) -> void
{
  return Zynamic::Forward<void (const struct vehicle_node_t*, struct vehicle_node_t*)>(L"VP_CopyNode")(src, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetNodeIndex(unsigned short name, float* origin) -> short
{
  return Zynamic::Forward<short (unsigned short, float*)>(L"VP_GetNodeIndex")(name, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_CalcNodeSpeed(short nodeIdx) -> float
{
  return Zynamic::Forward<float (short)>(L"VP_CalcNodeSpeed")(nodeIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_CalcNodeLookAhead(short nodeIdx) -> float
{
  return Zynamic::Forward<float (short)>(L"VP_CalcNodeLookAhead")(nodeIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_CalcNodeAngles(short nodeIdx, float* angles) -> void
{
  return Zynamic::Forward<void (short, float*)>(L"VP_CalcNodeAngles")(nodeIdx, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetSpeed(const struct vehicle_pathpos_t* vpp) -> float
{
  return Zynamic::Forward<float (const struct vehicle_pathpos_t*)>(L"VP_GetSpeed")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetLookAhead(const struct vehicle_pathpos_t* vpp) -> float
{
  return Zynamic::Forward<float (const struct vehicle_pathpos_t*)>(L"VP_GetLookAhead")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetSlide(const struct vehicle_pathpos_t* vpp) -> float
{
  return Zynamic::Forward<float (const struct vehicle_pathpos_t*)>(L"VP_GetSlide")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VPP_GetCurrentNode(const struct vehicle_pathpos_t* vpp, const short currentNode) -> short
{
  return Zynamic::Forward<short (const struct vehicle_pathpos_t*, const short)>(L"VPP_GetCurrentNode")(vpp, currentNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetAngles(const struct vehicle_pathpos_t* vpp, float* angles) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*, float*)>(L"VP_GetAngles")(vpp, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetLookAheadXYZCustom(const struct vehicle_pathpos_t* vpp, float* lookXYZ) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*, float*)>(L"VP_GetLookAheadXYZCustom")(vpp, lookXYZ);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetLookAheadXYZ(const struct vehicle_pathpos_t* vpp, float* lookXYZ) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*, float*)>(L"VP_GetLookAheadXYZ")(vpp, lookXYZ);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_UpdatePathPosCustom(struct vehicle_pathpos_t* vpp, const float* dir, short nodeTest) -> int
{
  return Zynamic::Forward<int (struct vehicle_pathpos_t*, const float*, short)>(L"VP_UpdatePathPosCustom")(vpp, dir, nodeTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_UpdatePathPos(struct vehicle_pathpos_t* vpp, const float* dir, short nodeTest) -> int
{
  return Zynamic::Forward<int (struct vehicle_pathpos_t*, const float*, short)>(L"VP_UpdatePathPos")(vpp, dir, nodeTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_BeginSwitchNode(const struct vehicle_pathpos_t* vpp) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*)>(L"VP_BeginSwitchNode")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_EndSwitchNode(const struct vehicle_pathpos_t* vpp) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*)>(L"VP_EndSwitchNode")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_FindClosestPathNode(const float* pos) -> short
{
  return Zynamic::Forward<short (const float*)>(L"VP_FindClosestPathNode")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_GetFreeCustomPath() -> struct vehicle_custom_path_t*
{
  return Zynamic::Forward<struct vehicle_custom_path_t* ()>(L"VP_GetFreeCustomPath")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_FreeCustomPath(struct vehicle_custom_path_t* path) -> void
{
  return Zynamic::Forward<void (struct vehicle_custom_path_t*)>(L"VP_FreeCustomPath")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_FindPath(const float* start, const float* end, struct vehicle_pathpos_t& vpp) -> int
{
  return Zynamic::Forward<int (const float*, const float*, struct vehicle_pathpos_t&)>(L"VP_FindPath")(start, end, vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_DrawCustomPath(struct vehicle_custom_path_t* customPath) -> void
{
  return Zynamic::Forward<void (struct vehicle_custom_path_t*)>(L"VP_DrawCustomPath")(customPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_DrawPath(const struct vehicle_pathpos_t* vpp) -> void
{
  return Zynamic::Forward<void (const struct vehicle_pathpos_t*)>(L"VP_DrawPath")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitVehiclePaths() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitVehiclePaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeVehiclePaths() -> void
{
  return Zynamic::Forward<void ()>(L"G_FreeVehiclePaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VP_ResetNode(struct vehicle_node_t* node) -> void
{
  return Zynamic::Forward<void (struct vehicle_node_t*)>(L"VP_ResetNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupSplinePaths() -> void
{
  return Zynamic::Forward<void ()>(L"G_SetupSplinePaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ConnectVehiclePaths() -> void
{
  return Zynamic::Forward<void ()>(L"G_ConnectVehiclePaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupVehiclePaths() -> void
{
  return Zynamic::Forward<void ()>(L"G_SetupVehiclePaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehInitPathPos(struct vehicle_pathpos_t* vpp) -> void
{
  return Zynamic::Forward<void (struct vehicle_pathpos_t*)>(L"G_VehInitPathPos")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehFreePathPos(struct vehicle_pathpos_t* vpp) -> void
{
  return Zynamic::Forward<void (struct vehicle_pathpos_t*)>(L"G_VehFreePathPos")(vpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetUpPathPos(struct vehicle_pathpos_t* vpp, short nodeIdx) -> void
{
  return Zynamic::Forward<void (struct vehicle_pathpos_t*, short)>(L"G_VehSetUpPathPos")(vpp, nodeIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehUpdatePathPos(struct vehicle_pathpos_t* vpp, short testNode) -> int
{
  return Zynamic::Forward<int (struct vehicle_pathpos_t*, short)>(L"G_VehUpdatePathPos")(vpp, testNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_VehSetSwitchNode(struct vehicle_pathpos_t* vpp, short srcNodeIdx, short dstNodeIdx) -> void
{
  return Zynamic::Forward<void (struct vehicle_pathpos_t*, short, short)>(L"G_VehSetSwitchNode")(vpp, srcNodeIdx, dstNodeIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_g_vehicle_path() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_vehicle_path")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindVehicleNode(const struct SpawnVar* spawnVar) -> struct vehicle_node_t*
{
  return Zynamic::Forward<struct vehicle_node_t* (const struct SpawnVar*)>(L"G_FindVehicleNode")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_info_vehicle_node(const struct SpawnVar* spawnVar, int rotated, int radiantLiveUpdate) -> void
{
  return Zynamic::Forward<void (const struct SpawnVar*, int, int)>(L"SP_info_vehicle_node")(spawnVar, rotated, radiantLiveUpdate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedVehicleNode() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedVehicleNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessVehicleNodeCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessVehicleNodeCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicleNodeIndex(unsigned int index) -> short
{
  return Zynamic::Forward<short (unsigned int)>(L"GScr_GetVehicleNodeIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddFieldsForVehicleNode() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddFieldsForVehicleNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicleNodeField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"GScr_GetVehicleNodeField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicleNode() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetVehicleNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnHeliHeightLock(struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*)>(L"G_SpawnHeliHeightLock")(spawnVar);
}

#endif // __UNIMPLEMENTED__
