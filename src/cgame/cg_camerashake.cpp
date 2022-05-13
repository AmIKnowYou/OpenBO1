//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_camerashake() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_camerashake")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateCameraShake(const struct cg_s* cgameGlob, struct CameraShake* shake) -> int
{
  return Zynamic::Forward<int (const struct cg_s*, struct CameraShake*)>(L"CG_UpdateCameraShake")(cgameGlob, shake);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StartShakeCamera(int localClientNum, float p, int duration, float* src, float radius) -> void
{
  return Zynamic::Forward<void (int, float, int, float*, float)>(L"CG_StartShakeCamera")(localClientNum, p, duration, src, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShakeCamera(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ShakeCamera")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearCameraShakes(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearCameraShakes")(localClientNum);
}

#endif // __UNIMPLEMENTED__
