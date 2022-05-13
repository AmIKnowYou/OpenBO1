//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_draw_names() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_draw_names")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearOverheadFade() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClearOverheadFade")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearPlayerDetails() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClearPlayerDetails")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitPlayerDetails(int localClientNum, int targetClientNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_InitPlayerDetails")(localClientNum, targetClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetViewAxisProjections(const struct refdef_s* refdef, const float* worldPoint, float* projections) -> void
{
  return Zynamic::Forward<void (const struct refdef_s*, const float*, float*)>(L"CG_GetViewAxisProjections")(refdef, worldPoint, projections);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcNamePosition(int localClientNum, float* origin, float* xOut, float* yOut) -> bool
{
  return Zynamic::Forward<bool (int, float*, float*, float*)>(L"CG_CalcNamePosition")(localClientNum, origin, xOut, yOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcVehicleNamePosition(int localClientNum, const struct centity_s* cent, float& origin[0x3]) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, float&[0x3])>(L"CG_CalcVehicleNamePosition")(localClientNum, cent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawOverheadNames(int localClientNum, const struct centity_s* cent, float alpha, int mode) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, float, int)>(L"CG_DrawOverheadNames")(localClientNum, cent, alpha, mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeCrosshairNameAlpha(const int time, int startMsec, int lastMsec, int fadeInMsec, int fadeOutMsec) -> float
{
  return Zynamic::Forward<float (const int, int, int, int, int)>(L"CG_FadeCrosshairNameAlpha")(time, startMsec, lastMsec, fadeInMsec, fadeOutMsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TraceEntIsEntity(int traceEnt, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*)>(L"CG_TraceEntIsEntity")(traceEnt, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CanSeeFriendlyHead(int localClientNum, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*)>(L"CG_CanSeeFriendlyHead")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckIfDrivingRemoteControlVehicle(int localClientNum, unsigned short EntId) -> int
{
  return Zynamic::Forward<int (int, unsigned short)>(L"CG_CheckIfDrivingRemoteControlVehicle")(localClientNum, EntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScanForCrosshairEntityInternal(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ScanForCrosshairEntityInternal")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScanForCrosshairEntity(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ScanForCrosshairEntity")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compareEntityDist(const void* v1, const void* v2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compareEntityDist")(v1, v2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddDrawName(int localClientNum, int entnum, float alpha, int teamIndicator) -> void
{
  return Zynamic::Forward<void (int, int, float, int)>(L"CG_AddDrawName")(localClientNum, entnum, alpha, teamIndicator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawNames(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawNames")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetTeamIndicator(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_GetTeamIndicator")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsValidCrosshairEntity(int localClientNum, const struct cg_s* cgameGlob, const struct centity_s* cent, int entNum) -> bool
{
  return Zynamic::Forward<bool (int, const struct cg_s*, const struct centity_s*, int)>(L"CG_IsValidCrosshairEntity")(localClientNum, cgameGlob, cent, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDrawCrosshairNames(const struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*)>(L"ShouldDrawCrosshairNames")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawCrosshairNames(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawCrosshairNames")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShouldDrawFriendlyName(int localClientNum, const struct centity_s* cent, int entnum, int team) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*, int, int)>(L"ShouldDrawFriendlyName")(localClientNum, cent, entnum, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetVehicleDriverEntNum(const struct cg_s* cgameGlob, const struct centity_s* cent, int entnum) -> int
{
  return Zynamic::Forward<int (const struct cg_s*, const struct centity_s*, int)>(L"GetVehicleDriverEntNum")(cgameGlob, cent, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawFriendlyNames(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawFriendlyNames")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawVisibleNames(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawVisibleNames")(localClientNum);
}

#endif // __UNIMPLEMENTED__
