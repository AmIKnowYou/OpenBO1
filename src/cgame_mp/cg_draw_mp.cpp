//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_draw() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_draw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawChatMessages(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawChatMessages")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PriorityCenterPrint(int localClientNum, const char* str, int priority) -> void
{
  return Zynamic::Forward<void (int, const char*, int)>(L"CG_PriorityCenterPrint")(localClientNum, str, priority);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DisplayPlayerCard(int localClientNum, const struct clientInfo_t* attackerCI, const struct clientInfo_t* victimCI, bool wasKilled) -> void
{
  return Zynamic::Forward<void (int, const struct clientInfo_t*, const struct clientInfo_t*, bool)>(L"CG_DisplayPlayerCard")(localClientNum, attackerCI, victimCI, wasKilled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearCenterPrint(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearCenterPrint")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawCenterString(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, int)>(L"CG_DrawCenterString")(localClientNum, rect, font, fontscale, color, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerMovement(const struct usercmd_s oldCmd, const struct usercmd_s newCmd) -> int
{
  return Zynamic::Forward<int (const struct usercmd_s, const struct usercmd_s)>(L"CG_CheckPlayerMovement")(oldCmd, newCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerStanceChange(int localClientNum, class bitarray<51>* newButton_bits, class bitarray<51>* changedButton_bits) -> int
{
  return Zynamic::Forward<int (int, class bitarray<51>*, class bitarray<51>*)>(L"CG_CheckPlayerStanceChange")(localClientNum, newButton_bits, changedButton_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerTryReload(int localClientNum, class bitarray<51>* button_bits) -> int
{
  return Zynamic::Forward<int (int, class bitarray<51>*)>(L"CG_CheckPlayerTryReload")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerFireNonTurret(int localClientNum, class bitarray<51>* button_bits) -> int
{
  return Zynamic::Forward<int (int, class bitarray<51>*)>(L"CG_CheckPlayerFireNonTurret")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerWeaponUsage(int localClientNum, class bitarray<51>* button_bits) -> int
{
  return Zynamic::Forward<int (int, class bitarray<51>*)>(L"CG_CheckPlayerWeaponUsage")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerOffHandUsage(int localClientNum, class bitarray<51>* button_bits) -> int
{
  return Zynamic::Forward<int (int, class bitarray<51>*)>(L"CG_CheckPlayerOffHandUsage")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerMiscInput(class bitarray<51>* button_bits) -> int
{
  return Zynamic::Forward<int (class bitarray<51>*)>(L"CG_CheckPlayerMiscInput")(button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckForPlayerInput(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckForPlayerInput")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudHealthDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudHealthDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudAmmoDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudAmmoDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudCompassDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudCompassDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudStanceDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudStanceDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudSprintDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudSprintDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudOffHandDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudOffHandDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckHudObjectiveDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckHudObjectiveDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckVehicleControlsDisplay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckVehicleControlsDisplay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckTimedMenus(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CheckTimedMenus")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Electrified(int localClientNum, int durationMS) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Electrified")(localClientNum, durationMS);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearElectrified(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearElectrified")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Burn(int localClientNum, int durationMS) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Burn")(localClientNum, durationMS);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearBurn(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearBurn")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScreenBurn(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ScreenBurn")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScreenElectrified(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ScreenElectrified")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawMiniConsole(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawMiniConsole")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawErrorMessages(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawErrorMessages")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawSay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawVote(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawVote")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGenericOverlay(int SortIndex, int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CG_DrawGenericOverlay")(SortIndex, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawIntermission(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DrawIntermission")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetBoundSpectatorCommand(int localClientNum, const char** choices, const int choiceCount) -> const char*
{
  return Zynamic::Forward<const char* (int, const char**, const int)>(L"CG_GetBoundSpectatorCommand")(localClientNum, choices, choiceCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSpectatorMessage(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawSpectatorMessage")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsHardcoreMode(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"IsHardcoreMode")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AreAllPlayerNamesVisible(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_AreAllPlayerNamesVisible")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePlayerNamesInternal(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdatePlayerNamesInternal")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePlayerNames(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdatePlayerNames")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawViewmodelInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DrawViewmodelInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2DInternal(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Draw2DInternal")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2D(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Draw2D")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawActive(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawMissileCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawMissileCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddSceneTracerBeams(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_AddSceneTracerBeams")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GenerateSceneCodeMeshes(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_GenerateSceneCodeMeshes")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GenerateSceneVerts(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_GenerateSceneVerts")(localClientNum);
}

#endif // __UNIMPLEMENTED__
