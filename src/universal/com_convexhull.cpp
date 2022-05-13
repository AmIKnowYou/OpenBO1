//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_SwapHullPoints(unsigned int* pointOrder, unsigned int pointIndex0, unsigned int pointIndex1) -> void
{
  return Zynamic::Forward<void (unsigned int*, unsigned int, unsigned int)>(L"Com_SwapHullPoints")(pointOrder, pointIndex0, pointIndex1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitialHull(const float* points[0x2], unsigned int* pointOrder, unsigned int pointCount, unsigned int* hullOrder) -> void
{
  return Zynamic::Forward<void (const float*[0x2], unsigned int*, unsigned int, unsigned int*)>(L"Com_InitialHull")(points, pointOrder, pointCount, hullOrder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_AddPointToHull(const unsigned int pointIndex, unsigned int newIndex, unsigned int* hullOrder, unsigned int hullPointCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const unsigned int, unsigned int, unsigned int*, unsigned int)>(L"Com_AddPointToHull")(pointIndex, newIndex, hullOrder, hullPointCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_RecursivelyGrowHull(const float* points[0x2], unsigned int* pointOrder, unsigned int pointCount, unsigned int firstIndex, unsigned int secondIndex, unsigned int* hullOrder, unsigned int hullPointCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*[0x2], unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int)>(L"Com_RecursivelyGrowHull")(points, pointOrder, pointCount, firstIndex, secondIndex, hullOrder, hullPointCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GrowInitialHull(const float* points[0x2], unsigned int* pointOrder, unsigned int pointCount, unsigned int* hullOrder) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*[0x2], unsigned int*, unsigned int, unsigned int*)>(L"Com_GrowInitialHull")(points, pointOrder, pointCount, hullOrder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_TranslatePoints(float* points[0x2], unsigned int pointCount, float* offset) -> void
{
  return Zynamic::Forward<void (float*[0x2], unsigned int, float*)>(L"Com_TranslatePoints")(points, pointCount, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ConvexHull(float* points[0x2], unsigned int pointCount, float* hull[0x2]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (float*[0x2], unsigned int, float*[0x2])>(L"Com_ConvexHull")(points, pointCount, hull);
}

#endif // __UNIMPLEMENTED__
