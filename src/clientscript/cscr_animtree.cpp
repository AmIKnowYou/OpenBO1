//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_animtree() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_animtree")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnimTreeCompileError(enum scriptInstance_t inst, const char* msg) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*)>(L"AnimTreeCompileError")(inst, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ScriptTokenizer::PeekToken() -> const char*
{
  return Zynamic::Forward<public const char* ()>(L"ScriptTokenizer::PeekToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ScriptTokenizer::PopToken() -> const char*
{
  return Zynamic::Forward<public const char* ()>(L"ScriptTokenizer::PopToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto ScriptTokenizer::IsAtEnd() -> bool
{
  return Zynamic::Forward<public bool ()>(L"ScriptTokenizer::IsAtEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto ScriptTokenizer::PushNextToken() -> void
{
  return Zynamic::Forward<private void ()>(L"ScriptTokenizer::PushNextToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto ScriptTokenizer::GetAndRemoveToken() -> const char*
{
  return Zynamic::Forward<private const char* ()>(L"ScriptTokenizer::GetAndRemoveToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto ScriptTokenizer::ParseIntoTokens(const char* strString) -> void
{
  return Zynamic::Forward<private void (const char*)>(L"ScriptTokenizer::ParseIntoTokens")(strString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetIntVariable(enum scriptInstance_t inst, unsigned int theArray, int integerValue, const char* strVarName) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int, const char*)>(L"SetIntVariable")(inst, theArray, integerValue, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetFloatVariable(enum scriptInstance_t inst, unsigned int theArray, float floatValue, const char* strVarName) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, float, const char*)>(L"SetFloatVariable")(inst, theArray, floatValue, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetPtrVariable(enum scriptInstance_t inst, unsigned int theArray, unsigned int arrayData, const char* strVarName) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, const char*)>(L"SetPtrVariable")(inst, theArray, arrayData, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNamedArrayVarInt(enum scriptInstance_t inst, unsigned int theArray, unsigned int varName) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, unsigned int)>(L"GetNamedArrayVarInt")(inst, theArray, varName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNamedArrayVarInt(enum scriptInstance_t inst, unsigned int theArray, const char* strVarName) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, const char*)>(L"GetNamedArrayVarInt")(inst, theArray, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNamedArrayVarFloat(enum scriptInstance_t inst, unsigned int theArray, const char* strVarName) -> float
{
  return Zynamic::Forward<float (enum scriptInstance_t, unsigned int, const char*)>(L"GetNamedArrayVarFloat")(inst, theArray, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNamedArrayVarArray(enum scriptInstance_t inst, unsigned int theArray, const char* strVarName) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, const char*)>(L"GetNamedArrayVarArray")(inst, theArray, strVarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EqualTypeSameResult(const struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> enum XExpr::MathTypes
{
  return Zynamic::Forward<enum XExpr::MathTypes (const struct ParseValue*, int, enum scriptInstance_t)>(L"EqualTypeSameResult")(params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EqualTypeAllowScalar(const struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> enum XExpr::MathTypes
{
  return Zynamic::Forward<enum XExpr::MathTypes (const struct ParseValue*, int, enum scriptInstance_t)>(L"EqualTypeAllowScalar")(params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FloatsToVec(const struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> enum XExpr::MathTypes
{
  return Zynamic::Forward<enum XExpr::MathTypes (const struct ParseValue*, int, enum scriptInstance_t)>(L"FloatsToVec")(params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VecsToFloat(const struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> enum XExpr::MathTypes
{
  return Zynamic::Forward<enum XExpr::MathTypes (const struct ParseValue*, int, enum scriptInstance_t)>(L"VecsToFloat")(params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3ToVec3(const struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> enum XExpr::MathTypes
{
  return Zynamic::Forward<enum XExpr::MathTypes (const struct ParseValue*, int, enum scriptInstance_t)>(L"Vec3ToVec3")(params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConvertParseTypeToStr(enum ExpressionParseTypes eType) -> const char*
{
  return Zynamic::Forward<const char* (enum ExpressionParseTypes)>(L"ConvertParseTypeToStr")(eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStdParamIx(const char* strParamName) -> int
{
  return Zynamic::Forward<int (const char*)>(L"GetStdParamIx")(strParamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsStandardParam(const char* strParamName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"IsStandardParam")(strParamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DetermineParseType(class ScriptTokenizer& tokenizer) -> enum ExpressionParseTypes
{
  return Zynamic::Forward<enum ExpressionParseTypes (class ScriptTokenizer&)>(L"DetermineParseType")(tokenizer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RequireParseTypePopOrError(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, const enum ExpressionParseTypes eTest) -> void
{
  return Zynamic::Forward<void (class ScriptTokenizer&, enum scriptInstance_t, const enum ExpressionParseTypes)>(L"RequireParseTypePopOrError")(tokenizer, inst, eTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateParameterVarName(char* strOutString, int iMaxNumChars, int iOperandIx) -> void
{
  return Zynamic::Forward<void (char*, int, int)>(L"CreateParameterVarName")(strOutString, iMaxNumChars, iOperandIx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BuildExpr(const enum ExpressionParseTypes eCurrType, struct ParseValue* params, int iNumParams, enum scriptInstance_t inst) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (const enum ExpressionParseTypes, struct ParseValue*, int, enum scriptInstance_t)>(L"BuildExpr")(eCurrType, params, iNumParams, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseFunctionCall(const enum ExpressionParseTypes eFuncType, class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (const enum ExpressionParseTypes, class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseFunctionCall")(eFuncType, tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseStdParameter(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseStdParameter")(tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseParameter(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseParameter")(tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseBottomRankExpr(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseBottomRankExpr")(tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseRank2Expr(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseRank2Expr")(tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseTopRankExpr(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData) -> struct ParseValue
{
  return Zynamic::Forward<struct ParseValue (class ScriptTokenizer&, enum scriptInstance_t, unsigned int)>(L"ParseTopRankExpr")(tokenizer, inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetAnimCheck(int bAnimCheck, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (int, enum scriptInstance_t)>(L"SetAnimCheck")(bAnimCheck, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAnimTreeParseProperties(class ScriptTokenizer& tokenizer, unsigned int currentAnim, int* piNumComponents) -> int
{
  return Zynamic::Forward<int (class ScriptTokenizer&, unsigned int, int*)>(L"GetAnimTreeParseProperties")(tokenizer, currentAnim, piNumComponents);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EmitAnimationInternal(enum scriptInstance_t inst, const char* pos, unsigned int animName, unsigned int names, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int, unsigned int, unsigned int)>(L"Scr_EmitAnimationInternal")(inst, pos, animName, names, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EmitAnimation(enum scriptInstance_t inst, char* pos, unsigned int animName, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, char*, unsigned int, unsigned int)>(L"Scr_EmitAnimation")(inst, pos, animName, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StoreOptionsInNode(enum scriptInstance_t inst, unsigned int currentAnimArray, int iCurrOptionIx, unsigned int optionName, unsigned int iEntryIndex) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int, unsigned int, unsigned int)>(L"StoreOptionsInNode")(inst, currentAnimArray, iCurrOptionIx, optionName, iEntryIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StoreExprInList(enum scriptInstance_t inst, unsigned int exprDataArray, struct ParseValue exprData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, struct ParseValue)>(L"StoreExprInList")(inst, exprDataArray, exprData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StoreValuesInNode(enum scriptInstance_t inst, unsigned int currentAnimArray, int iCurrIx, unsigned int iEntryIndex) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int, unsigned int)>(L"StoreValuesInNode")(inst, currentAnimArray, iCurrIx, iEntryIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StoreValueInList(enum scriptInstance_t inst, unsigned int valueDataArray, unsigned int valueData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int)>(L"StoreValueInList")(inst, valueDataArray, valueData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DetermineValueType(class ScriptTokenizer& tokenizer) -> enum ValueType
{
  return Zynamic::Forward<enum ValueType (class ScriptTokenizer&)>(L"DetermineValueType")(tokenizer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseValueFromValueList(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int valueName, unsigned int rootData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (class ScriptTokenizer&, enum scriptInstance_t, unsigned int, unsigned int)>(L"ParseValueFromValueList")(tokenizer, inst, valueName, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseParameterDef(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int rootData, unsigned int names) -> void
{
  return Zynamic::Forward<void (class ScriptTokenizer&, enum scriptInstance_t, unsigned int, unsigned int)>(L"ParseParameterDef")(tokenizer, inst, rootData, names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseNode(class ScriptTokenizer& tokenizer, enum scriptInstance_t inst, unsigned int parentNode, unsigned int rootData, unsigned int names, bool bLoop, bool bComplete) -> bool
{
  return Zynamic::Forward<bool (class ScriptTokenizer&, enum scriptInstance_t, unsigned int, unsigned int, unsigned int, bool, bool)>(L"ParseNode")(tokenizer, inst, parentNode, rootData, names, bLoop, bComplete);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnimTreeParseInternal(enum scriptInstance_t inst, unsigned int parentNode, unsigned int names, bool bIncludeParent, bool bLoop, bool bComplete) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, unsigned int, unsigned int, bool, bool, bool)>(L"AnimTreeParseInternal")(inst, parentNode, names, bIncludeParent, bLoop, bComplete);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AnimTreeParse(enum scriptInstance_t inst, const char* pos, unsigned int parentNode, unsigned int names) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int, unsigned int)>(L"Scr_AnimTreeParse")(inst, pos, parentNode, names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnimTreeSize(enum scriptInstance_t inst, unsigned int parentNode) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int)>(L"Scr_GetAnimTreeSize")(inst, parentNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnimTreeValueCount(enum scriptInstance_t inst, unsigned int rootData) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int)>(L"Scr_GetAnimTreeValueCount")(inst, rootData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConnectScriptToAnim(enum scriptInstance_t inst, unsigned int names, int index, unsigned int filename, unsigned int name, int treeIndex) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int, unsigned int, unsigned int, int)>(L"ConnectScriptToAnim")(inst, names, index, filename, name, treeIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnimsIndex(const struct XAnim_s* anims, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (const struct XAnim_s*, enum scriptInstance_t)>(L"Scr_GetAnimsIndex")(anims, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetClientAnims(unsigned int index, enum scriptInstance_t inst) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (unsigned int, enum scriptInstance_t)>(L"Scr_GetClientAnims")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnims(unsigned int index, enum scriptInstance_t inst) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (unsigned int, enum scriptInstance_t)>(L"Scr_GetAnims")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ProcessNodeValues(enum scriptInstance_t inst, struct XAnim_s* anims, unsigned int name, unsigned int rootNode, unsigned int animIndex, unsigned int arrayNode, function* Alloc) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct XAnim_s*, unsigned int, unsigned int, unsigned int, unsigned int, function *)>(L"Scr_ProcessNodeValues")(inst, anims, name, rootNode, animIndex, arrayNode, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CreateAnimationTree(enum scriptInstance_t inst, unsigned int parentNode, unsigned int rootData, unsigned int names, struct XAnim_s* anims, unsigned int childIndex, const char* parentName, unsigned int parentIndex, unsigned int filename, int treeIndex, unsigned short flags, function* Alloc, unsigned int paramMap) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, unsigned int, unsigned int, struct XAnim_s*, unsigned int, const char*, unsigned int, unsigned int, int, unsigned short, function *, unsigned int)>(L"Scr_CreateAnimationTree")(inst, parentNode, rootData, names, anims, childIndex, parentName, parentIndex, filename, treeIndex, flags, Alloc, paramMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateValues(enum scriptInstance_t inst, struct XAnim_s* anims, unsigned int valueArray) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct XAnim_s*, unsigned int)>(L"CreateValues")(inst, anims, valueArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CheckAnimsDefined(enum scriptInstance_t inst, unsigned int names, unsigned int filename) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_CheckAnimsDefined")(inst, names, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheAnimationTree(enum scriptInstance_t inst, unsigned int parentNode) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_PrecacheAnimationTree")(inst, parentNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UsingTreeInternal(enum scriptInstance_t inst, const char* filename, unsigned int* index, int user) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*, unsigned int*, int)>(L"Scr_UsingTreeInternal")(inst, filename, index, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UsingTree(enum scriptInstance_t inst, const char* filename, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int)>(L"Scr_UsingTree")(inst, filename, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClientUsingTree(enum scriptInstance_t inst, const char* filename) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*)>(L"Scr_ClientUsingTree")(inst, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadAnimTreeInternal(enum scriptInstance_t inst, const char* filename, unsigned int parentNode, unsigned int names) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, const char*, unsigned int, unsigned int)>(L"Scr_LoadAnimTreeInternal")(inst, filename, parentNode, names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CreateAllAnimTreeData(enum scriptInstance_t inst, unsigned int rootData, unsigned int names, struct scr_animtree_t& animtree, unsigned int filenameId, unsigned int index, function* Alloc) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, unsigned int, struct scr_animtree_t&, unsigned int, unsigned int, function *)>(L"Scr_CreateAllAnimTreeData")(inst, rootData, names, animtree, filenameId, index, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_RetrieveAnimTree(const char* strAnimTreeName, unsigned int names, unsigned int filename, int iOurTreeIx) -> struct scr_animtree_t
{
  return Zynamic::Forward<struct scr_animtree_t (const char*, unsigned int, unsigned int, int)>(L"CScr_RetrieveAnimTree")(strAnimTreeName, names, filename, iOurTreeIx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadAnimTreeAtIndex(enum scriptInstance_t inst, unsigned int index, function* Alloc, int user, bool modCheckSum) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, function *, int, bool)>(L"Scr_LoadAnimTreeAtIndex")(inst, index, Alloc, user, modCheckSum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindAnimTree(enum scriptInstance_t inst, const char* filename) -> struct scr_animtree_t
{
  return Zynamic::Forward<struct scr_animtree_t (enum scriptInstance_t, const char*)>(L"Scr_FindAnimTree")(inst, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindAnim(enum scriptInstance_t inst, const char* filename, const char* animName, struct scr_anim_s* anim, int user) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, const char*, struct scr_anim_s*, int)>(L"Scr_FindAnim")(inst, filename, animName, anim, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownAnimTrees(int user) -> void
{
  return Zynamic::Forward<void (int)>(L"Scr_ShutdownAnimTrees")(user);
}

#endif // __UNIMPLEMENTED__
