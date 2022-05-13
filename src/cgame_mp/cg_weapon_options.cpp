//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::GetImageFromTable(const struct StringTable* table, int row, int column) -> const struct GfxImage*
{
  return Zynamic::Forward<public const struct GfxImage* (const struct StringTable*, int, int)>(L"WeaponOptions::GetImageFromTable")(table, row, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::InitWeaponOptionTextures(const char* tableName, const char* label, int labelCol, int textureCol, const struct GfxImage** overrides, int num) -> void
{
  return Zynamic::Forward<public void (const char*, const char*, int, int, const struct GfxImage**, int)>(L"WeaponOptions::InitWeaponOptionTextures")(tableName, label, labelCol, textureCol, overrides, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::InitWeaponOptionMaterials(const char* tableName, const char* label, int labelCol, int materialCol, struct Material** overrides, int num) -> void
{
  return Zynamic::Forward<public void (const char*, const char*, int, int, struct Material**, int)>(L"WeaponOptions::InitWeaponOptionMaterials")(tableName, label, labelCol, materialCol, overrides, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::InitWeaponOptionColors(const char* tableName, const char* label, int labelCol, int colorsCol, float* colors[0x4]) -> void
{
  return Zynamic::Forward<public void (const char*, const char*, int, int, float*[0x4])>(L"WeaponOptions::InitWeaponOptionColors")(tableName, label, labelCol, colorsCol, colors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::InitWeaponOptions() -> void
{
  return Zynamic::Forward<public void ()>(L"WeaponOptions::InitWeaponOptions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GC_InitWeaponOptionsDvars() -> void
{
  return Zynamic::Forward<void ()>(L"GC_InitWeaponOptionsDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::FindCamoOverrideIndex(const struct GfxImage* base, unsigned int defaultIndex) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (const struct GfxImage*, unsigned int)>(L"WeaponOptions::FindCamoOverrideIndex")(base, defaultIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::WeaponOverride::AddToGold(const char* matName, bool gold) -> void
{
  return Zynamic::Forward<public void (const char*, bool)>(L"WeaponOptions::WeaponOverride::AddToGold")(matName, gold);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::WeaponOverride::Init(const struct WeaponVariantDef* weapVarDef) -> void
{
  return Zynamic::Forward<public void (const struct WeaponVariantDef*)>(L"WeaponOptions::WeaponOverride::Init")(weapVarDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::WeaponOverride::ToGold::Init(const char* matName) -> bool
{
  return Zynamic::Forward<public bool (const char*)>(L"WeaponOptions::WeaponOverride::ToGold::Init")(matName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::WeaponOverride::ToGold::Set(int textureOverrideIndex, unsigned int modelMask, const struct WeaponOptions::WeaponOverride::ToGold& gold) -> int
{
  return Zynamic::Forward<public int (int, unsigned int, const struct WeaponOptions::WeaponOverride::ToGold&)>(L"WeaponOptions::WeaponOverride::ToGold::Set")(textureOverrideIndex, modelMask, gold);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::GetWeaponOverrides(const struct WeaponVariantDef* weapVarDef) -> const struct WeaponOptions::WeaponOverride*
{
  return Zynamic::Forward<public const struct WeaponOptions::WeaponOverride* (const struct WeaponVariantDef*)>(L"WeaponOptions::GetWeaponOverrides")(weapVarDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetShaderConstant(struct ShaderConstantSet* constantSet, const char* name) -> int
{
  return Zynamic::Forward<int (struct ShaderConstantSet*, const char*)>(L"GetShaderConstant")(constantSet, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::SetupWeaponOptionsRender(int localClientNum, const float* origin, const struct WeaponVariantDef* weapVarDef, struct renderOptions_s weaponOptions, unsigned int modelMask, struct ShaderConstantSet* constantSet, const char* name, int textureOverrideIndex) -> int
{
  return Zynamic::Forward<public int (int, const float*, const struct WeaponVariantDef*, struct renderOptions_s, unsigned int, struct ShaderConstantSet*, const char*, int)>(L"WeaponOptions::SetupWeaponOptionsRender")(localClientNum, origin, weapVarDef, weaponOptions, modelMask, constantSet, name, textureOverrideIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::IsValidRenderOption(struct renderOptions_s renderOptions) -> bool
{
  return Zynamic::Forward<public bool (struct renderOptions_s)>(L"WeaponOptions::IsValidRenderOption")(renderOptions);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::GetWeaponOptionReticleColor(int reticleColorIndex, float* outColor) -> bool
{
  return Zynamic::Forward<public bool (int, float*)>(L"WeaponOptions::GetWeaponOptionReticleColor")(reticleColorIndex, outColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto WeaponOptions::GetWeaponOptionLensColor(int reticleColorIndex, float* outColor) -> bool
{
  return Zynamic::Forward<public bool (int, float*)>(L"WeaponOptions::GetWeaponOptionLensColor")(reticleColorIndex, outColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GC_InitWeaponOptions() -> void
{
  return Zynamic::Forward<void ()>(L"GC_InitWeaponOptions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupWeaponOptionsRender(int localClientNum, const float* origin, const struct WeaponVariantDef* weaponVarDef, struct renderOptions_s renderOptions, struct ShaderConstantSet* constantSet, const char* name) -> int
{
  return Zynamic::Forward<int (int, const float*, const struct WeaponVariantDef*, struct renderOptions_s, struct ShaderConstantSet*, const char*)>(L"CG_SetupWeaponOptionsRender")(localClientNum, origin, weaponVarDef, renderOptions, constantSet, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupWeaponOptionsRender(int localClientNum, const float* origin, const struct WeaponVariantDef* wvd, struct renderOptions_s wo, unsigned int modelMask, struct ShaderConstantSet* constantSet, const char* name, int textureOverrideIndex) -> int
{
  return Zynamic::Forward<int (int, const float*, const struct WeaponVariantDef*, struct renderOptions_s, unsigned int, struct ShaderConstantSet*, const char*, int)>(L"CG_SetupWeaponOptionsRender")(localClientNum, origin, wvd, wo, modelMask, constantSet, name, textureOverrideIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsValidRenderOption(struct renderOptions_s renderOptions) -> bool
{
  return Zynamic::Forward<bool (struct renderOptions_s)>(L"CG_IsValidRenderOption")(renderOptions);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponOptionReticleColor(int reticleColorIndex, float* outColor) -> bool
{
  return Zynamic::Forward<bool (int, float*)>(L"CG_GetWeaponOptionReticleColor")(reticleColorIndex, outColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponOptionLensColor(int reticleColorIndex, float* outColor) -> bool
{
  return Zynamic::Forward<bool (int, float*)>(L"CG_GetWeaponOptionLensColor")(reticleColorIndex, outColor);
}

#endif // __UNIMPLEMENTED__
