//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Material_HashVertexDecl(const struct MaterialStreamRouting* routingData, int streamCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct MaterialStreamRouting*, int)>(L"Material_HashVertexDecl")(routingData, streamCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AllocVertexDecl(struct MaterialStreamRouting* routingData, int streamCount, bool* existing) -> struct MaterialVertexDeclaration*
{
  return Zynamic::Forward<struct MaterialVertexDeclaration* (struct MaterialStreamRouting*, int, bool*)>(L"Material_AllocVertexDecl")(routingData, streamCount, existing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterLiteral(const float* literal) -> const float*
{
  return Zynamic::Forward<const float* (const float*)>(L"Material_RegisterLiteral")(literal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FreeAllLiterals() -> void
{
  return Zynamic::Forward<void ()>(L"Material_FreeAllLiterals")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_StringFromHash(unsigned int hash) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int)>(L"Material_StringFromHash")(hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterString(const char* string) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Material_RegisterString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FreeAllStrings() -> void
{
  return Zynamic::Forward<void ()>(L"Material_FreeAllStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HashStateMap(const char* name, unsigned int* foundHashIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int*)>(L"Material_HashStateMap")(name, foundHashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindStateMap(const char* name) -> struct MaterialStateMap*
{
  return Zynamic::Forward<struct MaterialStateMap* (const char*)>(L"Material_FindStateMap")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetStateMap(const char* name, struct MaterialStateMap* stateMap) -> void
{
  return Zynamic::Forward<void (const char*, struct MaterialStateMap*)>(L"Material_SetStateMap")(name, stateMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FreeAllStateMaps() -> void
{
  return Zynamic::Forward<void ()>(L"Material_FreeAllStateMaps")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MaterialTechnique_FindHashLocation(const char* name, unsigned int* foundHashIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int*)>(L"MaterialTechnique_FindHashLocation")(name, foundHashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindTechnique(const char* name) -> struct MaterialTechnique*
{
  return Zynamic::Forward<struct MaterialTechnique* (const char*)>(L"Material_FindTechnique")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetTechnique(const char* name, struct MaterialTechnique* technique) -> void
{
  return Zynamic::Forward<void (const char*, struct MaterialTechnique*)>(L"Material_SetTechnique")(name, technique);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FreeAll() -> void
{
  return Zynamic::Forward<void ()>(L"Material_FreeAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindCachedShaderText(const char* filename, const char** data, unsigned int* byteCount) -> bool
{
  return Zynamic::Forward<bool (const char*, const char**, unsigned int*)>(L"Material_FindCachedShaderText")(filename, data, byteCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_EmitShaderChar(struct GfxAssembledShaderText* prog, char ch) -> void
{
  return Zynamic::Forward<void (struct GfxAssembledShaderText*, char)>(L"Material_EmitShaderChar")(prog, ch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_MemCopyAndReturnLines(char* destString, const char* srcString, int len) -> int
{
  return Zynamic::Forward<int (char*, const char*, int)>(L"Material_MemCopyAndReturnLines")(destString, srcString, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_EmitShaderString(struct GfxAssembledShaderText* prog, const char* string) -> void
{
  return Zynamic::Forward<void (struct GfxAssembledShaderText*, const char*)>(L"Material_EmitShaderString")(prog, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderFile(struct GfxAssembledShaderText* prog, const char* shaderFileName, unsigned int srcLine) -> void
{
  return Zynamic::Forward<void (struct GfxAssembledShaderText*, const char*, unsigned int)>(L"Material_AddShaderFile")(prog, shaderFileName, srcLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_IncludeShader(struct GfxAssembledShaderText* prog, const char* includeName, bool isInLibDir) -> bool
{
  return Zynamic::Forward<bool (struct GfxAssembledShaderText*, const char*, bool)>(L"Material_IncludeShader")(prog, includeName, isInLibDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GenerateShaderString_r(struct GfxAssembledShaderText* prog, const char* shaderName, const char* file, unsigned int fileSize, bool isInLibDir) -> bool
{
  return Zynamic::Forward<bool (struct GfxAssembledShaderText*, const char*, const char*, unsigned int, bool)>(L"Material_GenerateShaderString_r")(prog, shaderName, file, fileSize, isInLibDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GenerateShaderString(struct GfxAssembledShaderText* prog, const char* shaderName, enum MaterialShaderType shaderType, char* shaderString, int sizeofShaderString) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct GfxAssembledShaderText*, const char*, enum MaterialShaderType, char*, int)>(L"Material_GenerateShaderString")(prog, shaderName, shaderType, shaderString, sizeofShaderString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UsingTechnique(int techType) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Material_UsingTechnique")(techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_MatchToken(const char** text, const char* match) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*)>(L"Material_MatchToken")(text, match);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseValueForState(const char** text, const struct MtlStateMapBitName* bitNames) -> const struct MtlStateMapBitName*
{
  return Zynamic::Forward<const struct MtlStateMapBitName* (const char**, const struct MtlStateMapBitName*)>(L"Material_ParseValueForState")(text, bitNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseRuleSetConditionTest(const char** text, const char* token, struct MaterialStateMapRule* rule) -> enum MtlParseSuccess
{
  return Zynamic::Forward<enum MtlParseSuccess (const char**, const char*, struct MaterialStateMapRule*)>(L"Material_ParseRuleSetConditionTest")(text, token, rule);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseRuleSetCondition(const char** text, const char* token, struct MaterialStateMapRule* rule) -> enum MtlParseSuccess
{
  return Zynamic::Forward<enum MtlParseSuccess (const char**, const char*, struct MaterialStateMapRule*)>(L"Material_ParseRuleSetCondition")(text, token, rule);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseRuleSetValue(const char** text, const char* token, const struct MtlStateMapBitGroup* stateSet, struct MaterialStateMapRule* rule) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, const struct MtlStateMapBitGroup*, struct MaterialStateMapRule*)>(L"Material_ParseRuleSetValue")(text, token, stateSet, rule);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AssembleRuleSet(int ruleCount, const struct MaterialStateMapRule* rules) -> struct MaterialStateMapRuleSet*
{
  return Zynamic::Forward<struct MaterialStateMapRuleSet* (int, const struct MaterialStateMapRule*)>(L"Material_AssembleRuleSet")(ruleCount, rules);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseRuleSet(const char** text, const char* ruleSetName, const struct MtlStateMapBitGroup* stateSet, struct MaterialStateMapRuleSet** ruleSet) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, const struct MtlStateMapBitGroup*, struct MaterialStateMapRuleSet**)>(L"Material_ParseRuleSet")(text, ruleSetName, stateSet, ruleSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseStateMap(const char** text, struct MaterialStateMap* stateMap) -> bool
{
  return Zynamic::Forward<bool (const char**, struct MaterialStateMap*)>(L"Material_ParseStateMap")(text, stateMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadStateMap(const char* name) -> struct MaterialStateMap*
{
  return Zynamic::Forward<struct MaterialStateMap* (const char*)>(L"Material_LoadStateMap")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterStateMap(const char* name) -> struct MaterialStateMap*
{
  return Zynamic::Forward<struct MaterialStateMap* (const char*)>(L"Material_RegisterStateMap")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPassStateMap(const char** text, struct MaterialStateMap** stateMap) -> bool
{
  return Zynamic::Forward<bool (const char**, struct MaterialStateMap**)>(L"Material_LoadPassStateMap")(text, stateMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseIndex(const char** text, int indexCount, int* index) -> bool
{
  return Zynamic::Forward<bool (const char**, int, int*)>(L"Material_ParseIndex")(text, indexCount, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_NameForStreamDest(unsigned char dest) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"Material_NameForStreamDest")(dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_StreamDestForName(const char** text, const char* destName, unsigned char* dest) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, unsigned char*)>(L"Material_StreamDestForName")(text, destName, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_StreamSourceForName(const char** text, const char* sourceName, unsigned char* source) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, unsigned char*)>(L"Material_StreamSourceForName")(text, sourceName, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ResourceDestForStreamDest(unsigned char streamDest, struct ShaderVaryingDef* inputTable, unsigned int inputCount, unsigned char* resourceDest) -> bool
{
  return Zynamic::Forward<bool (unsigned char, struct ShaderVaryingDef*, unsigned int, unsigned char*)>(L"Material_ResourceDestForStreamDest")(streamDest, inputTable, inputCount, resourceDest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CheckUnspecifiedVertexInputs(const struct ShaderVaryingDef* inputTable, unsigned int inputCount) -> bool
{
  return Zynamic::Forward<bool (const struct ShaderVaryingDef*, unsigned int)>(L"Material_CheckUnspecifiedVertexInputs")(inputTable, inputCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPassVertexDecl(const char** text, struct ShaderVaryingDef* inputTable, unsigned int inputCount, struct MaterialPass* pass) -> bool
{
  return Zynamic::Forward<bool (const char**, struct ShaderVaryingDef*, unsigned int, struct MaterialPass*)>(L"Material_LoadPassVertexDecl")(text, inputTable, inputCount, pass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultIndexRange(const struct ShaderIndexRange* indexRangeRef, unsigned int arrayCount, struct ShaderIndexRange* indexRangeSet) -> bool
{
  return Zynamic::Forward<bool (const struct ShaderIndexRange*, unsigned int, struct ShaderIndexRange*)>(L"Material_DefaultIndexRange")(indexRangeRef, arrayCount, indexRangeSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseIndexRange(const char** text, unsigned int arrayCount, struct ShaderIndexRange* indexRange) -> bool
{
  return Zynamic::Forward<bool (const char**, unsigned int, struct ShaderIndexRange*)>(L"Material_ParseIndexRange")(text, arrayCount, indexRange);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BufferOffset(void* buffer, int offset) -> void*
{
  return Zynamic::Forward<void* (void*, int)>(L"BufferOffset")(buffer, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseArrayOffset(const char** text, int arrayCount, int arrayStride, int* offset) -> bool
{
  return Zynamic::Forward<bool (const char**, int, int, int*)>(L"Material_ParseArrayOffset")(text, arrayCount, arrayStride, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CodeSamplerSource_r(const char** text, int offset, const struct CodeSamplerSource* sourceTable, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (const char**, int, const struct CodeSamplerSource*, struct ShaderArgumentSource*)>(L"Material_CodeSamplerSource_r")(text, offset, sourceTable, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseSamplerSource(const char** text, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (const char**, struct ShaderArgumentSource*)>(L"Material_ParseSamplerSource")(text, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultSamplerSourceFromTable(const char* constantName, const struct ShaderIndexRange* indexRange, const struct CodeSamplerSource* sourceTable, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (const char*, const struct ShaderIndexRange*, const struct CodeSamplerSource*, struct ShaderArgumentSource*)>(L"Material_DefaultSamplerSourceFromTable")(constantName, indexRange, sourceTable, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultSamplerSource(const char* constantName, const struct ShaderIndexRange* indexRange, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (const char*, const struct ShaderIndexRange*, struct ShaderArgumentSource*)>(L"Material_DefaultSamplerSource")(constantName, indexRange, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseVector(const char** text, int elemCount, float* vector) -> bool
{
  return Zynamic::Forward<bool (const char**, int, float*)>(L"Material_ParseVector")(text, elemCount, vector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseLiteral(const char** text, const char* token, float* literal) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, float*)>(L"Material_ParseLiteral")(text, token, literal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseCodeConstantSource_r(enum MaterialShaderType shaderType, const char** text, int offset, const struct CodeConstantSource* sourceTable, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char**, int, const struct CodeConstantSource*, struct ShaderArgumentSource*)>(L"Material_ParseCodeConstantSource_r")(shaderType, text, offset, sourceTable, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseConstantSource(enum MaterialShaderType shaderType, const char** text, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char**, struct ShaderArgumentSource*)>(L"Material_ParseConstantSource")(shaderType, text, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultConstantSourceFromTable(enum MaterialShaderType shaderType, const char* constantName, const struct ShaderIndexRange* indexRange, const struct CodeConstantSource* sourceTable, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char*, const struct ShaderIndexRange*, const struct CodeConstantSource*, struct ShaderArgumentSource*)>(L"Material_DefaultConstantSourceFromTable")(shaderType, constantName, indexRange, sourceTable, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultConstantSource(enum MaterialShaderType shaderType, const char* constantName, const struct ShaderIndexRange* indexRange, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char*, const struct ShaderIndexRange*, struct ShaderArgumentSource*)>(L"Material_DefaultConstantSource")(shaderType, constantName, indexRange, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UnknownShaderworksConstantSource(enum MaterialShaderType shaderType, const char* constantName, const struct ShaderIndexRange* indexRange, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char*, const struct ShaderIndexRange*, struct ShaderArgumentSource*)>(L"Material_UnknownShaderworksConstantSource")(shaderType, constantName, indexRange, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ElemCountForParamName(const char* shaderName, const struct ShaderUniformDef* paramTable, unsigned int paramCount, const char* name, enum ShaderParamType* paramType) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*, const struct ShaderUniformDef*, unsigned int, const char*, enum ShaderParamType*)>(L"Material_ElemCountForParamName")(shaderName, paramTable, paramCount, name, paramType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseArgumentSource(enum MaterialShaderType shaderType, const char** text, const char* shaderName, enum ShaderParamType paramType, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char**, const char*, enum ShaderParamType, struct ShaderArgumentSource*)>(L"Material_ParseArgumentSource")(shaderType, text, shaderName, paramType, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DefaultArgumentSource(enum MaterialShaderType shaderType, const char* constantName, enum ShaderParamType paramType, const struct ShaderIndexRange* indexRange, struct ShaderArgumentSource* argSource) -> bool
{
  return Zynamic::Forward<bool (enum MaterialShaderType, const char*, enum ShaderParamType, const struct ShaderIndexRange*, struct ShaderArgumentSource*)>(L"Material_DefaultArgumentSource")(shaderType, constantName, paramType, indexRange, argSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetParameterDefArray(struct _D3DXSHADER_CONSTANTTABLE* constantTable, unsigned int constantIndex, struct ShaderUniformDef* paramDef) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct _D3DXSHADER_CONSTANTTABLE*, unsigned int, struct ShaderUniformDef*)>(L"R_SetParameterDefArray")(constantTable, constantIndex, paramDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_PrepareToParseShaderArguments(struct _D3DXSHADER_CONSTANTTABLE* constantTable, struct ShaderUniformDef* paramTable) -> int
{
  return Zynamic::Forward<int (struct _D3DXSHADER_CONSTANTTABLE*, struct ShaderUniformDef*)>(L"Material_PrepareToParseShaderArguments")(constantTable, paramTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CompareShaderArgumentsForCombining(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"Material_CompareShaderArgumentsForCombining")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AttemptCombineShaderArguments(struct MaterialShaderArgument* arg0, const struct MaterialShaderArgument* arg1) -> bool
{
  return Zynamic::Forward<bool (struct MaterialShaderArgument*, const struct MaterialShaderArgument*)>(L"Material_AttemptCombineShaderArguments")(arg0, arg1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CombineShaderArguments(unsigned int usedCount, struct MaterialShaderArgument* localArgs) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, struct MaterialShaderArgument*)>(L"Material_CombineShaderArguments")(usedCount, localArgs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetShaderArguments(unsigned int usedCount, struct MaterialShaderArgument* localArgs, unsigned int argLimit, unsigned int* argCount, struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (unsigned int, struct MaterialShaderArgument*, unsigned int, unsigned int*, struct MaterialShaderArgument*)>(L"Material_SetShaderArguments")(usedCount, localArgs, argLimit, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetShaderArgumentDest(const char* paramName, unsigned int paramIndex, struct ShaderUniformDef* paramTable, unsigned int paramCount) -> struct ShaderUniformDef*
{
  return Zynamic::Forward<struct ShaderUniformDef* (const char*, unsigned int, struct ShaderUniformDef*, unsigned int)>(L"Material_GetShaderArgumentDest")(paramName, paramIndex, paramTable, paramCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MaterialAddShaderArgument(const char* shaderName, const char* paramName, struct MaterialShaderArgument* arg, char* registerUsage[0x64]) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, struct MaterialShaderArgument*, char*[0x64])>(L"MaterialAddShaderArgument")(shaderName, paramName, arg, registerUsage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderArgumentFromLiteral(const char* shaderName, const char* paramName, unsigned short type, const float* literal, struct ShaderUniformDef* dest, struct MaterialShaderArgument* arg, char* registerUsage[0x64]) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, unsigned short, const float*, struct ShaderUniformDef*, struct MaterialShaderArgument*, char*[0x64])>(L"Material_AddShaderArgumentFromLiteral")(shaderName, paramName, type, literal, dest, arg, registerUsage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderArgumentFromCodeConst(const char* shaderName, const char* paramName, unsigned short type, unsigned int codeIndex, unsigned int offset, struct ShaderUniformDef* dest, struct MaterialShaderArgument* arg, char* registerUsage[0x64]) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, unsigned short, unsigned int, unsigned int, struct ShaderUniformDef*, struct MaterialShaderArgument*, char*[0x64])>(L"Material_AddShaderArgumentFromCodeConst")(shaderName, paramName, type, codeIndex, offset, dest, arg, registerUsage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderArgumentFromCodeSampler(unsigned short type, unsigned int codeSampler, struct ShaderUniformDef* dest, struct MaterialShaderArgument* arg) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned int, struct ShaderUniformDef*, struct MaterialShaderArgument*)>(L"Material_AddShaderArgumentFromCodeSampler")(type, codeSampler, dest, arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderArgumentFromMaterial(const char* shaderName, const char* paramName, unsigned short type, const char* name, struct ShaderUniformDef* dest, struct MaterialShaderArgument* arg, char* registerUsage[0x64]) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, unsigned short, const char*, struct ShaderUniformDef*, struct MaterialShaderArgument*, char*[0x64])>(L"Material_AddShaderArgumentFromMaterial")(shaderName, paramName, type, name, dest, arg, registerUsage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddShaderArgument(const char* shaderName, enum MaterialShaderType shaderType, struct ShaderArgumentSource* argSource, const struct ShaderArgumentDest* argDest, struct ShaderUniformDef* paramTable, unsigned int paramCount, unsigned int* usedCount, struct MaterialShaderArgument* argTable, char* registerUsage[0x64]) -> bool
{
  return Zynamic::Forward<bool (const char*, enum MaterialShaderType, struct ShaderArgumentSource*, const struct ShaderArgumentDest*, struct ShaderUniformDef*, unsigned int, unsigned int*, struct MaterialShaderArgument*, char*[0x64])>(L"Material_AddShaderArgument")(shaderName, shaderType, argSource, argDest, paramTable, paramCount, usedCount, argTable, registerUsage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CodeConstIsOneOf(unsigned short constCodeIndex, const unsigned short* consts, int numConsts) -> bool
{
  return Zynamic::Forward<bool (unsigned short, const unsigned short*, int)>(L"CodeConstIsOneOf")(constCodeIndex, consts, numConsts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseShaderArguments(const char** text, const char* shaderName, enum MaterialShaderType shaderType, struct ShaderUniformDef* paramTable, unsigned int paramCount, unsigned short* techFlags, unsigned int argLimit, unsigned int* argCount, struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, enum MaterialShaderType, struct ShaderUniformDef*, unsigned int, unsigned short*, unsigned int, unsigned int*, struct MaterialShaderArgument*)>(L"Material_ParseShaderArguments")(text, shaderName, shaderType, paramTable, paramCount, techFlags, argLimit, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SubtractDays(struct _SYSTEMTIME* sysTime, const unsigned short daysOld) -> void
{
  return Zynamic::Forward<void (struct _SYSTEMTIME*, const unsigned short)>(L"Material_SubtractDays")(sysTime, daysOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DeleteOldFilesInDirectory(const char* dirname, const unsigned short daysOld) -> void
{
  return Zynamic::Forward<void (const char*, const unsigned short)>(L"Material_DeleteOldFilesInDirectory")(dirname, daysOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DeleteDirectory(const char* dirname) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Material_DeleteDirectory")(dirname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'IW_PROJECT_GAMEDIR''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'IW_PROJECT_GAMEDIR''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_DeleteOldCachedShaders() -> void
{
  return Zynamic::Forward<void ()>(L"Material_DeleteOldCachedShaders")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindCachedShader(const char* shaderText, const unsigned int shaderTextLen, const char* filename, void** cachedShader, unsigned int* shaderLen) -> bool
{
  return Zynamic::Forward<bool (const char*, const unsigned int, const char*, void**, unsigned int*)>(L"Material_FindCachedShader")(shaderText, shaderTextLen, filename, cachedShader, shaderLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CacheShader(const char* shaderText, const unsigned int shaderTextLen, const char* filename, const void* shaderBuffer, const unsigned int shaderLen) -> void
{
  return Zynamic::Forward<void (const char*, const unsigned int, const char*, const void*, const unsigned int)>(L"Material_CacheShader")(shaderText, shaderTextLen, filename, shaderBuffer, shaderLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseLineNumber(const char* errorMessage, unsigned int* lineNumber) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int*)>(L"Material_ParseLineNumber")(errorMessage, lineNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FileIncludeFileAndLineNumber(struct GfxAssembledShaderText* prog, const char* errorMessage, const char** fileName, unsigned int* lineNumber) -> void
{
  return Zynamic::Forward<void (struct GfxAssembledShaderText*, const char*, const char**, unsigned int*)>(L"Material_FileIncludeFileAndLineNumber")(prog, errorMessage, fileName, lineNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CopyTextToDXBuffer(void* cachedShader, unsigned int shaderLen, struct ID3DXBuffer** shader) -> bool
{
  return Zynamic::Forward<bool (void*, unsigned int, struct ID3DXBuffer**)>(L"Material_CopyTextToDXBuffer")(cachedShader, shaderLen, shader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FindCachedShaderDX(const char* shaderText, const unsigned int shaderTextLen, const char* entryPoint, const char* target, struct ID3DXBuffer** shader, const char* shaderName, int useUPDB) -> bool
{
  return Zynamic::Forward<bool (const char*, const unsigned int, const char*, const char*, struct ID3DXBuffer**, const char*, int)>(L"Material_FindCachedShaderDX")(shaderText, shaderTextLen, entryPoint, target, shader, shaderName, useUPDB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CacheShaderDX(const char* shaderText, const unsigned int shaderTextLen, const char* entryPoint, const char* target, struct ID3DXBuffer* shader, int useUPDB) -> void
{
  return Zynamic::Forward<void (const char*, const unsigned int, const char*, const char*, struct ID3DXBuffer*, int)>(L"Material_CacheShaderDX")(shaderText, shaderTextLen, entryPoint, target, shader, useUPDB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CompileShader(const char* shaderName, enum MaterialShaderType shaderType, const char* entryPoint, const char* target) -> struct ID3DXBuffer*
{
  return Zynamic::Forward<struct ID3DXBuffer* (const char*, enum MaterialShaderType, const char*, const char*)>(L"Material_CompileShader")(shaderName, shaderType, entryPoint, target);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetShaderTargetString(char* target, int maxChars, const char* prefix, int shaderVersion) -> void
{
  return Zynamic::Forward<void (char*, int, const char*, int)>(L"Material_GetShaderTargetString")(target, maxChars, prefix, shaderVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadVertexShader(const char* shaderName, int shaderVersion) -> struct MaterialVertexShader*
{
  return Zynamic::Forward<struct MaterialVertexShader* (const char*, int)>(L"Material_LoadVertexShader")(shaderName, shaderVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPixelShader(const char* shaderName, int shaderVersion) -> struct MaterialPixelShader*
{
  return Zynamic::Forward<struct MaterialPixelShader* (const char*, int)>(L"Material_LoadPixelShader")(shaderName, shaderVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetVertexShaderHashIndex(const char* shaderName, unsigned int* foundHashIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int*)>(L"Material_GetVertexShaderHashIndex")(shaderName, foundHashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterVertexShader(const char* shaderName, unsigned char shaderVersion) -> struct MaterialVertexShader*
{
  return Zynamic::Forward<struct MaterialVertexShader* (const char*, unsigned char)>(L"Material_RegisterVertexShader")(shaderName, shaderVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetPixelShaderHashIndex(const char* shaderName, unsigned int* foundHashIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int*)>(L"Material_GetPixelShaderHashIndex")(shaderName, foundHashIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterPixelShader(const char* shaderName, unsigned char shaderVersion) -> struct MaterialPixelShader*
{
  return Zynamic::Forward<struct MaterialPixelShader* (const char*, unsigned char)>(L"Material_RegisterPixelShader")(shaderName, shaderVersion);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ParseShaderVersion(const char** text) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const char**)>(L"Material_ParseShaderVersion")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetStreamDestForSemantic(const struct _D3DXSEMANTIC* semantic) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct _D3DXSEMANTIC*)>(L"Material_GetStreamDestForSemantic")(semantic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetVaryingParameterDef(const struct _D3DXSEMANTIC* semantic, struct ShaderVaryingDef* paramDef) -> void
{
  return Zynamic::Forward<void (const struct _D3DXSEMANTIC*, struct ShaderVaryingDef*)>(L"Material_SetVaryingParameterDef")(semantic, paramDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetPassShaderArguments_DX(const char** text, const char* shaderName, enum MaterialShaderType shaderType, const unsigned long* program, unsigned short* techFlags, struct ShaderParameterSet* paramSet, unsigned int argLimit, unsigned int* argCount, struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, enum MaterialShaderType, const unsigned long*, unsigned short*, struct ShaderParameterSet*, unsigned int, unsigned int*, struct MaterialShaderArgument*)>(L"Material_SetPassShaderArguments_DX")(text, shaderName, shaderType, program, techFlags, paramSet, argLimit, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPassVertexShader(const char** text, unsigned short* techFlags, struct ShaderParameterSet* paramSet, struct MaterialPass* pass, unsigned int argLimit, unsigned int* argCount, struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (const char**, unsigned short*, struct ShaderParameterSet*, struct MaterialPass*, unsigned int, unsigned int*, struct MaterialShaderArgument*)>(L"Material_LoadPassVertexShader")(text, techFlags, paramSet, pass, argLimit, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadDeclTypes(const char** text, struct MaterialPass* pass) -> bool
{
  return Zynamic::Forward<bool (const char**, struct MaterialPass*)>(L"Material_LoadDeclTypes")(text, pass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPassPixelShader(const char** text, unsigned short* techFlags, struct ShaderParameterSet* paramSet, struct MaterialPass* pass, unsigned int argLimit, unsigned int* argCount, struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (const char**, unsigned short*, struct ShaderParameterSet*, struct MaterialPass*, unsigned int, unsigned int*, struct MaterialShaderArgument*)>(L"Material_LoadPassPixelShader")(text, techFlags, paramSet, pass, argLimit, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasMatchingParameter(unsigned char find, const struct ShaderVaryingDef* paramTable, unsigned int paramCount) -> bool
{
  return Zynamic::Forward<bool (unsigned char, const struct ShaderVaryingDef*, unsigned int)>(L"Material_HasMatchingParameter")(find, paramTable, paramCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasMatchingParameter_BuggySdkWorkaround(unsigned char find, const struct ShaderVaryingDef* paramTable, unsigned int paramCount) -> bool
{
  return Zynamic::Forward<bool (unsigned char, const struct ShaderVaryingDef*, unsigned int)>(L"Material_HasMatchingParameter_BuggySdkWorkaround")(find, paramTable, paramCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ValidateShaderLinkage(const struct ShaderVaryingDef* vertexOutputs, unsigned int vertexOutputCount, const struct ShaderVaryingDef* pixelInputs, unsigned int pixelInputCount) -> bool
{
  return Zynamic::Forward<bool (const struct ShaderVaryingDef*, unsigned int, const struct ShaderVaryingDef*, unsigned int)>(L"Material_ValidateShaderLinkage")(vertexOutputs, vertexOutputCount, pixelInputs, pixelInputCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetArgUpdateFrequency(const struct MaterialShaderArgument* arg) -> enum MaterialUpdateFrequency
{
  return Zynamic::Forward<enum MaterialUpdateFrequency (const struct MaterialShaderArgument*)>(L"Material_GetArgUpdateFrequency")(arg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CompareShaderArgumentsForRuntime(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"Material_CompareShaderArgumentsForRuntime")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CountArgsWithUpdateFrequency(enum MaterialUpdateFrequency updateFreq, const struct MaterialShaderArgument* args, unsigned int argCount, unsigned int* firstArg) -> unsigned char
{
  return Zynamic::Forward<unsigned char (enum MaterialUpdateFrequency, const struct MaterialShaderArgument*, unsigned int, unsigned int*)>(L"Material_CountArgsWithUpdateFrequency")(updateFreq, args, argCount, firstArg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadPass(const char** text, unsigned short* techFlags, struct MaterialPass* pass, struct MaterialStateMap** stateMap) -> bool
{
  return Zynamic::Forward<bool (const char**, unsigned short*, struct MaterialPass*, struct MaterialStateMap**)>(L"Material_LoadPass")(text, techFlags, pass, stateMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadTechnique(const char* name) -> struct MaterialTechnique*
{
  return Zynamic::Forward<struct MaterialTechnique* (const char*)>(L"Material_LoadTechnique")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterWaterImage(const struct MaterialWaterDef* water) -> struct water_t*
{
  return Zynamic::Forward<struct water_t* (const struct MaterialWaterDef*)>(L"Material_RegisterWaterImage")(water);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterImage(const struct MaterialRaw* material, int imageNameOffset, unsigned char semantic, int imageTrack) -> bool
{
  return Zynamic::Forward<bool (const struct MaterialRaw*, int, unsigned char, int)>(L"Material_RegisterImage")(material, imageNameOffset, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsWorldMaterialType(unsigned int materialType) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"R_IsWorldMaterialType")(materialType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FinishLoadingTexdef(const struct MaterialRaw* material, struct MaterialTextureDefRaw* texdef, unsigned int materialType, int imageTrack) -> bool
{
  return Zynamic::Forward<bool (const struct MaterialRaw*, struct MaterialTextureDefRaw*, unsigned int, int)>(L"Material_FinishLoadingTexdef")(material, texdef, materialType, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterTechnique(const char* name) -> struct MaterialTechnique*
{
  return Zynamic::Forward<struct MaterialTechnique* (const char*)>(L"Material_RegisterTechnique")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_IgnoreTechnique(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Material_IgnoreTechnique")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_TechniqueTypeForName(const char* name) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const char*)>(L"Material_TechniqueTypeForName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetTechniqueSetDrawRegion(struct MaterialTechniqueSet* techniqueSet) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct MaterialTechniqueSet*)>(L"Material_GetTechniqueSetDrawRegion")(techniqueSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetMaterialDrawRegion(struct Material* material) -> void
{
  return Zynamic::Forward<void (struct Material*)>(L"Material_SetMaterialDrawRegion")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadTechniqueSet(const char* name) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const char*)>(L"Material_LoadTechniqueSet")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ApplyStateBitsRemapRuleSet(const struct Material* material, const struct MaterialStateMap* stateMap, unsigned int ruleSetIndex, const unsigned int* refStateBits, unsigned int* stateBitsOut) -> void
{
  return Zynamic::Forward<void (const struct Material*, const struct MaterialStateMap*, unsigned int, const unsigned int*, unsigned int*)>(L"Material_ApplyStateBitsRemapRuleSet")(material, stateMap, ruleSetIndex, refStateBits, stateBitsOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RemapStateBits(const struct Material* material, unsigned int toolFlags, const struct MaterialStateMap* stateMap, const unsigned int* refStateBits, unsigned int* stateBitsOut) -> void
{
  return Zynamic::Forward<void (const struct Material*, unsigned int, const struct MaterialStateMap*, const unsigned int*, unsigned int*)>(L"Material_RemapStateBits")(material, toolFlags, stateMap, refStateBits, stateBitsOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AddStateBitsArrayToTable(const unsigned int* stateBitsForPass[0x2], unsigned int passCount, unsigned int* stateBitsTable[0x2], unsigned int* stateBitsCount) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const unsigned int*[0x2], unsigned int, unsigned int*[0x2], unsigned int*)>(L"Material_AddStateBitsArrayToTable")(stateBitsForPass, passCount, stateBitsTable, stateBitsCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetCullFlags(struct Material* material) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct Material*)>(L"Material_GetCullFlags")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetCullShadowFlags(struct Material* material) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct Material*)>(L"Material_GetCullShadowFlags")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetDecalFlags(const struct Material* mtl) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"Material_GetDecalFlags")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetWritesDepthFlags(const struct Material* mtl) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"Material_GetWritesDepthFlags")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetUsesDepthBufferFlags(const struct Material* mtl) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"Material_GetUsesDepthBufferFlags")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetUsesStencilBufferFlags(const struct Material* mtl) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"Material_GetUsesStencilBufferFlags")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UpdateStateFlags(struct Material* mtl) -> void
{
  return Zynamic::Forward<void (struct Material*)>(L"Material_UpdateStateFlags")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_UpdateTechniqueFlags(struct Material* material) -> void
{
  return Zynamic::Forward<void (struct Material*)>(L"Material_UpdateTechniqueFlags")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SetStateBits(struct Material* material, unsigned int* stateBitsTable[0x2], unsigned int stateBitsCount) -> void
{
  return Zynamic::Forward<void (struct Material*, unsigned int*[0x2], unsigned int)>(L"Material_SetStateBits")(material, stateBitsTable, stateBitsCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_BuildStateBitsTable(struct Material* material, unsigned int toolFlags, const unsigned int* refStateBits) -> void
{
  return Zynamic::Forward<void (struct Material*, unsigned int, const unsigned int*)>(L"Material_BuildStateBitsTable")(material, toolFlags, refStateBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasConstant(const struct Material* mtl, unsigned int nameHash) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, unsigned int)>(L"Material_HasConstant")(mtl, nameHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasTexture(const struct Material* mtl, unsigned int nameHash) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, unsigned int)>(L"Material_HasTexture")(mtl, nameHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ValidatePassArguments(const struct Material* mtl, const char* techniqueName, unsigned int argCount, const struct MaterialShaderArgument* args) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, const char*, unsigned int, const struct MaterialShaderArgument*)>(L"Material_ValidatePassArguments")(mtl, techniqueName, argCount, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ValidateTechnique(const struct Material* material, const struct MaterialTechnique* technique) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, const struct MaterialTechnique*)>(L"Material_ValidateTechnique")(material, technique);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Validate(const struct Material* material) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_Validate")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareRawMaterialConstants(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareRawMaterialConstants")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareHashedMaterialConstants(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareHashedMaterialConstants")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FinishLoadingInstance(const struct MaterialRaw* mtlRaw, const char* techniqueSetVertDeclPrefix, struct MaterialTechniqueSet** techniqueSet, unsigned int materialType, int imageTrack) -> bool
{
  return Zynamic::Forward<bool (const struct MaterialRaw*, const char*, struct MaterialTechniqueSet**, unsigned int, int)>(L"Material_FinishLoadingInstance")(mtlRaw, techniqueSetVertDeclPrefix, techniqueSet, materialType, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AppendCharToConstName(char* name, char ch) -> void
{
  return Zynamic::Forward<void (char*, char)>(L"Material_AppendCharToConstName")(name, ch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetLayeredStateBits(const struct Material** layerMtl, unsigned int layerCount, unsigned int techType, unsigned int* stateBits) -> void
{
  return Zynamic::Forward<void (const struct Material**, unsigned int, unsigned int, unsigned int*)>(L"Material_GetLayeredStateBits")(layerMtl, layerCount, techType, stateBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CreateLayeredStateBitsTable(const struct Material** layerMtl, unsigned int layerCount, const struct MaterialTechniqueSet* techSet, unsigned char* stateBitsEntry, unsigned int* stateBitsTable[0x2]) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material**, unsigned int, const struct MaterialTechniqueSet*, unsigned char*, unsigned int*[0x2])>(L"Material_CreateLayeredStateBitsTable")(layerMtl, layerCount, techSet, stateBitsEntry, stateBitsTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MaterialTexture_IsMatureContent(const unsigned char texSemantic, const char* texImageName) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const unsigned char, const char*)>(L"MaterialTexture_IsMatureContent")(texSemantic, texImageName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CreateLayered(const char* name, const struct Material** layerMtl, unsigned int layerCount, struct MaterialTechniqueSet* techSet) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, const struct Material**, unsigned int, struct MaterialTechniqueSet*)>(L"Material_CreateLayered")(name, layerMtl, layerCount, techSet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasNormalMap(const struct Material* mtl) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_HasNormalMap")(mtl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_AppendTechniqueSetName(char* name, unsigned int nameLen, const char* append, char lyrToken) -> unsigned int
{
  return Zynamic::Forward<unsigned int (char*, unsigned int, const char*, char)>(L"Material_AppendTechniqueSetName")(name, nameLen, append, lyrToken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetLayeredTechniqueSetName(const char* techSetName) -> const struct LayeredTechniqueSetName*
{
  return Zynamic::Forward<const struct LayeredTechniqueSetName* (const char*)>(L"Material_GetLayeredTechniqueSetName")(techSetName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_RegisterLayeredTechniqueSet(const struct Material** mtl, unsigned int layerCount) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const struct Material**, unsigned int)>(L"Material_RegisterLayeredTechniqueSet")(mtl, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadLayered(const char* assetName, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_LoadLayered")(assetName, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_LoadRaw(const struct MaterialRaw* mtlRaw, unsigned int materialType, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const struct MaterialRaw*, unsigned int, int)>(L"Material_LoadRaw")(mtlRaw, materialType, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Load(const char* assetName, int imageTrack) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const char*, int)>(L"Material_Load")(assetName, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_PreLoadSingleShaderText(const char* filename, const char* subdir, struct GfxCachedShaderText* cached) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct GfxCachedShaderText*)>(L"Material_PreLoadSingleShaderText")(filename, subdir, cached);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_PreLoadAllShaderText() -> void
{
  return Zynamic::Forward<void ()>(L"Material_PreLoadAllShaderText")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetInfo(struct Material* handle, struct MaterialInfo* matInfo) -> void
{
  return Zynamic::Forward<void (struct Material*, struct MaterialInfo*)>(L"Material_GetInfo")(handle, matInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfStandardPrepassSortKey(const struct Material* material) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"R_DrawSurfStandardPrepassSortKey")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_GetVertexShaderName(char* dest, const struct MaterialPass* pass, int destsize) -> void
{
  return Zynamic::Forward<void (char*, const struct MaterialPass*, int)>(L"Material_GetVertexShaderName")(dest, pass, destsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_HasImpactMaskTech(const struct Material* material) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_HasImpactMaskTech")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_IsForSeeThruBulletHoleDecal(const struct Material* mat) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_IsForSeeThruBulletHoleDecal")(mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_CanReceiveSeeThruDecals(const struct Material* mat) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_CanReceiveSeeThruDecals")(mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_ComparePixelConsts(const struct Material* mtl0, const struct Material* mtl1, unsigned char techType) -> int
{
  return Zynamic::Forward<int (const struct Material*, const struct Material*, unsigned char)>(L"Material_ComparePixelConsts")(mtl0, mtl1, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Compare(const struct Material* mtl0, const struct Material* mtl1) -> bool
{
  return Zynamic::Forward<bool (const struct Material*, const struct Material*)>(L"Material_Compare")(mtl0, mtl1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfPrimarySortKey(const struct Material* material) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct Material*)>(L"R_DrawSurfPrimarySortKey")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_SortInternal(struct Material** sortedMaterials, unsigned int materialCount) -> void
{
  return Zynamic::Forward<void (struct Material**, unsigned int)>(L"Material_SortInternal")(sortedMaterials, materialCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_Sort() -> void
{
  return Zynamic::Forward<void ()>(L"Material_Sort")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindCodeConstantName_BySource(unsigned char src) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"R_FindCodeConstantName_BySource")(src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BuildScritableConstantArray(struct ScriptableConstant* array, int arraySize) -> void
{
  return Zynamic::Forward<void (struct ScriptableConstant*, int)>(L"R_BuildScritableConstantArray")(array, arraySize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindScriptableConstantSource_ByName(const char* name, unsigned char& dest) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned char&)>(L"R_FindScriptableConstantSource_ByName")(name, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FindScriptableConstantName_BySource(unsigned char src) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"R_FindScriptableConstantName_BySource")(src);
}

#endif // __UNIMPLEMENTED__
