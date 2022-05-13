//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Jump_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Jump_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_ClearState(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Jump_ClearState")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_GetStepHeight(struct playerState_s* ps, const float* origin, float* stepSize) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*, const float*, float*)>(L"Jump_GetStepHeight")(ps, origin, stepSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_IsPlayerAboveMax(struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*)>(L"Jump_IsPlayerAboveMax")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_ActivateSlowdown(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Jump_ActivateSlowdown")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_ApplySlowdown(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Jump_ApplySlowdown")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_GetSlowdownFriction(struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (struct playerState_s*)>(L"Jump_GetSlowdownFriction")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_ReduceFriction(struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (struct playerState_s*)>(L"Jump_ReduceFriction")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_ClampVelocity(struct playerState_s* ps, const float* origin) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, const float*)>(L"Jump_ClampVelocity")(ps, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_GetLandFactor(struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (struct playerState_s*)>(L"Jump_GetLandFactor")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_Start(struct pmove_t* pm, struct pml_t* pml, float height) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, float)>(L"Jump_Start")(pm, pml, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_PushOffLadder(struct playerState_s* ps, struct pml_t* pml, struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pml_t*, struct pmove_t*)>(L"Jump_PushOffLadder")(ps, pml, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_AddSurfaceEvent(struct playerState_s* ps, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct pml_t*)>(L"Jump_AddSurfaceEvent")(ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jump_Check(struct pmove_t* pm, struct pml_t* pml) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*)>(L"Jump_Check")(pm, pml);
}

#endif // __UNIMPLEMENTED__
