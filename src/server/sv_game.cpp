//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_g_sv_skel_memory''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_g_sv_skel_memory''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GameClientNum(int num) -> struct playerState_s*
{
  return Zynamic::Forward<struct playerState_s* (int)>(L"SV_GameClientNum")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SvEntityForGentity(const struct gentity_s* gEnt) -> struct svEntity_s*
{
  return Zynamic::Forward<struct svEntity_s* (const struct gentity_s*)>(L"SV_SvEntityForGentity")(gEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GameSendServerCommand(int clientNum, enum svscmd_type type, const char* text) -> void
{
  return Zynamic::Forward<void (int, enum svscmd_type, const char*)>(L"SV_GameSendServerCommand")(clientNum, type, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GameDropClient(int clientNum, const char* reason) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"SV_GameDropClient")(clientNum, reason);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetMapCenter(float* mapCenter) -> void
{
  return Zynamic::Forward<void (float*)>(L"SV_SetMapCenter")(mapCenter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetMapCenter() -> float*
{
  return Zynamic::Forward<float* ()>(L"SV_GetMapCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetGameEndTime(int gameEndTime[0x3]) -> void
{
  return Zynamic::Forward<void (int[0x3])>(L"SV_SetGameEndTime")(gameEndTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetTimeScale(float endTimeScale, int endTime) -> void
{
  return Zynamic::Forward<void (float, int)>(L"SV_SetTimeScale")(endTimeScale, endTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetBrushModel(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"SV_SetBrushModel")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_inSnapshot(const float* origin, int iEntityNum) -> int
{
  return Zynamic::Forward<int (const float*, int)>(L"SV_inSnapshot")(origin, iEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EntityContact(const float* mins, const float* maxs, const struct gentity_s* gEnt) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const struct gentity_s*)>(L"SV_EntityContact")(mins, maxs, gEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetServerinfo(char* buffer, int bufferSize) -> void
{
  return Zynamic::Forward<void (char*, int)>(L"SV_GetServerinfo")(buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_LocateGameData(struct gentity_s* gEnts, int numGEntities, int sizeofGEntity_t, struct playerState_s* clients, int sizeofGameClient) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, int, struct playerState_s*, int)>(L"SV_LocateGameData")(gEnts, numGEntities, sizeofGEntity_t, clients, sizeofGameClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetUsercmd(int clientNum, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (int, struct usercmd_s*)>(L"SV_GetUsercmd")(clientNum, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllocXModelPrecache(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"SV_AllocXModelPrecache")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllocXModelPrecacheColl(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"SV_AllocXModelPrecacheColl")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_XModelGet(const char* name) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*)>(L"SV_XModelGet")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjDumpInfo(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"SV_DObjDumpInfo")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ResetSkeletonCache() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ResetSkeletonCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllocSkelMemory(unsigned int size) -> char*
{
  return Zynamic::Forward<char* (unsigned int)>(L"SV_AllocSkelMemory")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjCreateSkelForBone(struct DObj* obj, int boneIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, int)>(L"SV_DObjCreateSkelForBone")(obj, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjCreateSkelForBones(struct DObj* obj, int* partBits) -> int
{
  return Zynamic::Forward<int (struct DObj*, int*)>(L"SV_DObjCreateSkelForBones")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjUpdateServerTime(struct gentity_s* ent, float dtime, int bNotify) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float, int)>(L"SV_DObjUpdateServerTime")(ent, dtime, bNotify);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjInitServerTime(struct gentity_s* ent, float dtime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float)>(L"SV_DObjInitServerTime")(ent, dtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjGetBoneIndex(const struct gentity_s* ent, unsigned int boneName) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, unsigned int)>(L"SV_DObjGetBoneIndex")(ent, boneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjGetMatrixArray(const struct gentity_s* ent) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct gentity_s*)>(L"SV_DObjGetMatrixArray")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjDisplayAnim(struct gentity_s* ent, const char* header) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*)>(L"SV_DObjDisplayAnim")(ent, header);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjGetRotTransArray(const struct gentity_s* ent) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct gentity_s*)>(L"SV_DObjGetRotTransArray")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjSetRotTransIndex(const struct gentity_s* ent, int* partBits, int boneIndex) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, int*, int)>(L"SV_DObjSetRotTransIndex")(ent, partBits, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjGetBounds(struct gentity_s* ent, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*, float*)>(L"SV_DObjGetBounds")(ent, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjGetTree(struct gentity_s* ent) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct gentity_s*)>(L"SV_DObjGetTree")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_XModelDebugBoxes(struct gentity_s* ent, const float* color, int* partBits, int duration) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, int*, int)>(L"SV_XModelDebugBoxes")(ent, color, partBits, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MapExists(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"SV_MapExists")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DObjExists(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"SV_DObjExists")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_track_shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"SV_track_shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SavePaths(unsigned char* buf, int size) -> void
{
  return Zynamic::Forward<void (unsigned char*, int)>(L"SV_SavePaths")(buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetGuid(int clientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"SV_GetGuid")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientPing(int clientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"SV_GetClientPing")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsLocalClient(int clientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"SV_IsLocalClient")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ShutdownGameProgs() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ShutdownGameProgs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetGametype() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetGametype")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitGameVM(int restart, int registerDvars, int savegame) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"SV_InitGameVM")(restart, registerDvars, savegame);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ShutdownGameVM(int clearScripts) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_ShutdownGameVM")(clearScripts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_RestartGameProgs(int savepersist) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_RestartGameProgs")(savepersist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitGameProgs(int savepersist, int savegame) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SV_InitGameProgs")(savepersist, savegame);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GameCommand() -> int
{
  return Zynamic::Forward<int ()>(L"SV_GameCommand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Archived_Dvar_GetVariantString(const char* dvarName) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SV_Archived_Dvar_GetVariantString")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Archived_Dvar_GetVariantString(long dvarHash) -> const char*
{
  return Zynamic::Forward<const char* (long)>(L"SV_Archived_Dvar_GetVariantString")(dvarHash);
}

#endif // __UNIMPLEMENTED__
