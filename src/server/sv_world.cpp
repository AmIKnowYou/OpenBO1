//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_ClipHandleForEntity(const struct gentity_s* ent) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct gentity_s*)>(L"SV_ClipHandleForEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UnlinkEntity(struct gentity_s* gEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"SV_UnlinkEntity")(gEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapAngles(float* vAngles) -> void
{
  return Zynamic::Forward<void (float*)>(L"SnapAngles")(vAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_LinkEntity(struct gentity_s* gEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"SV_LinkEntity")(gEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TraceCapsuleToEntity(const struct moveclip_t* clip, struct svEntity_s* check, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, struct svEntity_s*, struct trace_t*)>(L"SV_TraceCapsuleToEntity")(clip, check, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_LocationalTraceDObj(const struct pointtrace_t* clip, const struct gentity_s* touch) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (const struct pointtrace_t*, const struct gentity_s*)>(L"SV_LocationalTraceDObj")(clip, touch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_LocationalSightTraceDObj(const struct sightpointtrace_t* clip, const struct gentity_s* touch) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (const struct sightpointtrace_t*, const struct gentity_s*)>(L"SV_LocationalSightTraceDObj")(clip, touch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TracePointToEntity(const struct pointtrace_t* clip, struct svEntity_s* check, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct pointtrace_t*, struct svEntity_s*, struct trace_t*)>(L"SV_TracePointToEntity")(clip, check, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SightTraceCapsuleToEntity(const struct sightclip_t* clip, int entnum) -> int
{
  return Zynamic::Forward<int (const struct sightclip_t*, int)>(L"SV_SightTraceCapsuleToEntity")(clip, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SightTracePointToEntity(const struct sightpointtrace_t* clip, int entnum) -> int
{
  return Zynamic::Forward<int (const struct sightpointtrace_t*, int)>(L"SV_SightTracePointToEntity")(clip, entnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetupIgnoreEntParams(struct IgnoreEntParams* ignoreEntParams, int baseEntity) -> void
{
  return Zynamic::Forward<void (struct IgnoreEntParams*, int)>(L"SV_SetupIgnoreEntParams")(ignoreEntParams, baseEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TracePoint(struct trace_t* results, const float* start, const float* end, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, struct col_context_t&)>(L"SV_TracePoint")(results, start, end, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_TraceCapsule(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, struct col_context_t&)>(L"SV_TraceCapsule")(results, start, mins, maxs, end, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SightTraceCapsule(int* hitNum, const float* start, const float* mins, const float* maxs, const float* end, struct col_context_t& context) -> int
{
  return Zynamic::Forward<int (int*, const float*, const float*, const float*, const float*, struct col_context_t&)>(L"SV_SightTraceCapsule")(hitNum, start, mins, maxs, end, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SightTracePoint(int* hitNum, const float* start, const float* end, struct col_context_t& context) -> int
{
  return Zynamic::Forward<int (int*, const float*, const float*, struct col_context_t&)>(L"SV_SightTracePoint")(hitNum, start, end, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PointContents(const float* p, int passEntityNum, int contentmask) -> int
{
  return Zynamic::Forward<int (const float*, int, int)>(L"SV_PointContents")(p, passEntityNum, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TraceCapsule(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentmask, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, int, int, struct col_context_t&)>(L"G_TraceCapsule")(results, start, mins, maxs, end, passEntityNum, contentmask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LocationalTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask, unsigned char* priorityMap, function* collide_entity_func) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int, int, unsigned char*, function *)>(L"G_LocationalTrace")(results, start, end, passEntityNum, contentmask, priorityMap, collide_entity_func);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LocationalTraceAllowChildren(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask, unsigned char* priorityMap) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int, int, unsigned char*)>(L"G_LocationalTraceAllowChildren")(results, start, end, passEntityNum, contentmask, priorityMap);
}

#endif // __UNIMPLEMENTED__
