//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_ShowGridOrigin(const float* origin) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_ShowGridOrigin")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowGridBox(const unsigned int* pos) -> void
{
  return Zynamic::Forward<void (const unsigned int*)>(L"R_ShowGridBox")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowGridCorner(unsigned int x, unsigned int y, unsigned int z, float halfSize, const float* color) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int, float, const float*)>(L"R_ShowGridCorner")(x, y, z, halfSize, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowLightGrid(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const float* samplePos, const struct GfxLightGridEntry** cornerEntry, bool* suppressEntry, bool honorSuppression) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*, const unsigned int*, const float*, const struct GfxLightGridEntry**, bool*, bool)>(L"R_ShowLightGrid")(lightGrid, pos, samplePos, cornerEntry, suppressEntry, honorSuppression);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'lightGridMutex''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'lightGridMutex''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto htabAlloc() -> struct htab*
{
  return Zynamic::Forward<struct htab* ()>(L"htabAlloc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllocAllMemoryNeeded() -> void
{
  return Zynamic::Forward<void ()>(L"AllocAllMemoryNeeded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HashXyz(const unsigned short& p[0x3]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const unsigned short&[0x3])>(L"HashXyz")(p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HashPackPoint(const unsigned short& p[0x3]) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (const unsigned short&[0x3])>(L"HashPackPoint")(p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HashUnpackPoint(unsigned __int64 value, unsigned short& p[0x3]) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned short&[0x3])>(L"HashUnpackPoint")(value, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto addHash(const unsigned short& data[0x3]) -> struct htab*
{
  return Zynamic::Forward<struct htab* (const unsigned short&[0x3])>(L"addHash")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto findhash(const unsigned short& data[0x3]) -> struct htab*
{
  return Zynamic::Forward<struct htab* (const unsigned short&[0x3])>(L"findhash")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SortedHistoryEntry(unsigned short x, unsigned short y, unsigned short z, enum GfxSortedHistoryAdd addMode) -> bool
{
  return Zynamic::Forward<bool (unsigned short, unsigned short, unsigned short, enum GfxSortedHistoryAdd)>(L"R_SortedHistoryEntry")(x, y, z, addMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowLightVisCachePoints(const float* viewOrigin, const struct DpvsPlane* clipPlanes, int clipPlaneCount) -> void
{
  return Zynamic::Forward<void (const float*, const struct DpvsPlane*, int)>(L"R_ShowLightVisCachePoints")(viewOrigin, clipPlanes, clipPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateVisHistory(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** cornerEntry) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*, const unsigned int*, const struct GfxLightGridEntry**)>(L"R_UpdateVisHistory")(lightGrid, pos, cornerEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightGridColorsVec4(const struct GfxDecodedLightGridColors* colors, float primaryWeight, unsigned char* pixels) -> void
{
  return Zynamic::Forward<void (const struct GfxDecodedLightGridColors*, float, unsigned char*)>(L"R_SetLightGridColorsVec4")(colors, primaryWeight, pixels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DecodeLightGridColors(const struct GfxCompressedLightGridColors* colors, struct GfxDecodedLightGridColors* decodedColors) -> void
{
  return Zynamic::Forward<void (const struct GfxCompressedLightGridColors*, struct GfxDecodedLightGridColors*)>(L"R_DecodeLightGridColors")(colors, decodedColors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DecodeLightGridColorsWeighted(const struct GfxCompressedLightGridColors* colors, struct GfxDecodedLightGridColors* decodedColors, float weight) -> void
{
  return Zynamic::Forward<void (const struct GfxCompressedLightGridColors*, struct GfxDecodedLightGridColors*, float)>(L"R_DecodeLightGridColorsWeighted")(colors, decodedColors, weight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightGridColorsFromIndex(const struct GfxLightGrid* lightGrid, unsigned int colorsIndex, const float* heroPos, float primaryLightWeight, unsigned short dest) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*, unsigned int, const float*, float, unsigned short)>(L"R_SetLightGridColorsFromIndex")(lightGrid, colorsIndex, heroPos, primaryLightWeight, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BlendAndSetLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, const float* heroPos, float primaryLightWeight, float weightNormalizeScale, unsigned short dest) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*, const unsigned short*, const float*, unsigned int, const float*, float, float, unsigned short)>(L"R_BlendAndSetLightGridColors")(lightGrid, colorsIndex, colorsWeight, colorsCount, heroPos, primaryLightWeight, weightNormalizeScale, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ApplyLightGridColorsPatch(const struct GfxModelLightingPatch* patch, unsigned char* pixels) -> void
{
  return Zynamic::Forward<void (const struct GfxModelLightingPatch*, unsigned char*)>(L"R_ApplyLightGridColorsPatch")(patch, pixels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ExtrapolateLightingAtPoint(const struct GfxLightGrid* lightGrid, const float* heroPos, unsigned short dest, enum GfxModelLightExtrapolation extrapolateBehavior, unsigned int defaultGridEntry) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxLightGrid*, const float*, unsigned short, enum GfxModelLightExtrapolation, unsigned int)>(L"R_ExtrapolateLightingAtPoint")(lightGrid, heroPos, dest, extrapolateBehavior, defaultGridEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetLightGridSampleEntryQuad(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** entries, unsigned int* defaultGridEntry) -> void
{
  return Zynamic::Forward<void (const struct GfxLightGrid*, const unsigned int*, const struct GfxLightGridEntry**, unsigned int*)>(L"R_GetLightGridSampleEntryQuad")(lightGrid, pos, entries, defaultGridEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsValidLightGridSample(const struct GfxLightGrid* lightGrid, const struct GfxLightGridEntry* entry, int cornerIndex, const unsigned int* pos, const float* samplePos) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightGrid*, const struct GfxLightGridEntry*, int, const unsigned int*, const float*)>(L"R_IsValidLightGridSample")(lightGrid, entry, cornerIndex, pos, samplePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightGridLookup(const struct GfxLightGrid* lightGrid, const float* samplePos, float* cornerWeight, const struct GfxLightGridEntry** cornerEntry, unsigned int* defaultGridEntry) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxLightGrid*, const float*, float*, const struct GfxLightGridEntry**, unsigned int*)>(L"R_LightGridLookup")(lightGrid, samplePos, cornerWeight, cornerEntry, defaultGridEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightFromGrid(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned char sunPrimaryLightIndex) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct GfxLightGrid*, const float*, unsigned char)>(L"R_GetPrimaryLightFromGrid")(lightGrid, samplePos, sunPrimaryLightIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CanLightInfluenceLightGridCorner(const struct GfxLightGrid* lightGrid, const struct ComPrimaryLight* light, const float* samplePos, unsigned int cornerIndex) -> bool
{
  return Zynamic::Forward<bool (const struct GfxLightGrid*, const struct ComPrimaryLight*, const float*, unsigned int)>(L"R_CanLightInfluenceLightGridCorner")(lightGrid, light, samplePos, cornerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetLightingAtPoint(const struct GfxLightGrid* remoteLightGrid, const float* samplePos, unsigned int nonSunPrimaryLightIndex, unsigned short dest, enum GfxModelLightExtrapolation extrapolateBehavior, bool useHeroLighting) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxLightGrid*, const float*, unsigned int, unsigned short, enum GfxModelLightExtrapolation, bool)>(L"R_GetLightingAtPoint")(remoteLightGrid, samplePos, nonSunPrimaryLightIndex, dest, extrapolateBehavior, useHeroLighting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetAverageLightingAtPoint(const float* samplePos, float* outColor) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"R_GetAverageLightingAtPoint")(samplePos, outColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetAverageSecondaryLightingAtPoint(const float* samplePos, float* outColor) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"R_GetAverageSecondaryLightingAtPoint")(samplePos, outColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightGridSampleDeltas(int rowStride, int sliceStride) -> void
{
  return Zynamic::Forward<void (int, int)>(L"R_SetLightGridSampleDeltas")(rowStride, sliceStride);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightVisHistoryFilename(const char* bspName, char* filename) -> void
{
  return Zynamic::Forward<void (const char*, char*)>(L"R_LightVisHistoryFilename")(bspName, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitLightVisHistory(const char* bspName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_InitLightVisHistory")(bspName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveLightVisHistory() -> void
{
  return Zynamic::Forward<void ()>(L"R_SaveLightVisHistory")();
}

#endif // __UNIMPLEMENTED__
