//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetField(const void* i, int size) -> int
{
  return Zynamic::Forward<int (const void*, int)>(L"GetField")(i, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_g_hudelem() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_g_hudelem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_ClearTypeSettings(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"HudElem_ClearTypeSettings")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetDefaults(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"HudElem_SetDefaults")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_Alloc(int clientNum, int teamNum) -> struct game_hudelem_s*
{
  return Zynamic::Forward<struct game_hudelem_s* (int, int)>(L"HudElem_Alloc")(clientNum, teamNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_DebugAlloc(int clientNum) -> struct game_hudelem_s*
{
  return Zynamic::Forward<struct game_hudelem_s* (int)>(L"HudElem_DebugAlloc")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_Free(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"HudElem_Free")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_ClientDisconnect(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"HudElem_ClientDisconnect")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_DestroyAll() -> void
{
  return Zynamic::Forward<void ()>(L"HudElem_DestroyAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetEnumString(struct game_hudelem_s* hud, const struct game_hudelem_field_t* f, const char** names, int nameCount) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, const struct game_hudelem_field_t*, const char**, int)>(L"HudElem_SetEnumString")(hud, f, names, nameCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetEnumString(struct game_hudelem_s* hud, const struct game_hudelem_field_t* f, const char** names, int nameCount) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, const struct game_hudelem_field_t*, const char**, int)>(L"HudElem_GetEnumString")(hud, f, names, nameCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetLocalizedString(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetLocalizedString")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagForeground(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagForeground")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagForeground(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagForeground")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFontStyle3d(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFontStyle3d")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFontStyle3d(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFontStyle3d")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFont3dUseGlowColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFont3dUseGlowColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFont3dUseGlowColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFont3dUseGlowColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagHideWhenDead(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagHideWhenDead")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagHideWhenDead(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagHideWhenDead")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagHideWhenInKillCam(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagHideWhenInKillCam")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagHideWhenInKillCam(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagHideWhenInKillCam")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagHideWhenInDemo(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagHideWhenInDemo")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagHideWhenInDemo(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagHideWhenInDemo")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagOverrideWhenInDemo(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagOverrideWhenInDemo")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagOverrideWhenInDemo(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagOverrideWhenInDemo")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagHideWhileRemoteControlling(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagHideWhileRemoteControlling")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagHideWhileRemoteControlling(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagHideWhileRemoteControlling")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagHideWhenInMenu(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagHideWhenInMenu")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagHideWhenInMenu(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagHideWhenInMenu")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFlagFadeWhenTargeted(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFlagFadeWhenTargeted")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFlagFadeWhenTargeted(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFlagFadeWhenTargeted")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetBoolean(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetBoolean")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetAlpha(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetAlpha")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetAlpha(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetAlpha")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetGlowColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetGlowColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetGlowColor(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetGlowColor")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetGlowAlpha(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetGlowAlpha")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetGlowAlpha(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetGlowAlpha")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFontScale(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFontScale")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetFont(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetFont")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetFont(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetFont")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetAlignX(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetAlignX")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetAlignX(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetAlignX")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetAlignY(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetAlignY")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetAlignY(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetAlignY")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetHorzAlign(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetHorzAlign")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetHorzAlign(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetHorzAlign")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetVertAlign(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetVertAlign")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetVertAlign(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetVertAlign")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_SetUI3DWindow(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_SetUI3DWindow")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetUI3DWindow(struct game_hudelem_s* hud, int offset) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*, int)>(L"HudElem_GetUI3DWindow")(hud, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetHudElemField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Scr_GetHudElemField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetHudElemField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Scr_SetHudElemField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeHudElemConstStrings(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"Scr_FreeHudElemConstStrings")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NewHudElem() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_NewHudElem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NewDebugHudElem() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_NewDebugHudElem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NewClientHudElem() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_NewClientHudElem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NewScoreHudElem() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_NewScoreHudElem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_NewTeamHudElem() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_NewTeamHudElem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddFieldsForHudElems() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddFieldsForHudElems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_GetHudElem(struct scr_entref_t entref) -> struct game_hudelem_s*
{
  return Zynamic::Forward<struct game_hudelem_s* (struct scr_entref_t)>(L"HECmd_GetHudElem")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetText(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetText")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_ClearAllTextAfterHudElem(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_ClearAllTextAfterHudElem")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetMaterial(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetMaterial")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetWarGameData(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetWarGameData")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTargetEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetTargetEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_ClearTargetEnt(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_ClearTargetEnt")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTimer_Internal(struct scr_entref_t entref, enum he_type_t type, const char* cmdName) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, enum he_type_t, const char*)>(L"HECmd_SetTimer_Internal")(entref, type, cmdName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetClock_Internal(struct scr_entref_t entref, enum he_type_t type, const char* cmdName) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, enum he_type_t, const char*)>(L"HECmd_SetClock_Internal")(entref, type, cmdName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTimer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetTimer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTimerUp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetTimerUp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTenthsTimer(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetTenthsTimer")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetTenthsTimerUp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetTenthsTimerUp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetClock(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetClock")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetClockUp(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetClockUp")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetValue(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetValue")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetWaypoint(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetWaypoint")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_FadeOverTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_FadeOverTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_ScaleOverTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_ScaleOverTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_MoveOverTime(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_MoveOverTime")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_Reset(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_Reset")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_Destroy(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_Destroy")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetPlayerNameString(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetPlayerNameString")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetGameTypeString(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetGameTypeString")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetMapNameString(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetMapNameString")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIntGTZero(unsigned int index) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"GetIntGTZero")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetPulseFX(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetPulseFX")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetCOD7DecodeFX(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetCOD7DecodeFX")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_SetRedactFX(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_SetRedactFX")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HECmd_GetTextWidth(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"HECmd_GetTextWidth")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_GetMethod(const char** pName) -> function*
{
  return Zynamic::Forward<function * (const char**)>(L"HudElem_GetMethod")(pName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_UpdateClient(struct gclient_s* client, int clientNum, enum hudelem_update_t which) -> void
{
  return Zynamic::Forward<void (struct gclient_s*, int, enum hudelem_update_t)>(L"HudElem_UpdateClient")(client, clientNum, which);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_ClearClientSingle(struct hudelem_s* elems, int max) -> void
{
  return Zynamic::Forward<void (struct hudelem_s*, int)>(L"HudElem_ClearClientSingle")(elems, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElem_ClearClient(struct gclient_s* client, enum hudelem_update_t which) -> void
{
  return Zynamic::Forward<void (struct gclient_s*, enum hudelem_update_t)>(L"HudElem_ClearClient")(client, which);
}

#endif // __UNIMPLEMENTED__
