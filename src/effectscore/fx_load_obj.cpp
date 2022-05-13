//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_UnregisterAll() -> void
{
  return Zynamic::Forward<void ()>(L"FX_UnregisterAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSingleFlag(const char* token, struct FxFlagOutputSet* flagOutputSet) -> bool
{
  return Zynamic::Forward<bool (const char*, struct FxFlagOutputSet*)>(L"FX_ParseSingleFlag")(token, flagOutputSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFlagsField(const char** parse, struct FxFlagOutputSet* flagOutputSet) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxFlagOutputSet*)>(L"FX_ParseFlagsField")(parse, flagOutputSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseInt(const char** parse, int* value) -> bool
{
  return Zynamic::Forward<bool (const char**, int*)>(L"FX_ParseInt")(parse, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseIntRange(const char** parse, struct FxIntRange* range) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxIntRange*)>(L"FX_ParseIntRange")(parse, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFloat(const char** parse, float* value) -> bool
{
  return Zynamic::Forward<bool (const char**, float*)>(L"FX_ParseFloat")(parse, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFloatRange(const char** parse, struct FxFloatRange* range) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxFloatRange*)>(L"FX_ParseFloatRange")(parse, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVector(const char** parse, float* value) -> bool
{
  return Zynamic::Forward<bool (const char**, float*)>(L"FX_ParseVector")(parse, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVector4(const char** parse, float* value) -> bool
{
  return Zynamic::Forward<bool (const char**, float*)>(L"FX_ParseVector4")(parse, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetEditorElemType(struct FxEditorElemDef* edElemDef, unsigned char type) -> bool
{
  return Zynamic::Forward<bool (struct FxEditorElemDef*, unsigned char)>(L"FX_SetEditorElemType")(edElemDef, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocMem(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"FX_AllocMem")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocPhysPresetPrecache(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocPhysPresetPrecache")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterPhysPreset(const char* name) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*)>(L"FX_RegisterPhysPreset")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterModel(const char* name) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*)>(L"FX_RegisterModel")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterMarkMaterials(const char* materialName, struct Material** materials) -> bool
{
  return Zynamic::Forward<bool (const char*, struct Material**)>(L"FX_RegisterMarkMaterials")(materialName, materials);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterMaterial(const char* material) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*)>(L"FX_RegisterMaterial")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterAsset_Material(const char* name, union FxElemVisuals* visuals) -> bool
{
  return Zynamic::Forward<bool (const char*, union FxElemVisuals*)>(L"FX_RegisterAsset_Material")(name, visuals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterAsset_DecalMaterials(const char* name, struct FxElemMarkVisuals* visuals) -> bool
{
  return Zynamic::Forward<bool (const char*, struct FxElemMarkVisuals*)>(L"FX_RegisterAsset_DecalMaterials")(name, visuals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterAsset_Model(const char* name, union FxElemVisuals* visuals) -> bool
{
  return Zynamic::Forward<bool (const char*, union FxElemVisuals*)>(L"FX_RegisterAsset_Model")(name, visuals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterAsset_EffectDef(const char* name, union FxElemVisuals* visuals) -> bool
{
  return Zynamic::Forward<bool (const char*, union FxElemVisuals*)>(L"FX_RegisterAsset_EffectDef")(name, visuals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterAsset_SoundAliasName(const char* name, union FxElemVisuals* visuals) -> bool
{
  return Zynamic::Forward<bool (const char*, union FxElemVisuals*)>(L"FX_RegisterAsset_SoundAliasName")(name, visuals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAssetArray<FxElemVisuals, 32>(const char** parse, unsigned char elemType, struct FxEditorElemDef* edElemDef, union FxElemVisuals& visualsArray[0x32], function* RegisterAsset) -> bool
{
  return Zynamic::Forward<bool (const char**, unsigned char, struct FxEditorElemDef*, union FxElemVisuals&[0x32], function *)>(L"FX_ParseAssetArray<FxElemVisuals,32>")(parse, elemType, edElemDef, visualsArray, RegisterAsset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseElemSpawnSoundAsset(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseElemSpawnSoundAsset")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseCurve(const char** parse, int dimCount, float minValue, float maxValue, const struct FxCurve** shape) -> bool
{
  return Zynamic::Forward<bool (const char**, int, float, float, const struct FxCurve**)>(L"FX_ParseCurve")(parse, dimCount, minValue, maxValue, shape);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseGraphRange(const char** parse, int dimCount, float minValue, float maxValue, float* scale, const struct FxCurve** shape) -> bool
{
  return Zynamic::Forward<bool (const char**, int, float, float, float*, const struct FxCurve**)>(L"FX_ParseGraphRange")(parse, dimCount, minValue, maxValue, scale, shape);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEffectRef(const char** parse, const struct FxEffectDef** fx) -> bool
{
  return Zynamic::Forward<bool (const char**, const struct FxEffectDef**)>(L"FX_ParseEffectRef")(parse, fx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseName(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseName")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseNonAtlasFlags(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseNonAtlasFlags")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnRange(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnRange")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFadeInRange(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseFadeInRange")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFadeOutRange(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseFadeOutRange")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnFrustumCullRadius(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnFrustumCullRadius")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnDefLooping(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnDefLooping")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnDefOneShot(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnDefOneShot")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnDelayMsec(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnDelayMsec")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseLifeSpanMsec(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseLifeSpanMsec")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnOrgX(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnOrgX")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnOrgY(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnOrgY")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnOrgZ(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnOrgZ")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnOffsetRadius(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnOffsetRadius")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnOffsetHeight(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnOffsetHeight")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnAnglePitch(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnAnglePitch")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnAngleYaw(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnAngleYaw")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpawnAngleRoll(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpawnAngleRoll")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAngleVelPitch(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAngleVelPitch")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAngleVelYaw(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAngleVelYaw")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAngleVelRoll(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAngleVelRoll")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseInitialRot(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseInitialRot")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseGravity(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseGravity")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseElasticity(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseElasticity")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseWindinfluence(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseWindinfluence")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasBehavior(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasBehavior")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasIndex(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasIndex")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasIndexRange(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasIndexRange")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasFps(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasFps")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasLoopCount(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasLoopCount")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasColIndexBits(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasColIndexBits")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasRowIndexBits(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasRowIndexBits")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAtlasEntryCount(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAtlasEntryCount")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph0X(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph0X")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph0Y(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph0Y")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph0Z(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph0Z")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph1X(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph1X")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph1Y(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph1Y")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseVelGraph1Z(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseVelGraph1Z")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseRotGraph(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseRotGraph")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSizeGraph0(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSizeGraph0")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSizeGraph1(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSizeGraph1")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseScaleGraph(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseScaleGraph")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseColorGraph(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseColorGraph")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAlphaGraph(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAlphaGraph")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseCollOffset(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseCollOffset")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseLightingFrac(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseLightingFrac")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseCollRadius(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseCollRadius")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFxOnImpact(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseFxOnImpact")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseFxOnDeath(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseFxOnDeath")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSortOrder(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSortOrder")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParsePriority(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParsePriority")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAlphaFadeTimeMsec(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAlphaFadeTimeMsec")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseMaxWindMagnitude(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseMaxWindMagnitude")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseMaxWindLife(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseMaxWindLife")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseMaxWindInterval(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseMaxWindInterval")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEmission(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseEmission")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEmitDist(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseEmitDist")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEmitDistVariance(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseEmitDistVariance")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseAttachment(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseAttachment")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrailRepeatTime(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrailRepeatTime")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrailSplitDist(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrailSplitDist")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrailScrollTime(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrailScrollTime")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrailRepeatDist(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrailRepeatDist")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseBillboardSprite(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseBillboardSprite")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseOrientedSprite(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseOrientedSprite")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseRotatedSprite(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseRotatedSprite")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseCloud(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseCloud")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTail(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTail")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseLine(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseLine")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrail(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrail")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseTrailDef(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseTrailDef")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseDecal(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseDecal")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseModel(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseModel")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseLight(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseLight")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSpotLight(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSpotLight")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseRunner(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseRunner")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseSound(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseSound")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseElemSpawnSound(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseElemSpawnSound")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseBillboardTopWidth(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseBillboardTopWidth")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseBillboardBottomWidth(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseBillboardBottomWidth")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseRotationAxis(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseRotationAxis")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseCloudDensityRange(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseCloudDensityRange")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEffectBoundingBoxDim(const char** parse, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*)>(L"FX_ParseEffectBoundingBoxDim")(parse, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEffectBoundingBoxCentre(const char** parse, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*)>(L"FX_ParseEffectBoundingBoxCentre")(parse, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEffectFlags(const char** parse, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*)>(L"FX_ParseEffectFlags")(parse, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEffectPriority(const char** parse, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*)>(L"FX_ParseEffectPriority")(parse, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseBillboardPivot(const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*)>(L"FX_ParseBillboardPivot")(parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEditorElemField(const char** parse, struct FxEditorElemDef* edElemDef, const char* token) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorElemDef*, const char*)>(L"FX_ParseEditorElemField")(parse, edElemDef, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEditorEffectField(const char** parse, struct FxEditorEffectDef* edEffectDef, const char* token) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*, const char*)>(L"FX_ParseEditorEffectField")(parse, edEffectDef, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEditorElem(int version, const char** parse, struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (int, const char**, struct FxEditorElemDef*)>(L"FX_ParseEditorElem")(version, parse, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ParseEditorEffect(const char** parse, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char**, struct FxEditorEffectDef*)>(L"FX_ParseEditorEffect")(parse, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LoadEditorEffectFromBuffer(const char* buffer, const char* parseSessionName, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, struct FxEditorEffectDef*)>(L"FX_LoadEditorEffectFromBuffer")(buffer, parseSessionName, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LoadEditorEffect(const char* name, struct FxEditorEffectDef* edEffectDef) -> bool
{
  return Zynamic::Forward<bool (const char*, struct FxEditorEffectDef*)>(L"FX_LoadEditorEffect")(name, edEffectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LoadFailed(const char* name) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const char*)>(L"FX_LoadFailed")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Load(const char* name) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const char*)>(L"FX_Load")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_HashName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FX_HashName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetHashIndex(const char* name, bool* exists) -> int
{
  return Zynamic::Forward<int (const char*, bool*)>(L"FX_GetHashIndex")(name, exists);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Register_FastFile(const char* name) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const char*)>(L"FX_Register_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Register_LoadObj(const char* name) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const char*)>(L"FX_Register_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Register(const char* name) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const char*)>(L"FX_Register")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RegisterDefaultEffect() -> void
{
  return Zynamic::Forward<void ()>(L"FX_RegisterDefaultEffect")();
}

#endif // __UNIMPLEMENTED__
