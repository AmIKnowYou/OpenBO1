//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GScr_IsCollectors() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsCollectors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AllocString(const char* s) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"GScr_AllocString")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_g_scr_main() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_scr_main")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadLevel() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_LoadLevel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadPreGame() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_LoadPreGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadScriptAndLabel(enum scriptInstance_t inst, const char* filename, const char* label, int bEnforceExists) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, const char*, const char*, int)>(L"GScr_LoadScriptAndLabel")(inst, filename, label, bEnforceExists);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadGameTypeScript() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LoadGameTypeScript")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadSingleAnimScript(enum scriptInstance_t inst, struct scr_animscript_t* pAnim, const char* name) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct scr_animscript_t*, const char*)>(L"GScr_LoadSingleAnimScript")(inst, pAnim, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadDogAnimScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"GScr_LoadDogAnimScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AnimscriptAlloc(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"GScr_AnimscriptAlloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetScriptsForPathNode(enum scriptInstance_t inst, struct pathnode_t* loadNode) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct pathnode_t*)>(L"GScr_SetScriptsForPathNode")(inst, loadNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetScriptsForPathNodes() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetScriptsForPathNodes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadLevelScript() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LoadLevelScript")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadPreGameScript() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LoadPreGameScript")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PostLoadScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"GScr_PostLoadScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"GScr_LoadScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FreeScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"GScr_FreeScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetEntity(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"GetEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlayerEntity(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"GetPlayerEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetClanId(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetClanId")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetClanName(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetClanName")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CreatePrintChannel() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CreatePrintChannel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_printChannelSet() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_printChannelSet")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto print() -> void
{
  return Zynamic::Forward<void ()>(L"print")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto println() -> void
{
  return Zynamic::Forward<void ()>(L"println")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LocalizationError(int iParm, const char* pszErrorMessage) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Scr_LocalizationError")(iParm, pszErrorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ValidateLocalizedStringRef(int parmIndex, const char* token, int tokenLen) -> void
{
  return Zynamic::Forward<void (int, const char*, int)>(L"Scr_ValidateLocalizedStringRef")(parmIndex, token, tokenLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ConstructMessageString(int firstParmIndex, int lastParmIndex, const char* errorContext, char* string, unsigned int stringLimit) -> void
{
  return Zynamic::Forward<void (int, int, const char*, char*, unsigned int)>(L"Scr_ConstructMessageString")(firstParmIndex, lastParmIndex, errorContext, string, stringLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MakeGameMessage(int iClientNum, const char* pszCmd) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Scr_MakeGameMessage")(iClientNum, pszCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VerifyWeaponIndex(int weaponIndex, const char* weaponName) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Scr_VerifyWeaponIndex")(weaponIndex, weaponName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto iprintln() -> void
{
  return Zynamic::Forward<void ()>(L"iprintln")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto iprintlnbold() -> void
{
  return Zynamic::Forward<void ()>(L"iprintlnbold")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_print3d() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_print3d")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_line() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_line")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_box() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_box")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_debugstar() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_debugstar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_circle() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_circle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_sphere() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_sphere")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetArrayValues_Vector(long parameter_index, long parent_id, float* vector_array[0x3], long vector_array_size, const char* array_type_description) -> long
{
  return Zynamic::Forward<long (long, long, float*[0x3], long, const char*)>(L"Scr_GetArrayValues_Vector")(parameter_index, parent_id, vector_array, vector_array_size, array_type_description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_linelist() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_linelist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto assertCmd() -> void
{
  return Zynamic::Forward<void ()>(L"assertCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto assertexCmd() -> void
{
  return Zynamic::Forward<void ()>(L"assertexCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto assertmsgCmd() -> void
{
  return Zynamic::Forward<void ()>(L"assertmsgCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsDefined() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsDefined")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddDebugCommand() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddDebugCommand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsMP() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsMP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsFloat() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsInt() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsVec() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsVec")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsString() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsArray() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsAlive() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsAlive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvar() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvarInt() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvarInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvarFloat() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvarFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvarColorRed() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvarColorRed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvarColorGreen() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvarColorGreen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDvarColorBlue() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDvarColorBlue")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CleanDvarValue(const char* dvarValue, char* outString, int size) -> void
{
  return Zynamic::Forward<void (const char*, char*, int)>(L"CleanDvarValue")(dvarValue, outString, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDvar() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetDvar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAttachmentIndex() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetAttachmentIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntByNum() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetEntByNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetWeaponStowedModel() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetWeaponStowedModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetWeaponModel() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetWeaponModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAmmoCount(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetAmmoCount")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAnimLength() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetAnimLength")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AnimHasNotetrack() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AnimHasNotetrack")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetNotetrackTimes() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetNotetrackTimes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetBrushModelCenter() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetBrushModelCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Spawn() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Spawn")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnCollision() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnCollision")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnVehicle() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnVehicle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnPlane() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnPlane")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnTimedFX() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnTimedFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpawnTurretInternal(unsigned int classname, float* origin, const char* weaponinfoname) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (unsigned int, float*, const char*)>(L"SpawnTurretInternal")(classname, origin, weaponinfoname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnTurret() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnTurret")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnHelicopter() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SpawnHelicopter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretCarried(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretCarried")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAnimTreesLoaded() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetAnimTreesLoaded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FindAnimByName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_FindAnimByName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheTurret() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheTurret")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetMoveSpeedScale(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetMoveSpeedScale")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetMoveSpeedScale(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetMoveSpeedScale")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_attach(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_attach")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_detach(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_detach")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_detachAll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_detachAll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAttachSize(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAttachSize")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAttachModelName(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAttachModelName")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAttachTagName(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAttachTagName")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAttachIgnoreCollision(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAttachIgnoreCollision")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityStateSetPartBits(struct gentity_s* ent, const unsigned int* partBits) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const unsigned int*)>(L"G_EntityStateSetPartBits")(ent, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityStateGetPartBits(const struct gentity_s* ent, unsigned int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, unsigned int*)>(L"G_EntityStateGetPartBits")(ent, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_hidepart(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_hidepart")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_showpart(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_showpart")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_showallparts(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_showallparts")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetVisibleToPlayer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetVisibleToPlayer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetInvisibleToPlayer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetInvisibleToPlayer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetVisibleToAll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetVisibleToAll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetForceNoCull(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetForceNoCull")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetInvisibleToAll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetInvisibleToAll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetVisibleToTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetVisibleToTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_IsLinkedTo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_IsLinkedTo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_LinkTo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_LinkTo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlayerLinkToDelta(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlayerLinkToDelta")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_Unlink(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_Unlink")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_EnableLinkTo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_EnableLinkTo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetOrigin(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetOrigin")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAngles(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAngles")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetMins(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetMins")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetMaxs(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetMaxs")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAbsMins(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAbsMins")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetAbsMaxs(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetAbsMaxs")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetPointInBounds(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetPointInBounds")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetEye(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetEye")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetEyeApprox(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetEyeApprox")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_UseBy(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_UseBy")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_IsTouching(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_IsTouching")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_IsTouchingSwept(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_IsTouchingSwept")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SoundExists() -> void
{
  return Zynamic::Forward<void ()>(L"ScrCmd_SoundExists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StartScriptPlayBattleChatterOnEnt(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"StartScriptPlayBattleChatterOnEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlaySound(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlaySound")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlaySoundOnTag(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlaySoundOnTag")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlaySoundToTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlaySoundToTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlayBattleChatterToTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlayBattleChatterToTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlaySoundToPlayer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlaySoundToPlayer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlaySoundAtPosition() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PlaySoundAtPosition")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_PlayLoopSound(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_PlayLoopSound")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_StopLoopSound(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_StopLoopSound")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_Delete(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_Delete")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetModelInternal(struct gentity_s* ent, const char* modelName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*)>(L"SetModelInternal")(ent, modelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetModel(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetModel")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetEnemyModel(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetEnemyModel")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetNormalHealth(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetNormalHealth")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetNormalHealth(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetNormalHealth")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_DoDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_DoDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetVelocity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetVelocity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FakeFire(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_FakeFire")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetCameraSpikeActive(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetCameraSpikeActive")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_MakeUsable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_MakeUsable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_MakeUnusable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_MakeUnusable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_Show(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_Show")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_Hide(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_Hide")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_Ghost(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_Ghost")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_ShowToPlayer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_ShowToPlayer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SetContents(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SetContents")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartFiring(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartFiring")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopFiring(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopFiring")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ShootTurret(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ShootTurret")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopShootTurret(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopShootTurret")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetMode(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetMode")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTurretOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetTurretOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTargetEntity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTargetEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetAiSpread(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetAiSpread")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPlayerSpread(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetPlayerSpread")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetConvergenceTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetConvergenceTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetSuppressionTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetSuppressionTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClearTargetEntity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ClearTargetEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretIgnoreGoals(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretIgnoreGoals")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MakeTurretUsable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_MakeTurretUsable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MakeTurretUnusable(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_MakeTurretUnusable")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretAccuracy(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretAccuracy")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTurretTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetTurretTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisconnectPaths(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisconnectPaths")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ConnectPaths(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ConnectPaths")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetStance(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetStance")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetStableMissile(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"Scr_SetStableMissile")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetCursorHint(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetCursorHint")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetHintStringIndex(int* piIndex, const char* pszString) -> int
{
  return Zynamic::Forward<int (int*, const char*)>(L"G_GetHintStringIndex")(piIndex, pszString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetHintString(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetHintString")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetHintStringForPerk(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetHintStringForPerk")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetHintLowPriority(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetHintLowPriority")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetReviveHintString(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetReviveHintString")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_UseTriggerRequireLookAt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_UseTriggerRequireLookAt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsMartyrdomGrenade(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsMartyrdomGrenade")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetEntityNumber(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetEntityNumber")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EnableGrenadeTouchDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_EnableGrenadeTouchDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisableGrenadeTouchDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisableGrenadeTouchDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MissileSetTarget(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_MissileSetTarget")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EnableAimAssist(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_EnableAimAssist")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisableAimAssist(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisableAimAssist")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitObjectives() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitObjectives")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ObjectiveStateIndexFromString(enum objectiveState_t* piStateIndex, unsigned int stateString) -> int
{
  return Zynamic::Forward<int (enum objectiveState_t*, unsigned int)>(L"ObjectiveStateIndexFromString")(piStateIndex, stateString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearObjective_OnEntity(struct objective_t* obj) -> void
{
  return Zynamic::Forward<void (struct objective_t*)>(L"ClearObjective_OnEntity")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearObjective(struct objective_t* obj) -> void
{
  return Zynamic::Forward<void (struct objective_t*)>(L"ClearObjective")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetObjectiveIcon(struct objective_t* obj, int paramNum) -> void
{
  return Zynamic::Forward<void (struct objective_t*, int)>(L"SetObjectiveIcon")(obj, paramNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_Add() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_Add")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_Delete() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_Delete")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_State() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_State")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_Icon() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_Icon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_Position() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_Position")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_OnEntity() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_OnEntity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_Current() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_Current")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetVisibleToPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetVisibleToPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetInvisibleToPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetInvisibleToPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetVisibleToAll() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetVisibleToAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetInvisibleToAll() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetInvisibleToAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetSize() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetSize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Objective_SetColor() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Objective_SetColor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Objective_Team() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Objective_Team")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNormalised2DMapPosition(float* inPos, float* outPos) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"GetNormalised2DMapPosition")(inPos, outPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetArtilleryIconLocation() -> void
{
  return Zynamic::Forward<void ()>(L"SetArtilleryIconLocation")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LogPrint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LogPrint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WorldEntNumber() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WorldEntNumber")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Obituary() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Obituary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ReviveObituary() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ReviveObituary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LerpFloat() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LerpFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LerpVector() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LerpVector")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddDemoBookmark() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddDemoBookmark")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateSpawnPoints() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_UpdateSpawnPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Scr_BoundsWouldTelefrag(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"_Scr_BoundsWouldTelefrag")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_positionWouldTelefrag() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_positionWouldTelefrag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_BoundsWouldTelefrag() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_BoundsWouldTelefrag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ReadTeamForSpawnPoints(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"GScr_ReadTeamForSpawnPoints")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RecordUsedSpawnPoint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_RecordUsedSpawnPoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_getStartTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_getStartTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheMenu() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheMenu")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetScriptMenuIndex(const char* pszMenu) -> int
{
  return Zynamic::Forward<int (const char*)>(L"GScr_GetScriptMenuIndex")(pszMenu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheStatusIcon() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheStatusIcon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetStatusIconIndex(const char* pszIcon) -> int
{
  return Zynamic::Forward<int (const char*)>(L"GScr_GetStatusIconIndex")(pszIcon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheHeadIcon() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheHeadIcon")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetHeadIconIndex(const char* pszIcon) -> int
{
  return Zynamic::Forward<int (const char*)>(L"GScr_GetHeadIconIndex")(pszIcon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponClipSize() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponClipSize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponIsSemiAuto() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponIsSemiAuto")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponIsBoltAction() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponIsBoltAction")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponType() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponClass() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponClass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponIsMountable() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponIsMountable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponInventoryType() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponInventoryType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponStartAmmo() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponStartAmmo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponMaxAmmo() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponMaxAmmo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponAltWeaponName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponAltWeaponName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWatcherWeapons() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWatcherWeapons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetRetrievableWeapons() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetRetrievableWeapons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponIndexFromName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponIndexFromName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponFireSound() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponFireSound")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponFireSoundPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponFireSoundPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponPickupSound() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponPickupSound")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponPickupSoundPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponPickupSoundPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsTurretFiring() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsTurretFiring")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDefaultDropPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetDefaultDropPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetScanningPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetScanningPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponFireTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponFireTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_WeaponReloadTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_WeaponReloadTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponClipOnly() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponClipOnly")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponDetonationTimed() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponDetonationTimed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PrecacheLocationSelector() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PrecacheLocationSelector")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLocSelIndex(const char* mtlName) -> int
{
  return Zynamic::Forward<int (const char*)>(L"GScr_GetLocSelIndex")(mtlName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BulletTrace() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_BulletTrace")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BulletTracePassed() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_BulletTracePassed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SightTracePassed() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SightTracePassed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PhysicsTrace() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PhysicsTrace")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerPhysicsTrace() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PlayerPhysicsTrace")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RandomInt() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_RandomInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RandomFloat() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_RandomFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RandomIntRange() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_RandomIntRange")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RandomFloatRange() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_RandomFloatRange")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_log() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_log")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_sin() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_sin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_cos() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_cos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_tan() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_tan")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_asin() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_asin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_acos() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_acos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_atan() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_atan")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_abs() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_abs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_min() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_min")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_max() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_max")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_floor() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_floor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ceil() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ceil")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_sqrt() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_sqrt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CastInt() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CastInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CastFloat() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CastFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_VectorFromLineToPoint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_VectorFromLineToPoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PointOnSegmentNearestToPoint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PointOnSegmentNearestToPoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Distance() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Distance")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Distance2D() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Distance2D")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DistanceSquared() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_DistanceSquared")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Length() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Length")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LengthSquared() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_LengthSquared")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Closer() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_Closer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VectorDot() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VectorDot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VectorCross() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VectorCross")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VectorNormalize() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VectorNormalize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VectorToAngles() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VectorToAngles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VectorLerp() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VectorLerp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AnglesToUp() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_AnglesToUp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AnglesToRight() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_AnglesToRight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AnglesToForward() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_AnglesToForward")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CombineAngles() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_CombineAngles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClampAngle180() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ClampAngle180")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AbsAngleClamp180() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_AbsAngleClamp180")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RotatePoint() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_RotatePoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsSubStr() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_IsSubStr")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSubStr() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetSubStr")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ToLower() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ToLower")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_StrTok() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_StrTok")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NeedsRevive(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_NeedsRevive")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsInSecondChance(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsInSecondChance")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetBurn(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetBurn")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetElectrified(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetElectrified")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartTanning(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartTanning")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopBurning(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopBurning")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SpawnNapalmGroundFlame(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SpawnNapalmGroundFlame")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RestoreDefaultDropPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_RestoreDefaultDropPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_clearCenterPopups(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_clearCenterPopups")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_clearPopups(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_clearPopups")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayGameModeMessage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayGameModeMessage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayTeamMessage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayTeamMessage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayMedal(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayMedal")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayContract(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayContract")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayChallengeComplete(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayChallengeComplete")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayEndGameMilestoneComplete(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayEndGameMilestoneComplete")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayEndGame(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayEndGame")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClearEndGameComplete(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ClearEndGameComplete")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayKillstreak(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayKillstreak")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayRankUp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayRankUp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayWagerPopup(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayWagerPopup")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisplayHudAnim(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DisplayHudAnim")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsFiringTurret(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsFiringTurret")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsTurretLockedOn(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsTurretLockedOn")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ShootUp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ShootUp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWaterHeight() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWaterHeight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DepthInWater(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DepthInWater")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DepthOfPlayerInWater(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DepthOfPlayerInWater")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SoundFade() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SoundFade")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ErrorOnDefaultAsset(enum XAssetType type, const char* assetName) -> void
{
  return Zynamic::Forward<void (enum XAssetType, const char*)>(L"Scr_ErrorOnDefaultAsset")(type, assetName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheModel() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PrecacheModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheShellShock() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PrecacheShellShock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheItem() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PrecacheItem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheShader() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PrecacheShader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheString() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PrecacheString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GrenadeExplosionEffect() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GrenadeExplosionEffect")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RadiusDamageInternal(struct gentity_s* inflictor) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"GScr_RadiusDamageInternal")(inflictor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RadiusDamage() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_RadiusDamage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EntityRadiusDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_EntityRadiusDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GlassRadiusDamage() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GlassRadiusDamage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Detonate(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_Detonate")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPlayerIgnoreRadiusDamage() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetPlayerIgnoreRadiusDamage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DamageConeTraceInternal(struct scr_entref_t entref, int contentMask) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, int)>(L"GScr_DamageConeTraceInternal")(entref, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DamageConeTrace(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DamageConeTrace")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SightConeTrace(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SightConeTrace")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PlayerSightTrace(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_PlayerSightTrace")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_HeliTurretSightTrace(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_HeliTurretSightTrace")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_HeliTurretDogTrace(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_HeliTurretDogTrace")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_VisionSetLerpRatio(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_VisionSetLerpRatio")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DirectionalHitIndicator(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DirectionalHitIndicator")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DoCowardsWayAnims(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_DoCowardsWayAnims")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartPoisoning(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartPoisoning")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopPoisoning(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopPoisoning")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartBinocs(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartBinocs")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopBinocs(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopBinocs")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsFlared(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsFlared")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsPoisoned(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsPoisoned")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetMoveDelta() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetMoveDelta")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAngleDelta() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetAngleDelta")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetNorthYaw() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetNorthYaw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetFxAngles(int givenAxisCount, float* axis[0x3], float* angles) -> void
{
  return Zynamic::Forward<void (int, float*[0x3], float*)>(L"Scr_SetFxAngles")(givenAxisCount, axis, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadFX() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_LoadFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FxParamError(int paramIndex, const char* errorString, int fxId) -> void
{
  return Zynamic::Forward<void (int, const char*, int)>(L"Scr_FxParamError")(paramIndex, errorString, fxId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayFX() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PlayFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayFXOnTag() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PlayFXOnTag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayLoopedFX() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PlayLoopedFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SpawnFX() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SpawnFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TriggerFX() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_TriggerFX")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SpawnActor(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SpawnActor")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CreateDynEntAndLaunch() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CreateDynEntAndLaunch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PhysicsExplosionSphere() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PhysicsExplosionSphere")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CreateStreamerHint() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_CreateStreamerHint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PhysicsRadiusJolt() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PhysicsRadiusJolt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PhysicsExplosionCylinder() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_PhysicsExplosionCylinder")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetFog(const char* cmd, float start, float density, float heightDensity, float baseHeight, float r, float g, float b, float time, float colorScale, float sunColR, float sunColG, float sunColB, float sunDirX, float sunDirY, float sunDirZ, float sunStartAng, float sunEndAng, float maxFogOpacity) -> void
{
  return Zynamic::Forward<void (const char*, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)>(L"Scr_SetFog")(cmd, start, density, heightDensity, baseHeight, r, g, b, time, colorScale, sunColR, sunColG, sunColB, sunDirX, sunDirY, sunDirZ, sunStartAng, sunEndAng, maxFogOpacity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetExponentialFog() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SetExponentialFog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetVolumetricFog() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SetVolumetricFog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetCullDist() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_SetCullDist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VisionSetNaked() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VisionSetNaked")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VisionSetNight() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_VisionSetNight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TableLookupRowNum() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_TableLookupRowNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TableLookupColumnForRow() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_TableLookupColumnForRow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TableLookup() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_TableLookup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TableLookupIString() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_TableLookupIString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetReflectionLocs() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetReflectionLocs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetReflectionOrigin() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetReflectionOrigin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsPlayerNumber() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsPlayerNumber")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetWinningPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetWinningPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetWinningTeam() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetWinningTeam")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Announcement() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Announcement")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientAnnouncement() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClientAnnouncement")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTeamScore() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetTeamScore")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTeamScore() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetTeamScore")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetClientNameMode() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetClientNameMode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_UpdateClientNames() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_UpdateClientNames")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTeamPlayersAlive() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetTeamPlayersAlive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDroppedWeapons() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDroppedWeapons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetNumParts() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetNumParts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetPartName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetPartName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Earthquake() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Earthquake")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ShellShock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ShellShock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopShellShock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopShellShock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_UpdateTagInternal(struct gentity_s* ent, unsigned int tagName, struct cached_tag_mat_t* cachedTag, int showScriptError) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, unsigned int, struct cached_tag_mat_t*, int)>(L"GScr_UpdateTagInternal")(ent, tagName, cachedTag, showScriptError);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTagOrigin(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetTagOrigin")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTagAngles(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetTagAngles")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetEntnum(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetEntnum")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDepthOfField(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetDepthOfField")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetViewModelDepthOfField(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetViewModelDepthOfField")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ViewKick(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ViewKick")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LocalToWorldCoords(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_LocalToWorldCoords")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetRightArc(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetRightArc")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLeftArc(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLeftArc")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTopArc(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTopArc")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetBottomArc(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetBottomArc")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PlaceSpawnPoint(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_PlaceSpawnPoint")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_SendFaceEvent(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_SendFaceEvent")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_TestSpawnPoint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_TestSpawnPoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MapRestart() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_MapRestart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LoadMap() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_LoadMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ExitLevel() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ExitLevel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_KillServer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_KillServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddTestClient() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddTestClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MakeDvarServerInfo() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_MakeDvarServerInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetBombTimer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetBombTimer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetMatchTalkFlag() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetMatchTalkFlag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetMatchFlag() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetMatchFlag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AllClientsPrint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AllClientsPrint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MapExists() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_MapExists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsValidGameType() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsValidGameType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetVoteString() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetVoteString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetVoteTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetVoteTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetVoteYesCount() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetVoteYesCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetVoteNoCount() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetVoteNoCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_KickPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_KickPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_BanPlayer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_BanPlayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientPrint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClientPrint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_OpenFile() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_OpenFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CloseFile() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CloseFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FPrint_internal(bool commaBetweenFields) -> void
{
  return Zynamic::Forward<void (bool)>(L"Scr_FPrint_internal")(commaBetweenFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FPrintln() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_FPrintln")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FPrintFields() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_FPrintFields")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FReadLn() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_FReadLn")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_FGetArg() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_FGetArg")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ExecDevgui() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ExecDevgui")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsSplitscreen() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_IsSplitscreen")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsGlobalStatsServer() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_IsGlobalStatsServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPlayerStatsForMatchRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetPlayerStatsForMatchRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPlayerFinalForMatchRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetPlayerFinalForMatchRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetBeginForMatchRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetBeginForMatchRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SendLeaderboards(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SendLeaderboards")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsItemPurchasedForClientNum(int clientNum, int itemIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"GScr_IsItemPurchasedForClientNum")(clientNum, itemIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsItemLockedForChallenge(struct scr_entref_t entref, bool purchaseRequired) -> bool
{
  return Zynamic::Forward<bool (struct scr_entref_t, bool)>(L"GScr_IsItemLockedForChallenge")(entref, purchaseRequired);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsItemPurchased(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsItemPurchased")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsItemLocked(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsItemLocked")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetRefFromItemIndex() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetRefFromItemIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetItemGroupFromItemIndex() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetItemGroupFromItemIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetBaseWeaponItemIndex() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetBaseWeaponItemIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetGameTypeEnumFromName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetGameTypeEnumFromName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWagerGametypeList() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWagerGametypeList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLoadoutItemFromProfile(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLoadoutItemFromProfile")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDStat(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetDStat")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetMaxActiveContracts() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetMaxActiveContracts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetIndexForActiveContract(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetIndexForActiveContract")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractStatType() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractStatType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractStatName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractStatName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractRewardXP() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractRewardXP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractRewardCP() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractRewardCP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractRequirements() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractRequirements")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractName() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractRequiredCount() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractRequiredCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetContractResetConditions() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetContractResetConditions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetActiveContractProgress(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetActiveContractProgress")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IncrementActiveContractProgress(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IncrementActiveContractProgress")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ResetActiveContractProgress(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ResetActiveContractProgress")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IncrementActiveContractTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IncrementActiveContractTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsActiveContractComplete(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsActiveContractComplete")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_HasActiveContractExpired(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_HasActiveContractExpired")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetActiveContractTimePassed(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetActiveContractTimePassed")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetFogSettings() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetFogSettings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EnableOccluder() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_EnableOccluder")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gscr_GetCustomClassLoadoutItem() -> void
{
  return Zynamic::Forward<void ()>(L"Gscr_GetCustomClassLoadoutItem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gscr_GetCustomClassLoadoutModifier() -> void
{
  return Zynamic::Forward<void ()>(L"Gscr_GetCustomClassLoadoutModifier")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDStat(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetDStat")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_UploadStats() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_UploadStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetItemAttachment() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetItemAttachment")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetDefaultClassSlot() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetDefaultClassSlot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTeamForTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTeamForTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPerkForTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetPerkForTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetIgnoreEntForTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetIgnoreEntForTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientClaimTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ClientClaimTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientReleaseTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ClientReleaseTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ReleaseClaimedTrigger(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ReleaseClaimedTrigger")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetMapCenter() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetMapCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDemoIntermissionPoint() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetDemoIntermissionPoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartDemoRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_StartDemoRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopDemoRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_StopDemoRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsDemoRecording() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsDemoRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isDemoEnabled() -> void
{
  return Zynamic::Forward<void ()>(L"isDemoEnabled")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_isTestClient(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_isTestClient")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_isDemoClient(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_isDemoClient")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetGameEndTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetGameEndTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTimeScale() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetTimeScale")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetMiniMap() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetMiniMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IncrementEscrow() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IncrementEscrow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTeamSpyplane() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetTeamSpyplane")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTeamSpyplane() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetTeamSpyplane")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTeamSatellite() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetTeamSatellite")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTeamSatellite() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetTeamSatellite")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetArrayKeys() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetArrayKeys")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Launch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_Launch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MagicBullet() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_MagicBullet")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_LaunchBomb(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_LaunchBomb")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_MakeGrenadeDud(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_MakeGrenadeDud")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsOnLadder(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsOnLadder")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsMantling(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsMantling")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartDoorBreach(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartDoorBreach")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StopDoorBreach(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StopDoorBreach")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetupLightEntity(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"GScr_SetupLightEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightColor(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightColor")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLightColor(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLightColor")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightIntensity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightIntensity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLightIntensity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLightIntensity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightRadius(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightRadius")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLightRadius(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLightRadius")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightFovInner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightFovInner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightFovOuter(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightFovOuter")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLightFovRange(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLightFovRange")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetLightExponent(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetLightExponent")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetLightExponent(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetLightExponent")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_StartRagdoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_StartRagdoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsRagdoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsRagdoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RagdollLaunch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_RagdollLaunch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_VehicleLaunch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_VehicleLaunch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GiveAchievement(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GiveAchievement")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretOwner(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretOwner")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTurretType(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTurretType")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetCorpseAnim(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetCorpseAnim")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_ItemWeaponSetAmmo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_ItemWeaponSetAmmo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddStruct() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_AddStruct")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ResetTimeout() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ResetTimeout")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientSysRegister() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClientSysRegister")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClientSysSetState() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClientSysSetState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsAI() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsAI")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetAITriggerFlags() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetAITriggerFlags")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsVehicle() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsVehicle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetVehicleTriggerFlags() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetVehicleTriggerFlags")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCmd_GetShootAtPosition(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScrCmd_GetShootAtPosition")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_DisableDestructiblePieces() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_DisableDestructiblePieces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EnableAllDestructiblePieces() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_EnableAllDestructiblePieces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClearSpawnPoints() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClearSpawnPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetSpawnPointRandomVariation() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetSpawnPointRandomVariation")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClearSpawnPointsBaseWeight() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ClearSpawnPointsBaseWeight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetSpawnPointsBaseWeight() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetSpawnPointsBaseWeight")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddSpawnPoints() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddSpawnPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetSortedSpawnPoints() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetSortedSpawnPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsSpawnPointVisible() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsSpawnPointVisible")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InfluencerTypeValidation(int type, struct gentity_s* ent, const char* function_name) -> void
{
  return Zynamic::Forward<void (int, struct gentity_s*, const char*)>(L"InfluencerTypeValidation")(type, ent, function_name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PredictGrenade(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_PredictGrenade")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddSphereInfluencer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddSphereInfluencer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddCylinderInfluencer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddCylinderInfluencer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_RemoveInfluencer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_RemoveInfluencer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_EnableInfluencer() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_EnableInfluencer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetInfluencerTeamMask() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetInfluencerTeamMask")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDebugSideSwitch() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetDebugSideSwitch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CollisionTestPointsInSphere() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CollisionTestPointsInSphere")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CollisionTestPointsInCylinder() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CollisionTestPointsInCylinder")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CollisionTestPointsInPill() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CollisionTestPointsInPill")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CollisionTestPointsInCone() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CollisionTestPointsInCone")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_CollisionTestPointsInBox() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_CollisionTestPointsInBox")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto sort_scored_spawn_point_vectors_ascending(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"sort_scored_spawn_point_vectors_ascending")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_QSortScoredSpawnPointArrayAscending() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_QSortScoredSpawnPointArrayAscending")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Matrix4x4TransformPoints() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Matrix4x4TransformPoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetNumGVRules() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetNumGVRules")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetGVRule() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetGVRule")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponMinDamageRange() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponMinDamageRange")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponMaxDamageRange() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponMaxDamageRange")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponMinDamage() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponMinDamage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponMaxDamage() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponMaxDamage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponFuseTime() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponFuseTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetWeaponProjExplosionSound() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetWeaponProjExplosionSound")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponSpecificUse() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponSpecificUse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponEquipment() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponEquipment")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponPrimary() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsWeaponScopeOverlay() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsWeaponScopeOverlay")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PCServerUpdatePlaylist() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PCServerUpdatePlaylist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetPregameTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetPregameTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetPregameClass(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_GetPregameClass")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPregameTeam(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetPregameTeam")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetPregameClass(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetPregameClass")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PixBeginEvent() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PixBeginEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PixMarker() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PixMarker")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IncrementCounter() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IncrementCounter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetCounterTotal() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_GetCounterTotal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetScoreboardColumns() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_SetScoreboardColumns")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetNemesisXuid(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetNemesisXuid")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsPregameEnabled() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsPregameEnabled")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ResetPregameData() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_ResetPregameData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsPregameGameStarted() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_IsPregameGameStarted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_PregameStartGame() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_PregameStartGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunction(const char** pName, int* type) -> function*
{
  return Zynamic::Forward<function * (const char**, int*)>(L"Scr_GetFunction")(pName, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetClientFlag(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetClientFlag")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_ClearClientFlag(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_ClearClientFlag")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsMissileInsideHeightLock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsMissileInsideHeightLock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_IsOnGround(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_IsOnGround")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_HandleAnimError(int error) -> void
{
  return Zynamic::Forward<void (int)>(L"GScr_HandleAnimError")(error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetOptionalFloat(int iParamIndex, float fDefault) -> float
{
  return Zynamic::Forward<float (int, float)>(L"GScr_GetOptionalFloat")(iParamIndex, fDefault);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetEntAnimTree(struct gentity_s* ent) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct gentity_s*)>(L"GScr_GetEntAnimTree")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FlagAnimForUpdate(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_FlagAnimForUpdate")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetAnimInternal(struct scr_entref_t entref, unsigned int flags) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, unsigned int)>(L"GScr_SetAnimInternal")(entref, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetAnim(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_SetAnim")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetAnimTree(struct gentity_s* ent, struct scr_animtree_t* animtree) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct scr_animtree_t*)>(L"G_SetAnimTree")(ent, animtree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_UseAnimTree(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"GScr_UseAnimTree")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BuiltIn_GetMethod(const char** pName, int* type) -> function*
{
  return Zynamic::Forward<function * (const char**, int*)>(L"BuiltIn_GetMethod")(pName, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetMethod(const char** pName, int* type) -> function*
{
  return Zynamic::Forward<function * (const char**, int*)>(L"Scr_GetMethod")(pName, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetOrigin(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetOrigin")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetAngles(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetAngles")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetExposureIndex(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetExposureIndex")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetExposureLerpToLighter(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetExposureLerpToLighter")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetExposureLerpToDarker(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetExposureLerpToDarker")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetHealth(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_SetHealth")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddVector(const float* vVec) -> void
{
  return Zynamic::Forward<void (const float*)>(L"GScr_AddVector")(vVec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddEntity(struct gentity_s* pEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"GScr_AddEntity")(pEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ParseGameTypeList_LoadObj() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ParseGameTypeList_LoadObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ParseGameTypeList_FastFile() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ParseGameTypeList_FastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ParseGameTypeList() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_ParseGameTypeList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetGameTypeNameForScript(const char* pszGameTypeScript) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Scr_GetGameTypeNameForScript")(pszGameTypeScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsValidGameType(const char* pszGameType) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Scr_IsValidGameType")(pszGameType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadGameType() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_LoadGameType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_StartupGameType() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_StartupGameType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerConnect(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_PlayerConnect")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerDisconnect(struct gentity_s* self) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_PlayerDisconnect")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerDamage(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int dflags, int meansOfDeath, int iWeapon, const float* vPoint, const float* vDir, const enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, int, const float*, const float*, const enum hitLocation_t, int)>(L"Scr_PlayerDamage")(self, inflictor, attacker, damage, dflags, meansOfDeath, iWeapon, vPoint, vDir, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerKilled(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int meansOfDeath, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int psTimeOffset, int deathAnimDuration) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int, int)>(L"Scr_PlayerKilled")(self, inflictor, attacker, damage, meansOfDeath, iWeapon, vDir, hitLoc, psTimeOffset, deathAnimDuration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ActorDamage(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int dflags, int meansOfDeath, int iWeapon, const float* vPoint, const float* vDir, const enum hitLocation_t hitLoc, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, int, const float*, const float*, const enum hitLocation_t, int)>(L"Scr_ActorDamage")(self, inflictor, attacker, damage, dflags, meansOfDeath, iWeapon, vPoint, vDir, hitLoc, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ActorKilled(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int meansOfDeath, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int)>(L"Scr_ActorKilled")(self, inflictor, attacker, damage, meansOfDeath, iWeapon, vDir, hitLoc, psTimeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VehicleRadiusDamage(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, float fInnerDamage, float fOuterDamage, int dflags, int meansOfDeath, int iWeapon, const float* vPoint, const float fRadius, const float coneAngleCos, const float* coneDirection, int timeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, float, float, int, int, int, const float*, const float, const float, const float*, int)>(L"Scr_VehicleRadiusDamage")(self, inflictor, attacker, damage, fInnerDamage, fOuterDamage, dflags, meansOfDeath, iWeapon, vPoint, fRadius, coneAngleCos, coneDirection, timeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VehicleDamage(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int dflags, int meansOfDeath, int iWeapon, const float* vPoint, const float* vDir, const enum hitLocation_t hitLoc, int timeOffset, int damageFromUnderneath, unsigned int modelIndex, unsigned int partName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, int, const float*, const float*, const enum hitLocation_t, int, int, unsigned int, unsigned int)>(L"Scr_VehicleDamage")(self, inflictor, attacker, damage, dflags, meansOfDeath, iWeapon, vPoint, vDir, hitLoc, timeOffset, damageFromUnderneath, modelIndex, partName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerLastStand(struct gentity_s* self, struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int meansOfDeath, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, int, int, int, const float*, const enum hitLocation_t, int)>(L"Scr_PlayerLastStand")(self, inflictor, attacker, damage, meansOfDeath, iWeapon, vDir, hitLoc, psTimeOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VoteCalled(struct gentity_s* self, char* command, char* param1, char* param2) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, char*, char*, char*)>(L"Scr_VoteCalled")(self, command, param1, param2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PlayerVote(struct gentity_s* self, char* option) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, char*)>(L"Scr_PlayerVote")(self, option);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_Gdt_Update(const char* asset, const char* keyValue) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"GScr_Gdt_Update")(asset, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GlassSmash(const float* pos, const float* dir) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"Scr_GlassSmash")(pos, dir);
}

#endif // __UNIMPLEMENTED__
