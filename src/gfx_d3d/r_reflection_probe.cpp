//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetReflectionProbePosition(unsigned int index, float* pos) -> void
{
  return Zynamic::Forward<void (unsigned int, float*)>(L"R_GetReflectionProbePosition")(index, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReflectionProbeRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReflectionProbeRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcCubeMapViewValues(struct refdef_s* refdef, enum CubemapShot cubemapShot, int cubemapSize) -> void
{
  return Zynamic::Forward<void (struct refdef_s*, enum CubemapShot, int)>(L"R_CalcCubeMapViewValues")(refdef, cubemapShot, cubemapSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateReflectionRawData(struct DiskGfxReflectionProbe* probeRawData) -> void
{
  return Zynamic::Forward<void (struct DiskGfxReflectionProbe*)>(L"R_GenerateReflectionRawData")(probeRawData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateReflectionRawDataAll(struct DiskGfxReflectionProbe* probeRawData, int probeCount, bool* generateProbe) -> void
{
  return Zynamic::Forward<void (struct DiskGfxReflectionProbe*, int, bool*)>(L"R_GenerateReflectionRawDataAll")(probeRawData, probeCount, generateProbe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyReflectionsFromLumpData(struct DiskGfxReflectionProbe* probeRawData, const struct DiskGfxReflectionProbe* probeRawLumpData, const int lumpProbeCount) -> bool
{
  return Zynamic::Forward<bool (struct DiskGfxReflectionProbe*, const struct DiskGfxReflectionProbe*, const int)>(L"R_CopyReflectionsFromLumpData")(probeRawData, probeRawLumpData, lumpProbeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateReflections(const char* mapname, struct GfxReflectionProbe* probes, const unsigned int probeCount) -> void
{
  return Zynamic::Forward<void (const char*, struct GfxReflectionProbe*, const unsigned int)>(L"R_GenerateReflections")(mapname, probes, probeCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReflectionProbeGenerateExitWhenDone() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_ReflectionProbeGenerateExitWhenDone")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetBlackProbe(unsigned char* to, unsigned int size) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned int)>(L"R_SetBlackProbe")(to, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateReflectionImageFromRawData(const unsigned char* rawPixels, const int probeIndex, int probeHighMipSize) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const unsigned char*, const int, int)>(L"R_GenerateReflectionImageFromRawData")(rawPixels, probeIndex, probeHighMipSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VerifyFieldNames(const char** buf, const char* filename) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*)>(L"R_VerifyFieldNames")(buf, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ParseColorCorrectionData(const char* buf, const char* filename) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"R_ParseColorCorrectionData")(buf, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadColorCorrectionData() -> void
{
  return Zynamic::Forward<void ()>(L"R_LoadColorCorrectionData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDefaultColorCorrectionEntry() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateDefaultColorCorrectionEntry")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateDummyReflectionImages(struct GfxReflectionProbe* probes, const struct DiskGfxDummyReflectionProbe* probeRawData, const int probeCount, const int probeBaseIndex, const int probeHighMipSize) -> void
{
  return Zynamic::Forward<void (struct GfxReflectionProbe*, const struct DiskGfxDummyReflectionProbe*, const int, const int, const int)>(L"R_GenerateDummyReflectionImages")(probes, probeRawData, probeCount, probeBaseIndex, probeHighMipSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateReflectionImages(struct GfxReflectionProbe* probes, const struct DiskGfxReflectionProbe* probeRawData, const int probeCount, const int probeBaseIndex, const int probeHighMipSize) -> void
{
  return Zynamic::Forward<void (struct GfxReflectionProbe*, const struct DiskGfxReflectionProbe*, const int, const int, const int)>(L"R_GenerateReflectionImages")(probes, probeRawData, probeCount, probeBaseIndex, probeHighMipSize);
}

#endif // __UNIMPLEMENTED__
