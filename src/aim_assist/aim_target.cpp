//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetGlobArray(int localClientNum) -> struct AimTargetGlob*
{
  return Zynamic::Forward<struct AimTargetGlob* (int)>(L"AimTarget_GetGlobArray")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_aim_target() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_aim_target")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"AimTarget_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_Init(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimTarget_Init")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_ClearTargetList(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimTarget_ClearTargetList")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_CompareTargets(const struct AimTarget* targetA, const struct AimTarget* targetB) -> int
{
  return Zynamic::Forward<int (const struct AimTarget*, const struct AimTarget*)>(L"AimTarget_CompareTargets")(targetA, targetB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_AddTargetToList(int localClientNum, const struct AimTarget* target) -> void
{
  return Zynamic::Forward<void (int, const struct AimTarget*)>(L"AimTarget_AddTargetToList")(localClientNum, target);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTagUpdateInterval(const struct centity_s* ent) -> int
{
  return Zynamic::Forward<int (const struct centity_s*)>(L"AimTarget_GetTagUpdateInterval")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTagPos(const struct centity_s* ent, unsigned int tagName, float* pos) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, unsigned int, float*)>(L"AimTarget_GetTagPos")(ent, tagName, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto expandMins(float* mins, float* point) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"expandMins")(mins, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto expandMaxs(float* maxs, float* point) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"expandMaxs")(maxs, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTargetBounds(const struct centity_s* targetEnt, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, float*, float*)>(L"AimTarget_GetTargetBounds")(targetEnt, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTargetRadius(const struct centity_s* targetEnt) -> float
{
  return Zynamic::Forward<float (const struct centity_s*)>(L"AimTarget_GetTargetRadius")(targetEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTargetCenter(const struct centity_s* targetEnt, float* center) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, float*)>(L"AimTarget_GetTargetCenter")(targetEnt, center);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTargetTop(const struct centity_s* targetEnt, float* top) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, float*)>(L"AimTarget_GetTargetTop")(targetEnt, top);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_IsTargetValid(const struct cg_s* cgameGlob, const struct centity_s* targetEnt) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*, const struct centity_s*)>(L"AimTarget_IsTargetValid")(cgameGlob, targetEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_IsTargetVisible(int localClientNum, const struct centity_s* targetEnt, unsigned int visBone) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*, unsigned int)>(L"AimTarget_IsTargetVisible")(localClientNum, targetEnt, visBone);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_CreateTarget(int localClientNum, const struct centity_s* targetEnt, struct AimTarget* target) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, struct AimTarget*)>(L"AimTarget_CreateTarget")(localClientNum, targetEnt, target);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_PlayerInValidState(const struct playerState_s* ps) -> bool
{
  return Zynamic::Forward<bool (const struct playerState_s*)>(L"AimTarget_PlayerInValidState")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_ProcessEntityInternal(int localClientNum, const struct centity_s* ent) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*)>(L"AimTarget_ProcessEntityInternal")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_ProcessEntity(int localClientNum, const struct centity_s* ent) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*)>(L"AimTarget_ProcessEntity")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_UpdateClientTargets(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimTarget_UpdateClientTargets")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetClientTargetList(int localClientNum, const struct AimTarget** targetList, int* targetCount) -> void
{
  return Zynamic::Forward<void (int, const struct AimTarget**, int*)>(L"AimTarget_GetClientTargetList")(localClientNum, targetList, targetCount);
}

#endif // __UNIMPLEMENTED__
