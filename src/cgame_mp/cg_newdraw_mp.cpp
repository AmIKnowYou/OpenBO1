//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_AntiBurnInHUD_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_AntiBurnInHUD_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldDrawHud(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ShouldDrawHud")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeHudMenu(int localClientNum, const struct dvar_s* fadeDvar, int displayStartTime, int duration) -> float
{
  return Zynamic::Forward<float (int, const struct dvar_s*, int, int)>(L"CG_FadeHudMenu")(localClientNum, fadeDvar, displayStartTime, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowAmmoSpecific(const struct cg_s* cgameGlob, unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, unsigned int)>(L"CG_CheckPlayerForLowAmmoSpecific")(cgameGlob, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowAmmo(const struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*)>(L"CG_CheckPlayerForLowAmmo")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowClipSpecific(const struct cg_s* cgameGlob, unsigned int weapIndex) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, unsigned int)>(L"CG_CheckPlayerForLowClipSpecific")(cgameGlob, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowClip(const struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*)>(L"CG_CheckPlayerForLowClip")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerAmmoBackdrop(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Material*)>(L"CG_DrawPlayerAmmoBackdrop")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerAmmoValue(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, int type) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, int)>(L"CG_DrawPlayerAmmoValue")(localClientNum, rect, font, scale, color, material, textStyle, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerHeatValue(int localClientNum, const struct rectDef_s* rect, float* color, bool drawVehicleTurretVersion) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, bool)>(L"CG_DrawPlayerHeatValue")(localClientNum, rect, color, drawVehicleTurretVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerFuelAmmoValue(int localClientNum, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*)>(L"CG_DrawPlayerFuelAmmoValue")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerReloadValue(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*)>(L"CG_DrawPlayerReloadValue")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerReloadedValue(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*)>(L"CG_DrawPlayerReloadedValue")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponName(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, int)>(L"CG_DrawPlayerWeaponName")(localClientNum, rect, font, scale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponNameBack(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, struct Material*)>(L"CG_DrawPlayerWeaponNameBack")(localClientNum, rect, font, scale, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcPlayerSprintColor(const struct cg_s* cgameGlob, const struct playerState_s* ps, float* color) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, const struct playerState_s*, float*)>(L"CG_CalcPlayerSprintColor")(cgameGlob, ps, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawStanceIcon(int localClientNum, const struct rectDef_s* rect, float* drawColor, float x, float y, float fadeAlpha) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, float, float, float)>(L"CG_DrawStanceIcon")(localClientNum, rect, drawColor, x, y, fadeAlpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawStanceHintPrints(int localClientNum, const struct rectDef_s* rect, float x, const float* color, float fadeAlpha, struct Font_s* font, float scale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float, const float*, float, struct Font_s*, float, int)>(L"CG_DrawStanceHintPrints")(localClientNum, rect, x, color, fadeAlpha, font, scale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerStance(int localClientNum, const struct rectDef_s* rect, const float* color, struct Font_s* font, float scale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Font_s*, float, int)>(L"CG_DrawPlayerStance")(localClientNum, rect, color, font, scale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerSprintBack(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerSprintBack")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerSprintMeter(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerSprintMeter")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcPlayerHealth(const struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*)>(L"CG_CalcPlayerHealth")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerBarHealth(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerBarHealth")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerBarHealthBack(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerBarHealthBack")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeLowHealthOverlay(const struct cg_s* cgameGlob) -> float
{
  return Zynamic::Forward<float (const struct cg_s*)>(L"CG_FadeLowHealthOverlay")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PulseLowHealthOverlay(struct cg_s* cgameGlob, float healthRatio) -> void
{
  return Zynamic::Forward<void (struct cg_s*, float)>(L"CG_PulseLowHealthOverlay")(cgameGlob, healthRatio);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetLowHealthOverlay(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_ResetLowHealthOverlay")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerLowHealthOverlay(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerLowHealthOverlay")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerDirectionalHitIndicator(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerDirectionalHitIndicator")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetDirectionalDamageIndicators(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ResetDirectionalDamageIndicators")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ServerMaterialName(int localClientNum, int index, char* materialName, unsigned int maxLen) -> int
{
  return Zynamic::Forward<int (int, int, char*, unsigned int)>(L"CG_ServerMaterialName")(localClientNum, index, materialName, maxLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ObjectiveIcon(int localClientNum, int icon, int type) -> struct Material*
{
  return Zynamic::Forward<struct Material* (int, int, int)>(L"CG_ObjectiveIcon")(localClientNum, icon, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCursorHints(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_UpdateCursorHints")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponUseString(int localClientNum, const char** secondaryString) -> const char*
{
  return Zynamic::Forward<const char* (int, const char**)>(L"CG_GetWeaponUseString")(localClientNum, secondaryString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetUseString(int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CG_GetUseString")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawCursorhint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, int)>(L"CG_DrawCursorhint")(localClientNum, rect, font, fontscale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawHoldBreathHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int)>(L"CG_DrawHoldBreathHint")(localClientNum, rect, font, fontscale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawHoldBreathZoomHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int)>(L"CG_DrawHoldBreathZoomHint")(localClientNum, rect, font, fontscale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRCBombHints(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle, int hintType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int, int)>(L"CG_DrawRCBombHints")(localClientNum, rect, font, fontscale, textStyle, hintType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGuidedMissileBoostHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int)>(L"CG_DrawGuidedMissileBoostHint")(localClientNum, rect, font, fontscale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGuidedMissileDetonateHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int)>(L"CG_DrawGuidedMissileDetonateHint")(localClientNum, rect, font, fontscale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetClosestTargetToGuidedMissile(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetClosestTargetToGuidedMissile")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetDistanceGuidedMissileAndOwner(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetDistanceGuidedMissileAndOwner")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGuidedMissileInfo(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle, enum eGuidedMissileInfo infoType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int, enum eGuidedMissileInfo)>(L"CG_DrawGuidedMissileInfo")(localClientNum, rect, font, fontscale, textStyle, infoType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawTurretPlaceHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"CG_DrawTurretPlaceHint")(localClientNum, rect, font, fontscale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawMantleHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, const float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int)>(L"CG_DrawMantleHint")(localClientNum, rect, font, fontscale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScriptMainMenu(int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CG_ScriptMainMenu")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawInvalidCmdHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, int)>(L"CG_DrawInvalidCmdHint")(localClientNum, rect, font, fontscale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawTalkerNum(int localClientNum, const int num, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style) -> void
{
  return Zynamic::Forward<void (int, const int, struct rectDef_s*, struct Font_s*, float*, float, int)>(L"CG_DrawTalkerNum")(localClientNum, num, rect, font, color, textScale, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_tank_seat_tint_color(const struct centity_s* cent, long seat_index, float* rgba) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, long, float*)>(L"get_tank_seat_tint_color")(cent, seat_index, rgba);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_tank_hud_health_tint_color(float health_fraction, float* rgba, float black_when_dead) -> void
{
  return Zynamic::Forward<void (float, float*, float)>(L"get_tank_hud_health_tint_color")(health_fraction, rgba, black_when_dead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto draw_tank_body_component(int localClientNum, const struct rectDef_s* rect, struct Material* material, const float* color, enum e_tank_hud_component component) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, const float*, enum e_tank_hud_component)>(L"draw_tank_body_component")(localClientNum, rect, material, color, component);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto draw_tank_turret_component(int localClientNum, const struct rectDef_s* rect, struct Material* material, const float* color, enum e_tank_hud_component component) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, const float*, enum e_tank_hud_component)>(L"draw_tank_turret_component")(localClientNum, rect, material, color, component);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarMomentumProgress(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material, int ownerDraw) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*, int)>(L"CG_DrawWarMomentumProgress")(localClientNum, rect, color, material, ownerDraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarMomentumMultiplier(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*)>(L"CG_DrawWarMomentumMultiplier")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarMomentumMultiplierDetail(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*)>(L"CG_DrawWarMomentumMultiplierDetail")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarMomentumMultiplierBlitzkrieg(int localClientNum, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*, struct Material*)>(L"CG_DrawWarMomentumMultiplierBlitzkrieg")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarText(const struct cg_s* cgameGlob, struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle, float text_x, float text_y) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct rectDef_s*, struct Font_s*, float, float*, int, float, float)>(L"CG_DrawWarText")(cgameGlob, rect, font, fontscale, color, textStyle, text_x, text_y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawLifeCounter(int localClientNum, struct rectDef_s* rect, float* color, bool alive) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*, bool)>(L"CG_DrawLifeCounter")(localClientNum, rect, color, alive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWristWatch(int localClientNum, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawWristWatch")(localClientNum, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawDemoControls(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawDemoControls")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerImageSwing(int localClientNum, const struct rectDef_s* rect, const struct rectDef_s* parentRect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerImageSwing")(localClientNum, rect, parentRect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDrawPlayerTargetHighlights(int localClientNum, const struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (int, const struct cg_s*)>(L"ShouldDrawPlayerTargetHighlights")(localClientNum, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerTargetHighlights(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerTargetHighlights")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerTargetHighlightsFriendly(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawPlayerTargetHighlightsFriendly")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGuidedMissileFuel(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_DrawGuidedMissileFuel")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OwnerDraw(int localClientNum, struct rectDef_s parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, int ownerDraw, int ownerDrawFlags, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s, float, float, float, float, int, int, int, int, float*, struct Material*)>(L"CG_OwnerDraw")(localClientNum, parentRect, x, y, w, h, horzAlign, vertAlign, ownerDraw, ownerDrawFlags, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OwnerDrawText(int localClientNum, struct rectDef_s parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, int textAlignMode, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s, float, float, float, float, int, int, float, float, int, int, int, struct Font_s*, float, float*, struct Material*, int, int, struct itemDef_s*, const char*)>(L"CG_OwnerDrawText")(localClientNum, parentRect, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, ownerDrawFlags, align, font, scale, color, material, textStyle, textAlignMode, item, text);
}

#endif // __UNIMPLEMENTED__
