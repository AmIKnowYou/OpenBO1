//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_botInfos''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_botInfos''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsThrowingGrenade(const struct bot_info_t* botInfo, const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (const struct bot_info_t*, const struct client_t*)>(L"Bot_IsThrowingGrenade")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsEnemyHuman(const struct gentity_s* enemy) -> bool
{
  return Zynamic::Forward<bool (const struct gentity_s*)>(L"Bot_IsEnemyHuman")(enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsInLastStand(const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*)>(L"Bot_IsInLastStand")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsMovingFoward(const struct bot_info_t* botInfo, const struct client_t* bot, const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct bot_info_t*, const struct client_t*, const struct playerState_s*)>(L"Bot_IsMovingFoward")(botInfo, bot, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_RandomInput(struct bot_info_t* botInfo, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, struct usercmd_s*)>(L"Bot_RandomInput")(botInfo, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_RandomStrafe(const struct playerState_s* ps, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, struct usercmd_s*)>(L"Bot_RandomStrafe")(ps, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_GetStrafeInput(const struct client_t* bot, struct bot_info_t* botInfo, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (const struct client_t*, struct bot_info_t*, struct usercmd_s*)>(L"Bot_GetStrafeInput")(bot, botInfo, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_StrafeOnPath(const struct playerState_s* ps, const struct path_t* path, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, const struct path_t*, struct usercmd_s*)>(L"Bot_StrafeOnPath")(ps, path, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateTimedAction(int* timedAction) -> void
{
  return Zynamic::Forward<void (int*)>(L"Bot_UpdateTimedAction")(timedAction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_SetTimedAction(int button, int* timedAction, const struct dvar_s* minTime, const struct dvar_s* maxTime, struct usercmd_s* cmd, const struct usercmd_s* lastCmd) -> void
{
  return Zynamic::Forward<void (int, int*, const struct dvar_s*, const struct dvar_s*, struct usercmd_s*, const struct usercmd_s*)>(L"Bot_SetTimedAction")(button, timedAction, minTime, maxTime, cmd, lastCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_PointInGoal(const float* point, const struct path_t* path, float goalRadius) -> bool
{
  return Zynamic::Forward<bool (const float*, const struct path_t*, float)>(L"Bot_PointInGoal")(point, path, goalRadius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_PathValid(const struct gentity_s* bot, const struct path_t* path) -> bool
{
  return Zynamic::Forward<bool (const struct gentity_s*, const struct path_t*)>(L"Bot_PathValid")(bot, path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_GetPathToGoal(const struct client_t* bot, const float* goal, struct path_t* path, bool allowMantle) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*, const float*, struct path_t*, bool)>(L"Bot_GetPathToGoal")(bot, goal, path, allowMantle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsAtNegotiationNode(struct bot_info_t* botInfo, const struct client_t* bot, struct path_t* path) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*, struct path_t*)>(L"Bot_IsAtNegotiationNode")(botInfo, bot, path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsFacingEnemy(const struct client_t* bot, const struct gentity_s* enemy, float* dot) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*, const struct gentity_s*, float*)>(L"Bot_IsFacingEnemy")(bot, enemy, dot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsInRangeOfEnemy(const struct client_t* bot, const struct gentity_s* enemy, float* distSq) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*, const struct gentity_s*, float*)>(L"Bot_IsInRangeOfEnemy")(bot, enemy, distSq);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateSight(struct bot_info_t* botInfo, const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*)>(L"Bot_UpdateSight")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_ClearThreat(struct bot_info_t* botInfo) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*)>(L"Bot_ClearThreat")(botInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateBestThreat(struct bot_info_t* botInfo, struct bot_threat_t* threats, int numThreats) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, struct bot_threat_t*, int)>(L"Bot_UpdateBestThreat")(botInfo, threats, numThreats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_ThreatSightCheck(const struct client_t* bot, const struct gentity_s* enemy, float fovDot) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*, const struct gentity_s*, float)>(L"Bot_ThreatSightCheck")(bot, enemy, fovDot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateThreat(struct bot_info_t* botInfo, const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*)>(L"Bot_UpdateThreat")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateWeapon(const struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (const struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateWeapon")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdatePitch(float currentPitch, float targetPitch, bool forceSlow) -> float
{
  return Zynamic::Forward<float (float, float, bool)>(L"Bot_UpdatePitch")(currentPitch, targetPitch, forceSlow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateYaw(float currentYaw, float targetYaw, bool forceSlow, struct bot_info_t* botInfo) -> float
{
  return Zynamic::Forward<float (float, float, bool, struct bot_info_t*)>(L"Bot_UpdateYaw")(currentYaw, targetYaw, forceSlow, botInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateScriptGoal(struct bot_info_t* botInfo, const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*)>(L"Bot_UpdateScriptGoal")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateScriptEnemy(struct bot_info_t* botInfo, const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*)>(L"Bot_UpdateScriptEnemy")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdatePath(struct bot_info_t* botInfo, const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*)>(L"Bot_UpdatePath")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_PredictPosition(const struct gentity_s* ent, const struct playerState_s* ps, float* vPos) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, const struct playerState_s*, float*)>(L"Bot_PredictPosition")(ent, ps, vPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateDirection(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateDirection")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateStance(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateStance")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateSprint(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateSprint")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateMantle(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateMantle")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateSpeed(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateSpeed")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_IsFlashbanged(const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*)>(L"Bot_IsFlashbanged")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateMovement(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateMovement")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateReload(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateReload")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateGlassSmash(const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateGlassSmash")(bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateMelee(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateMelee")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_GrenadeSightTrace(const struct client_t* bot, float projectileSpeed, float throwPitch) -> bool
{
  return Zynamic::Forward<bool (const struct client_t*, float, float)>(L"Bot_GrenadeSightTrace")(bot, projectileSpeed, throwPitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_GrenadeInRange(const float range, const float height, const float* angles, const struct WeaponDef* weapDef, float* outPitch) -> bool
{
  return Zynamic::Forward<bool (const float, const float, const float*, const struct WeaponDef*, float*)>(L"Bot_GrenadeInRange")(range, height, angles, weapDef, outPitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_GrenadePickType(const struct bot_info_t* botInfo, const struct playerState_s* ps, enum OffhandSlot* slot) -> bool
{
  return Zynamic::Forward<bool (const struct bot_info_t*, const struct playerState_s*, enum OffhandSlot*)>(L"Bot_GrenadePickType")(botInfo, ps, slot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_ShouldThrowGrenade(struct bot_info_t* botInfo, const struct client_t* bot) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*)>(L"Bot_ShouldThrowGrenade")(botInfo, bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateGrenadeThrow(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> bool
{
  return Zynamic::Forward<bool (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateGrenadeThrow")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_UpdateCombat(struct bot_info_t* botInfo, const struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*, const struct client_t*, struct usercmd_s*)>(L"Bot_UpdateCombat")(botInfo, bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_Clear(struct bot_info_t* botInfo) -> void
{
  return Zynamic::Forward<void (struct bot_info_t*)>(L"Bot_Clear")(botInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotSwitchWeapon(const struct client_t* bot, int weapIndex) -> void
{
  return Zynamic::Forward<void (const struct client_t*, int)>(L"SV_BotSwitchWeapon")(bot, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotSetScriptGoal(const struct client_t* bot, const float* goal, float goalRadius) -> void
{
  return Zynamic::Forward<void (const struct client_t*, const float*, float)>(L"SV_BotSetScriptGoal")(bot, goal, goalRadius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotClearScriptGoal(const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (const struct client_t*)>(L"SV_BotClearScriptGoal")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotSetScriptEnemy(const struct client_t* bot, const struct gentity_s* enemy) -> void
{
  return Zynamic::Forward<void (const struct client_t*, const struct gentity_s*)>(L"SV_BotSetScriptEnemy")(bot, enemy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotClearScriptEnemy(const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (const struct client_t*)>(L"SV_BotClearScriptEnemy")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotPressUseButton(const struct client_t* bot, int msec) -> void
{
  return Zynamic::Forward<void (const struct client_t*, int)>(L"SV_BotPressUseButton")(bot, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotSetAttacker(const struct client_t* bot, const struct gentity_s* attacker) -> void
{
  return Zynamic::Forward<void (const struct client_t*, const struct gentity_s*)>(L"SV_BotSetAttacker")(bot, attacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotThink(struct client_t* bot, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct usercmd_s*)>(L"SV_BotThink")(bot, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"SV_BotRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_DrawString(const struct ScreenPlacement* scrPlace, const char* text, float x, float* y, const float* color) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const char*, float, float*, const float*)>(L"Bot_DrawString")(scrPlace, text, x, y, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_DrawDebug(const struct ScreenPlacement* scrPlace) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*)>(L"Bot_DrawDebug")(scrPlace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_DrawPath(const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (const struct client_t*)>(L"Bot_DrawPath")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DrawBotPath() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DrawBotPath")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_DrawThreat(const struct client_t* bot) -> void
{
  return Zynamic::Forward<void (const struct client_t*)>(L"Bot_DrawThreat")(bot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DrawBotThreat() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DrawBotThreat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bot_NameUsed(const char* name) -> struct client_t*
{
  return Zynamic::Forward<struct client_t* (const char*)>(L"Bot_NameUsed")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotNameRandom() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"SV_BotNameRandom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Friends_IsInCurrentSession(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Friends_IsInCurrentSession")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotNameRandomFriend(const int controller, char* buf, const int bufLen) -> bool
{
  return Zynamic::Forward<bool (const int, char*, const int)>(L"SV_BotNameRandomFriend")(controller, buf, bufLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BotNameUpdate(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"SV_BotNameUpdate")(name);
}

#endif // __UNIMPLEMENTED__
