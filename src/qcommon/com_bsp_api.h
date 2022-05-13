//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Com_GetPrimaryLightCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Com_GetPrimaryLightCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_GetPrimaryLight(unsigned int primaryLightIndex) -> const struct ComPrimaryLight*
{
  return Zynamic::Forward<const struct ComPrimaryLight* (unsigned int)>(L"Com_GetPrimaryLight")(primaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_CullBoxFromPrimaryLight(const struct ComPrimaryLight* light, const float* boxMidPoint, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const struct ComPrimaryLight*, const float*, const float*)>(L"Com_CullBoxFromPrimaryLight")(light, boxMidPoint, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_CullSphereFromPrimaryLight(const struct ComPrimaryLight* light, const float* origin, float radius) -> bool
{
  return Zynamic::Forward<bool (const struct ComPrimaryLight*, const float*, float)>(L"Com_CullSphereFromPrimaryLight")(light, origin, radius);
}

#endif // __UNIMPLEMENTED__
