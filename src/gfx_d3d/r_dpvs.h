//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_SetDpvsPlaneSides(struct DpvsPlane* plane) -> void
{
  return Zynamic::Forward<void (struct DpvsPlane*)>(L"R_SetDpvsPlaneSides")(plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DpvsPlaneMaxSignedDistToBox(const struct DpvsPlane* plane, const float* minmax) -> float
{
  return Zynamic::Forward<float (const struct DpvsPlane*, const float*)>(L"R_DpvsPlaneMaxSignedDistToBox")(plane, minmax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DpvsPlaneMinSignedDistToBox(const struct DpvsPlane* plane, const float* minmax) -> float
{
  return Zynamic::Forward<float (const struct DpvsPlane*, const float*)>(L"R_DpvsPlaneMinSignedDistToBox")(plane, minmax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullSphereDpvs(const float* origin, float radius, const struct DpvsPlane* planes, int planeCount) -> int
{
  return Zynamic::Forward<int (const float*, float, const struct DpvsPlane*, int)>(L"R_CullSphereDpvs")(origin, radius, planes, planeCount);
}

#endif // __UNIMPLEMENTED__
