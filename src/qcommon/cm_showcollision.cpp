//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cm_showcollision() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cm_showcollision")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetShowCollisionColor(float* colorFloat, int colorCounter) -> void
{
  return Zynamic::Forward<void (float*, int)>(L"CM_GetShowCollisionColor")(colorFloat, colorCounter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BrushInView(const struct cbrush_t* brush, struct cplane_s* frustumPlanes, int frustumPlaneCount) -> bool
{
  return Zynamic::Forward<bool (const struct cbrush_t*, struct cplane_s*, int)>(L"CM_BrushInView")(brush, frustumPlanes, frustumPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AddSimpleBrushPoint(const struct cbrush_t* brush, const float* axialPlanes[0x4], const short* sideIndices, const float* xyz, int ptCount, struct ShowCollisionBrushPt* brushPts) -> int
{
  return Zynamic::Forward<int (const struct cbrush_t*, const float*[0x4], const short*, const float*, int, struct ShowCollisionBrushPt*)>(L"CM_AddSimpleBrushPoint")(brush, axialPlanes, sideIndices, xyz, ptCount, brushPts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetPlaneVec4Form(const struct cbrushside_t* sides, const float* axialPlanes[0x4], int index, float* expandedPlane) -> void
{
  return Zynamic::Forward<void (const struct cbrushside_t*, const float*[0x4], int, float*)>(L"CM_GetPlaneVec4Form")(sides, axialPlanes, index, expandedPlane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ForEachBrushPlaneIntersection(const struct cbrush_t* brush, const float* axialPlanes[0x4], struct ShowCollisionBrushPt* brushPts) -> int
{
  return Zynamic::Forward<int (const struct cbrush_t*, const float*[0x4], struct ShowCollisionBrushPt*)>(L"CM_ForEachBrushPlaneIntersection")(brush, axialPlanes, brushPts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointInList(const float* point, const float* xyzList[0x3], int xyzCount) -> int
{
  return Zynamic::Forward<int (const float*, const float*[0x3], int)>(L"CM_PointInList")(point, xyzList, xyzCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetXyzList(int sideIndex, const struct ShowCollisionBrushPt* pts, int ptCount, float* xyz[0x3], int xyzLimit) -> int
{
  return Zynamic::Forward<int (int, const struct ShowCollisionBrushPt*, int, float*[0x3], int)>(L"CM_GetXyzList")(sideIndex, pts, ptCount, xyz, xyzLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PickProjectionAxes(const float* normal, int* i, int* j) -> void
{
  return Zynamic::Forward<void (const float*, int*, int*)>(L"CM_PickProjectionAxes")(normal, i, j);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SignedAreaForPointsProjected(const float* pt0, const float* pt1, const float* pt2, int i, int j) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*, int, int)>(L"CM_SignedAreaForPointsProjected")(pt0, pt1, pt2, i, j);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AddColinearExteriorPointToWindingProjected(struct winding_t* w, const float* pt, int i, int j, int index0, int index1) -> void
{
  return Zynamic::Forward<void (struct winding_t*, const float*, int, int, int, int)>(L"CM_AddColinearExteriorPointToWindingProjected")(w, pt, i, j, index0, index1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AddExteriorPointToWindingProjected(struct winding_t* w, const float* pt, int i, int j) -> void
{
  return Zynamic::Forward<void (struct winding_t*, const float*, int, int)>(L"CM_AddExteriorPointToWindingProjected")(w, pt, i, j);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_RepresentativeTriangleFromWinding(const struct winding_t* w, const float* normal, int* i0, int* i1, int* i2) -> float
{
  return Zynamic::Forward<float (const struct winding_t*, const float*, int*, int*, int*)>(L"CM_RepresentativeTriangleFromWinding")(w, normal, i0, i1, i2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ReverseWinding(struct winding_t* w) -> void
{
  return Zynamic::Forward<void (struct winding_t*)>(L"CM_ReverseWinding")(w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BuildBrushWindingForSide(struct winding_t* winding, float* planeNormal, int sideIndex, const struct ShowCollisionBrushPt* pts, int ptCount) -> bool
{
  return Zynamic::Forward<bool (struct winding_t*, float*, int, const struct ShowCollisionBrushPt*, int)>(L"CM_BuildBrushWindingForSide")(winding, planeNormal, sideIndex, pts, ptCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ShowSingleBrushCollision(const struct cbrush_t* brush, const float* color, function* drawCollisionPoly) -> void
{
  return Zynamic::Forward<void (const struct cbrush_t*, const float*, function *)>(L"CM_ShowSingleBrushCollision")(brush, color, drawCollisionPoly);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ShowBrushCollision(int contentMask, struct cplane_s* frustumPlanes, int frustumPlaneCount, function* drawCollisionPoly) -> void
{
  return Zynamic::Forward<void (int, struct cplane_s*, int, function *)>(L"CM_ShowBrushCollision")(contentMask, frustumPlanes, frustumPlaneCount, drawCollisionPoly);
}

#endif // __UNIMPLEMENTED__
