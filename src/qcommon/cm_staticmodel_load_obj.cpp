//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_InitStaticModel(struct cStaticModel_s* staticModel, float* origin, float* angles, float scale) -> void
{
  return Zynamic::Forward<void (struct cStaticModel_s*, float*, float*, float)>(L"CM_InitStaticModel")(staticModel, origin, angles, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_CreateStaticModel(struct cStaticModel_s* staticModel, const char* name, float* origin, float* angles, float scale) -> bool
{
  return Zynamic::Forward<bool (struct cStaticModel_s*, const char*, float*, float*, float)>(L"CM_CreateStaticModel")(staticModel, name, origin, angles, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadStaticModels() -> void
{
  return Zynamic::Forward<void ()>(L"CM_LoadStaticModels")();
}

#endif // __UNIMPLEMENTED__
