//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_CullSphereFromLightRegionHull(const struct GfxLightRegionHull* hull, const float* origin, float radius) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightRegionHull*, const float*, float)>(L"R_CullSphereFromLightRegionHull")(hull, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullSphereFromLightRegion(const struct GfxLightRegion* region, const float* lightOrigin, const float* origin, float radius) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightRegion*, const float*, const float*, float)>(L"R_CullSphereFromLightRegion")(region, lightOrigin, origin, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullBoxFromLightRegionHull(const struct GfxLightRegionHull* hull, const float* boxMidPoint, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightRegionHull*, const float*, const float*)>(L"R_CullBoxFromLightRegionHull")(hull, boxMidPoint, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullBoxFromLightRegion(const struct GfxLightRegion* region, const float* lightOrigin, const float* boxMidPoint, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightRegion*, const float*, const float*, const float*)>(L"R_CullBoxFromLightRegion")(region, lightOrigin, boxMidPoint, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
