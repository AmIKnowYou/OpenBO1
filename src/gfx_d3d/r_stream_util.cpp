//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_CalculateMinimalAabbForSpheres(const float* sphereCenters[0x3], const float* sphereRadii, int sphereCount, float* outMins, float* outMaxs) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, int, float*, float*)>(L"R_CalculateMinimalAabbForSpheres")(sphereCenters, sphereRadii, sphereCount, outMins, outMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateTriangleTextureGradient(const float* pos[0x3], const float* texCoord[0x2], float* outTexGradient[0x3], float* outNormal) -> bool
{
  return Zynamic::Forward<bool (const float*[0x3], const float*[0x2], float*[0x3], float*)>(L"R_CalculateTriangleTextureGradient")(pos, texCoord, outTexGradient, outNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateTexelDensityFromGradient(const float* texGradient[0x3], const float* textureSize) -> float
{
  return Zynamic::Forward<float (const float*[0x3], const float*)>(L"R_CalculateTexelDensityFromGradient")(texGradient, textureSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateTriangleArea2D(const float* texCoord[0x2]) -> float
{
  return Zynamic::Forward<float (const float*[0x2])>(L"R_CalculateTriangleArea2D")(texCoord);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateTriangleArea3D(const float* texCoord[0x3]) -> float
{
  return Zynamic::Forward<float (const float*[0x3])>(L"R_CalculateTriangleArea3D")(texCoord);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalculateTriangleTopMipAabb(const float* pos[0x3], const float* texCoord[0x2], const float* textureSize, unsigned int filterState, float* outMins, float* outMaxs, float* outRadius) -> bool
{
  return Zynamic::Forward<bool (const float*[0x3], const float*[0x2], const float*, unsigned int, float*, float*, float*)>(L"R_CalculateTriangleTopMipAabb")(pos, texCoord, textureSize, filterState, outMins, outMaxs, outRadius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamGetMaterialTextureSize(const struct Material* material, int texIndex, float* texSize, unsigned int* filterState) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, int, float*, unsigned int*)>(L"R_StreamGetMaterialTextureSize")(material, texIndex, texSize, filterState);
}

#endif // __UNIMPLEMENTED__
