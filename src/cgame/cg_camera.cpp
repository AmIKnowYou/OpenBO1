//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto InterpolateAnglesSmooth(float* curAngles, const float* initialAngles, const float* targetAngles, float t) -> void
{
  return Zynamic::Forward<void (float*, const float*, const float*, float)>(L"InterpolateAnglesSmooth")(curAngles, initialAngles, targetAngles, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InterpolatePositionSmooth(float* curPos, const float* initialPos, const float* targetPos, float t) -> void
{
  return Zynamic::Forward<void (float*, const float*, const float*, float)>(L"InterpolatePositionSmooth")(curPos, initialPos, targetPos, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StartCameraTween(int localClientNum, float tweenTime) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_StartCameraTween")(localClientNum, tweenTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCameraTweenFOV(int localClientNum, float currentFov) -> float
{
  return Zynamic::Forward<float (int, float)>(L"CG_UpdateCameraTweenFOV")(localClientNum, currentFov);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCameraTween(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateCameraTween")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldStartCameraTween(int localClientNum, float tweenTime) -> bool
{
  return Zynamic::Forward<bool (int, float)>(L"CG_ShouldStartCameraTween")(localClientNum, tweenTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleInitView(int localClientNum, enum CameraMode newMode) -> void
{
  return Zynamic::Forward<void (int, enum CameraMode)>(L"CG_UpdateVehicleInitView")(localClientNum, newMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCameraTransition(int localClientNum, enum CameraMode oldMode, enum CameraMode newMode, bool useTagCamera) -> void
{
  return Zynamic::Forward<void (int, enum CameraMode, enum CameraMode, bool)>(L"CG_UpdateCameraTransition")(localClientNum, oldMode, newMode, useTagCamera);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RemapVehicleButton(int localClientNum, int* twokeys, int button) -> int
{
  return Zynamic::Forward<int (int, int*, int)>(L"CG_RemapVehicleButton")(localClientNum, twokeys, button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleBindings(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateVehicleBindings")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RenderPlayerFromMissilePOV(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_RenderPlayerFromMissilePOV")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtraCamViewActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ExtraCamViewActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDoCameraTransition(struct cg_s* cgameGlob, enum CameraMode prevMode, enum CameraMode newMode, bool useTagCamera) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, enum CameraMode, enum CameraMode, bool)>(L"ShouldDoCameraTransition")(cgameGlob, prevMode, newMode, useTagCamera);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCameraMode(int localClientNum) -> enum CameraMode
{
  return Zynamic::Forward<enum CameraMode (int)>(L"CG_UpdateCameraMode")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateExtraCamMode(int localClientNum) -> enum CameraMode
{
  return Zynamic::Forward<enum CameraMode (int)>(L"CG_UpdateExtraCamMode")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ApplyViewAnimation(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ApplyViewAnimation")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldDefaultViewFov(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ShouldDefaultViewFov")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetViewFov(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetViewFov")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcFov(int localClientNum, float fov_x) -> void
{
  return Zynamic::Forward<void (int, float)>(L"CG_CalcFov")(localClientNum, fov_x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalculateGunnerOffset_Sway(const float* playerViewAngles, int weapon, float* swayViewAngles, float* swayOffset, float* swayAngles, float ssSwayScale, int frametime) -> void
{
  return Zynamic::Forward<void (const float*, int, float*, float*, float*, float, int)>(L"CG_CalculateGunnerOffset_Sway")(playerViewAngles, weapon, swayViewAngles, swayOffset, swayAngles, ssSwayScale, frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetVehicleGunner(int localClientNum, struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (int, struct cg_s*)>(L"CG_OffsetVehicleGunner")(localClientNum, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetVehicleAnimCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_OffsetVehicleAnimCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetExtraCamOrigin(int localClientNum, float* out) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"CG_GetExtraCamOrigin")(localClientNum, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcExtraCamViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcExtraCamViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcMissileViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcMissileViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMissileViewOrigin(int localClientNum, float* out) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"CG_GetMissileViewOrigin")(localClientNum, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcMissileAngleValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcMissileAngleValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcVehicleViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcVehicleViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Calc3rdPersonSpringDamp(float* currPos, float* trgPos, float* prevTrgPos, float deltaTime, float springConst, float dampConst, float springLen, float* newPos) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float, float, float, float, float*)>(L"CG_Calc3rdPersonSpringDamp")(currPos, trgPos, prevTrgPos, deltaTime, springConst, dampConst, springLen, newPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPitchOffsetRelativeToADirection(float* angles, float* direction) -> float
{
  return Zynamic::Forward<float (float*, float*)>(L"GetPitchOffsetRelativeToADirection")(angles, direction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Calc3rdPersonVehicleViewValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Calc3rdPersonVehicleViewValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OffsetVehicleView(int localClientNum, enum CameraMode camMode) -> void
{
  return Zynamic::Forward<void (int, enum CameraMode)>(L"CG_OffsetVehicleView")(localClientNum, camMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ThirdPerson_TraceCalcEndpos(const float* start, const float* end, const float fraction, float* endpos) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, float*)>(L"ThirdPerson_TraceCalcEndpos")(start, end, fraction, endpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ThirdPersonViewTrace(struct cg_s* cgameGlob, const float* start, const float* end, int contentMask, float* result, bool pitch_up, bool ignoreStartSolid) -> float
{
  return Zynamic::Forward<float (struct cg_s*, const float*, const float*, int, float*, bool, bool)>(L"ThirdPersonViewTrace")(cgameGlob, start, end, contentMask, result, pitch_up, ignoreStartSolid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MovieCameraViewTrace(int localClientNum, int contentMask) -> void
{
  return Zynamic::Forward<void (int, int)>(L"MovieCameraViewTrace")(localClientNum, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScrCamActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ScrCamActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCam_CalcOrientDir(float* lookAtVec, struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (float*, struct cg_s*)>(L"ScrCam_CalcOrientDir")(lookAtVec, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrCam_CalcOrientOrigin(const float* lookAtVec, struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (const float*, struct cg_s*)>(L"ScrCam_CalcOrientOrigin")(lookAtVec, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScrCamCalcView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ScrCamCalcView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MovieCamCalcView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_MovieCamCalcView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RadiantCamCalcView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_RadiantCamCalcView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtraCamDebug_SetView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ExtraCamDebug_SetView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtraCamDebug_SaveView(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ExtraCamDebug_SaveView")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcFov_ExtraCam(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CalcFov_ExtraCam")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtraCam_GetViewOrigin(int localClientNum, float* out) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"CG_ExtraCam_GetViewOrigin")(localClientNum, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtraCamIsActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ExtraCamIsActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ExtraCamClientStateRestore::ExtraCamClientStateRestore(int localClientNum) -> void
{
  return Zynamic::Forward<public void (int)>(L"ExtraCamClientStateRestore::ExtraCamClientStateRestore")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ExtraCamClientStateRestore::~ExtraCamClientStateRestore() -> void
{
  return Zynamic::Forward<public void ()>(L"ExtraCamClientStateRestore::~ExtraCamClientStateRestore")();
}

#endif // __UNIMPLEMENTED__
