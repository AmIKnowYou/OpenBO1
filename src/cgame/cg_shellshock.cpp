//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CubicInterpolate(float t, float x0, float x1, float x2, float x3) -> float
{
  return Zynamic::Forward<float (float, float, float, float, float)>(L"CubicInterpolate")(t, x0, x1, x2, x3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PerturbCamera(struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (struct cg_s*)>(L"CG_PerturbCamera")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SaveScreenToBuffer(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SaveScreenToBuffer")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawShellShockSavedScreenBlendBlurred(int localClientNum, const struct shellshock_parms_t* parms, int start, int duration) -> int
{
  return Zynamic::Forward<int (int, const struct shellshock_parms_t*, int, int)>(L"CG_DrawShellShockSavedScreenBlendBlurred")(localClientNum, parms, start, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BlendSmooth(float percent) -> float
{
  return Zynamic::Forward<float (float)>(L"BlendSmooth")(percent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawShellShockSavedScreenBlendFlashed(int localClientNum, const struct shellshock_parms_t* parms, int start, int duration) -> int
{
  return Zynamic::Forward<int (int, const struct shellshock_parms_t*, int, int)>(L"CG_DrawShellShockSavedScreenBlendFlashed")(localClientNum, parms, start, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndShellShockSound(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"EndShellShockSound")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndShellShockLookControl(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"EndShellShockLookControl")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndShellShockCamera(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"EndShellShockCamera")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndShellShockScreen(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"EndShellShockScreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndShellShock(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"EndShellShock")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateShellShockSound(int localClientNum, const struct shellshock_parms_t* parms, int time, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct shellshock_parms_t*, int, int)>(L"UpdateShellShockSound")(localClientNum, parms, time, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateShellShockLookControl(int localClientNum, const struct shellshock_parms_t* parms, int time, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct shellshock_parms_t*, int, int)>(L"UpdateShellShockLookControl")(localClientNum, parms, time, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateShellShockCamera(int localClientNum, const struct shellshock_parms_t* parms, int time, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct shellshock_parms_t*, int, int)>(L"UpdateShellShockCamera")(localClientNum, parms, time, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateShellShockVisionSet(int localClientNum, const struct shellshock_parms_t* parms, int time, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct shellshock_parms_t*, int, int)>(L"UpdateShellShockVisionSet")(localClientNum, parms, time, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateShellShock(int localClientNum, const struct shellshock_parms_t* parms, int start, int duration) -> void
{
  return Zynamic::Forward<void (int, const struct shellshock_parms_t*, int, int)>(L"CG_UpdateShellShock")(localClientNum, parms, start, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StartShellShock(struct cg_s* cgameGlob, const struct shellshock_parms_t* parms, int start, int duration) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const struct shellshock_parms_t*, int, int)>(L"CG_StartShellShock")(cgameGlob, parms, start, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flashbanged(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_Flashbanged")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flared(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_Flared")(localClientNum);
}

#endif // __UNIMPLEMENTED__
