//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Path_CreateNodes() -> void
{
  return Zynamic::Forward<void ()>(L"Path_CreateNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitStatic(int restart) -> void
{
  return Zynamic::Forward<void (int)>(L"Path_InitStatic")(restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ShutdownStatic() -> void
{
  return Zynamic::Forward<void ()>(L"Path_ShutdownStatic")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParsePathnodeField(const char* key, const char* value, struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct pathnode_t*)>(L"G_ParsePathnodeField")(key, value, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParsePathnodeFields(struct SpawnVar* spawnVar, struct pathnode_t* node, enum nodeType type) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*, struct pathnode_t*, enum nodeType)>(L"G_ParsePathnodeFields")(spawnVar, node, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_spawn_node(struct SpawnVar* spawnVar, enum nodeType type) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*, enum nodeType)>(L"SP_spawn_node")(spawnVar, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetNodeTypeFromClassname(const char* classname) -> enum nodeType
{
  return Zynamic::Forward<enum nodeType (const char*)>(L"G_GetNodeTypeFromClassname")(classname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnPathnodeStatic(struct SpawnVar* spawnVar, const char* classname) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*, const char*)>(L"G_SpawnPathnodeStatic")(spawnVar, classname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreePathnodeFields(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Scr_FreePathnodeFields")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BuildChain_r(struct pathnode_t* node, short wChainId, short wChainDepth) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*, short, short)>(L"Path_BuildChain_r")(node, wChainId, wChainDepth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compare_pathnodes(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compare_pathnodes")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ErasePaths(const char* pathsError) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Path_ErasePaths")(pathsError);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BuildChains() -> void
{
  return Zynamic::Forward<void ()>(L"Path_BuildChains")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vtosf(const float* v) -> char*
{
  return Zynamic::Forward<char* (const float*)>(L"vtosf")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindOverlappingNodes() -> bool
{
  return Zynamic::Forward<bool ()>(L"Path_FindOverlappingNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_IsNegotiationLink(struct pathnode_t* pNodeFrom, struct pathnode_t* pNodeTo) -> int
{
  return Zynamic::Forward<int (struct pathnode_t*, struct pathnode_t*)>(L"Path_IsNegotiationLink")(pNodeFrom, pNodeTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AllocPathnodeTree() -> struct pathnode_tree_t*
{
  return Zynamic::Forward<struct pathnode_tree_t* ()>(L"Path_AllocPathnodeTree")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BuildNodeBsp_r(unsigned short* nodes, int numNodes) -> struct pathnode_tree_t*
{
  return Zynamic::Forward<struct pathnode_tree_t* (unsigned short*, int)>(L"Path_BuildNodeBsp_r")(nodes, numNodes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MakePathDataPermanent(struct pathlink_s* pSourceLinks, unsigned int totalLinkCount, unsigned char* pVis, int visBytes) -> void
{
  return Zynamic::Forward<void (struct pathlink_s*, unsigned int, unsigned char*, int)>(L"Path_MakePathDataPermanent")(pSourceLinks, totalLinkCount, pVis, visBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_LoadPathsInternal() -> int
{
  return Zynamic::Forward<int ()>(L"Path_LoadPathsInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_LoadPaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_LoadPaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isDeflectionOK(const float* start, const float* origin, const float* movedir) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*)>(L"isDeflectionOK")(start, origin, movedir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CanLinkNodes(struct pathnode_t* pNodeFrom, struct pathnode_t* pNodeTo, float* pfDist, int* pbNegotiationLink) -> int
{
  return Zynamic::Forward<int (struct pathnode_t*, struct pathnode_t*, float*, int*)>(L"Path_CanLinkNodes")(pNodeFrom, pNodeTo, pfDist, pbNegotiationLink);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AttemptLink1(struct pathnode_t* pNodeFrom, struct pathnode_t* pNodeTo, struct pathlink_s* pLinks, int iMaxLinks) -> bool
{
  return Zynamic::Forward<bool (struct pathnode_t*, struct pathnode_t*, struct pathlink_s*, int)>(L"Path_AttemptLink1")(pNodeFrom, pNodeTo, pLinks, iMaxLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AttemptLink(struct pathnode_t* pNodeFrom, struct pathnode_t* pNodeTo, struct pathlink_s* pLinks, int iMaxLinks) -> bool
{
  return Zynamic::Forward<bool (struct pathnode_t*, struct pathnode_t*, struct pathlink_s*, int)>(L"Path_AttemptLink")(pNodeFrom, pNodeTo, pLinks, iMaxLinks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNodeAttackPoint(const struct pathnode_t* node, float* attackPos) -> void
{
  return Zynamic::Forward<void (const struct pathnode_t*, float*)>(L"GetNodeAttackPoint")(node, attackPos);
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

auto Path_GetExpandedNodeNums_r(int iNodeStart, float fDistLeft, int* iNodeNums, int iNodeCount) -> int
{
  return Zynamic::Forward<int (int, float, int*, int)>(L"Path_GetExpandedNodeNums_r")(iNodeStart, fDistLeft, iNodeNums, iNodeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_CheckExpandedNodeVis(int* iNodeNums[0x8192], int* iNodeCount, unsigned char* visbuf) -> int
{
  return Zynamic::Forward<int (int*[0x8192], int*, unsigned char*)>(L"Path_CheckExpandedNodeVis")(iNodeNums, iNodeCount, visbuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_BuildNodeVis(unsigned char* visbuf, int iVisCacheSize) -> void
{
  return Zynamic::Forward<void (unsigned char*, int)>(L"Path_BuildNodeVis")(visbuf, iVisCacheSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetNextAvailableTempLinks() -> struct pathlink_s*
{
  return Zynamic::Forward<struct pathlink_s* ()>(L"G_GetNextAvailableTempLinks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConnectPathsForSingleNode(struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct pathnode_t*)>(L"Path_ConnectPathsForSingleNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ConnectPaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_ConnectPaths")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WriteShort(unsigned char* buffer, unsigned short data) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned char*, unsigned short)>(L"WriteShort")(buffer, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WriteInt(unsigned char* buffer, int data) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned char*, int)>(L"WriteInt")(buffer, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_SavePaths() -> void
{
  return Zynamic::Forward<void ()>(L"Path_SavePaths")();
}

#endif // __UNIMPLEMENTED__
