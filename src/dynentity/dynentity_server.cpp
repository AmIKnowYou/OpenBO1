//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DynEntSv_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntSv_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_LinkModel(unsigned short dynEntId) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntSv_LinkModel")(dynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_LinkBrush(unsigned short dynEntId) -> void
{
  return Zynamic::Forward<void (unsigned short)>(L"DynEntSv_LinkBrush")(dynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_InitEntities() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntSv_InitEntities")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_PointTrace_r(enum DynEntityDrawType drawType, const struct pointtrace_t* clip, unsigned int sectorIndex, float* p1, float* p2, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (enum DynEntityDrawType, const struct pointtrace_t*, unsigned int, float*, float*, struct trace_t*)>(L"DynEntSv_PointTrace_r")(drawType, clip, sectorIndex, p1, p2, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_PointTrace(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct trace_t*)>(L"DynEntSv_PointTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_PointTrace(unsigned short id, enum DynEntityDrawType drawType, const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType, const struct pointtrace_t*, struct trace_t*)>(L"DynEntSv_PointTrace")(id, drawType, clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_ClipMoveTrace_r(const struct moveclip_t* clip, unsigned int sectorIndex, float* p1, float* p2, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, unsigned int, float*, float*, struct trace_t*)>(L"DynEntSv_ClipMoveTrace_r")(clip, sectorIndex, p1, p2, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_ClipMoveTrace(const struct moveclip_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, struct trace_t*)>(L"DynEntSv_ClipMoveTrace")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_AreaEntities_r(enum DynEntityDrawType drawType, unsigned int sectorIndex, struct DynEntityAreaParms* areaParms) -> void
{
  return Zynamic::Forward<void (enum DynEntityDrawType, unsigned int, struct DynEntityAreaParms*)>(L"DynEntSv_AreaEntities_r")(drawType, sectorIndex, areaParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_AreaEntities(enum DynEntityDrawType drawType, const float* mins, const float* maxs, int contentMask, unsigned short dynEntMaxCount, unsigned short* dynEntList) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum DynEntityDrawType, const float*, const float*, int, unsigned short, unsigned short*)>(L"DynEntSv_AreaEntities")(drawType, mins, maxs, contentMask, dynEntMaxCount, dynEntList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_Damage(unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitDir, int damage, bool explosive) -> void
{
  return Zynamic::Forward<void (unsigned short, enum DynEntityDrawType, const float*, const float*, int, bool)>(L"DynEntSv_Damage")(dynEntId, drawType, hitPos, hitDir, damage, explosive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_GetClosestEntities(enum DynEntityDrawType drawType, const float* radiusMins, const float* radiusMaxs, const float* origin, unsigned short* hitEnts) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum DynEntityDrawType, const float*, const float*, const float*, unsigned short*)>(L"DynEntSv_GetClosestEntities")(drawType, radiusMins, radiusMaxs, origin, hitEnts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntSv_RadiusDamage(const float* origin, float radius, float coneAngleCos, float* coneDirection, float innerDamage, float outerDamage) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float*, float, float)>(L"DynEntSv_RadiusDamage")(origin, radius, coneAngleCos, coneDirection, innerDamage, outerDamage);
}

#endif // __UNIMPLEMENTED__
