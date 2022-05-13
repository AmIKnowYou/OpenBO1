//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RegisterWorkerThreadDvar(const char* name, unsigned int workerIndex) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, unsigned int)>(L"R_RegisterWorkerThreadDvar")(name, workerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"R_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckDvarModified(const struct dvar_s* dvar) -> bool
{
  return Zynamic::Forward<bool (const struct dvar_s*)>(L"R_CheckDvarModified")(dvar);
}

#endif // __UNIMPLEMENTED__
