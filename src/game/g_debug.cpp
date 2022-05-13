//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_DebugLine(const float* start, const float* end, const float* color, int depthTest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int)>(L"G_DebugLine")(start, end, color, depthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugLineWithDuration(const float* start, const float* end, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int, int)>(L"G_DebugLineWithDuration")(start, end, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugCircle(const float* center, float radius, const float* color, int depthTest, int onGround, int duration) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*, int, int, int)>(L"G_DebugCircle")(center, radius, color, depthTest, onGround, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugSphere(const float* center, float radius, const float* color, int sideCount, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*, int, int, int)>(L"G_DebugSphere")(center, radius, color, sideCount, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugArc(const float* center, float radius, float angle0, float angle1, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float, const float*, int, int)>(L"G_DebugArc")(center, radius, angle0, angle1, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawBrushPoly(int numPoints, float* points[0x3], const float* color) -> void
{
  return Zynamic::Forward<void (int, float*[0x3], const float*)>(L"DrawBrushPoly")(numPoints, points, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugDrawBrush_r(struct cLeafBrushNode_s* node, const float* color) -> void
{
  return Zynamic::Forward<void (struct cLeafBrushNode_s*, const float*)>(L"G_DebugDrawBrush_r")(node, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DebugDrawBrushModel(struct gentity_s* entity, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, int, int)>(L"G_DebugDrawBrushModel")(entity, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
