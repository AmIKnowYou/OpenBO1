//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_HudElemRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_HudElemRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DirectiveFakeIntroSeconds(int localClientNum, const char* arg0, char* result) -> void
{
  return Zynamic::Forward<void (int, const char*, char*)>(L"DirectiveFakeIntroSeconds")(localClientNum, arg0, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseDirective(const char* directive, char* resultName, char* resultArg0) -> void
{
  return Zynamic::Forward<void (const char*, char*, char*)>(L"ParseDirective")(directive, resultName, resultArg0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHudelemDirective(int localClientNum, const char* directive, char* result) -> void
{
  return Zynamic::Forward<void (int, const char*, char*)>(L"GetHudelemDirective")(localClientNum, directive, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReplaceDirective(int localClientNum, unsigned int* searchPos, unsigned int* dstLen, char* dstString) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int*, unsigned int*, char*)>(L"ReplaceDirective")(localClientNum, searchPos, dstLen, dstString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TranslateHudElemMessage(int localClientNum, const char* message, const char* messageType, char* hudElemString) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*, char*)>(L"CG_TranslateHudElemMessage")(localClientNum, message, messageType, hudElemString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SafeTranslateHudElemString(int localClientNum, int index, char* hudElemString) -> void
{
  return Zynamic::Forward<void (int, int, char*)>(L"SafeTranslateHudElemString")(localClientNum, index, hudElemString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemStringWidth(const char* string, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const char*, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"HudElemStringWidth")(string, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHudElemTime(const struct hudelem_s* elem, int timeNow) -> int
{
  return Zynamic::Forward<int (const struct hudelem_s*, int)>(L"GetHudElemTime")(elem, timeNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemTimerString(const struct hudelem_s* elem, int timeNow) -> const char*
{
  return Zynamic::Forward<const char* (const struct hudelem_s*, int)>(L"HudElemTimerString")(elem, timeNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemTenthsTimerString(const struct hudelem_s* elem, int timeNow) -> const char*
{
  return Zynamic::Forward<const char* (const struct hudelem_s*, int)>(L"HudElemTenthsTimerString")(elem, timeNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemMaterialSpecifiedWidth(const struct ScreenPlacement* scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, int, int, const struct cg_hudelem_t*)>(L"HudElemMaterialSpecifiedWidth")(scrPlace, alignScreen, sizeVirtual, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemMaterialSpecifiedHeight(const struct ScreenPlacement* scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, int, int, const struct cg_hudelem_t*)>(L"HudElemMaterialSpecifiedHeight")(scrPlace, alignScreen, sizeVirtual, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemMaterialWidth(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"HudElemMaterialWidth")(scrPlace, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemMaterialHeight(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"HudElemMaterialHeight")(scrPlace, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemWidth(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"HudElemWidth")(scrPlace, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemHeight(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"HudElemHeight")(scrPlace, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AlignHudElemX(int alignOrg, float x, float width) -> float
{
  return Zynamic::Forward<float (int, float, float)>(L"AlignHudElemX")(alignOrg, x, width);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AlignHudElemY(int alignOrg, float y, float height) -> float
{
  return Zynamic::Forward<float (int, float, float)>(L"AlignHudElemY")(alignOrg, y, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHudElemOrg(const struct ScreenPlacement* scrPlace, int alignOrg, int alignScreen, float xVirtual, float yVirtual, float width, float height, float* orgX, float* orgY) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, int, int, float, float, float, float, float*, float*)>(L"GetHudElemOrg")(scrPlace, alignOrg, alignScreen, xVirtual, yVirtual, width, height, orgX, orgY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemMovementFrac(const struct hudelem_s* elem, int timeNow) -> float
{
  return Zynamic::Forward<float (const struct hudelem_s*, int)>(L"HudElemMovementFrac")(elem, timeNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetHudElemPos(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, struct cg_hudelem_t* cghe) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const struct hudelem_s*, struct cg_hudelem_t*)>(L"SetHudElemPos")(scrPlace, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OffsetHudElemY(const struct hudelem_s* elem, const struct cg_hudelem_t* cghe, float offsetY) -> float
{
  return Zynamic::Forward<float (const struct hudelem_s*, const struct cg_hudelem_t*, float)>(L"OffsetHudElemY")(elem, cghe, offsetY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConsolidateHudElemText(const struct hudelem_s* elem, struct cg_hudelem_t* cghe, char* hudElemString) -> void
{
  return Zynamic::Forward<void (const struct hudelem_s*, struct cg_hudelem_t*, char*)>(L"ConsolidateHudElemText")(elem, cghe, hudElemString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyStringToHudElemString(const char* string, char* hudElemString) -> void
{
  return Zynamic::Forward<void (const char*, char*)>(L"CopyStringToHudElemString")(string, hudElemString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHudElemInfo(int localClientNum, const struct hudelem_s* elem, struct cg_hudelem_t* cghe, char* hudElemString) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*, struct cg_hudelem_t*, char*)>(L"GetHudElemInfo")(localClientNum, elem, cghe, hudElemString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemColorToVec4(const union hudelem_color_t* hudElemColor, float* resultColor) -> void
{
  return Zynamic::Forward<void (const union hudelem_color_t*, float*)>(L"HudElemColorToVec4")(hudElemColor, resultColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawHudElemString(int localClientNum, const struct ScreenPlacement* scrPlace, const char* text, const struct hudelem_s* elem, struct cg_hudelem_t* cghe) -> void
{
  return Zynamic::Forward<void (int, const struct ScreenPlacement*, const char*, const struct hudelem_s*, struct cg_hudelem_t*)>(L"DrawHudElemString")(localClientNum, scrPlace, text, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawHudElemClock(int localClientNum, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*, const struct cg_hudelem_t*)>(L"DrawHudElemClock")(localClientNum, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawHudElemMaterial(int localClientNum, const struct hudelem_s* elem, struct cg_hudelem_t* cghe) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*, struct cg_hudelem_t*)>(L"DrawHudElemMaterial")(localClientNum, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateHudElemWarGameData(int localClientNum, const struct hudelem_s* elem, struct cg_hudelem_t* cghe) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*, struct cg_hudelem_t*)>(L"UpdateHudElemWarGameData")(localClientNum, elem, cghe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HudElemWaypointHeight(int localClientNum, const struct hudelem_s* elem) -> float
{
  return Zynamic::Forward<float (int, const struct hudelem_s*)>(L"HudElemWaypointHeight")(localClientNum, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetViewAxisProjections(const float* vieworg, const float* viewaxis[0x3], const float* worldPoint, float* projections) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], const float*, float*)>(L"GetViewAxisProjections")(vieworg, viewaxis, worldPoint, projections);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WorldPosToScreenPos(int localClientNum, const float* worldPos, float* outScreenPos) -> bool
{
  return Zynamic::Forward<bool (int, const float*, float*)>(L"WorldPosToScreenPos")(localClientNum, worldPos, outScreenPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WorldPosToExtraCamScreenPos(int localClientNum, const float* worldPos, float* outScreenPos) -> bool
{
  return Zynamic::Forward<bool (int, const float*, float*)>(L"WorldPosToExtraCamScreenPos")(localClientNum, worldPos, outScreenPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampScreenPosToEdges(int localClientNum, float* point, float padLeft, float padRight, float padTop, float padBottom, float* resultNormal, float* resultDist) -> bool
{
  return Zynamic::Forward<bool (int, float*, float, float, float, float, float*, float*)>(L"ClampScreenPosToEdges")(localClientNum, point, padLeft, padRight, padTop, padBottom, resultNormal, resultDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScaleForDistance(int localClientNum, const float* worldPos) -> float
{
  return Zynamic::Forward<float (int, const float*)>(L"GetScaleForDistance")(localClientNum, worldPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WaypointFadeGetTimeFrac(const struct cg_s* cgameGlob, int currentTime) -> float
{
  return Zynamic::Forward<float (const struct cg_s*, int)>(L"WaypointFadeGetTimeFrac")(cgameGlob, currentTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WaypointTargetFade(int localClientNum, const struct hudelem_s* elem, const float* screenPos, float* color) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*, const float*, float*)>(L"WaypointTargetFade")(localClientNum, elem, screenPos, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawOffscreenViewableWaypoint(int localClientNum, const struct hudelem_s* elem) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*)>(L"DrawOffscreenViewableWaypoint")(localClientNum, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawSingleHudElem2d(int localClientNum, const struct hudelem_s* elem) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*)>(L"DrawSingleHudElem2d")(localClientNum, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyInUseHudElems(struct hudelem_s** elems, int* elemCount, struct hudelem_s* elemSrcArray, int elemSrcArrayCount) -> void
{
  return Zynamic::Forward<void (struct hudelem_s**, int*, struct hudelem_s*, int)>(L"CopyInUseHudElems")(elems, elemCount, elemSrcArray, elemSrcArrayCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compare_hudelems(const void* pe0, const void* pe1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compare_hudelems")(pe0, pe1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSortedHudElems(int localClientNum, struct hudelem_s** elems) -> int
{
  return Zynamic::Forward<int (int, struct hudelem_s**)>(L"GetSortedHudElems")(localClientNum, elems);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyInUseDebugHudElems(struct hudelem_s** elems, int* elemCount, struct game_hudelem_s* elemSrcArray, int elemSrcArrayCount) -> void
{
  return Zynamic::Forward<void (struct hudelem_s**, int*, struct game_hudelem_s*, int)>(L"CopyInUseDebugHudElems")(elems, elemCount, elemSrcArray, elemSrcArrayCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSortedDebugHudElems(struct hudelem_s** elems) -> int
{
  return Zynamic::Forward<int (struct hudelem_s**)>(L"GetSortedDebugHudElems")(elems);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2dHudElemList(struct hudelem_s** elems, int elemCount, int localClientNum, int foreground, bool playerAlive, bool inKillCam) -> void
{
  return Zynamic::Forward<void (struct hudelem_s**, int, int, int, bool, bool)>(L"CG_Draw2dHudElemList")(elems, elemCount, localClientNum, foreground, playerAlive, inKillCam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2dHudElems(int localClientNum, int foreground) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Draw2dHudElems")(localClientNum, foreground);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddDrawSurfForHudElemWaypoint(int localClientNum, const struct hudelem_s* elem) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*)>(L"AddDrawSurfForHudElemWaypoint")(localClientNum, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddDrawSurfsFor3dHudElems(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_AddDrawSurfsFor3dHudElems")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AddWaypoint(int localClientNum, const struct hudelem_s* elem) -> void
{
  return Zynamic::Forward<void (int, const struct hudelem_s*)>(L"RB_AddWaypoint")(localClientNum, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawWaypoints(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"RB_DrawWaypoints")(localClientNum);
}

#endif // __UNIMPLEMENTED__
