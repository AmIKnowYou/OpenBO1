//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Outdoor_TempHunkFreePic() -> void
{
  return Zynamic::Forward<void ()>(L"Outdoor_TempHunkFreePic")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_TraceHeightInWorld(float worldX, float worldY) -> float
{
  return Zynamic::Forward<float (float, float)>(L"Outdoor_TraceHeightInWorld")(worldX, worldY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_ApplyBoundingBox(const float* outdoorMin, const float* outdoorMax) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"Outdoor_ApplyBoundingBox")(outdoorMin, outdoorMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_UpdateTransforms() -> void
{
  return Zynamic::Forward<void ()>(L"Outdoor_UpdateTransforms")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_SetRendererOutdoorLookupMatrix(struct GfxWorld* world) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*)>(L"Outdoor_SetRendererOutdoorLookupMatrix")(world);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_TransformToTextureClamped(int dimension, float inWorld) -> int
{
  return Zynamic::Forward<int (int, float)>(L"Outdoor_TransformToTextureClamped")(dimension, inWorld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_WriteToPic(float zWorld, unsigned char* outByte) -> void
{
  return Zynamic::Forward<void (float, unsigned char*)>(L"Outdoor_WriteToPic")(zWorld, outByte);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Outdoor_ComputeTexels() -> void
{
  return Zynamic::Forward<void ()>(L"Outdoor_ComputeTexels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterOutdoorImage(struct GfxWorld* world, const float* outdoorMin, const float* outdoorMax) -> void
{
  return Zynamic::Forward<void (struct GfxWorld*, const float*, const float*)>(L"R_RegisterOutdoorImage")(world, outdoorMin, outdoorMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateOutdoorImage(struct GfxImage* outdoorImage) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"R_GenerateOutdoorImage")(outdoorImage);
}

#endif // __UNIMPLEMENTED__
