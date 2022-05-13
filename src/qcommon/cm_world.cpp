//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cm_world() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cm_world")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AllocWorldSector(float* mins, float* maxs) -> unsigned short
{
  return Zynamic::Forward<unsigned short (float*, float*)>(L"CM_AllocWorldSector")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClearWorld() -> void
{
  return Zynamic::Forward<void ()>(L"CM_ClearWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkWorld() -> void
{
  return Zynamic::Forward<void ()>(L"CM_LinkWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_UnlinkEntity(struct svEntity_s* ent) -> void
{
  return Zynamic::Forward<void (struct svEntity_s*)>(L"CM_UnlinkEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AddEntityToNode(struct svEntity_s* ent, unsigned short childNodeIndex) -> void
{
  return Zynamic::Forward<void (struct svEntity_s*, unsigned short)>(L"CM_AddEntityToNode")(ent, childNodeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AddStaticModelToNode(struct cStaticModel_s* staticModel, unsigned short childNodeIndex) -> void
{
  return Zynamic::Forward<void (struct cStaticModel_s*, unsigned short)>(L"CM_AddStaticModelToNode")(staticModel, childNodeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SortNode(unsigned short nodeIndex, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (unsigned short, float*, float*)>(L"CM_SortNode")(nodeIndex, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkEntity(struct svEntity_s* ent, float* absmin, float* absmax, unsigned int clipHandle) -> void
{
  return Zynamic::Forward<void (struct svEntity_s*, float*, float*, unsigned int)>(L"CM_LinkEntity")(ent, absmin, absmax, clipHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkStaticModel(struct cStaticModel_s* staticModel) -> void
{
  return Zynamic::Forward<void (struct cStaticModel_s*)>(L"CM_LinkStaticModel")(staticModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkAllStaticModels() -> void
{
  return Zynamic::Forward<void ()>(L"CM_LinkAllStaticModels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AreaEntities_r(unsigned int nodeIndex, struct areaParms_t* ap) -> void
{
  return Zynamic::Forward<void (unsigned int, struct areaParms_t*)>(L"CM_AreaEntities_r")(nodeIndex, ap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AreaEntities(const float* mins, const float* maxs, int* entityList, int maxcount, int contentmask) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int*, int, int)>(L"CM_AreaEntities")(mins, maxs, entityList, maxcount, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModels_r(struct locTraceWork_t* tw, unsigned short nodeIndex, const float* p1_, const float* p2, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (struct locTraceWork_t*, unsigned short, const float*, const float*, struct trace_t*)>(L"CM_PointTraceStaticModels_r")(tw, nodeIndex, p1_, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModels(struct trace_t* results, const float* start, const float* end, int contentmask) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, int)>(L"CM_PointTraceStaticModels")(results, start, end, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModelsComplete_r(const struct staticmodeltrace_t* clip, unsigned short nodeIndex, const float* p1_, const float* p2) -> int
{
  return Zynamic::Forward<int (const struct staticmodeltrace_t*, unsigned short, const float*, const float*)>(L"CM_PointTraceStaticModelsComplete_r")(clip, nodeIndex, p1_, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModelsComplete(const float* start, const float* end, int contentmask) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int)>(L"CM_PointTraceStaticModelsComplete")(start, end, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipMoveToEntities_r(const struct moveclip_t* clip, unsigned short nodeIndex, const float* p1, const float* p2, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct moveclip_t*, unsigned short, const float*, const float*, struct trace_t*)>(L"CM_ClipMoveToEntities_r")(clip, nodeIndex, p1, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipMoveToEntities(struct moveclip_t* clip, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (struct moveclip_t*, struct trace_t*)>(L"CM_ClipMoveToEntities")(clip, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipSightTraceToEntities_r(const struct sightclip_t* clip, unsigned short nodeIndex, const float* p1, const float* p2) -> int
{
  return Zynamic::Forward<int (const struct sightclip_t*, unsigned short, const float*, const float*)>(L"CM_ClipSightTraceToEntities_r")(clip, nodeIndex, p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipSightTraceToEntities(struct sightclip_t* clip) -> int
{
  return Zynamic::Forward<int (struct sightclip_t*)>(L"CM_ClipSightTraceToEntities")(clip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceToEntities_r(struct pointtrace_t* clip, unsigned short nodeIndex, const float* p1, const float* p2, struct trace_t* trace, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct pointtrace_t*, unsigned short, const float*, const float*, struct trace_t*, struct col_context_t&)>(L"CM_PointTraceToEntities_r")(clip, nodeIndex, p1, p2, trace, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceToEntities(struct pointtrace_t* clip, struct trace_t* trace, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct pointtrace_t*, struct trace_t*, struct col_context_t&)>(L"CM_PointTraceToEntities")(clip, trace, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointSightTraceToEntities_r(const struct sightpointtrace_t* clip, unsigned short nodeIndex, const float* p1, const float* p2) -> int
{
  return Zynamic::Forward<int (const struct sightpointtrace_t*, unsigned short, const float*, const float*)>(L"CM_PointSightTraceToEntities_r")(clip, nodeIndex, p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointSightTraceToEntities(struct sightpointtrace_t* clip) -> int
{
  return Zynamic::Forward<int (struct sightpointtrace_t*)>(L"CM_PointSightTraceToEntities")(clip);
}

#endif // __UNIMPLEMENTED__
