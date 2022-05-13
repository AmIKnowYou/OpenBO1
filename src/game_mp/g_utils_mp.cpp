//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_g_utils() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_utils")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearCachedModels() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearCachedModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindConfigstringIndex(const char* name, int start, int max, int create, const char* errormsg) -> int
{
  return Zynamic::Forward<int (const char*, int, int, int, const char*)>(L"G_FindConfigstringIndex")(name, start, max, create, errormsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LocalizedStringIndex(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_LocalizedStringIndex")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MaterialIndex(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_MaterialIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ModelIndex(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_ModelIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetModel(int index) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (int)>(L"G_GetModel")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetModelBounds(int index, float* outMins, float* outMaxs) -> bool
{
  return Zynamic::Forward<bool (int, float*, float*)>(L"G_GetModelBounds")(index, outMins, outMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_XModelBad(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"G_XModelBad")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ModelName(int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int)>(L"G_ModelName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityCentroid(const struct gentity_s* ent, float* centroid) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, float*)>(L"G_EntityCentroid")(ent, centroid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityBoundsPoint(const struct gentity_s* ent, float ratioFromCenterX, float ratioFromCenterY, float ratioFromCenterZ, float* result) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, float, float, float, float*)>(L"G_GetEntityBoundsPoint")(ent, ratioFromCenterX, ratioFromCenterY, ratioFromCenterZ, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TagIndex(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_TagIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EffectIndex(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_EffectIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ShellShockIndex(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"G_ShellShockIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntAnimTree(struct gentity_s* ent) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct gentity_s*)>(L"G_GetEntAnimTree")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateVehicleAttachedModels(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UpdateVehicleAttachedModels")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateScriptMoverAttachedModels(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_UpdateScriptMoverAttachedModels")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjUpdate(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_DObjUpdate")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetModel(struct gentity_s* ent, const char* modelName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*)>(L"G_SetModel")(ent, modelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetModelIfLoaded(struct gentity_s* ent, const char* modelName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*)>(L"G_SetModelIfLoaded")(ent, modelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_OverrideModel(int modelIndex, const char* defaultModelName) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"G_OverrideModel")(modelIndex, defaultModelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntAttach(struct gentity_s* ent, const char* modelName, unsigned int tagName, int ignoreCollision) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, const char*, unsigned int, int)>(L"G_EntAttach")(ent, modelName, tagName, ignoreCollision);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntDetach(struct gentity_s* ent, const char* modelName, unsigned int tagName) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, const char*, unsigned int)>(L"G_EntDetach")(ent, modelName, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntDetachAll(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_EntDetachAll")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntLinkToInternal(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, unsigned int)>(L"G_EntLinkToInternal")(ent, parent, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntLinkTo(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, unsigned int)>(L"G_EntLinkTo")(ent, parent, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntLinkToWithOffset(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName, const float* originOffset, const float* anglesOffset) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, unsigned int, const float*, const float*)>(L"G_EntLinkToWithOffset")(ent, parent, tagName, originOffset, anglesOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntUnlink(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_EntUnlink")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntIsLinkedTo(struct gentity_s* ent, struct gentity_s* parent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"G_EntIsLinkedTo")(ent, parent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTagInfo(struct gentity_s* ent, int bParentHasDObj) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"G_UpdateTagInfo")(ent, bParentHasDObj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTags(struct gentity_s* ent, int bHasDObj) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"G_UpdateTags")(ent, bHasDObj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTagInfoOfChildren(struct gentity_s* parent, int bHasDObj) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"G_UpdateTagInfoOfChildren")(parent, bHasDObj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcTagParentAxis(struct gentity_s* ent, float* parentAxis[0x3]) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, float*[0x3])>(L"G_CalcTagParentAxis")(ent, parentAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcTagAxis(struct gentity_s* ent, int bAnglesOnly) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"G_CalcTagAxis")(ent, bAnglesOnly);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetFixedLink(struct gentity_s* ent, int eAngles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"G_SetFixedLink")(ent, eAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateViewAngleClamp(struct gclient_s* client, const float* worldAnglesCenter) -> void
{
  return Zynamic::Forward<void (struct gclient_s*, const float*)>(L"G_UpdateViewAngleClamp")(client, worldAnglesCenter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetPlayerFixedLink(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_SetPlayerFixedLink")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GeneralLink(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_GeneralLink")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SafeDObjFree(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_SafeDObjFree")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjUpdateServerTime(struct gentity_s* ent, int bNotify, function* CallbackFunc) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, function *)>(L"G_DObjUpdateServerTime")(ent, bNotify, CallbackFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjCalcPose(struct gentity_s* ent, int* partBits) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int*)>(L"G_DObjCalcPose")(ent, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjCalcBone(const struct gentity_s* ent, int boneIndex) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int)>(L"G_DObjCalcBone")(ent, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetLocalTagMatrix(const struct gentity_s* ent, unsigned int tagName) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct gentity_s*, unsigned int)>(L"G_DObjGetLocalTagMatrix")(ent, tagName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldTagMatrix(const struct gentity_s* ent, unsigned int tagName, float* tagMat[0x3]) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, unsigned int, float*[0x3])>(L"G_DObjGetWorldTagMatrix")(ent, tagName, tagMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldTagPos(const struct gentity_s* ent, unsigned int tagName, float* pos) -> int
{
  return Zynamic::Forward<int (const struct gentity_s*, unsigned int, float*)>(L"G_DObjGetWorldTagPos")(ent, tagName, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TraceBulletPathForVehTurret(struct gentity_s* ent, struct DObjTrace_s* trace, int gunnerIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct DObjTrace_s*, int)>(L"G_TraceBulletPathForVehTurret")(ent, trace, gunnerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetLocalBoneIndexMatrix(const struct gentity_s* ent, int boneIndex) -> struct DObjAnimMat*
{
  return Zynamic::Forward<struct DObjAnimMat* (const struct gentity_s*, int)>(L"G_DObjGetLocalBoneIndexMatrix")(ent, boneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldBoneIndexPos(const struct gentity_s* ent, int boneIndex, float* pos) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int, float*)>(L"G_DObjGetWorldBoneIndexPos")(ent, boneIndex, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldBoneIndexMatrix(const struct gentity_s* ent, int boneIndex, float* tagMat[0x3]) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int, float*[0x3])>(L"G_DObjGetWorldBoneIndexMatrix")(ent, boneIndex, tagMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Find(struct gentity_s* from, int fieldofs, unsigned short match) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, unsigned short)>(L"G_Find")(from, fieldofs, match);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGentity(struct gentity_s* e) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_InitGentity")(e);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PrintEntities() -> void
{
  return Zynamic::Forward<void ()>(L"G_PrintEntities")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MaySpawnEntity(struct gentity_s* e) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"G_MaySpawnEntity")(e);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Spawn() -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* ()>(L"G_Spawn")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnPlayerClone() -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* ()>(L"G_SpawnPlayerClone")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnActorClone() -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* ()>(L"G_SpawnActorClone")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearGroundEntity(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_ClearGroundEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearGroundEntityRefs(struct gentity_s* ed) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_ClearGroundEntityRefs")(ed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityRefs(struct gentity_s* ed) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeEntityRefs")(ed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntity(struct gentity_s* ed) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeEntity")(ed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityDelay(struct gentity_s* ed) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeEntityDelay")(ed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_BroadcastEntity(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_BroadcastEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityAfterEvent(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FreeEntityAfterEvent")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TempEntity(const float* origin, int event) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const float*, int)>(L"G_TempEntity")(origin, event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddPredictableEvent(struct gentity_s* ent, int event, unsigned int eventParm) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, unsigned int)>(L"G_AddPredictableEvent")(ent, event, eventParm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddEvent(struct gentity_s* ent, int event, unsigned int eventParm) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int, unsigned int)>(L"G_AddEvent")(ent, event, eventParm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlaySoundAliasAtPoint(const float* origin, unsigned int alias) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const float*, unsigned int)>(L"G_PlaySoundAliasAtPoint")(origin, alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlaySoundAlias(struct gentity_s* ent, unsigned int alias, unsigned int notifyString, unsigned int bone) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, unsigned int, unsigned int, unsigned int)>(L"G_PlaySoundAlias")(ent, alias, notifyString, bone);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AnimScriptSound(int client, struct snd_alias_list_t* aliasList) -> void
{
  return Zynamic::Forward<void (int, struct snd_alias_list_t*)>(L"G_AnimScriptSound")(client, aliasList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetOrigin(struct gentity_s* ent, const float* origin) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*)>(L"G_SetOrigin")(ent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetAngle(struct gentity_s* ent, const float* angle) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*)>(L"G_SetAngle")(ent, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetConstString(unsigned short* to, const char* from) -> void
{
  return Zynamic::Forward<void (unsigned short*, const char*)>(L"G_SetConstString")(to, from);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityTypeName(const struct gentity_s* ent) -> const char*
{
  return Zynamic::Forward<const char* (const struct gentity_s*)>(L"G_GetEntityTypeName")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_srand(unsigned int seed) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"G_srand")(seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_rand() -> int
{
  return Zynamic::Forward<int ()>(L"G_rand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_flrand(float min, float max) -> float
{
  return Zynamic::Forward<float (float, float)>(L"G_flrand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_irand(int min, int max) -> int
{
  return Zynamic::Forward<int (int, int)>(L"G_irand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_random() -> float
{
  return Zynamic::Forward<float ()>(L"G_random")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_crandom() -> float
{
  return Zynamic::Forward<float ()>(L"G_crandom")();
}

#endif // __UNIMPLEMENTED__
