//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_water() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_water")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WaterFrequenciesAtTime(struct complex_s* H, const struct water_t* water, float t) -> void
{
  return Zynamic::Forward<void (struct complex_s*, const struct water_t*, float)>(L"WaterFrequenciesAtTime")(H, water, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TransposeArray(struct complex_s* H, unsigned int M) -> void
{
  return Zynamic::Forward<void (struct complex_s*, unsigned int)>(L"TransposeArray")(H, M);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WaterAmplitudesFromFrequencies(struct complex_s* H, const struct water_t* water) -> void
{
  return Zynamic::Forward<void (struct complex_s*, const struct water_t*)>(L"WaterAmplitudesFromFrequencies")(H, water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WaterPixelsFromAmplitudes(unsigned char* pixels, struct complex_s* H, const struct water_t* water) -> void
{
  return Zynamic::Forward<void (unsigned char*, struct complex_s*, const struct water_t*)>(L"WaterPixelsFromAmplitudes")(pixels, H, water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GenerateMipMaps(enum _D3DFORMAT format, unsigned char* pixels, struct water_t* water) -> void
{
  return Zynamic::Forward<void (enum _D3DFORMAT, unsigned char*, struct water_t*)>(L"GenerateMipMaps")(format, pixels, water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UploadWaterTextureInternal(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_UploadWaterTextureInternal")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UploadWaterTexture(struct water_t* water, float floatTime) -> void
{
  return Zynamic::Forward<void (struct water_t*, float)>(L"R_UploadWaterTexture")(water, floatTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitWater() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitWater")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_PicmipWater(struct water_t** waterRef) -> void
{
  return Zynamic::Forward<void (struct water_t**)>(L"Load_PicmipWater")(waterRef);
}

#endif // __UNIMPLEMENTED__
