//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Mantle_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Mantle_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_DebugPrint(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Mantle_DebugPrint")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trans_GetUpIndex(const int transIndex) -> int
{
  return Zynamic::Forward<int (const int)>(L"Trans_GetUpIndex")(transIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trans_GetOverIndex(const int transIndex) -> int
{
  return Zynamic::Forward<int (const int)>(L"Trans_GetOverIndex")(transIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trans_GetHeight(const int transIndex) -> float
{
  return Zynamic::Forward<float (const int)>(L"Trans_GetHeight")(transIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetUpLength(const struct MantleState* mstate) -> int
{
  return Zynamic::Forward<int (const struct MantleState*)>(L"Mantle_GetUpLength")(mstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetOverLength(const struct MantleState* mstate) -> int
{
  return Zynamic::Forward<int (const struct MantleState*)>(L"Mantle_GetOverLength")(mstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetAnim(struct MantleState* mstate) -> int
{
  return Zynamic::Forward<int (struct MantleState*)>(L"Mantle_GetAnim")(mstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetAnimDelta(struct MantleState* mstate, int time, float* delta) -> void
{
  return Zynamic::Forward<void (struct MantleState*, int, float*)>(L"Mantle_GetAnimDelta")(mstate, time, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_FindTransition(float curHeight, float goalHeight) -> int
{
  return Zynamic::Forward<int (float, float)>(L"Mantle_FindTransition")(curHeight, goalHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_CalcEndPos(struct pmove_t* pm, struct MantleResults* mresults) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct MantleResults*)>(L"Mantle_CalcEndPos")(pm, mresults);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_SetHaveWeapon(struct MantleState* mstate, const struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct MantleState*, const struct playerState_s*)>(L"Mantle_SetHaveWeapon")(mstate, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_Start(struct pmove_t* pm, struct playerState_s* ps, struct MantleResults* mresults) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct playerState_s*, struct MantleResults*)>(L"Mantle_Start")(pm, ps, mresults);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mount_CheckProne(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"Mount_CheckProne")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mount_CheckLedge(struct pmove_t* pm, struct pml_t* pml, struct MantleResults* mresults) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*, struct MantleResults*)>(L"Mount_CheckLedge")(pm, pml, mresults);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_CheckLedge(struct pmove_t* pm, struct pml_t* pml, struct MantleResults* mresults, float height) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*, struct MantleResults*, float)>(L"Mantle_CheckLedge")(pm, pml, mresults, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_CreateAnims(function* xanimAlloc) -> void
{
  return Zynamic::Forward<void (function *)>(L"Mantle_CreateAnims")(xanimAlloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_ShutdownAnims() -> void
{
  return Zynamic::Forward<void ()>(L"Mantle_ShutdownAnims")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_FindMantleSurface(struct pmove_t* pm, struct pml_t* pml, struct trace_t* trace, float* mantleDir) -> bool
{
  return Zynamic::Forward<bool (struct pmove_t*, struct pml_t*, struct trace_t*, float*)>(L"Mantle_FindMantleSurface")(pm, pml, trace, mantleDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_Check(struct pmove_t* pm, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct pml_t*)>(L"Mantle_Check")(pm, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_Move(struct pmove_t* pm, struct playerState_s* ps, struct pml_t* pml) -> void
{
  return Zynamic::Forward<void (struct pmove_t*, struct playerState_s*, struct pml_t*)>(L"Mantle_Move")(pm, ps, pml);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_CapView(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Mantle_CapView")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_ClearHint(struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct playerState_s*)>(L"Mantle_ClearHint")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_IsWeaponInactive(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"Mantle_IsWeaponInactive")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_IsWeaponEquipped(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"Mantle_IsWeaponEquipped")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_DoAnim(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"Mantle_DoAnim")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetDuration(const struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*)>(L"Mantle_GetDuration")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mantle_GetMantleFrac(const struct playerState_s* ps) -> float
{
  return Zynamic::Forward<float (const struct playerState_s*)>(L"Mantle_GetMantleFrac")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mount_CanPlayerDeployTurret(struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (struct playerState_s*)>(L"Mount_CanPlayerDeployTurret")(ps);
}

#endif // __UNIMPLEMENTED__
