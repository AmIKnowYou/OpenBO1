//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_CalcTraceExtents(struct TraceExtents* extents) -> void
{
  return Zynamic::Forward<void (struct TraceExtents*)>(L"CM_CalcTraceExtents")(extents);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_extents_aabb(const struct TraceExtents* extents, const float* mins, const float* maxs, float fraction) -> int
{
  return Zynamic::Forward<int (const struct TraceExtents*, const float*, const float*, float)>(L"intersect_extents_aabb")(extents, mins, maxs, fraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_extents_aabb(const struct TraceExtents* extents, const float* mins, const float* maxs, float& enterFrac, float& leaveFrac) -> int
{
  return Zynamic::Forward<int (const struct TraceExtents*, const float*, const float*, float&, float&)>(L"intersect_extents_aabb")(extents, mins, maxs, enterFrac, leaveFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_extents_sphere(const struct TraceExtents* extents, const float* origin, float radius, float fraction) -> int
{
  return Zynamic::Forward<int (const struct TraceExtents*, const float*, float, float)>(L"intersect_extents_sphere")(extents, origin, radius, fraction);
}

#endif // __UNIMPLEMENTED__
