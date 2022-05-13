//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RegisterSkyboxModel(const char* xmodelName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_RegisterSkyboxModel")(xmodelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearSkyboxModel() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearSkyboxModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSkyboxModel(const float* eyePos) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_AddSkyboxModel")(eyePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MapGetSkyboxModel() -> void*
{
  return Zynamic::Forward<void* ()>(L"R_MapGetSkyboxModel")();
}

#endif // __UNIMPLEMENTED__
