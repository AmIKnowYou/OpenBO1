//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_material() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_material")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Alloc(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Material_Alloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_CreateMaterialPixelShader(struct GfxPixelShaderLoadDef* loadDef, struct MaterialPixelShader* mtlShader) -> void
{
  return Zynamic::Forward<void (struct GfxPixelShaderLoadDef*, struct MaterialPixelShader*)>(L"Load_CreateMaterialPixelShader")(loadDef, mtlShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_CreateMaterialVertexShader(struct GfxVertexShaderLoadDef* loadDef, struct MaterialVertexShader* mtlShader) -> void
{
  return Zynamic::Forward<void (struct GfxVertexShaderLoadDef*, struct MaterialVertexShader*)>(L"Load_CreateMaterialVertexShader")(loadDef, mtlShader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_BuildVertexDecl(const struct MaterialStreamRouting* routingData, int streamCount, const struct stream_source_info_t* sourceTable) -> struct IDirect3DVertexDeclaration9*
{
  return Zynamic::Forward<struct IDirect3DVertexDeclaration9* (const struct MaterialStreamRouting*, int, const struct stream_source_info_t*)>(L"Material_BuildVertexDecl")(routingData, streamCount, sourceTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_BuildVertexDecl(struct MaterialVertexDeclaration** mtlVertDecl) -> void
{
  return Zynamic::Forward<void (struct MaterialVertexDeclaration**)>(L"Load_BuildVertexDecl")(mtlVertDecl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MaterialTechniqueSet_FindHashLocation(const char* name, int* foundHashIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, int*)>(L"MaterialTechniqueSet_FindHashLocation")(name, foundHashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindTechniqueSet_LoadObj(const char* name, enum MtlTechSetNotFoundBehavior notFoundBehavior) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const char*, enum MtlTechSetNotFoundBehavior)>(L"Material_FindTechniqueSet_LoadObj")(name, notFoundBehavior);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindTechniqueSet_FastFile(const char* name, enum MtlTechSetNotFoundBehavior notFoundBehavior) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const char*, enum MtlTechSetNotFoundBehavior)>(L"Material_FindTechniqueSet_FastFile")(name, notFoundBehavior);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindTechniqueSet(const char* name, enum MtlTechSetNotFoundBehavior notFoundBehavior) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const char*, enum MtlTechSetNotFoundBehavior)>(L"Material_FindTechniqueSet")(name, notFoundBehavior);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetTechniqueSet(const char* name, struct MaterialTechniqueSet* techniqueSet) -> void
{
  return Zynamic::Forward<void (const char*, struct MaterialTechniqueSet*)>(L"Material_SetTechniqueSet")(name, techniqueSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetAlwaysUseDefaultMaterial(const bool alwaysUseDefaultMaterial) -> void
{
  return Zynamic::Forward<void (const bool)>(L"Material_SetAlwaysUseDefaultMaterial")(alwaysUseDefaultMaterial);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_PreventOverrideTechniqueGeneration() -> void
{
  return Zynamic::Forward<void ()>(L"Material_PreventOverrideTechniqueGeneration")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterTechniqueSet(const char* name) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const char*)>(L"Material_RegisterTechniqueSet")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ReleasePassResources(struct MaterialPass* pass) -> void
{
  return Zynamic::Forward<void (struct MaterialPass*)>(L"Material_ReleasePassResources")(pass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ReleaseTechniqueSetResources(struct MaterialTechniqueSet* techniqueSet) -> void
{
  return Zynamic::Forward<void (struct MaterialTechniqueSet*)>(L"Material_ReleaseTechniqueSetResources")(techniqueSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FreeAllTechniqueSets() -> void
{
  return Zynamic::Forward<void ()>(L"Material_FreeAllTechniqueSets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DirtySort() -> void
{
  return Zynamic::Forward<void ()>(L"Material_DirtySort")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Add(struct Material* material, unsigned short hashIndex) -> void
{
  return Zynamic::Forward<void (struct Material*, unsigned short)>(L"Material_Add")(material, hashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Duplicate(struct Material* mtlCopy, const char* name) -> struct Material*
{
  return Zynamic::Forward<struct Material* (struct Material*, const char*)>(L"Material_Duplicate")(mtlCopy, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_MakeDefault(const char* name) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*)>(L"Material_MakeDefault")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_IsDefault(const struct Material* material) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_IsDefault")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetHashIndex(const char* name, unsigned short* hashIndex, bool* exists) -> void
{
  return Zynamic::Forward<void (const char*, unsigned short*, bool*)>(L"Material_GetHashIndex")(name, hashIndex, exists);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Register_LoadObj(const char* name, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_Register_LoadObj")(name, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Register_FastFile(const char* name, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_Register_FastFile")(name, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Register(const char* name, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_Register")(name, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Find(const char* name) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*)>(L"Material_Find")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterHandle(const char* name, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_RegisterHandle")(name, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMaterialMemory(struct Material* material) -> int
{
  return Zynamic::Forward<int (struct Material*)>(L"R_GetMaterialMemory")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMaterialList(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_GetMaterialList")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialCompare(const struct MaterialMemory& material0, const struct MaterialMemory& material1) -> bool
{
  return Zynamic::Forward<bool (const struct MaterialMemory&, const struct MaterialMemory&)>(L"R_MaterialCompare")(material0, material1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialList_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_MaterialList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialEdit_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_MaterialEdit_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialParameterEdit_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_MaterialParameterEdit_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialParameterTweak_f() -> void
{
  return Zynamic::Forward<void ()>(L"R_MaterialParameterTweak_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MaterialParameterTweakUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"R_MaterialParameterTweakUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnumTechniqueSets(function* func, void* data) -> void
{
  return Zynamic::Forward<void (function *, void*)>(L"R_EnumTechniqueSets")(func, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnumMaterials(function* func, void* data) -> void
{
  return Zynamic::Forward<void (function *, void*)>(L"R_EnumMaterials")(func, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetName(struct Material* handle) -> const char*
{
  return Zynamic::Forward<const char* (struct Material*)>(L"Material_GetName")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadBuiltIn(const struct BuiltInMaterialTable* mtlTable, int mtlTableCount) -> void
{
  return Zynamic::Forward<void (const struct BuiltInMaterialTable*, int)>(L"Material_LoadBuiltIn")(mtlTable, mtlTableCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPerMap(const struct PerMapMaterialTable* mtlTable, int mtlTableCount) -> void
{
  return Zynamic::Forward<void (const struct PerMapMaterialTable*, int)>(L"Material_LoadPerMap")(mtlTable, mtlTableCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitAssets_PostMapFastfileLoad() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitAssets_PostMapFastfileLoad")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Material_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Material_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ReloadTextures(const struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct Material*)>(L"Material_ReloadTextures")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UpdatePicmipForTexdef(const struct MaterialTextureDef* texdef) -> void
{
  return Zynamic::Forward<void (const struct MaterialTextureDef*)>(L"Material_UpdatePicmipForTexdef")(texdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UpdatePicmipSingle(union XAssetHeader header, void* userData) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"Material_UpdatePicmipSingle")(header, userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UpdatePicmipAll() -> void
{
  return Zynamic::Forward<void ()>(L"Material_UpdatePicmipAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Cmd_ReloadMaterialTextures() -> void
{
  return Zynamic::Forward<void ()>(L"R_Cmd_ReloadMaterialTextures")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadFile(const char* filename, int* file) -> int
{
  return Zynamic::Forward<int (const char*, int*)>(L"Material_LoadFile")(filename, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsValidMaterialHandle(struct Material* const handle) -> bool
{
  return Zynamic::Forward<bool (struct Material* const)>(L"IsValidMaterialHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParam0() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParam0")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParam1() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParam1")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParam2() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParam2")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParam3() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParam3")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParamA() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParamA")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GenericParamB() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GenericParamB")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodeConst_GameTimeParam() -> unsigned short
{
  return Zynamic::Forward<unsigned short ()>(L"GetCodeConst_GameTimeParam")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetTextureCount(struct Material* handle) -> int
{
  return Zynamic::Forward<int (struct Material*)>(L"Material_GetTextureCount")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetTexture(struct Material* handle, int index) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (struct Material*, int)>(L"Material_GetTexture")(handle, index);
}

#endif // __UNIMPLEMENTED__
