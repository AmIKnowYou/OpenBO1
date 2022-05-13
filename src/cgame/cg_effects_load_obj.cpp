//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_FleshTypeToName(int fleshTypeId) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"CG_FleshTypeToName")(fleshTypeId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects_Generic<31, char const * __cdecl(int)>(const char** szEffectFile, const char* const pszTypeName, const struct FxEffectDef** fx, function* typeToNameFunc, const char* defaultEffectName) -> int
{
  return Zynamic::Forward<int (const char**, const char* const, const struct FxEffectDef**, function *, const char*)>(L"CG_RegisterImpactEffects_Generic<31,char const * __cdecl(int)>")(szEffectFile, pszTypeName, fx, typeToNameFunc, defaultEffectName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects_NonFlesh(const char** szEffectFile, const char* const pszTypeName, const struct FxEffectDef** fx) -> int
{
  return Zynamic::Forward<int (const char**, const char* const, const struct FxEffectDef**)>(L"CG_RegisterImpactEffects_NonFlesh")(szEffectFile, pszTypeName, fx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects_Flesh(const char** szEffectFile, const char* const pszTypeName, const struct FxEffectDef** fx, const char* defaultEffectName) -> int
{
  return Zynamic::Forward<int (const char**, const char* const, const struct FxEffectDef**, const char*)>(L"CG_RegisterImpactEffects_Flesh")(szEffectFile, pszTypeName, fx, defaultEffectName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseImpactEffects(const char* filename, const char* buf, int iTypeCount, const char* const* pszTypeName, struct EffectFile* effectFile) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*, int, const char* const*, struct EffectFile*)>(L"CG_ParseImpactEffects")(filename, buf, iTypeCount, pszTypeName, effectFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compare_impact_files(const void* pe0, const void* pe1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compare_impact_files")(pe0, pe1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffectsForDir(const char* dir, struct EffectFile* effectFile, char* listbuf) -> void
{
  return Zynamic::Forward<void (const char*, struct EffectFile*, char*)>(L"CG_RegisterImpactEffectsForDir")(dir, effectFile, listbuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects_LoadObj(const char* mapname) -> struct FxImpactTable*
{
  return Zynamic::Forward<struct FxImpactTable* (const char*)>(L"CG_RegisterImpactEffects_LoadObj")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects_FastFile(const char* mapname) -> struct FxImpactTable*
{
  return Zynamic::Forward<struct FxImpactTable* (const char*)>(L"CG_RegisterImpactEffects_FastFile")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterImpactEffects(const char* mapname) -> struct FxImpactTable*
{
  return Zynamic::Forward<struct FxImpactTable* (const char*)>(L"CG_RegisterImpactEffects")(mapname);
}

#endif // __UNIMPLEMENTED__
