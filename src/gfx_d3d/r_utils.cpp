//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_HashAssetName(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"R_HashAssetName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HashString(const char* string) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"R_HashString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocGlobalVariable(unsigned int bytes, const char* name) -> void*
{
  return Zynamic::Forward<void* (unsigned int, const char*)>(L"R_AllocGlobalVariable")(bytes, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeModelLightingGlobal(void* var) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_FreeModelLightingGlobal")(var);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullPointAndRadius(const float* pt, float radius, const struct DpvsPlane* clipPlanes, int clipPlaneCount) -> bool
{
  return Zynamic::Forward<bool (const float*, float, const struct DpvsPlane*, int)>(L"R_CullPointAndRadius")(pt, radius, clipPlanes, clipPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ConvertColorToBytes(const float* colorFloat, unsigned char* colorBytes) -> void
{
  return Zynamic::Forward<void (const float*, unsigned char*)>(L"R_ConvertColorToBytes")(colorFloat, colorBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PickEntityBone(int traceMask, const float* org, const float* dir, int boneIndex, const char** boneName) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, int, const char**)>(L"R_PickEntityBone")(traceMask, org, dir, boneIndex, boneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FresnelTerm(float n0, float n1, float cosIncidentAngle) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"FresnelTerm")(n0, n1, cosIncidentAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetClearColor(float* unpackedRgba) -> bool
{
  return Zynamic::Forward<bool (float*)>(L"R_GetClearColor")(unpackedRgba);
}

#endif // __UNIMPLEMENTED__
