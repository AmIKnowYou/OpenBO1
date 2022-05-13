//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_StaticModelGetMemoryUsageInst(struct GfxStaticModelDrawInst* smodelDrawInst) -> int
{
  return Zynamic::Forward<int (struct GfxStaticModelDrawInst*)>(L"R_StaticModelGetMemoryUsageInst")(smodelDrawInst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelGetMemoryUsage(struct XModel* model, int* modelCount) -> int
{
  return Zynamic::Forward<int (struct XModel*, int*)>(L"R_StaticModelGetMemoryUsage")(model, modelCount);
}

#endif // __UNIMPLEMENTED__
