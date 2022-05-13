//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetBaseLodDist(const float* origin) -> float
{
  return Zynamic::Forward<float (const float*)>(L"R_GetBaseLodDist")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetAdjustedLodDist(float dist, enum XModelLodRampType lodRampType) -> float
{
  return Zynamic::Forward<float (float, enum XModelLodRampType)>(L"R_GetAdjustedLodDist")(dist, lodRampType);
}

#endif // __UNIMPLEMENTED__
