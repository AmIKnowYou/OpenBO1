//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_TracePointThroughTriangle(const struct traceWork_t* tw, const unsigned short* indices, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const unsigned short*, struct trace_t*)>(L"CM_TracePointThroughTriangle")(tw, indices, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceSphereThroughEdge(const struct traceWork_t* tw, const float* sphereStart, const float* v0, const float* v0_v1, struct trace_t* trace) -> enum SphereEdgeTraceResult
{
  return Zynamic::Forward<enum SphereEdgeTraceResult (const struct traceWork_t*, const float*, const float*, const float*, struct trace_t*)>(L"CM_TraceSphereThroughEdge")(tw, sphereStart, v0, v0_v1, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceSphereThroughVertex(const struct traceWork_t* tw, bool isWalkable, const float* sphereStart, const float* v, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, bool, const float*, const float*, struct trace_t*)>(L"CM_TraceSphereThroughVertex")(tw, isWalkable, sphereStart, v, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceCapsuleThroughTriangle(const struct traceWork_t* tw, int triIndex, const unsigned short* indices, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, int, const unsigned short*, struct trace_t*)>(L"CM_TraceCapsuleThroughTriangle")(tw, triIndex, indices, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClosestPointOnTri(const float* pt, const float* v0, const float* e0, const float* e1, float a00, float a01, float a11, float* ptOnTri) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, const float*, float, float, float, float*)>(L"CM_ClosestPointOnTri")(pt, v0, e0, e1, a00, a01, a11, ptOnTri);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_IsPointOverTriangle(const float* pt, const float* v0, const float* e0, const float* e1, double a00, double a01, double a11, double det) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, double, double, double, double)>(L"CM_IsPointOverTriangle")(pt, v0, e0, e1, a00, a01, a11, det);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_DistanceSquaredFromPointToTriangle(const float* pt, const unsigned short* indices) -> float
{
  return Zynamic::Forward<float (const float*, const unsigned short*)>(L"CM_DistanceSquaredFromPointToTriangle")(pt, indices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_DistanceSquaredBetweenSegments(const float* start0, const float* delta0, const float* start1, const float* delta1) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*, const float*)>(L"CM_DistanceSquaredBetweenSegments")(start0, delta0, start1, delta1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_DoesCapsuleIntersectTriangle(const float* start, const float* end, float radiusSq, const unsigned short* indices) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, const unsigned short*)>(L"CM_DoesCapsuleIntersectTriangle")(start, end, radiusSq, indices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PositionTestCapsuleInTriangle(const struct traceWork_t* tw, const unsigned short* indices, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const unsigned short*, struct trace_t*)>(L"CM_PositionTestCapsuleInTriangle")(tw, indices, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceSphereThroughBorder(const struct traceWork_t* tw, const struct CollisionBorder* border, float offsetZ, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionBorder*, float, struct trace_t*)>(L"CM_TraceSphereThroughBorder")(tw, border, offsetZ, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceCapsuleThroughBorder(const struct traceWork_t* tw, const struct CollisionBorder* border, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionBorder*, struct trace_t*)>(L"CM_TraceCapsuleThroughBorder")(tw, border, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughAabbTree_work(const struct traceWork_t* tw, const struct CollisionAabbTree* aabbTree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionAabbTree*, struct trace_t*)>(L"CM_TraceThroughAabbTree_work")(tw, aabbTree, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughAabbTree_r(const struct traceWork_t* tw, const struct CollisionAabbTree* aabbTree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionAabbTree*, struct trace_t*)>(L"CM_TraceThroughAabbTree_r")(tw, aabbTree, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughPartition(const struct traceWork_t* tw, int partitionIndex, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, int, struct trace_t*)>(L"CM_TraceThroughPartition")(tw, partitionIndex, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PositionTestInAabbTree_r(const struct traceWork_t* tw, struct CollisionAabbTree* aabbTree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct CollisionAabbTree*, struct trace_t*)>(L"CM_PositionTestInAabbTree_r")(tw, aabbTree, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughAabbTree(const struct traceWork_t* tw, const struct CollisionAabbTree* aabbTree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionAabbTree*, struct trace_t*)>(L"CM_TraceThroughAabbTree")(tw, aabbTree, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughAabbTree(const struct traceWork_t* tw, const struct CollisionAabbTree* aabbTree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionAabbTree*, struct trace_t*)>(L"CM_SightTraceThroughAabbTree")(tw, aabbTree, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_MeshTestInLeaf(const struct traceWork_t* tw, struct cLeaf_s* leaf, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, struct cLeaf_s*, struct trace_t*)>(L"CM_MeshTestInLeaf")(tw, leaf, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_MeshTest(const struct traceWork_t* tw, const struct CollisionAabbTree* tree, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (const struct traceWork_t*, const struct CollisionAabbTree*, struct trace_t*)>(L"CM_MeshTest")(tw, tree, trace);
}

#endif // __UNIMPLEMENTED__
