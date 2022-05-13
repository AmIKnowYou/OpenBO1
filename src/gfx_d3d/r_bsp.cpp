//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_GetMaterialUsageData(const struct Material* material) -> struct MaterialUsage*
{
  return Zynamic::Forward<struct MaterialUsage* (const struct Material*)>(L"R_GetMaterialUsageData")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateMaterialList() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateMaterialList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownMaterialUsage() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownMaterialUsage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyParseParamsFromDvars(struct SunLightParseParams* sunParse) -> void
{
  return Zynamic::Forward<void (struct SunLightParseParams*)>(L"R_CopyParseParamsFromDvars")(sunParse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InterpretSunLightParseParams(struct SunLightParseParams* sunParse) -> void
{
  return Zynamic::Forward<void (struct SunLightParseParams*)>(L"R_InterpretSunLightParseParams")(sunParse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateLightsFromDvars() -> void
{
  return Zynamic::Forward<void ()>(L"R_UpdateLightsFromDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyParseParamsToDvars(const struct SunLightParseParams* sunParse, int savegame) -> void
{
  return Zynamic::Forward<void (const struct SunLightParseParams*, int)>(L"R_CopyParseParamsToDvars")(sunParse, savegame);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDynamicData() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitDynamicData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWorldPtr_LoadObj(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_SetWorldPtr_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWorldPtr_FastFile(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_SetWorldPtr_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterSkyboxModel() -> void
{
  return Zynamic::Forward<void ()>(L"R_RegisterSkyboxModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LoadWorld(const char* name, int* checksum, int savegame, int location) -> void
{
  return Zynamic::Forward<void (const char*, int*, int, int)>(L"R_LoadWorld")(name, checksum, savegame, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownWorld() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseWorld() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReleaseWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReloadWorld() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReloadWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDebugReflectionProbeLocs(float* locArray[0x3], unsigned int maxCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (float*[0x3], unsigned int)>(L"R_GetDebugReflectionProbeLocs")(locArray, maxCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BspGenerateReflections() -> void
{
  return Zynamic::Forward<void ()>(L"R_BspGenerateReflections")();
}

#endif // __UNIMPLEMENTED__
