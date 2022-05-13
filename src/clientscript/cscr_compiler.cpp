//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_compiler() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_compiler")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFunction(enum scriptInstance_t inst, const char** pName, int* type) -> function*
{
  return Zynamic::Forward<function * (enum scriptInstance_t, const char**, int*)>(L"GetFunction")(inst, pName, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMethod(enum scriptInstance_t inst, const char** pName, int* type) -> function*
{
  return Zynamic::Forward<function * (enum scriptInstance_t, const char**, int*)>(L"GetMethod")(inst, pName, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileRemoveRefToString(enum scriptInstance_t inst, unsigned int stringValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_CompileRemoveRefToString")(inst, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCanonicalString(enum scriptInstance_t inst, unsigned int stringValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"EmitCanonicalString")(inst, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCanonicalStringConst(enum scriptInstance_t inst, unsigned int stringValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"EmitCanonicalStringConst")(inst, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompileTransferRefToString(enum scriptInstance_t inst, unsigned int stringValue, unsigned int user) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"CompileTransferRefToString")(inst, stringValue, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAssignmentPos(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"EmitAssignmentPos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPreAssignmentPos(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"EmitPreAssignmentPos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitOpcode(enum scriptInstance_t inst, unsigned int op, int offset, int callType) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int, int)>(L"EmitOpcode")(inst, op, offset, callType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEnd(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"EmitEnd")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitReturn(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"EmitReturn")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitInteger(enum scriptInstance_t inst, int value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"EmitInteger")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitUnsignedShort(enum scriptInstance_t inst, unsigned short value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned short)>(L"EmitUnsignedShort")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitByte(enum scriptInstance_t inst, unsigned char value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char)>(L"EmitByte")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFloat(enum scriptInstance_t inst, float value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, float)>(L"EmitFloat")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalUndefined(union sval_u sourcePos, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (union sval_u, struct VariableCompileValue*)>(L"EvalUndefined")(sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetUndefined(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitGetUndefined")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalInteger(int value, union sval_u sourcePos, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (int, union sval_u, struct VariableCompileValue*)>(L"EvalInteger")(value, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetInteger(enum scriptInstance_t inst, int value, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, union sval_u)>(L"EmitGetInteger")(inst, value, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalFloat(float value, union sval_u sourcePos, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (float, union sval_u, struct VariableCompileValue*)>(L"EvalFloat")(value, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetFloat(enum scriptInstance_t inst, float value, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, float, union sval_u)>(L"EmitGetFloat")(inst, value, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAnimTree(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitAnimTree")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSetVariableField(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitSetVariableField")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindLocalVar(struct scr_block_s* block, int startIndex, unsigned int name) -> int
{
  return Zynamic::Forward<int (struct scr_block_s*, int, unsigned int)>(L"Scr_FindLocalVar")(block, startIndex, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindLocalVarIndex(enum scriptInstance_t inst, unsigned int name, union sval_u sourcePos, bool create, struct scr_block_s* block) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, union sval_u, bool, struct scr_block_s*)>(L"Scr_FindLocalVarIndex")(inst, name, sourcePos, create, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCreateLocalVars(enum scriptInstance_t inst, struct scr_block_s* block, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct scr_block_s*, union sval_u)>(L"EmitCreateLocalVars")(inst, block, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitRemoveLocalVars(enum scriptInstance_t inst, struct scr_block_s* block, struct scr_block_s* outerBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct scr_block_s*, struct scr_block_s*)>(L"EmitRemoveLocalVars")(inst, block, outerBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitNOP2(enum scriptInstance_t inst, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, bool, unsigned int, struct scr_block_s*)>(L"EmitNOP2")(inst, lastStatement, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CheckMaxSwitchCases(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Scr_CheckMaxSwitchCases")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CheckLocalVarsCount(int localVarsCount) -> void
{
  return Zynamic::Forward<void (int)>(L"Scr_CheckLocalVarsCount")(localVarsCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RegisterLocalVar(unsigned int name, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (unsigned int, union sval_u, struct scr_block_s*)>(L"Scr_RegisterLocalVar")(name, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CopyBlock(struct scr_block_s* from, struct scr_block_s** to) -> void
{
  return Zynamic::Forward<void (struct scr_block_s*, struct scr_block_s**)>(L"Scr_CopyBlock")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitFromChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (struct scr_block_s**, int, struct scr_block_s*)>(L"Scr_InitFromChildBlocks")(childBlocks, childCount, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AppendChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (struct scr_block_s**, int, struct scr_block_s*)>(L"Scr_AppendChildBlocks")(childBlocks, childCount, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MergeChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (struct scr_block_s**, int, struct scr_block_s*)>(L"Scr_MergeChildBlocks")(childBlocks, childCount, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TransferBlock(struct scr_block_s* from, struct scr_block_s* to) -> void
{
  return Zynamic::Forward<void (struct scr_block_s*, struct scr_block_s*)>(L"Scr_TransferBlock")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSafeSetVariableField(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitSafeSetVariableField")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSafeSetWaittillVariableField(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitSafeSetWaittillVariableField")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (unsigned int, union sval_u, struct VariableCompileValue*)>(L"EvalString")(value, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetString(enum scriptInstance_t inst, unsigned int value, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, union sval_u)>(L"EmitGetString")(inst, value, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalIString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (unsigned int, union sval_u, struct VariableCompileValue*)>(L"EvalIString")(value, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetIString(enum scriptInstance_t inst, unsigned int value, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, union sval_u)>(L"EmitGetIString")(inst, value, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetVector(enum scriptInstance_t inst, const float* value, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const float*, union sval_u)>(L"EmitGetVector")(inst, value, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitValue(enum scriptInstance_t inst, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableCompileValue*)>(L"EmitValue")(inst, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PushValue(enum scriptInstance_t inst, struct VariableCompileValue* constValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableCompileValue*)>(L"Scr_PushValue")(inst, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PopValue(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_PopValue")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCastBool(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitCastBool")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBoolNot(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitBoolNot")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBoolComplement(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitBoolComplement")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSize(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitSize")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSelf(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitSelf")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitLevel(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitLevel")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGame(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitGame")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAnim(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitAnim")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSelfObject(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitSelfObject")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitLevelObject(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitLevelObject")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAnimObject(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitAnimObject")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitLocalVariable(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitLocalVariable")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitLocalVariableRef(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitLocalVariableRef")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsLocalVariableRef(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsLocalVariableRef")(expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGameRef(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitGameRef")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEvalArray(enum scriptInstance_t inst, union sval_u sourcePos, union sval_u indexSourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitEvalArray")(inst, sourcePos, indexSourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEvalArrayRef(enum scriptInstance_t inst, union sval_u sourcePos, union sval_u indexSourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitEvalArrayRef")(inst, sourcePos, indexSourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitClearArray(enum scriptInstance_t inst, union sval_u sourcePos, union sval_u indexSourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitClearArray")(inst, sourcePos, indexSourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEmptyArray(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitEmptyArray")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAnimation(enum scriptInstance_t inst, union sval_u anim, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitAnimation")(inst, anim, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFieldVariable(enum scriptInstance_t inst, union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitFieldVariable")(inst, expr, field, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFieldVariableRef(enum scriptInstance_t inst, union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitFieldVariableRef")(inst, expr, field, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitClearFieldVariable(enum scriptInstance_t inst, union sval_u expr, union sval_u field, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitClearFieldVariable")(inst, expr, field, sourcePos, rhsSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitObject(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitObject")(inst, expr, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitDecTop(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"EmitDecTop")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCastFieldObject(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitCastFieldObject")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitArrayVariable(enum scriptInstance_t inst, union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitArrayVariable")(inst, expr, index, sourcePos, indexSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitArrayVariableRef(enum scriptInstance_t inst, union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitArrayVariableRef")(inst, expr, index, sourcePos, indexSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsArrayVariableRef(union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsArrayVariableRef")(expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitClearArrayVariable(enum scriptInstance_t inst, union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitClearArrayVariable")(inst, expr, index, sourcePos, indexSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitVariableExpression(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitVariableExpression")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionCount(union sval_u exprlist) -> int
{
  return Zynamic::Forward<int (union sval_u)>(L"GetExpressionCount")(exprlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitExpressionList(enum scriptInstance_t inst, union sval_u exprlist, struct scr_block_s* block) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitExpressionList")(inst, exprlist, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSingleParameter(union sval_u exprlist) -> union sval_u*
{
  return Zynamic::Forward<union sval_u* (union sval_u)>(L"GetSingleParameter")(exprlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddExpressionListOpcodePos(enum scriptInstance_t inst, union sval_u exprlist) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"AddExpressionListOpcodePos")(inst, exprlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddFilePrecache(enum scriptInstance_t inst, unsigned int filename, unsigned int sourcePos, bool include, unsigned int* filePosId, unsigned int* fileCountId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, bool, unsigned int*, unsigned int*)>(L"AddFilePrecache")(inst, filename, sourcePos, include, filePosId, fileCountId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFunction(enum scriptInstance_t inst, union sval_u func, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitFunction")(inst, func, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitGetFunction(enum scriptInstance_t inst, union sval_u func, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitGetFunction")(inst, func, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddFunction(enum scriptInstance_t inst, int func, const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, int, const char*)>(L"AddFunction")(inst, func, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptFunction(enum scriptInstance_t inst, union sval_u func, int param_count, bool bMethod, union sval_u nameSourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u)>(L"EmitPostScriptFunction")(inst, func, param_count, bMethod, nameSourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptFunctionPointer(enum scriptInstance_t inst, union sval_u expr, int param_count, bool bMethod, union sval_u nameSourcePos, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitPostScriptFunctionPointer")(inst, expr, param_count, bMethod, nameSourcePos, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptThread(enum scriptInstance_t inst, union sval_u func, int param_count, bool bMethod, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u)>(L"EmitPostScriptThread")(inst, func, param_count, bMethod, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptThreadPointer(enum scriptInstance_t inst, union sval_u expr, int param_count, bool bMethod, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u, struct scr_block_s*)>(L"EmitPostScriptThreadPointer")(inst, expr, param_count, bMethod, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptFunctionCall(enum scriptInstance_t inst, union sval_u func_name, int param_count, bool bMethod, union sval_u nameSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u, struct scr_block_s*)>(L"EmitPostScriptFunctionCall")(inst, func_name, param_count, bMethod, nameSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostScriptThreadCall(enum scriptInstance_t inst, union sval_u func_name, int param_count, bool bMethod, union sval_u sourcePos, union sval_u nameSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitPostScriptThreadCall")(inst, func_name, param_count, bMethod, sourcePos, nameSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPreFunctionCall(enum scriptInstance_t inst, union sval_u func_name) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitPreFunctionCall")(inst, func_name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPostFunctionCall(enum scriptInstance_t inst, union sval_u func_name, int param_count, bool bMethod, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, int, bool, struct scr_block_s*)>(L"EmitPostFunctionCall")(inst, func_name, param_count, bMethod, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetBuiltin(enum scriptInstance_t inst, union sval_u func_name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, union sval_u)>(L"Scr_GetBuiltin")(inst, func_name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BeginDevScript(enum scriptInstance_t inst, int* type, char** savedPos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int*, char**)>(L"Scr_BeginDevScript")(inst, type, savedPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EndDevScript(enum scriptInstance_t inst, int type, char** savedPos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, char**)>(L"Scr_EndDevScript")(inst, type, savedPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetCacheType(int type) -> int
{
  return Zynamic::Forward<int (int)>(L"Scr_GetCacheType")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetUncacheType(int type) -> int
{
  return Zynamic::Forward<int (int)>(L"Scr_GetUncacheType")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCallBuiltinOpcode(enum scriptInstance_t inst, int param_count, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, union sval_u)>(L"EmitCallBuiltinOpcode")(inst, param_count, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCallBuiltinMethodOpcode(enum scriptInstance_t inst, int param_count, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, union sval_u)>(L"EmitCallBuiltinMethodOpcode")(inst, param_count, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCall(enum scriptInstance_t inst, union sval_u func_name, union sval_u params, bool bStatement, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, bool, struct scr_block_s*)>(L"EmitCall")(inst, func_name, params, bStatement, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitMethod(enum scriptInstance_t inst, union sval_u expr, union sval_u func_name, union sval_u params, union sval_u methodSourcePos, bool bStatement, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, bool, struct scr_block_s*)>(L"EmitMethod")(inst, expr, func_name, params, methodSourcePos, bStatement, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinkThread(enum scriptInstance_t inst, unsigned int threadCountId, struct VariableValue* pos, bool allowFarCall) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*, bool)>(L"LinkThread")(inst, threadCountId, pos, allowFarCall);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinkFile(enum scriptInstance_t inst, unsigned int filePosId, unsigned int fileCountId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"LinkFile")(inst, filePosId, fileCountId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckThreadPosition(enum scriptInstance_t inst, unsigned int posId, unsigned int name, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, unsigned int)>(L"CheckThreadPosition")(inst, posId, name, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpecifyThreadPosition(enum scriptInstance_t inst, unsigned int posId, unsigned int name, unsigned int sourcePos, int type) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int, unsigned int, int)>(L"SpecifyThreadPosition")(inst, posId, name, sourcePos, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetThreadPosition(enum scriptInstance_t inst, unsigned int posId, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, union sval_u)>(L"SetThreadPosition")(inst, posId, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCallExpression(enum scriptInstance_t inst, union sval_u expr, bool bStatement, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, bool, struct scr_block_s*)>(L"EmitCallExpression")(inst, expr, bStatement, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCallExpressionFieldObject(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitCallExpressionFieldObject")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBreakOn(enum scriptInstance_t inst, union sval_u expr, union sval_u param, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u)>(L"EmitBreakOn")(inst, expr, param, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CreateVector(enum scriptInstance_t inst, struct VariableCompileValue* constValue, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableCompileValue*, struct VariableValue*)>(L"Scr_CreateVector")(inst, constValue, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalPrimitiveExpressionList(enum scriptInstance_t inst, union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue* constValue) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, struct VariableCompileValue*)>(L"EvalPrimitiveExpressionList")(inst, exprlist, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitOrEvalPrimitiveExpressionList(enum scriptInstance_t inst, union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue* constValue, struct scr_block_s* block) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, struct VariableCompileValue*, struct scr_block_s*)>(L"EmitOrEvalPrimitiveExpressionList")(inst, exprlist, sourcePos, constValue, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitExpressionListFieldObject(enum scriptInstance_t inst, union sval_u exprlist, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitExpressionListFieldObject")(inst, exprlist, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalPrimitiveExpression(enum scriptInstance_t inst, union sval_u expr, struct VariableCompileValue* constValue) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, struct VariableCompileValue*)>(L"EvalPrimitiveExpression")(inst, expr, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitOrEvalPrimitiveExpression(enum scriptInstance_t inst, union sval_u expr, struct VariableCompileValue* constValue, struct scr_block_s* block) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, struct VariableCompileValue*, struct scr_block_s*)>(L"EmitOrEvalPrimitiveExpression")(inst, expr, constValue, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPrimitiveExpression(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitPrimitiveExpression")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBoolOrExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitBoolOrExpression")(inst, expr1, expr2, expr1sourcePos, expr2sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBoolAndExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitBoolAndExpression")(inst, expr1, expr2, expr1sourcePos, expr2sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalBinaryOperatorExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue* constValue) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct VariableCompileValue*)>(L"EvalBinaryOperatorExpression")(inst, expr1, expr2, opcode, sourcePos, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitOrEvalBinaryOperatorExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue* constValue, struct scr_block_s* block) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct VariableCompileValue*, struct scr_block_s*)>(L"EmitOrEvalBinaryOperatorExpression")(inst, expr1, expr2, opcode, sourcePos, constValue, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBinaryEqualsOperatorExpression(enum scriptInstance_t inst, union sval_u lhs, union sval_u rhs, union sval_u opcode, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitBinaryEqualsOperatorExpression")(inst, lhs, rhs, opcode, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsBinaryEqualsOperatorExpression(union sval_u lhs, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsBinaryEqualsOperatorExpression")(lhs, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvalExpression(enum scriptInstance_t inst, union sval_u expr, struct VariableCompileValue* constValue) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, struct VariableCompileValue*)>(L"EvalExpression")(inst, expr, constValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitOrEvalExpression(enum scriptInstance_t inst, union sval_u expr, struct VariableCompileValue* constValue, struct scr_block_s* block) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, struct VariableCompileValue*, struct scr_block_s*)>(L"EmitOrEvalExpression")(inst, expr, constValue, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitExpression(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitExpression")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitVariableExpressionRef(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitVariableExpressionRef")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsVariableExpressionRef(union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsVariableExpressionRef")(expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitArrayPrimitiveExpressionRef(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitArrayPrimitiveExpressionRef")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsArrayPrimitiveExpressionRef(union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsArrayPrimitiveExpressionRef")(expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitPrimitiveExpressionFieldObject(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitPrimitiveExpressionFieldObject")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitExpressionFieldObject(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitExpressionFieldObject")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConnectBreakStatements(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"ConnectBreakStatements")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConnectContinueStatements(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"ConnectContinueStatements")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsUndefinedPrimitiveExpression(union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (union sval_u)>(L"IsUndefinedPrimitiveExpression")(expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsUndefinedExpression(union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (union sval_u)>(L"IsUndefinedExpression")(expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitClearVariableExpression(enum scriptInstance_t inst, union sval_u expr, union sval_u rhsSourcePos, struct scr_block_s* block) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitClearVariableExpression")(inst, expr, rhsSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitAssignmentStatement(enum scriptInstance_t inst, union sval_u lhs, union sval_u rhs, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitAssignmentStatement")(inst, lhs, rhs, sourcePos, rhsSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsAssignmentStatement(union sval_u lhs, union sval_u rhs, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsAssignmentStatement")(lhs, rhs, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCallExpressionStatement(enum scriptInstance_t inst, union sval_u expr, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitCallExpressionStatement")(inst, expr, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitReturnStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitReturnStatement")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEndStatement(enum scriptInstance_t inst, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitEndStatement")(inst, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitWaitStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitWaitStatement")(inst, expr, sourcePos, waitSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitWaittillFrameEnd(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitWaittillFrameEnd")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitIfStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u stmt, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block, union sval_u* ifStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, bool, unsigned int, struct scr_block_s*, union sval_u*)>(L"EmitIfStatement")(inst, expr, stmt, sourcePos, lastStatement, endSourcePos, block, ifStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsIfStatement(enum scriptInstance_t inst, union sval_u stmt, struct scr_block_s* block, union sval_u* ifStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*, union sval_u*)>(L"Scr_CalcLocalVarsIfStatement")(inst, stmt, block, ifStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitIfElseStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u stmt1, union sval_u stmt2, union sval_u sourcePos, union sval_u elseSourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block, union sval_u* ifStatBlock, union sval_u* elseStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, union sval_u, bool, unsigned int, struct scr_block_s*, union sval_u*, union sval_u*)>(L"EmitIfElseStatement")(inst, expr, stmt1, stmt2, sourcePos, elseSourcePos, lastStatement, endSourcePos, block, ifStatBlock, elseStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsIfElseStatement(enum scriptInstance_t inst, union sval_u stmt1, union sval_u stmt2, struct scr_block_s* block, union sval_u* ifStatBlock, union sval_u* elseStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*, union sval_u*, union sval_u*)>(L"Scr_CalcLocalVarsIfElseStatement")(inst, stmt1, stmt2, block, ifStatBlock, elseStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddBreakBlock(enum scriptInstance_t inst, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct scr_block_s*)>(L"Scr_AddBreakBlock")(inst, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddContinueBlock(enum scriptInstance_t inst, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct scr_block_s*)>(L"Scr_AddContinueBlock")(inst, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitWhileStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u stmt, union sval_u sourcePos, union sval_u whileSourcePos, struct scr_block_s* block, union sval_u* whileStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*, union sval_u*)>(L"EmitWhileStatement")(inst, expr, stmt, sourcePos, whileSourcePos, block, whileStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsWhileStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u stmt, struct scr_block_s* block, union sval_u* whileStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*, union sval_u*)>(L"Scr_CalcLocalVarsWhileStatement")(inst, expr, stmt, block, whileStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitForStatement(enum scriptInstance_t inst, union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, union sval_u sourcePos, union sval_u forSourcePos, struct scr_block_s* block, union sval_u* forStatBlock, union sval_u* forStatPostBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*, union sval_u*, union sval_u*)>(L"EmitForStatement")(inst, stmt1, expr, stmt2, stmt, sourcePos, forSourcePos, block, forStatBlock, forStatPostBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsForStatement(enum scriptInstance_t inst, union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, struct scr_block_s* block, union sval_u* forStatBlock, union sval_u* forStatPostBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*, union sval_u*, union sval_u*)>(L"Scr_CalcLocalVarsForStatement")(inst, stmt1, expr, stmt2, stmt, block, forStatBlock, forStatPostBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitIncStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitIncStatement")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitDecStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitDecStatement")(inst, expr, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFormalParameterListInternal(enum scriptInstance_t inst, union sval_u* node, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*, struct scr_block_s*)>(L"EmitFormalParameterListInternal")(inst, node, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsFormalParameterListInternal(union sval_u* node, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u*, struct scr_block_s*)>(L"Scr_CalcLocalVarsFormalParameterListInternal")(node, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFormalWaittillParameterListRefInternal(enum scriptInstance_t inst, union sval_u* node, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*, struct scr_block_s*)>(L"EmitFormalWaittillParameterListRefInternal")(inst, node, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitWaittillStatement(enum scriptInstance_t inst, union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitWaittillStatement")(inst, obj, exprlist, sourcePos, waitSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsWaittillStatement(union sval_u exprlist, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsWaittillStatement")(exprlist, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitWaittillmatchStatement(enum scriptInstance_t inst, union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitWaittillmatchStatement")(inst, obj, exprlist, sourcePos, waitSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitNotifyStatement(enum scriptInstance_t inst, union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u notifySourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitNotifyStatement")(inst, obj, exprlist, sourcePos, notifySourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitEndOnStatement(enum scriptInstance_t inst, union sval_u obj, union sval_u expr, union sval_u sourcePos, union sval_u exprSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitEndOnStatement")(inst, obj, expr, sourcePos, exprSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareCaseInfo(const void* elem1, const void* elem2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareCaseInfo")(elem1, elem2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsLastStatement(enum scriptInstance_t inst, union sval_u* node) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u*)>(L"Scr_IsLastStatement")(inst, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCaseStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitCaseStatement")(inst, expr, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitDefaultStatement(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitDefaultStatement")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSwitchStatementList(enum scriptInstance_t inst, union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, bool, unsigned int, struct scr_block_s*)>(L"EmitSwitchStatementList")(inst, val, lastStatement, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsSwitchStatement(enum scriptInstance_t inst, union sval_u stmtlist, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsSwitchStatement")(inst, stmtlist, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitSwitchStatement(enum scriptInstance_t inst, union sval_u expr, union sval_u stmtlist, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, bool, unsigned int, struct scr_block_s*)>(L"EmitSwitchStatement")(inst, expr, stmtlist, sourcePos, lastStatement, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitCaseStatementInfo(enum scriptInstance_t inst, unsigned int name, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, union sval_u)>(L"EmitCaseStatementInfo")(inst, name, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBreakStatement(enum scriptInstance_t inst, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitBreakStatement")(inst, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitContinueStatement(enum scriptInstance_t inst, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"EmitContinueStatement")(inst, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitBreakpointStatement(enum scriptInstance_t inst, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitBreakpointStatement")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitProfStatement(enum scriptInstance_t inst, union sval_u profileName, union sval_u sourcePos, unsigned char op) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, unsigned char)>(L"EmitProfStatement")(inst, profileName, sourcePos, op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitProfBeginStatement(enum scriptInstance_t inst, union sval_u profileName, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitProfBeginStatement")(inst, profileName, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitProfEndStatement(enum scriptInstance_t inst, union sval_u profileName, union sval_u sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u)>(L"EmitProfEndStatement")(inst, profileName, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitStatement(enum scriptInstance_t inst, union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, bool, unsigned int, struct scr_block_s*)>(L"EmitStatement")(inst, val, lastStatement, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsStatement(enum scriptInstance_t inst, union sval_u val, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsStatement")(inst, val, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitStatementList(enum scriptInstance_t inst, union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, bool, unsigned int, struct scr_block_s*)>(L"EmitStatementList")(inst, val, lastStatement, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsStatementList(enum scriptInstance_t inst, union sval_u val, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsStatementList")(inst, val, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsDeveloperStatementList(enum scriptInstance_t inst, union sval_u val, struct scr_block_s* block, union sval_u* devStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, struct scr_block_s*, union sval_u*)>(L"Scr_CalcLocalVarsDeveloperStatementList")(inst, val, block, devStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitDeveloperStatementList(enum scriptInstance_t inst, union sval_u val, union sval_u sourcePos, struct scr_block_s* block, union sval_u* devStatBlock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*, union sval_u*)>(L"EmitDeveloperStatementList")(inst, val, sourcePos, block, devStatBlock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitFormalParameterList(enum scriptInstance_t inst, union sval_u exprlist, union sval_u sourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitFormalParameterList")(inst, exprlist, sourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsFormalParameterList(union sval_u exprlist, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (union sval_u, struct scr_block_s*)>(L"Scr_CalcLocalVarsFormalParameterList")(exprlist, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpecifyThread(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"SpecifyThread")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitThreadInternal(enum scriptInstance_t inst, union sval_u val, union sval_u sourcePos, union sval_u endSourcePos, struct scr_block_s* block) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, struct scr_block_s*)>(L"EmitThreadInternal")(inst, val, sourcePos, endSourcePos, block);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcLocalVarsThread(enum scriptInstance_t inst, union sval_u exprlist, union sval_u stmtlist, union sval_u* stmttblock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u*)>(L"Scr_CalcLocalVarsThread")(inst, exprlist, stmtlist, stmttblock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitThread(enum scriptInstance_t inst, int type) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"InitThread")(inst, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitNormalThread(enum scriptInstance_t inst, union sval_u val, union sval_u* stmttblock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u*)>(L"EmitNormalThread")(inst, val, stmttblock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitDeveloperThread(enum scriptInstance_t inst, union sval_u val, union sval_u* stmttblock) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u*)>(L"EmitDeveloperThread")(inst, val, stmttblock);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitThread(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitThread")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitThreadList(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitThreadList")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitInclude(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitInclude")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmitIncludeList(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"EmitIncludeList")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptCompile(enum scriptInstance_t inst, union sval_u val, unsigned int filePosId, unsigned int fileCountId, unsigned int scriptId, struct PrecacheEntry* entries, int entriesCount) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, unsigned int, unsigned int, struct PrecacheEntry*, int)>(L"ScriptCompile")(inst, val, filePosId, fileCountId, scriptId, entries, entriesCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileStatement(enum scriptInstance_t inst, union sval_u parseData) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"Scr_CompileStatement")(inst, parseData);
}

#endif // __UNIMPLEMENTED__
