//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityBModelContents(const struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (const struct centity_s*)>(L"CG_GetEntityBModelContents")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityBModelBounds(const struct centity_s* cent, float* mins, float* maxs, float* absMins, float* absMaxs) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, float*, float*, float*, float*)>(L"CG_GetEntityBModelBounds")(cent, mins, maxs, absMins, absMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityDobjBounds(const struct centity_s* cent, const struct DObj* dobj, float* mins, float* maxs, float* absMins, float* absMaxs) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, const struct DObj*, float*, float*, float*, float*)>(L"CG_GetEntityDobjBounds")(cent, dobj, mins, maxs, absMins, absMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityDObjContents(const struct centity_s* cent, const struct DObj* dobj) -> int
{
  return Zynamic::Forward<int (const struct centity_s*, const struct DObj*)>(L"CG_GetEntityDObjContents")(cent, dobj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityNeedsLinked(int localClientNum, int entIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CG_EntityNeedsLinked")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UnlinkEntity(int localClientNum, int entIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_UnlinkEntity")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcWorldBounds(struct centity_s* cent, struct DObj* dobj) -> void
{
  return Zynamic::Forward<void (struct centity_s*, struct DObj*)>(L"CG_CalcWorldBounds")(cent, dobj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LinkEntity(int localClientNum, int entIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_LinkEntity")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClipMoveToEntity(const struct moveclip_t* clip, int entIndex, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, int, struct trace_t*)>(L"CG_ClipMoveToEntity")(clip, entIndex, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClipMoveToEntities_r(const struct moveclip_t* clip, unsigned short sectorIndex, const float* p1, const float* p2, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, unsigned short, const float*, const float*, struct trace_t*)>(L"CG_ClipMoveToEntities_r")(clip, sectorIndex, p1, p2, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClipMoveToEntities(const struct moveclip_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, struct trace_t*)>(L"CG_ClipMoveToEntities")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PointTraceToEntity(const struct pointtrace_t* clip, int entIndex, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, int, struct trace_t*)>(L"CG_PointTraceToEntity")(clip, entIndex, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PointTraceToEntities_r(const struct pointtrace_t* clip, unsigned short sectorIndex, const float* p1, const float* p2, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, unsigned short, const float*, const float*, struct trace_t*)>(L"CG_PointTraceToEntities_r")(clip, sectorIndex, p1, p2, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PointTraceToEntities(const struct pointtrace_t* clip, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct trace_t*)>(L"CG_PointTraceToEntities")(clip, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TraceCapsule(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, int, int, struct col_context_t&)>(L"CG_TraceCapsule")(results, start, mins, maxs, end, passEntityNum, contentMask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TracePoint(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentMask, bool locational, bool staticModels, bool checkRopes, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int, int, bool, bool, bool, struct col_context_t&)>(L"CG_TracePoint")(results, start, end, passEntityNum, contentMask, locational, staticModels, checkRopes, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LocationalTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentMask, bool checkRopes, struct col_context_t* context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int, int, bool, struct col_context_t*)>(L"CG_LocationalTrace")(results, start, end, passEntityNum, contentMask, checkRopes, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityInArea(int entIndex, const float* mins, const float* maxs, int contentMask) -> bool
{
  return Zynamic::Forward<bool (int, const float*, const float*, int)>(L"CG_EntityInArea")(entIndex, mins, maxs, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AreaEntities_r(unsigned short sectorIndex, struct CEntityAreaParms* areaParms) -> void
{
  return Zynamic::Forward<void (unsigned short, struct CEntityAreaParms*)>(L"CG_AreaEntities_r")(sectorIndex, areaParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AreaEntities(const float* mins, const float* maxs, int* entityList, const int maxEntities, const int contentMask) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int*, const int, const int)>(L"CG_AreaEntities")(mins, maxs, entityList, maxEntities, contentMask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SightTracePointInternal(int* hitNum, const float* start, const float* end, int mask, struct trace_t* trace) -> bool
{
  return Zynamic::Forward<bool (int*, const float*, const float*, int, struct trace_t*)>(L"CG_SightTracePointInternal")(hitNum, start, end, mask, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto cmpr(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"cmpr")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SightTracePoint(int* hitNum, const float* start, const float* end, int mask, struct trace_t* trace) -> bool
{
  return Zynamic::Forward<bool (int*, const float*, const float*, int, struct trace_t*)>(L"CG_SightTracePoint")(hitNum, start, end, mask, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityBoneInfo(int entID, int boneIndex, float* bonePos, float* boneAxis[0x3], const char** boneName) -> int
{
  return Zynamic::Forward<int (int, int, float*, float*[0x3], const char**)>(L"CG_GetEntityBoneInfo")(entID, boneIndex, bonePos, boneAxis, boneName);
}

#endif // __UNIMPLEMENTED__
