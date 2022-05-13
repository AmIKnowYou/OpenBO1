//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_CompassRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_CompassRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsSelectingLocation(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_IsSelectingLocation")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WorldPosToCompass(enum CompassType compassType, const struct cg_s* cgameGlob, const struct rectDef_s* mapRect, const float* north, const float* playerWorldPos, const float* in, float* out, float* outClipped) -> bool
{
  return Zynamic::Forward<bool (enum CompassType, const struct cg_s*, const struct rectDef_s*, const float*, const float*, const float*, float*, float*)>(L"CG_WorldPosToCompass")(compassType, cgameGlob, mapRect, north, playerWorldPos, in, out, outClipped);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TextClippedToCompass(enum CompassType compassType, const struct cg_s* cgameGlob, const struct rectDef_s* mapRect, const float* north, const float* playerWorldPos, const float* in, float w, float h) -> bool
{
  return Zynamic::Forward<bool (enum CompassType, const struct cg_s*, const struct rectDef_s*, const float*, const float*, const float*, float, float)>(L"CG_TextClippedToCompass")(compassType, cgameGlob, mapRect, north, playerWorldPos, in, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassCalcDimensions(enum CompassType compassType, const struct cg_s* cgameGlob, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* x, float* y, float* w, float* h) -> void
{
  return Zynamic::Forward<void (enum CompassType, const struct cg_s*, const struct rectDef_s*, const struct rectDef_s*, float*, float*, float*, float*)>(L"CG_CompassCalcDimensions")(compassType, cgameGlob, parentRect, rect, x, y, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeCompass(int localClientNum, int displayStartTime, enum CompassType compassType) -> float
{
  return Zynamic::Forward<float (int, int, enum CompassType)>(L"CG_FadeCompass")(localClientNum, displayStartTime, compassType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeCompassIcons(int localClientNum, bool ignoreGlobalScrambler) -> float
{
  return Zynamic::Forward<float (int, bool)>(L"CG_FadeCompassIcons")(localClientNum, ignoreGlobalScrambler);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerBack(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawPlayerBack")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerPopUps(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct itemDef_s* item, const char* text, bool doSwing) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, struct itemDef_s*, const char*, bool)>(L"CG_DrawPlayerPopUps")(localClientNum, rect, font, scale, color, material, textStyle, item, text, doSwing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerCOD7TypeWriter(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, struct itemDef_s*, const char*)>(L"CG_DrawPlayerCOD7TypeWriter")(localClientNum, rect, font, scale, color, material, textStyle, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerRedationText(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, struct itemDef_s*, const char*)>(L"CG_DrawPlayerRedationText")(localClientNum, rect, font, scale, color, material, textStyle, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerPopInText(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, struct itemDef_s*, const char*)>(L"CG_DrawPlayerPopInText")(localClientNum, rect, font, scale, color, material, textStyle, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerNorthCoord(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Font_s* font, struct Material* material, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Font_s*, struct Material*, float*, int)>(L"CG_CompassDrawPlayerNorthCoord")(localClientNum, compassType, parentRect, rect, font, material, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerEastCoord(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Font_s* font, struct Material* material, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Font_s*, struct Material*, float*, int)>(L"CG_CompassDrawPlayerEastCoord")(localClientNum, compassType, parentRect, rect, font, material, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerNCoordScroll(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Font_s* font, struct Material* material, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Font_s*, struct Material*, float*, int)>(L"CG_CompassDrawPlayerNCoordScroll")(localClientNum, compassType, parentRect, rect, font, material, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerECoordScroll(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Font_s* font, struct Material* material, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Font_s*, struct Material*, float*, int)>(L"CG_CompassDrawPlayerECoordScroll")(localClientNum, compassType, parentRect, rect, font, material, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawStatic(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawStatic")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateEnemyScramblerAlpha(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateEnemyScramblerAlpha")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetScramblerEnemyAlpha(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetScramblerEnemyAlpha")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawScrambler(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color, bool grid) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*, bool)>(L"CG_CompassDrawScrambler")(localClientNum, compassType, parentRect, rect, material, color, grid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawRound(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawRound")(localClientNum, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerMap(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color, bool grid) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*, bool)>(L"CG_CompassDrawPlayerMap")(localClientNum, compassType, parentRect, rect, material, color, grid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerMapLocationSelector(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawPlayerMapLocationSelector")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerSelectedLocations(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawPlayerSelectedLocations")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetObjectiveFade(const struct rectDef_s* clipRect, float x, float y, float width, float height) -> float
{
  return Zynamic::Forward<float (const struct rectDef_s*, float, float, float, float)>(L"GetObjectiveFade")(clipRect, x, y, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayer(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawPlayer")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawBorder(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, struct rectDef_s* rect, struct Material* material, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, struct rectDef_s*, struct Material*, float*)>(L"CG_CompassDrawBorder")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpYawVector(const struct cg_s* cgameGlob, float* result) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*)>(L"CG_CompassUpYawVector")(cgameGlob, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcCompassPointerSize(enum CompassType compassType, float* w, float* h) -> void
{
  return Zynamic::Forward<void (enum CompassType, float*, float*)>(L"CalcCompassPointerSize")(compassType, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcCompassPointerSizeObjective(enum CompassType compassType, float* w, float* h, const struct objective_t* objective, const struct rectDef_s* mapRect) -> bool
{
  return Zynamic::Forward<bool (enum CompassType, float*, float*, const struct objective_t*, const struct rectDef_s*)>(L"CalcCompassPointerSizeObjective")(compassType, w, h, objective, mapRect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CutFloat(float original) -> float
{
  return Zynamic::Forward<float (float)>(L"CutFloat")(original);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawIconDistanceText(int localClientNum, float distance, float iconX, float iconY, float iconH, const struct rectDef_s* rect, const float* color, struct Font_s* textFont, float textScale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, const struct rectDef_s*, const float*, struct Font_s*, float, int)>(L"DrawIconDistanceText")(localClientNum, distance, iconX, iconY, iconH, rect, color, textFont, textScale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawTickertape(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, const float* color, struct Font_s* textFont, float textScale, int textStyle, bool drawObjectives) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, const float*, struct Font_s*, float, int, bool)>(L"CG_CompassDrawTickertape")(localClientNum, compassType, parentRect, rect, material, color, textFont, textScale, textStyle, drawObjectives);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetGridTable() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SetGridTable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScaleCompass() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ScaleCompass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetGridOffsets(const float* east, const float* south, float* eastOffsetLetter, float* southOffsetLetter, float* eastOffsetNumber, float* southOffsetNumber) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*, float*, float*, float*)>(L"CG_SetGridOffsets")(east, south, eastOffsetLetter, southOffsetLetter, eastOffsetNumber, southOffsetNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawGridPoints(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color, struct Font_s* textFont, float textScale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, const float*, struct Font_s*, float, int)>(L"CG_CompassDrawGridPoints")(localClientNum, compassType, parentRect, rect, color, textFont, textScale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetGridFromPos(int localClientNum, float* pos, char* gridName) -> void
{
  return Zynamic::Forward<void (int, float*, char*)>(L"CG_GetGridFromPos")(localClientNum, pos, gridName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHudAlphaCompass(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetHudAlphaCompass")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcCompassFriendlySize(enum CompassType compassType, float* w, float* h) -> void
{
  return Zynamic::Forward<void (enum CompassType, float*, float*)>(L"CalcCompassFriendlySize")(compassType, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawPlayerPointers_MiniMap(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* material, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, struct Material*, const float*)>(L"CG_CompassDrawPlayerPointers_MiniMap")(localClientNum, compassType, parentRect, rect, material, color);
}

#endif // __UNIMPLEMENTED__
