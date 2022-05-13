//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_cgame() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cl_cgame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetScreenDimensions(int* width, int* height, float* aspect) -> void
{
  return Zynamic::Forward<void (int*, int*, float*)>(L"CL_GetScreenDimensions")(width, height, aspect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetScreenAspectRatioDisplayPixel() -> float
{
  return Zynamic::Forward<float ()>(L"CL_GetScreenAspectRatioDisplayPixel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetUserCmd(int localClientNum, int cmdNumber, struct usercmd_s* ucmd) -> int
{
  return Zynamic::Forward<int (int, int, struct usercmd_s*)>(L"CL_GetUserCmd")(localClientNum, cmdNumber, ucmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AdjustUserCmdAngles(int localClientNum, int cmdNumber, float* adjust) -> void
{
  return Zynamic::Forward<void (int, int, float*)>(L"CL_AdjustUserCmdAngles")(localClientNum, cmdNumber, adjust);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetCurrentCmdNumber(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CL_GetCurrentCmdNumber")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetCurrentSnapshotNumber(int localClientNum, int* snapshotNumber, int* serverTime) -> void
{
  return Zynamic::Forward<void (int, int*, int*)>(L"CL_GetCurrentSnapshotNumber")(localClientNum, snapshotNumber, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetSnapshot(int localClientNum, int snapshotNumber, struct snapshot_s* snapshot) -> int
{
  return Zynamic::Forward<int (int, int, struct snapshot_s*)>(L"CL_GetSnapshot")(localClientNum, snapshotNumber, snapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetUserCmdWeapons(int localClientNum, int weapon, int offHandIndex, int lastWeaponForAlt) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"CL_SetUserCmdWeapons")(localClientNum, weapon, offHandIndex, lastWeaponForAlt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetUserCmdAimValues(int localClientNum, const float* kickAngles) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"CL_SetUserCmdAimValues")(localClientNum, kickAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetUserCmdOrigin(int localClientNum, const float* origin, const float* velocity, const float* viewangles, int bobCycle, int movementDir) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const float*, int, int)>(L"CL_SetUserCmdOrigin")(localClientNum, origin, velocity, viewangles, bobCycle, movementDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetUserCmdVehicle(int localClientNum, bool inVehicle, const float* origin, const float* angles, const float* tVelocity, const float* aVelocity) -> void
{
  return Zynamic::Forward<void (int, bool, const float*, const float*, const float*, const float*)>(L"CL_SetUserCmdVehicle")(localClientNum, inVehicle, origin, angles, tVelocity, aVelocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetFOVSensitivityScale(int localClientNum, float scale) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CL_SetFOVSensitivityScale")(localClientNum, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetExtraButtons(int localClientNum, class bitarray<51>* button_bits) -> void
{
  return Zynamic::Forward<void (int, class bitarray<51>*)>(L"CL_SetExtraButtons")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConfigstringModified(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ConfigstringModified")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DumpReliableCommands(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_DumpReliableCommands")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CGameNeedsServerCommand(int localClientNum, int serverCommandNumber) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CL_CGameNeedsServerCommand")(localClientNum, serverCommandNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetExpectedHunkUsage(const char* mapname) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CL_SetExpectedHunkUsage")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CM_LoadMap(const char* mapname) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CL_CM_LoadMap")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownCGame(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ShutdownCGame")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownAllClientsCGame() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownAllClientsCGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DObjCreateSkelForBone(struct DObj* obj, int boneIndex, struct DObjAnimMat** pMatOut) -> int
{
  return Zynamic::Forward<int (struct DObj*, int, struct DObjAnimMat**)>(L"CL_DObjCreateSkelForBone")(obj, boneIndex, pMatOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SubtitlePrint(int localClientNum, const char* text, int duration, int lineWidth) -> void
{
  return Zynamic::Forward<void (int, const char*, int, int)>(L"CL_SubtitlePrint")(localClientNum, text, duration, lineWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetConfigString(int configStringIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CL_GetConfigString")(configStringIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FinishLoadingModels() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FinishLoadingModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetDebugViewForward(float* forward) -> void
{
  return Zynamic::Forward<void (float*)>(L"CL_GetDebugViewForward")(forward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetDebugViewPos(float* pos) -> void
{
  return Zynamic::Forward<void (float*)>(L"CL_GetDebugViewPos")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RenderScene(const struct refdef_s* fd, int frameTime) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, int)>(L"CL_RenderScene")(fd, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RenderMissileCam(const struct refdef_s* fd, int frameTime) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, int)>(L"CL_RenderMissileCam")(fd, frameTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetCustomConstant(unsigned int type, const float* vec) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"CL_SetCustomConstant")(type, vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicPhysical(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicPhysical")(x, y, w, h, s1, t1, s2, t2, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicPhysicalW(float x, float y, float w0, float w, float h, float s1, float t1, float s2, float t2, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicPhysicalW")(x, y, w0, w, h, s1, t1, s2, t2, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicPhysicalRotateXY(float x, float y, float w, float h, float s1, float t1, float s2, float t2, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicPhysicalRotateXY")(x, y, w, h, s1, t1, s2, t2, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicPhysicalRotateXYW(float x, float y, float w0, float w, float h, float s1, float t1, float s2, float t2, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicPhysicalRotateXYW")(x, y, w0, w, h, s1, t1, s2, t2, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicW(const struct ScreenPlacement* scrPlace, float x, float y, float w0, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, float, int, int, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicW")(scrPlace, x, y, w0, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPic(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPic")(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicRotatedST(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float centerS, float centerT, float radiusST, float scaleFinalS, float scaleFinalT, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicRotatedST")(scrPlace, x, y, w, h, horzAlign, vertAlign, centerS, centerT, radiusST, scaleFinalS, scaleFinalT, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawStretchPicRotatedXY(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, float angle, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, float, const float*, struct Material*)>(L"CL_DrawStretchPicRotatedXY")(scrPlace, x, y, w, h, angle, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CapTurnRate(int localClientNum, float maxPitchSpeed, float maxYawSpeed) -> void
{
  return Zynamic::Forward<void (int, float, float)>(L"CL_CapTurnRate")(localClientNum, maxPitchSpeed, maxYawSpeed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetViewAngles(int localClientNum, const float* angles) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"CL_SetViewAngles")(localClientNum, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AdjustViewAngles(int localClientNum, const float* adjust) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"CL_AdjustViewAngles")(localClientNum, adjust);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ClampViewAngle(int localClientNum, const int angle, const float min, const float max) -> void
{
  return Zynamic::Forward<void (int, const int, const float, const float)>(L"CL_ClampViewAngle")(localClientNum, angle, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SyncTimes(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_SyncTimes")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadWorld(const char* mapname) -> int
{
  return Zynamic::Forward<int (const char*)>(L"LoadWorld")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateLevelHunkUsage() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateLevelHunkUsage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_StartLoading(const char* mapname, const char* gametype) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"CL_StartLoading")(mapname, gametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitCGame(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_InitCGame")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RestartCGame(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_RestartCGame")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AdjustTimeDelta(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_AdjustTimeDelta")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FirstSnapshot(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_FirstSnapshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_TimeDemoLogBaseName(const char* mapname) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"CL_TimeDemoLogBaseName")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateTimeDemo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_UpdateTimeDemo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateDemoPlaybackSpeed(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_UpdateDemoPlaybackSpeed")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetCGameTime(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_SetCGameTime")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetADS(int localClientNum, bool ads) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CL_SetADS")(localClientNum, ads);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawString(int x, int y, const char* pszString, int bShadow, int iCharHeight) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int, int)>(L"CL_DrawString")(x, y, pszString, bShadow, iCharHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_LookupColor(unsigned char c, float* color) -> void
{
  return Zynamic::Forward<void (unsigned char, float*)>(L"CL_LookupColor")(c, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateColor() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateColor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsServerRestarting(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_IsServerRestarting")(localClientNum);
}

#endif // __UNIMPLEMENTED__
