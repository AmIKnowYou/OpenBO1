//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_DynEntityCollWorld() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_DynEntityCollWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetCollWorld(enum DynEntityCollType collType) -> struct DynEntityCollWorld*
{
  return Zynamic::Forward<struct DynEntityCollWorld* (enum DynEntityCollType)>(L"DynEnt_GetCollWorld")(collType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetCollSector(enum DynEntityCollType collType, unsigned int sectorIndex) -> struct DynEntityCollSector*
{
  return Zynamic::Forward<struct DynEntityCollSector* (enum DynEntityCollType, unsigned int)>(L"DynEnt_GetCollSector")(collType, sectorIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ClearCollWorld(enum DynEntityCollType collType) -> void
{
  return Zynamic::Forward<void (enum DynEntityCollType)>(L"DynEnt_ClearCollWorld")(collType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AllocCollSector(enum DynEntityCollType collType, const float* mins, const float* maxs) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum DynEntityCollType, const float*, const float*)>(L"DynEnt_AllocCollSector")(collType, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AddToCollSector(enum DynEntityCollType collType, unsigned short dynEntId, unsigned short sectorIndex) -> void
{
  return Zynamic::Forward<void (enum DynEntityCollType, unsigned short, unsigned short)>(L"DynEnt_AddToCollSector")(collType, dynEntId, sectorIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_SortCollSector(enum DynEntityCollType collType, unsigned short sectorIndex, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (enum DynEntityCollType, unsigned short, const float*, const float*)>(L"DynEnt_SortCollSector")(collType, sectorIndex, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UnlinkEntity(enum DynEntityCollType collType, unsigned short dynEntId) -> void
{
  return Zynamic::Forward<void (enum DynEntityCollType, unsigned short)>(L"DynEnt_UnlinkEntity")(collType, dynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_LinkEntity(enum DynEntityCollType collType, unsigned short dynEntId, const float* absMins, const float* absMaxs) -> void
{
  return Zynamic::Forward<void (enum DynEntityCollType, unsigned short, const float*, const float*)>(L"DynEnt_LinkEntity")(collType, dynEntId, absMins, absMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetContents(const struct DynEntityDef* dynEntDef) -> int
{
  return Zynamic::Forward<int (const struct DynEntityDef*)>(L"DynEnt_GetContents")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetLocalBounds(const struct DynEntityDef* dynEntDef, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*, float*, float*)>(L"DynEnt_GetLocalBounds")(dynEntDef, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetRadiusDistSqr(const struct DynEntityColl* dynEntColl, const float* origin) -> float
{
  return Zynamic::Forward<float (const struct DynEntityColl*, const float*)>(L"DynEnt_GetRadiusDistSqr")(dynEntColl, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_IsInCone(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose, const float* origin, float coneAngleCos, const float* coneDir) -> bool
{
  return Zynamic::Forward<bool (const struct DynEntityDef*, const struct GfxPlacement*, const float*, float, const float*)>(L"DynEnt_IsInCone")(dynEntDef, pose, origin, coneAngleCos, coneDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetCylindricalRadiusDistSqr(const struct DynEntityColl* dynEntColl, const float* origin) -> float
{
  return Zynamic::Forward<float (const struct DynEntityColl*, const float*)>(L"DynEnt_GetCylindricalRadiusDistSqr")(dynEntColl, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_EntityInArea(const struct DynEntityDef* dynEntDef, const struct DynEntityColl* dynEntColl, const float* mins, const float* maxs, int contentMask) -> bool
{
  return Zynamic::Forward<bool (const struct DynEntityDef*, const struct DynEntityColl*, const float*, const float*, int)>(L"DynEnt_EntityInArea")(dynEntDef, dynEntColl, mins, maxs, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_PointTraceToModel(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose, const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*, const struct GfxPlacement*, const struct pointtrace_t*, struct trace_t*)>(L"DynEnt_PointTraceToModel")(dynEntDef, pose, clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_PointTraceToBrush(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose, const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*, const struct GfxPlacement*, const struct pointtrace_t*, struct trace_t*)>(L"DynEnt_PointTraceToBrush")(dynEntDef, pose, clip, results);
}

#endif // __UNIMPLEMENTED__
