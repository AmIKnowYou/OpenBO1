//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FxCurve_AllocAndCreateWithKeys(const float* keyArray, int dimensionCount, int keyCount) -> const struct FxCurve*
{
  return Zynamic::Forward<const struct FxCurve* (const float*, int, int)>(L"FxCurve_AllocAndCreateWithKeys")(keyArray, dimensionCount, keyCount);
}

#endif // __UNIMPLEMENTED__
