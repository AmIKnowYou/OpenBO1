//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_view() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_view")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWaterTrail(int localClientNum, const float* pos, float waterHeight) -> void
{
  return Zynamic::Forward<void (int, const float*, float)>(L"CG_DrawWaterTrail")(localClientNum, pos, waterHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetNextRippleTime(struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (struct centity_s*)>(L"CG_GetNextRippleTime")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetNextRippleTime(struct centity_s* cent, int time, float speed, bool in_water) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int, float, bool)>(L"CG_SetNextRippleTime")(cent, time, speed, in_water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetNextWaterCheck(struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (struct centity_s*)>(L"CG_GetNextWaterCheck")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetNextWaterCheck(struct centity_s* cent, int time, bool in_water) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int, bool)>(L"CG_SetNextWaterCheck")(cent, time, in_water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetCentWaterHeight(struct centity_s* cent, float height) -> void
{
  return Zynamic::Forward<void (struct centity_s*, float)>(L"CG_SetCentWaterHeight")(cent, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetCentWaterHeight(struct centity_s* cent) -> float
{
  return Zynamic::Forward<float (struct centity_s*)>(L"CG_GetCentWaterHeight")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWaterTrail(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_DrawWaterTrail")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWaterTrail(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawWaterTrail")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayTestFx(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_PlayTestFx")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTestFX(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateTestFX")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FxSetTestPosition() -> void
{
  return Zynamic::Forward<void ()>(L"CG_FxSetTestPosition")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FxTest() -> void
{
  return Zynamic::Forward<void ()>(L"CG_FxTest")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DevSaveCamera(float* angles, float* origin) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"CG_DevSaveCamera")(angles, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetChaseCamView(int localClientNum, enum CameraMode camMode) -> void
{
  return Zynamic::Forward<void (int, enum CameraMode)>(L"CG_OffsetChaseCamView")(localClientNum, camMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetThirdPersonView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_OffsetThirdPersonView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcVrect(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcVrect")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcVrect_ExtraCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcVrect_ExtraCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SmoothCameraZ(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_SmoothCameraZ")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_KickAngles(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_KickAngles")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetFirstPersonView(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_OffsetFirstPersonView")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcCubemapViewValues(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_CalcCubemapViewValues")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcTurretViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcTurretViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ViewRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ViewRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateKillCamEntityViewOffset(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateKillCamEntityViewOffset")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerKillCamEntityLookAt(int localClientNum, float* lookAtPos) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"CG_GetPlayerKillCamEntityLookAt")(localClientNum, lookAtPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetKillCamEntityOrgAngles(int localClientNum, float* origin, float* angles) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"CG_GetKillCamEntityOrgAngles")(localClientNum, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LookAtAxisAndDistance(const float* origin, const float* lookAt, float* axis[0x3]) -> float
{
  return Zynamic::Forward<float (const float*, const float*, float*[0x3])>(L"LookAtAxisAndDistance")(origin, lookAt, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LookAtBothPoints(const float* point1, const float* point2, const float* campos, float* lookaxis[0x3]) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*, float*[0x3])>(L"LookAtBothPoints")(point1, point2, campos, lookaxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTurretKillCam(float distance, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (float, struct GfxDepthOfField*)>(L"CG_UpdateTurretKillCam")(distance, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetTurretEntityOrgAngles(int localClientNum, float* origin, float* angles) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"CG_GetTurretEntityOrgAngles")(localClientNum, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTurretKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateTurretKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetKillCamVehicleInfo(int localClientNum) -> const struct vehicle_info_t*
{
  return Zynamic::Forward<const struct vehicle_info_t* (int)>(L"CG_GetKillCamVehicleInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleKillCamDof(const struct vehicle_info_t* info, float distance, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (const struct vehicle_info_t*, float, struct GfxDepthOfField*)>(L"CG_UpdateVehicleKillCamDof")(info, distance, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateVehicleKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateHelicopterKillCamDof(float distance, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (float, struct GfxDepthOfField*)>(L"CG_UpdateHelicopterKillCamDof")(distance, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateHelicopterKillCam(enum KillCamEntityType killCamEntityType, int localClientNum) -> void
{
  return Zynamic::Forward<void (enum KillCamEntityType, int)>(L"CG_UpdateHelicopterKillCam")(killCamEntityType, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateScriptedKillCamDof(float distance, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (float, struct GfxDepthOfField*)>(L"CG_UpdateScriptedKillCamDof")(distance, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateScriptedKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateScriptedKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateDestructibleKillCamDof(float distance, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (float, struct GfxDepthOfField*)>(L"CG_UpdateDestructibleKillCamDof")(distance, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateDestructibleKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateDestructibleKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RewindTrace(struct trace_t* trace, const float* start, const float* end, const float amount) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float)>(L"RewindTrace")(trace, start, end, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugTraceLine(float* start, float* end, float frac, const float* color) -> void
{
  return Zynamic::Forward<void (float*, float*, float, const float*)>(L"DebugTraceLine")(start, end, frac, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_KillcamCameraTrace(const float* originalBombOrigin, const float* bombAngles, const float* desiredCamPos, int passEntIndex, enum KillCamEntityRestState killCamEntityRestState, float* campos) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int, enum KillCamEntityRestState, float*)>(L"CG_KillcamCameraTrace")(originalBombOrigin, bombAngles, desiredCamPos, passEntIndex, killCamEntityRestState, campos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateExplosiveKillCam(int localClientNum, enum KillCamEntityType killCamEntityType, float upDist, float backDist, float outDist, float sideDist, float groundUp, float groundBack) -> void
{
  return Zynamic::Forward<void (int, enum KillCamEntityType, float, float, float, float, float, float)>(L"CG_UpdateExplosiveKillCam")(localClientNum, killCamEntityType, upDist, backDist, outDist, sideDist, groundUp, groundBack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateArtilleryKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateArtilleryKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateDogKillCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateDogKillCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_KillCamEntityEnabled(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_KillCamEntityEnabled")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CacheKillCamEntityPose(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"CG_CacheKillCamEntityPose")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CacheKillCamLookAtEntityOrigin(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"CG_CacheKillCamLookAtEntityOrigin")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateKillCamEntityCache(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UpdateKillCamEntityCache")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpKillCamView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"LerpKillCamView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateKillCamEntity(enum KillCamEntityType killCamEntityType, int localClientNum) -> void
{
  return Zynamic::Forward<void (enum KillCamEntityType, int)>(L"CG_UpdateKillCamEntity")(killCamEntityType, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldRenderThirdPerson(enum CameraMode camMode) -> bool
{
  return Zynamic::Forward<bool (enum CameraMode)>(L"CG_ShouldRenderThirdPerson")(camMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcViewValues_ExtraCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcViewValues_ExtraCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateEntInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateEntInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateIKTiming(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateIKTiming")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateThirdPerson(int localClientNum, bool forExtraCam) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CG_UpdateThirdPerson")(localClientNum, forExtraCam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_InitView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalClientViewParams(int localClientNum, int activeClientIndex, int activeClientCountArrayIndex) -> const struct ClientViewParams*
{
  return Zynamic::Forward<const struct ClientViewParams* (int, int, int)>(L"CG_GetLocalClientViewParams")(localClientNum, activeClientIndex, activeClientCountArrayIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalClientViewParams(int localClientNum) -> const struct ClientViewParams*
{
  return Zynamic::Forward<const struct ClientViewParams* (int)>(L"CG_GetLocalClientViewParams")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCeilingHeight(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"GetCeilingHeight")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DumpAnims(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DumpAnims")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawShellshockBlend(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DrawShellshockBlend")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateRemoteControlEntityViewOffset(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateRemoteControlEntityViewOffset")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewOffset(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateViewOffset")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateAdsDofValue(float currentValue, float targetValue, float maxChange, float dt) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"CG_UpdateAdsDofValue")(currentValue, targetValue, maxChange, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTimeScale(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateTimeScale")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDoDefaultAdsDof(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"ShouldDoDefaultAdsDof")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateAdsDof(int localClientNum, struct GfxDepthOfField* dof) -> void
{
  return Zynamic::Forward<void (int, struct GfxDepthOfField*)>(L"CG_UpdateAdsDof")(localClientNum, dof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateSceneDepthOfField(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateSceneDepthOfField")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePoisonFX(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_UpdatePoisonFX")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateGenericFilter(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_UpdateGenericFilter")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWaterSheetingFX(struct cg_s* cgameGlob, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct cg_s*, int)>(L"CG_UpdateWaterSheetingFX")(cgameGlob, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateFlameFX(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_UpdateFlameFX")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupFlameFX(int localClientNum, int enable) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_SetupFlameFX")(localClientNum, enable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateElectrifiedFX(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_UpdateElectrifiedFX")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupElectrifiedFX(int localClientNum, int enable) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_SetupElectrifiedFX")(localClientNum, enable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PickValidWeaponSelect(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_PickValidWeaponSelect")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ValidateWeaponSelect(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_ValidateWeaponSelect")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsInfrared(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_IsInfrared")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsTvguided(int localClientNum, bool onlyADS) -> bool
{
  return Zynamic::Forward<bool (int, bool)>(L"CG_IsTvguided")(localClientNum, onlyADS);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawActiveFrame(int localClientNum, int serverTime, enum DemoType demoType, enum CubemapShot cubemapShot, int cubemapSize, int renderScreen) -> int
{
  return Zynamic::Forward<int (int, int, enum DemoType, enum CubemapShot, int, int)>(L"CG_DrawActiveFrame")(localClientNum, serverTime, demoType, cubemapShot, cubemapSize, renderScreen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawExtraCamFrame(int localClientNum, int serverTime, enum DemoType demoType, enum CubemapShot cubemapShot, int cubemapSize, int renderScreen) -> int
{
  return Zynamic::Forward<int (int, int, enum DemoType, enum CubemapShot, int, int)>(L"CG_DrawExtraCamFrame")(localClientNum, serverTime, demoType, cubemapShot, cubemapSize, renderScreen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearSaveScreenFx(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearSaveScreenFx")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SaveScreen(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SaveScreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SaveScreenSection(float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId) -> void
{
  return Zynamic::Forward<void (float, float, float, float, int)>(L"CG_SaveScreenSection")(viewX, viewY, viewWidth, viewHeight, screenTimerId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BlendSavedScreenShockBlurred(int fadeMsec, float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, int)>(L"CG_BlendSavedScreenShockBlurred")(fadeMsec, viewX, viewY, viewWidth, viewHeight, screenTimerId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BlendSavedScreenShockFlashed(int localClientNum, float intensityWhiteout, float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, float, float)>(L"CG_BlendSavedScreenShockFlashed")(localClientNum, intensityWhiteout, intensityScreengrab, viewX, viewY, viewWidth, viewHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetFullscreenFX(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ResetFullscreenFX")(localClientNum);
}

#endif // __UNIMPLEMENTED__
