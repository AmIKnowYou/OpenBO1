//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Dtp_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Dtp_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_CalcSurfaceType(struct pmove_t* pm, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*)>(L"Dtp_CalcSurfaceType")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_IsSliding(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"Dtp_IsSliding")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_AdjustDamage(const struct playerState_s* ps, float fallHeight, int* damage) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float, int*)>(L"Dtp_AdjustDamage")(ps, fallHeight, damage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_Start(struct pmove_t* pm, struct pml_t* pml, float _height) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, float)>(L"Dtp_Start")(pm, pml, _height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_End(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"Dtp_End")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_Interrupt(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"Dtp_Interrupt")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_CheckForEnd(struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct pmove_t*)>(L"Dtp_CheckForEnd")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_ReduceFriction(struct pmove_t* pm, const struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (struct pmove_t*, const struct playerState_s*)>(L"Dtp_ReduceFriction")(pm, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_AirMove(struct playerState_s* ps, const struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, const struct pmove_t*)>(L"Dtp_AirMove")(ps, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_CanMove(struct pmove_t* pm) -> int
{
  return Zynamic::Forward<int (struct pmove_t*)>(L"Dtp_CanMove")(pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_IsDtp(const struct pmove_t* pm, const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct pmove_t*, const struct playerState_s*)>(L"Dtp_IsDtp")(pm, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dtp_Update(struct pmove_t* pm, struct pml_t* pml) -> int
{
  return Zynamic::Forward<int (struct pmove_t*, struct pml_t*)>(L"Dtp_Update")(pm, pml);
}

#endif // __UNIMPLEMENTED__
