//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public void col_context_t::col_context_t()
{
  return Zynamic::Forward<public void ()>(L"col_context_t::col_context_t")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public void col_context_t::col_context_t(int _mask)
{
  return Zynamic::Forward<public void (int)>(L"col_context_t::col_context_t")(_mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto col_context_t::init_locational(int ent0) -> void
{
  return Zynamic::Forward<public void (int)>(L"col_context_t::init_locational")(ent0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto col_context_t::init_locational(int ent0, int ent1) -> void
{
  return Zynamic::Forward<public void (int, int)>(L"col_context_t::init_locational")(ent0, ent1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetEntityHitId(const struct trace_t* trace) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct trace_t*)>(L"Trace_GetEntityHitId")(trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetDynEntHitId(const struct trace_t* trace, enum DynEntityDrawType* drawType) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct trace_t*, enum DynEntityDrawType*)>(L"Trace_GetDynEntHitId")(trace, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetGlassHitId(const struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct trace_t*)>(L"Trace_GetGlassHitId")(trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetTraceThreadInfo(struct TraceThreadInfo* threadInfo) -> void
{
  return Zynamic::Forward<void (struct TraceThreadInfo*)>(L"CM_GetTraceThreadInfo")(threadInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetClipMap() -> unsigned char*
{
  return Zynamic::Forward<unsigned char* ()>(L"CM_GetClipMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetBox(struct cbrush_t** box_brush, struct cmodel_t** box_model, struct PhysGeomList*** geoms) -> void
{
  return Zynamic::Forward<void (struct cbrush_t**, struct cmodel_t**, struct PhysGeomList***)>(L"CM_GetBox")(box_brush, box_model, geoms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TempBoxModel(const float* mins, const float* maxs, int contents) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, const float*, int)>(L"CM_TempBoxModel")(mins, maxs, contents);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TempBrushModel(struct PhysGeomList* geoms) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct PhysGeomList*)>(L"CM_TempBrushModel")(geoms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipHandleIsValid(unsigned int handle) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"CM_ClipHandleIsValid")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipHandleToModel(unsigned int handle) -> struct cmodel_t*
{
  return Zynamic::Forward<struct cmodel_t* (unsigned int)>(L"CM_ClipHandleToModel")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ContentsOfModel(unsigned int handle) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"CM_ContentsOfModel")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestBoxInBrush(const struct traceWork_t* tw, const struct cbrush_t* brush, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct cbrush_t*, struct trace_t*)>(L"CM_TestBoxInBrush")(tw, brush, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestInLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct cLeafBrushNode_s*, struct trace_t*)>(L"CM_TestInLeafBrushNode_r")(tw, node, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestInLeafBrushNode(struct traceWork_t* tw, struct cLeaf_s* leaf, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (struct traceWork_t*, struct cLeaf_s*, struct trace_t*)>(L"CM_TestInLeafBrushNode")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestInLeaf(struct traceWork_t* tw, struct cLeaf_s* leaf, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (struct traceWork_t*, struct cLeaf_s*, struct trace_t*)>(L"CM_TestInLeaf")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestCapsuleInCapsule(const struct traceWork_t* tw, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct trace_t*)>(L"CM_TestCapsuleInCapsule")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PositionTest(struct traceWork_t* tw, struct trace_t* trace, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct traceWork_t*, struct trace_t*, struct col_context_t&)>(L"CM_PositionTest")(tw, trace, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughBrush(const struct traceWork_t* tw, const struct cbrush_t* brush, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct cbrush_t*, struct trace_t*)>(L"CM_TraceThroughBrush")(tw, brush, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, const float* p1_, const float* p2, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct cLeafBrushNode_s*, const float*, const float*, struct trace_t*)>(L"CM_TraceThroughLeafBrushNode_r")(tw, node, p1_, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughLeafBrushNode(const struct traceWork_t* tw, struct cLeaf_s* leaf, struct trace_t* trace) -> bool
{
  return Zynamic::Forward<bool (const struct traceWork_t*, struct cLeaf_s*, struct trace_t*)>(L"CM_TraceThroughLeafBrushNode")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughLeaf(const struct traceWork_t* tw, struct cLeaf_s* leaf, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct cLeaf_s*, struct trace_t*)>(L"CM_TraceThroughLeaf")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestInTempBrush(const struct traceWork_t* tw, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct trace_t*)>(L"CM_TestInTempBrush")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughTempBrush(const struct traceWork_t* tw, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct trace_t*)>(L"CM_TraceThroughTempBrush")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughTempBrush(const struct traceWork_t* tw, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, struct trace_t*)>(L"CM_SightTraceThroughTempBrush")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceSphereThroughSphere(const struct traceWork_t* tw, const float* vStart, const float* vEnd, const float* vStationary, float radius, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const float*, const float*, const float*, float, struct trace_t*)>(L"CM_TraceSphereThroughSphere")(tw, vStart, vEnd, vStationary, radius, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceCylinderThroughCylinder(const struct traceWork_t* tw, const float* vStationary, float fStationaryHalfHeight, float radius, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const float*, float, float, struct trace_t*)>(L"CM_TraceCylinderThroughCylinder")(tw, vStationary, fStationaryHalfHeight, radius, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceCapsuleThroughCapsule(const struct traceWork_t* tw, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct trace_t*)>(L"CM_TraceCapsuleThroughCapsule")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, int, const float*, const float*, struct trace_t*)>(L"CM_TraceThroughTree")(tw, num, p1_, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughPrimitives(const struct traceWork_t* tw, const float* p1_, const float* p2, struct trace_t* trace, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const float*, const float*, struct trace_t*, struct col_context_t&)>(L"CM_TraceThroughPrimitives")(tw, p1_, p2, trace, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SetAxialCullOnly(struct traceWork_t* tw) -> void
{
  return Zynamic::Forward<void (struct traceWork_t*)>(L"CM_SetAxialCullOnly")(tw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Trace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, unsigned int, int, struct col_context_t&)>(L"CM_Trace")(results, start, end, mins, maxs, model, brushmask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BoxTrace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, int brushmask, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, int, struct col_context_t&)>(L"CM_BoxTrace")(results, start, end, mins, maxs, brushmask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBoxTraceRotated(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* matrix[0x3]) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, unsigned int, int, const float*, const float*[0x3])>(L"CM_TransformedBoxTraceRotated")(results, start, end, mins, maxs, model, brushmask, origin, matrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBoxTrace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, unsigned int, int, const float*, const float*)>(L"CM_TransformedBoxTrace")(results, start, end, mins, maxs, model, brushmask, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBoxTraceExternal(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float*, const float*, unsigned int, int, const float*, const float*)>(L"CM_TransformedBoxTraceExternal")(results, start, end, mins, maxs, model, brushmask, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughBrush(const struct traceWork_t* tw, const struct cbrush_t* brush, int brushNum, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const struct cbrush_t*, int, struct trace_t*)>(L"CM_SightTraceThroughBrush")(tw, brush, brushNum, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTracePointThroughBrush(const struct TraceExtents* extents, const struct cbrush_t* brush) -> int
{
  return Zynamic::Forward<int (const struct TraceExtents*, const struct cbrush_t*)>(L"CM_SightTracePointThroughBrush")(extents, brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* remoteNode, const float* p1_, const float* p2, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, struct cLeafBrushNode_s*, const float*, const float*, struct trace_t*)>(L"CM_SightTraceThroughLeafBrushNode_r")(tw, remoteNode, p1_, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughLeafBrushNode(const struct traceWork_t* tw, const struct cLeaf_s* leaf, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const struct cLeaf_s*, struct trace_t*)>(L"CM_SightTraceThroughLeafBrushNode")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughLeaf(const struct traceWork_t* tw, const struct cLeaf_s* leaf, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const struct cLeaf_s*, struct trace_t*)>(L"CM_SightTraceThroughLeaf")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceSphereThroughSphere(const struct traceWork_t* tw, const float* vStart, const float* vEnd, const float* vStationary, float radius, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const float*, const float*, const float*, float, struct trace_t*)>(L"CM_SightTraceSphereThroughSphere")(tw, vStart, vEnd, vStationary, radius, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceCylinderThroughCylinder(const struct traceWork_t* tw, const float* vStationary, float fStationaryHalfHeight, float radius, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, const float*, float, float, struct trace_t*)>(L"CM_SightTraceCylinderThroughCylinder")(tw, vStationary, fStationaryHalfHeight, radius, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceCapsuleThroughCapsule(const struct traceWork_t* tw, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, struct trace_t*)>(L"CM_SightTraceCapsuleThroughCapsule")(tw, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace) -> int
{
  return Zynamic::Forward<int (const struct traceWork_t*, int, const float*, const float*, struct trace_t*)>(L"CM_SightTraceThroughTree")(tw, num, p1_, p2, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BoxSightTrace(int oldHitNum, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, const float*, const float*, unsigned int, int)>(L"CM_BoxSightTrace")(oldHitNum, start, end, mins, maxs, model, brushmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTracePoint(int oldHitNum, const float* start, const float* end, struct col_context_t& context) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, struct col_context_t&)>(L"CM_SightTracePoint")(oldHitNum, start, end, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBoxSightTrace(int hitNum, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, const float*, const float*, unsigned int, int, const float*, const float*)>(L"CM_TransformedBoxSightTrace")(hitNum, start, end, mins, maxs, model, brushmask, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TracePointDown(const float* start, const float* end, int contentmask, int surf_type, float* endpos, float* fraction, float* normal) -> int
{
  return Zynamic::Forward<int (const float*, const float*, int, int, float*, float*, float*)>(L"CM_TracePointDown")(start, end, contentmask, surf_type, endpos, fraction, normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetWaterHeight(const float* pos, float z_up, float z_down) -> float
{
  return Zynamic::Forward<float (const float*, float, float)>(L"CM_GetWaterHeight")(pos, z_up, z_down);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto calc_closest(const float* v0, const float* v1, const float* v2, const float* p, float* res) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, const float*, float*)>(L"calc_closest")(v0, v1, v2, p, res);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_inside(const float* a, const float* b, const float* n, const float* p) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*)>(L"is_inside")(a, b, n, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto point_in_triangle(const float* p, const float* v0, const float* v1, const float* v2, const float* n) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, const float*)>(L"point_in_triangle")(p, v0, v1, v2, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_through_triangle(const float* c0, const float* dir, float& t, float r, const float* v0, const float* v1, const float* v2, const float* n) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float&, float, const float*, const float*, const float*, const float*)>(L"trace_sphere_through_triangle")(c0, dir, t, r, v0, v1, v2, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_through_partition(const float* c, const float* dir, float& t, const float r, const struct CollisionAabbTree* tree, float* hitn, int& sflags) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const float, const struct CollisionAabbTree*, float*, int&)>(L"trace_sphere_through_partition")(c, dir, t, r, tree, hitn, sflags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_through_brush(const float* c0, const float* dir, float& t, const float r, const struct cbrush_t* brush, float* hitn, int& sflags, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const float, const struct cbrush_t*, float*, int&, struct clipMap_t*)>(L"trace_sphere_through_brush")(c0, dir, t, r, brush, hitn, sflags, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_through_brush(const float* c0, const float* dir, float& t, const float r, const struct cbrush_t* brush, float* hitn, int& sflags) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const float, const struct cbrush_t*, float*, int&)>(L"trace_sphere_through_brush")(c0, dir, t, r, brush, hitn, sflags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_through_brush(const float* c0, const float* dir, float& t, const struct cbrush_t* brush, float* hitn, int& sflags, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const struct cbrush_t*, float*, int&, struct clipMap_t*)>(L"trace_point_through_brush")(c0, dir, t, brush, hitn, sflags, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_through_triangle(const float* p0, const float* u0, const float* v0, const float* v1, const float* v2, const float cur_t, float* t) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, const float*, const float, float*)>(L"trace_point_through_triangle")(p0, u0, v0, v1, v2, cur_t, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_through_partition(const float* p, const float* dir, float& t, const float r, const struct CollisionPartition* partition, float* hitn, int& hint, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const float, const struct CollisionPartition*, float*, int&, struct clipMap_t*)>(L"trace_sphere_through_partition")(p, dir, t, r, partition, hitn, hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_through_partition(const float* p, const float* dir, float& t, const struct CollisionPartition* partition, float* hitn, int& hint, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float&, const struct CollisionPartition*, float*, int&, struct clipMap_t*)>(L"trace_point_through_partition")(p, dir, t, partition, hitn, hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_vs_env(struct trace_t* trace, const float* start, const float* end, struct col_context_t& context, int& index_hint, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, struct col_context_t&, int&, struct clipMap_t*)>(L"trace_point_vs_env")(trace, start, end, context, index_hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_vs_env(struct trace_t* trace, const float* start, const float* end, struct col_context_t& context, int& index_hint) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, struct col_context_t&, int&)>(L"trace_point_vs_env")(trace, start, end, context, index_hint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_point_vs_env(struct trace_t* trace, const float* start, const float* end, struct col_context_t& context, int& index_hint, unsigned char* pClipMap) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, struct col_context_t&, int&, unsigned char*)>(L"trace_point_vs_env")(trace, start, end, context, index_hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_vs_env(struct trace_t* trace, const float* start, const float* end, const float radius, struct col_context_t& context, int& index_hint, struct clipMap_t* pClipMap) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float, struct col_context_t&, int&, struct clipMap_t*)>(L"trace_sphere_vs_env")(trace, start, end, radius, context, index_hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere_vs_env(struct trace_t* trace, const float* start, const float* end, const float radius, struct col_context_t& context, int& index_hint, unsigned char* pClipMap) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, const float, struct col_context_t&, int&, unsigned char*)>(L"trace_sphere_vs_env")(trace, start, end, radius, context, index_hint, pClipMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto collide_segment_brush(const float* p0, const float* p1, const struct cbrush_t* brush) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const struct cbrush_t*)>(L"collide_segment_brush")(p0, p1, brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto collide_segment_triangle(const float* p0, const float* u0, const float* v0, const float* v1, const float* v2) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*, const float*, const float*)>(L"collide_segment_triangle")(p0, u0, v0, v1, v2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto collide_segment(const float* p0, const float* p1, struct col_context_t& context) -> int
{
  return Zynamic::Forward<int (const float*, const float*, struct col_context_t&)>(L"collide_segment")(p0, p1, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TestPointInBrushModel(const float* point, int brushmodel, const float* trans) -> bool
{
  return Zynamic::Forward<bool (const float*, int, const float*)>(L"CM_TestPointInBrushModel")(point, brushmodel, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetWaterForce(const float* pt, float* dir, float* force) -> bool
{
  return Zynamic::Forward<bool (const float*, float*, float*)>(L"CM_GetWaterForce")(pt, dir, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetHeliHeight(const float* pt, const float checkdist, float* result) -> bool
{
  return Zynamic::Forward<bool (const float*, const float, float*)>(L"CM_GetHeliHeight")(pt, checkdist, result);
}

#endif // __UNIMPLEMENTED__
