//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_VirtualToSceneRadius(float radius, float* radiusX, float* radiusY) -> void
{
  return Zynamic::Forward<void (float, float*, float*)>(L"RB_VirtualToSceneRadius")(radius, radiusX, radiusY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PickSymmetricFilterMaterial(int halfTapCount, const struct Material** material) -> int
{
  return Zynamic::Forward<int (int, const struct Material**)>(L"RB_PickSymmetricFilterMaterial")(halfTapCount, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GaussianFilterPoints1D(float pixels, int srcRes, int dstRes, int tapLimit, float* tapOffsets, float* tapWeights) -> int
{
  return Zynamic::Forward<int (float, int, int, int, float*, float*)>(L"RB_GaussianFilterPoints1D")(pixels, srcRes, dstRes, tapLimit, tapOffsets, tapWeights);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GenerateGaussianFilter1D(float radius, int* res, int axis, struct GfxImageFilterPass* filterPass) -> void
{
  return Zynamic::Forward<void (float, int*, int, struct GfxImageFilterPass*)>(L"RB_GenerateGaussianFilter1D")(radius, res, axis, filterPass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GenerateGaussianFilter2D(float radius, int srcWidth, int srcHeight, int dstWidth, int dstHeight, struct GfxImageFilterPass* filterPass) -> void
{
  return Zynamic::Forward<void (float, int, int, int, int, struct GfxImageFilterPass*)>(L"RB_GenerateGaussianFilter2D")(radius, srcWidth, srcHeight, dstWidth, dstHeight, filterPass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GenerateGaussianFilterChain(float radiusX, float radiusY, int srcWidth, int srcHeight, int dstWidth, int dstHeight, int passLimit, struct GfxImageFilterPass* filterPass) -> int
{
  return Zynamic::Forward<int (float, float, int, int, int, int, int, struct GfxImageFilterPass*)>(L"RB_GenerateGaussianFilterChain")(radiusX, radiusY, srcWidth, srcHeight, dstWidth, dstHeight, passLimit, filterPass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetupFilterPass(const struct GfxImageFilterPass* filterPass) -> void
{
  return Zynamic::Forward<void (const struct GfxImageFilterPass*)>(L"RB_SetupFilterPass")(filterPass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FilterPingPong(const struct GfxImageFilter* filter, int passIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxImageFilter*, int)>(L"RB_FilterPingPong")(filter, passIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FilterImage(struct GfxImageFilter* filter) -> void
{
  return Zynamic::Forward<void (struct GfxImageFilter*)>(L"RB_FilterImage")(filter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GaussianFilterImage(float radius, unsigned char srcRenderTargetId, unsigned char dstRenderTargetId, int registerCount) -> void
{
  return Zynamic::Forward<void (float, unsigned char, unsigned char, int)>(L"RB_GaussianFilterImage")(radius, srcRenderTargetId, dstRenderTargetId, registerCount);
}

#endif // __UNIMPLEMENTED__
