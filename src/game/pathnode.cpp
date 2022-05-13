//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_pathnode() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_pathnode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ReadOnly(int offset) -> void
{
  return Zynamic::Forward<void (int)>(L"Path_ReadOnly")(offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetType(struct pathnode_t* node, int offset) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, int)>(L"Path_GetType")(node, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetPathnodeField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Scr_SetPathnodeField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPathnodeField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Scr_GetPathnodeField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CallFunctionForNodes(enum scriptInstance_t inst, function* function) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, function *)>(L"Path_CallFunctionForNodes")(inst, function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetPathnodeScriptVariable(const char* key, const char* value, struct pathnode_t* ent) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct pathnode_t*)>(L"G_SetPathnodeScriptVariable")(key, value, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDynamicPathnodeField(struct pathnode_t* node, unsigned int index) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, unsigned int)>(L"GScr_SetDynamicPathnodeField")(node, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PathNode_ClearStringField(unsigned short* destScrString) -> void
{
  return Zynamic::Forward<void (unsigned short*)>(L"PathNode_ClearStringField")(destScrString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PathNode_UpdateStringField(const char* destKey, unsigned short* destScrString, const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (const char*, unsigned short*, const char*, const char*)>(L"PathNode_UpdateStringField")(destKey, destScrString, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PathNode_UpdateFloatField(const char* destKey, float* destFloat, const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (const char*, float*, const char*, const char*)>(L"PathNode_UpdateFloatField")(destKey, destFloat, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PathNode_OriginMatches(const char* value, const float* nodeOrigin) -> void
{
  return Zynamic::Forward<void (const char*, const float*)>(L"PathNode_OriginMatches")(value, nodeOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParsePathnodeScriptField(const char* key, const char* value, struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct pathnode_t*)>(L"G_ParsePathnodeScriptField")(key, value, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParsePathnodeScriptFields(struct pathnode_t* node, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct SpawnVar*)>(L"G_ParsePathnodeScriptFields")(node, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_parented_pathnode_list_map''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_parented_pathnode_list_map''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto parented_pathnode_list_update(struct gentity_s* gent, const class phys_mat44& mat, const float* __formal) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const class phys_mat44&, const float*)>(L"parented_pathnode_list_update")(gent, mat, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pathnode_resized_links_map''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pathnode_resized_links_map''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pathnode_resized_links_allocator''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pathnode_resized_links_allocator''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pathnode_parent_map''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pathnode_parent_map''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pathnode_parent_allocator''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pathnode_parent_allocator''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto setup_pathnode_parent(struct pathnode_t* node, const int entnum, const float* origin_loc) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, const int, const float*)>(L"setup_pathnode_parent")(node, entnum, origin_loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_pathnode_parent(const struct pathnode_t* node) -> const struct pathnode_parent_t*
{
  return Zynamic::Forward<const struct pathnode_parent_t* (const struct pathnode_t*)>(L"get_pathnode_parent")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_moving_entity(struct gentity_s* gent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"is_moving_entity")(gent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto node_droptofloor(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"node_droptofloor")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTrackExtraNodes() -> void
{
  return Zynamic::Forward<void ()>(L"G_UpdateTrackExtraNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitPathBaseNode(struct pathbasenode_t* pbnode, const struct pathnode_t* pnode) -> void
{
  return Zynamic::Forward<void (struct pathbasenode_t*, const struct pathnode_t*)>(L"G_InitPathBaseNode")(pbnode, pnode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DropPathNodeToFloor(unsigned int nodeIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"G_DropPathNodeToFloor")(nodeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DropPathnodesToFloor() -> void
{
  return Zynamic::Forward<void ()>(L"G_DropPathnodesToFloor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnPathnodeDynamic(struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*)>(L"G_SpawnPathnodeDynamic")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddFieldsForPathnode() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddFieldsForPathnode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreePathnode(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Scr_FreePathnode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddPathnode(struct pathnode_t* node, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, enum scriptInstance_t)>(L"Scr_AddPathnode")(node, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNode() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetNode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNodeArray() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetNodeArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAllNodes() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetAllNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPathnode(unsigned int index, enum scriptInstance_t inst) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (unsigned int, enum scriptInstance_t)>(L"Scr_GetPathnode")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CompareNodesIncreasing(const struct pathsort_t& ps1, const struct pathsort_t& ps2) -> bool
{
  return Zynamic::Forward<bool (const struct pathsort_t&, const struct pathsort_t&)>(L"Path_CompareNodesIncreasing")(ps1, ps2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConvertNodeToIndex(const struct pathnode_t* node) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*)>(L"Path_ConvertNodeToIndex")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConvertIndexToNode(int index) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (int)>(L"Path_ConvertIndexToNode")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Init(int restart) -> void
{
  return Zynamic::Forward<void (int)>(L"Path_Init")(restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Path_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NodeVisCacheEntry(int i, int j) -> const int
{
  return Zynamic::Forward<const int (int, int)>(L"NodeVisCacheEntry")(i, j);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpandedNodeVisCacheEntry(int i, int j) -> const int
{
  return Zynamic::Forward<const int (int, int)>(L"ExpandedNodeVisCacheEntry")(i, j);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NodesInCylinder_process(struct pathnode_t* pnode) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Path_NodesInCylinder_process")(pnode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NodesInCylinder_r(struct pathnode_tree_t* tree) -> void
{
  return Zynamic::Forward<void (struct pathnode_tree_t*)>(L"Path_NodesInCylinder_r")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MovingNodesInCylinder() -> void
{
  return Zynamic::Forward<void ()>(L"Path_MovingNodesInCylinder")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NodesInCylinder(const float* origin, float maxDist, float maxHeight, struct pathsort_t* nodes, int maxNodes, int typeFlags) -> int
{
  return Zynamic::Forward<int (const float*, float, float, struct pathsort_t*, int, int)>(L"Path_NodesInCylinder")(origin, maxDist, maxHeight, nodes, maxNodes, typeFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NodesInRadius(const float* origin, float maxDist, struct pathsort_t* nodes, int maxNodes, int typeFlags) -> int
{
  return Zynamic::Forward<int (const float*, float, struct pathsort_t*, int, int)>(L"Path_NodesInRadius")(origin, maxDist, nodes, maxNodes, typeFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IsDynamicBlockingEntity(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"Path_IsDynamicBlockingEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IsBadPlaceLink(int nodeNumFrom, int nodeNumTo, enum team_t eTeam) -> int
{
  return Zynamic::Forward<int (int, int, enum team_t)>(L"Path_IsBadPlaceLink")(nodeNumFrom, nodeNumTo, eTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitLinkCounts() -> void
{
  return Zynamic::Forward<void ()>(L"Path_InitLinkCounts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitLinkInfoArray() -> void
{
  return Zynamic::Forward<void ()>(L"Path_InitLinkInfoArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AutoDisconnectPaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_AutoDisconnectPaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitNodeDynamic(struct pathnode_t* loadNode) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Path_InitNodeDynamic")(loadNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitNodesDynamic() -> void
{
  return Zynamic::Forward<void ()>(L"Path_InitNodesDynamic")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_PreSpawnInitPaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_PreSpawnInitPaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitPaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_InitPaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckSpawnExitNodesConnectivity() -> void
{
  return Zynamic::Forward<void ()>(L"Path_CheckSpawnExitNodesConnectivity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugNoLinks(const struct pathnode_t* node, const float* color[0x4], int duration) -> void
{
  return Zynamic::Forward<void (const struct pathnode_t*, const float*[0x4], int)>(L"Path_DrawDebugNoLinks")(node, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugLink(const struct pathnode_t* node, const int i, bool bShowAll) -> void
{
  return Zynamic::Forward<void (const struct pathnode_t*, const int, bool)>(L"Path_DrawDebugLink")(node, i, bShowAll);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetDebugStringScale(const float* cameraPos, const float* origin) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"Path_GetDebugStringScale")(cameraPos, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugNodeBox(const struct pathnode_t* node, float size, const float* color_) -> void
{
  return Zynamic::Forward<void (const struct pathnode_t*, float, const float*)>(L"Path_DrawDebugNodeBox")(node, size, color_);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugNodeBox(const struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (const struct pathnode_t*)>(L"Path_DrawDebugNodeBox")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugNode(const float* cameraPos, const struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (const float*, const struct pathnode_t*)>(L"Path_DrawDebugNode")(cameraPos, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugNearestNode(const float* vOrigin, int numNodes) -> void
{
  return Zynamic::Forward<void (const float*, int)>(L"Path_DrawDebugNearestNode")(vOrigin, numNodes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugClaimedNodes(const float* origin, int numNodes) -> void
{
  return Zynamic::Forward<void (const float*, int)>(L"Path_DrawDebugClaimedNodes")(origin, numNodes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebugFindPath(const float* vOrigin) -> void
{
  return Zynamic::Forward<void (const float*)>(L"Path_DrawDebugFindPath")(vOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawVisData() -> void
{
  return Zynamic::Forward<void ()>(L"Path_DrawVisData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_Update() -> void
{
  return Zynamic::Forward<void ()>(L"Path_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawDebug() -> void
{
  return Zynamic::Forward<void ()>(L"Path_DrawDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NodesVisible(const struct pathnode_t* node0, const struct pathnode_t* node1) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*, const struct pathnode_t*)>(L"Path_NodesVisible")(node0, node1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ExpandedNodeVisible(const struct pathnode_t* node0, const struct pathnode_t* node1) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*, const struct pathnode_t*)>(L"Path_ExpandedNodeVisible")(node0, node1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NearestNode(const float* vOrigin, struct pathsort_t* nodes, int typeFlags, float fMaxDist, int* returnCount, int maxNodes, enum nearestNodeHeightCheck heightCheck) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (const float*, struct pathsort_t*, int, float, int*, int, enum nearestNodeHeightCheck)>(L"Path_NearestNode")(vOrigin, nodes, typeFlags, fMaxDist, returnCount, maxNodes, heightCheck);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_NearestNodeNotCrossPlanes(const float* vOrigin, struct pathsort_t* nodes, int typeFlags, float fMaxDist, float* vNormal[0x2], float* fDist, int iPlaneCount, int* returnCount, int maxNodes, enum nearestNodeHeightCheck heightCheck) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (const float*, struct pathsort_t*, int, float, float*[0x2], float*, int, int*, int, enum nearestNodeHeightCheck)>(L"Path_NearestNodeNotCrossPlanes")(vOrigin, nodes, typeFlags, fMaxDist, vNormal, fDist, iPlaneCount, returnCount, maxNodes, heightCheck);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_GetNodeOwner(const struct pathnode_t* node) -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* (const struct pathnode_t*)>(L"Path_GetNodeOwner")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CanStealPriorityNode(const struct pathnode_t* node, struct sentient_s* claimer) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*, struct sentient_s*)>(L"Path_CanStealPriorityNode")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CanStealNode(const struct pathnode_t* node, struct sentient_s* claimer) -> bool
{
  return Zynamic::Forward<bool (const struct pathnode_t*, struct sentient_s*)>(L"Path_CanStealNode")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CanClaimNode(const struct pathnode_t* node, struct sentient_s* claimer) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*, struct sentient_s*)>(L"Path_CanClaimNode")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ClaimNodeInternal(struct pathnode_t* node, struct sentient_s* claimer) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct sentient_s*)>(L"Path_ClaimNodeInternal")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MarkNodeOverlap(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Path_MarkNodeOverlap")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ClaimNode(struct pathnode_t* node, struct sentient_s* claimer) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct sentient_s*)>(L"Path_ClaimNode")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_RevokeClaim(struct pathnode_t* node, struct sentient_s* pNewClaimer) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct sentient_s*)>(L"Path_RevokeClaim")(node, pNewClaimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ForceClaimNode(struct pathnode_t* node, struct sentient_s* claimer) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct sentient_s*)>(L"Path_ForceClaimNode")(node, claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_RelinquishNodeNow(struct sentient_s* claimer) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Path_RelinquishNodeNow")(claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_RelinquishNodeSoon(struct sentient_s* claimer) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Path_RelinquishNodeSoon")(claimer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_RelinquishNode(struct sentient_s* claimer, int timeUntilRelinquished) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, int)>(L"Path_RelinquishNode")(claimer, timeUntilRelinquished);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MarkNodeInvalid(struct pathnode_t* node, enum team_t eTeam) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, enum team_t)>(L"Path_MarkNodeInvalid")(node, eTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AllowedStancesForNode(struct pathnode_t* node) -> enum ai_stance_e
{
  return Zynamic::Forward<enum ai_stance_e (struct pathnode_t*)>(L"Path_AllowedStancesForNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ValidateNode(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Path_ValidateNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ValidateAllNodes() -> void
{
  return Zynamic::Forward<void ()>(L"Path_ValidateAllNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckLinkLeaks() -> void
{
  return Zynamic::Forward<void ()>(L"Path_CheckLinkLeaks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckUserCountLeaks() -> void
{
  return Zynamic::Forward<void ()>(L"Path_CheckUserCountLeaks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DisconnectPath(struct pathnode_t* node, struct pathlink_s* link) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct pathlink_s*)>(L"Path_DisconnectPath")(node, link);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConnectPath(struct pathnode_t* node, struct pathlink_s* link) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, struct pathlink_s*)>(L"Path_ConnectPath")(node, link);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConnectPath(struct pathnode_t* node, int toNodeNum) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, int)>(L"Path_ConnectPath")(node, toNodeNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DisconnectPath(struct gentity_s* ent, struct pathnode_t* node, struct pathlink_s* link) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct pathnode_t*, struct pathlink_s*)>(L"Path_DisconnectPath")(ent, node, link);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConnectPathsForEntity(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Path_ConnectPathsForEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DisconnectPathsForEntity(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Path_DisconnectPathsForEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateBadPlaceCountForLink(struct pathlink_s* link, int teamflags, int delta) -> void
{
  return Zynamic::Forward<void (struct pathlink_s*, int, int)>(L"Path_UpdateBadPlaceCountForLink")(link, teamflags, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateArcBadPlaceCount(struct badplace_arc_t* arc, int teamflags, int delta) -> void
{
  return Zynamic::Forward<void (struct badplace_arc_t*, int, int)>(L"Path_UpdateArcBadPlaceCount")(arc, teamflags, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckForInwardLinks(struct pathnode_t* node, int currDepth, int maxDepth, float fRadiusSqrd, float fHeightSqrd, float fMaxRadiusSqrd, float fMaxHeightSqrd, float* centroid, struct badplace_arc_t* arc, float* side0, float* side1, int teamflags, int delta) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, int, int, float, float, float, float, float*, struct badplace_arc_t*, float*, float*, int, int)>(L"Path_CheckForInwardLinks")(node, currDepth, maxDepth, fRadiusSqrd, fHeightSqrd, fMaxRadiusSqrd, fMaxHeightSqrd, centroid, arc, side0, side1, teamflags, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateLimitedDepthArcBadPlaceCount(struct badplace_arc_t* arc, int teamflags, int delta, int depth) -> void
{
  return Zynamic::Forward<void (struct badplace_arc_t*, int, int, int)>(L"Path_UpdateLimitedDepthArcBadPlaceCount")(arc, teamflags, delta, depth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateBrushBadPlaceCount(struct gentity_s* brushEnt, int teamflags, int delta) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int)>(L"Path_UpdateBrushBadPlaceCount")(brushEnt, teamflags, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IsNodeInArc(struct pathnode_t* pNode, const float* origin, float radius, float angle0, float angle1, float halfHeight) -> int
{
  return Zynamic::Forward<int (struct pathnode_t*, const float*, float, float, float, float)>(L"Path_IsNodeInArc")(pNode, origin, radius, angle0, angle1, halfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsNodeEnabled(const struct pathnode_t* pNode) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*)>(L"IsNodeEnabled")(pNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindPathNode(struct SpawnVar* spawnVar, const enum nodeType type, const int gameId) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (struct SpawnVar*, const enum nodeType, const int)>(L"G_FindPathNode")(spawnVar, type, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessPathnodeCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessPathnodeCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedPathNode() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedPathNode")();
}

#endif // __UNIMPLEMENTED__
