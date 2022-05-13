//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_defineStrings''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_defineStrings''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_bg_animation_mp() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_bg_animation_mp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_StringHashValue(const char* fname) -> long
{
  return Zynamic::Forward<long (const char*)>(L"BG_StringHashValue")(fname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimParseError(const char* msg, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"BG_AnimParseError")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimationIndexForString(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"BG_AnimationIndexForString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IndexForString(const char* token, struct animStringItem_t* strings, int allowFail) -> int
{
  return Zynamic::Forward<int (const char*, struct animStringItem_t*, int)>(L"BG_IndexForString")(token, strings, allowFail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_StringForIndex(const int index, struct animStringItem_t* strings, int allowFail) -> const char*
{
  return Zynamic::Forward<const char* (const int, struct animStringItem_t*, int)>(L"BG_StringForIndex")(index, strings, allowFail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CopyStringIntoBuffer(const char* string, char* buffer, unsigned int bufSize, unsigned int* offset) -> char*
{
  return Zynamic::Forward<char* (const char*, char*, unsigned int, unsigned int*)>(L"BG_CopyStringIntoBuffer")(string, buffer, bufSize, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitWeaponString(int index, const char* name) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"BG_InitWeaponString")(index, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitWeaponStrings() -> void
{
  return Zynamic::Forward<void ()>(L"BG_InitWeaponStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddVehicleName(const char* vehName, int vehType, int drivers, int gunners, int passengers) -> void
{
  return Zynamic::Forward<void (const char*, int, int, int, int)>(L"BG_AddVehicleName")(vehName, vehType, drivers, gunners, passengers);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimGetConditionValue(struct animScriptItem_t* scriptItem, int conditionIndex) -> int
{
  return Zynamic::Forward<int (struct animScriptItem_t*, int)>(L"BG_AnimGetConditionValue")(scriptItem, conditionIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitVehicles() -> void
{
  return Zynamic::Forward<void ()>(L"BG_InitVehicles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetVehicleAnimSetIndex(unsigned short animSetStr) -> int
{
  return Zynamic::Forward<int (unsigned short)>(L"BG_GetVehicleAnimSetIndex")(animSetStr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadAnimForAnimIndex(int iAnimIndex) -> struct loadAnim_t*
{
  return Zynamic::Forward<struct loadAnim_t* (int)>(L"BG_LoadAnimForAnimIndex")(iAnimIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetupAnimNoteTypes(struct animScriptData_t* scriptData) -> void
{
  return Zynamic::Forward<void (struct animScriptData_t*)>(L"BG_SetupAnimNoteTypes")(scriptData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FinalizePlayerAnims(const char* levelName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"BG_FinalizePlayerAnims")(levelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetAnimConditionFlags(int condIndex, unsigned int result) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"BG_SetAnimConditionFlags")(condIndex, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ParseConditionBits(const char** text_pp, struct animStringItem_t* stringTable, int condIndex, unsigned int& result) -> void
{
  return Zynamic::Forward<void (const char**, struct animStringItem_t*, int, unsigned int&)>(L"BG_ParseConditionBits")(text_pp, stringTable, condIndex, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ParseConditions(const char** text_pp, struct animScriptItem_t* scriptItem) -> int
{
  return Zynamic::Forward<int (const char**, struct animScriptItem_t*)>(L"BG_ParseConditions")(text_pp, scriptItem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ParseCommands(const char** input, struct animScriptItem_t* scriptItem, struct animScriptData_t* scriptData) -> void
{
  return Zynamic::Forward<void (const char**, struct animScriptItem_t*, struct animScriptData_t*)>(L"BG_ParseCommands")(input, scriptItem, scriptData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimParseAnimScript(struct animScriptData_t* scriptData, struct loadAnim_t* pLoadAnims, unsigned int* piNumAnims, const char* levelName) -> void
{
  return Zynamic::Forward<void (struct animScriptData_t*, struct loadAnim_t*, unsigned int*, const char*)>(L"BG_AnimParseAnimScript")(scriptData, pLoadAnims, piNumAnims, levelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponTypeName(int type) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"GetWeaponTypeName")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetValueForBitfield(unsigned int bitfield) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"GetValueForBitfield")(bitfield);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetConditionString(int condition, int value) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"BG_GetConditionString")(condition, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EvaluateConditions(struct clientInfo_t* ci, struct animScriptItem_t* scriptItem) -> int
{
  return Zynamic::Forward<int (struct clientInfo_t*, struct animScriptItem_t*)>(L"BG_EvaluateConditions")(ci, scriptItem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBodyPart(int bodypart) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"GetBodyPart")(bodypart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FirstValidItem(int client, struct animScript_t* script) -> struct animScriptItem_t*
{
  return Zynamic::Forward<struct animScriptItem_t* (int, struct animScript_t*)>(L"BG_FirstValidItem")(client, script);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentStance(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentStance")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentMoveStatus(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentMoveStatus")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentDirection(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentDirection")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentDmgDirection(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentDmgDirection")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentDmgType(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentDmgType")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentSlope(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentSlope")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentWeaponName(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentWeaponName")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentWeaponClass(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentWeaponClass")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetCurrentPlayerAnimType(struct playerState_s* ps) -> const char*
{
  return Zynamic::Forward<const char* (struct playerState_s*)>(L"BG_GetCurrentPlayerAnimType")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayAnim(struct playerState_s* ps, int animNum, enum animBodyPart_t bodyPart, int forceDuration, int setTimer, int isContinue, int force) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, int, enum animBodyPart_t, int, int, int, int)>(L"BG_PlayAnim")(ps, animNum, bodyPart, forceDuration, setTimer, isContinue, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ExecuteCommand(struct playerState_s* ps, struct animScriptCommand_t* scriptCommand, int setTimer, int isContinue, int force) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, struct animScriptCommand_t*, int, int, int)>(L"BG_ExecuteCommand")(ps, scriptCommand, setTimer, isContinue, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimScriptAnimation(struct pmove_t* pm, enum aistateEnum_t state, enum scriptAnimMoveTypes_t movetype, int force) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, enum aistateEnum_t, enum scriptAnimMoveTypes_t, int)>(L"BG_AnimScriptAnimation")(pm, state, movetype, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimScriptEventGetCommand(struct playerState_s* ps, enum scriptAnimEventTypes_t event) -> struct animScriptCommand_t*
{
  return Zynamic::Forward<struct animScriptCommand_t* (struct playerState_s*, enum scriptAnimEventTypes_t)>(L"BG_AnimScriptEventGetCommand")(ps, event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimScriptEvent(struct pmove_t* pm, enum scriptAnimEventTypes_t event, int isContinue, int force) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, enum scriptAnimEventTypes_t, int, int)>(L"BG_AnimScriptEvent")(pm, event, isContinue, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetConditionValue(int client, int condition, unsigned __int64 value) -> void
{
  return Zynamic::Forward<void (int, int, unsigned __int64)>(L"BG_SetConditionValue")(client, condition, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetConditionBit(int client, int condition, int value) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"BG_SetConditionBit")(client, condition, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetConditionValue(const struct clientInfo_t* ci, const int condition) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, const int)>(L"BG_GetConditionValue")(ci, condition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetConditionBit(const struct clientInfo_t* ci, const int condition) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, const int)>(L"BG_GetConditionBit")(ci, condition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAnimMoveType(const struct clientInfo_t* ci) -> enum scriptAnimMoveTypes_t
{
  return Zynamic::Forward<enum scriptAnimMoveTypes_t (const struct clientInfo_t*)>(L"BG_GetAnimMoveType")(ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAnimationForIndex(int client, int index) -> struct animation_s*
{
  return Zynamic::Forward<struct animation_s* (int, int)>(L"BG_GetAnimationForIndex")(client, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerStateWeaponIndex(const struct pmove_t* pm) -> int
{
  return Zynamic::Forward<int (const struct pmove_t*)>(L"BG_GetPlayerStateWeaponIndex")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimUpdatePlayerStateConditions(struct pmove_t* pmove) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"BG_AnimUpdatePlayerStateConditions")(pmove);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsCrouchingAnim(const struct clientInfo_t* ci, int animNum) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, int)>(L"BG_IsCrouchingAnim")(ci, animNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAds(const struct clientInfo_t* ci, int animNum) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, int)>(L"BG_IsAds")(ci, animNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsProneAnim(const struct clientInfo_t* ci, int animNum) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, int)>(L"BG_IsProneAnim")(ci, animNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsKnifeMeleeAnim(const struct clientInfo_t* ci, int animNum) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, int)>(L"BG_IsKnifeMeleeAnim")(ci, animNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsGrenadeAnim(const struct clientInfo_t* ci, int animNum) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*, int)>(L"BG_IsGrenadeAnim")(ci, animNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsSliding(const struct clientInfo_t* ci) -> int
{
  return Zynamic::Forward<int (const struct clientInfo_t*)>(L"BG_IsSliding")(ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetNewAnimation(int localClientNum, struct clientInfo_t* ci, struct lerpFrame_t* lf, int newAnimation, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, struct clientInfo_t*, struct lerpFrame_t*, int, const struct entityState_s*)>(L"BG_SetNewAnimation")(localClientNum, ci, lf, newAnimation, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_RunLerpFrameRate(int localClientNum, struct clientInfo_t* ci, struct lerpFrame_t* lf, int newAnimation, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, struct clientInfo_t*, struct lerpFrame_t*, int, const struct entityState_s*)>(L"BG_RunLerpFrameRate")(localClientNum, ci, lf, newAnimation, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerAnimation_VerifyAnim(struct XAnimTree_s* pAnimTree, struct lerpFrame_t* lf) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, struct lerpFrame_t*)>(L"BG_PlayerAnimation_VerifyAnim")(pAnimTree, lf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SwingAngles(float destination, float swingTolerance, float clampTolerance, float speed, float* angle, int* swinging) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float*, int*)>(L"BG_SwingAngles")(destination, swingTolerance, clampTolerance, speed, angle, swinging);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerAngles(const struct entityState_s* es, struct clientInfo_t* ci) -> void
{
  return Zynamic::Forward<void (const struct entityState_s*, struct clientInfo_t*)>(L"BG_PlayerAngles")(es, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimPlayerConditions(const struct entityState_s* es, struct clientInfo_t* ci) -> void
{
  return Zynamic::Forward<void (const struct entityState_s*, struct clientInfo_t*)>(L"BG_AnimPlayerConditions")(es, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Player_DoControllersInternal(const struct entityState_s* es, const struct clientInfo_t* ci, struct controller_info_t* info) -> void
{
  return Zynamic::Forward<void (const struct entityState_s*, const struct clientInfo_t*, struct controller_info_t*)>(L"BG_Player_DoControllersInternal")(es, ci, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LerpAngles(float* angles_goal, float maxAngleChange, float* angles) -> void
{
  return Zynamic::Forward<void (float*, float, float*)>(L"BG_LerpAngles")(angles_goal, maxAngleChange, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LerpOffset(float* offset_goal, float maxOffsetChange, float* offset) -> void
{
  return Zynamic::Forward<void (float*, float, float*)>(L"BG_LerpOffset")(offset_goal, maxOffsetChange, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Player_DoControllersSetup(const struct entityState_s* es, struct clientInfo_t* ci, int frametime) -> void
{
  return Zynamic::Forward<void (const struct entityState_s*, struct clientInfo_t*, int)>(L"BG_Player_DoControllersSetup")(es, ci, frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerAnimation(int localClientNum, const struct entityState_s* es, struct clientInfo_t* ci) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct clientInfo_t*)>(L"BG_PlayerAnimation")(localClientNum, es, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerWeaponForDObj(int localClientNum, struct entityState_s* es, struct clientInfo_t* ci) -> int
{
  return Zynamic::Forward<int (int, struct entityState_s*, struct clientInfo_t*)>(L"BG_GetPlayerWeaponForDObj")(localClientNum, es, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerOffhandWeaponForDObj(int localClientNum, struct entityState_s* es, struct clientInfo_t* ci) -> int
{
  return Zynamic::Forward<int (int, struct entityState_s*, struct clientInfo_t*)>(L"BG_GetPlayerOffhandWeaponForDObj")(localClientNum, es, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UpdatePlayerDObj(int localClientNum, struct DObj* pDObj, struct entityState_s* es, struct clientInfo_t* ci, int attachIgnoreCollision) -> void
{
  return Zynamic::Forward<void (int, struct DObj*, struct entityState_s*, struct clientInfo_t*, int)>(L"BG_UpdatePlayerDObj")(localClientNum, pDObj, es, ci, attachIgnoreCollision);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindAnims() -> void
{
  return Zynamic::Forward<void ()>(L"BG_FindAnims")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindAnimTree(const char* filename, int bEnforceExists) -> struct scr_animtree_t
{
  return Zynamic::Forward<struct scr_animtree_t (const char*, int)>(L"BG_FindAnimTree")(filename, bEnforceExists);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindAnimTrees() -> void
{
  return Zynamic::Forward<void ()>(L"BG_FindAnimTrees")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadAnim(const char* levelName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"BG_LoadAnim")(levelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PostLoadAnim(const char* levelName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"BG_PostLoadAnim")(levelName);
}

#endif // __UNIMPLEMENTED__
