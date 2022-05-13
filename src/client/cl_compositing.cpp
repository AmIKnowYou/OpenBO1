//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_CompositeSetupImage() -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* ()>(L"CL_CompositeSetupImage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeSetupImageCallback(void* param) -> void
{
  return Zynamic::Forward<void (void*)>(L"CL_CompositeSetupImageCallback")(param);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeReleaseImage(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"CL_CompositeReleaseImage")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeValidateImage(struct GfxImage* image) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*)>(L"CL_CompositeValidateImage")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositePushEmblem(struct CompositeEmblemLayer* layers, int layerCount) -> int
{
  return Zynamic::Forward<int (struct CompositeEmblemLayer*, int)>(L"CL_CompositePushEmblem")(layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositePushCancel(int id) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_CompositePushCancel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeIsComplete(int id) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_CompositeIsComplete")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositePopImage(int id) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (int)>(L"CL_CompositePopImage")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeUseGenerated(float w, float h) -> bool
{
  return Zynamic::Forward<bool (float, float)>(L"CL_CompositeUseGenerated")(w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeCheckStreaming(struct CompositeEmblemLayer* layers, int layerCount) -> bool
{
  return Zynamic::Forward<bool (struct CompositeEmblemLayer*, int)>(L"CL_CompositeCheckStreaming")(layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeEmblemCallback(struct GfxImage* result) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"CL_CompositeEmblemCallback")(result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PCCopyImageGenMIPCallback(void* job) -> void
{
  return Zynamic::Forward<void (void*)>(L"CL_PCCopyImageGenMIPCallback")(job);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeRender() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CompositeRender")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UV_Transform(const float* mat[0x3], float* vec) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"UV_Transform")(mat, vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeDrawEmblemPhysical(float x, float y, float w, float h, const float* color, struct CompositeEmblemLayer* layers, int layerCount) -> bool
{
  return Zynamic::Forward<bool (float, float, float, float, const float*, struct CompositeEmblemLayer*, int)>(L"CL_CompositeDrawEmblemPhysical")(x, y, w, h, color, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeIsLayerEmpty(struct CompositeEmblemLayer* layer) -> bool
{
  return Zynamic::Forward<bool (struct CompositeEmblemLayer*)>(L"CL_CompositeIsLayerEmpty")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeResetLayer(struct CompositeEmblemLayer* layer) -> void
{
  return Zynamic::Forward<void (struct CompositeEmblemLayer*)>(L"CL_CompositeResetLayer")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CompositeClearLayer(struct CompositeEmblemLayer* layer) -> void
{
  return Zynamic::Forward<void (struct CompositeEmblemLayer*)>(L"CL_CompositeClearLayer")(layer);
}

#endif // __UNIMPLEMENTED__
