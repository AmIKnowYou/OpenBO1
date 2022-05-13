//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_evaluate() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_evaluate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompareCanonicalStrings(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"Scr_CompareCanonicalStrings")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareCanonicalStrings(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareCanonicalStrings")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ArchiveCanonicalStrings(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ArchiveCanonicalStrings")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetCanonicalString(enum scriptInstance_t inst, unsigned int fieldName) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int)>(L"Scr_GetCanonicalString")(inst, fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitEvaluate(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InitEvaluate")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EndLoadEvaluate(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_EndLoadEvaluate")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownEvaluate(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ShutdownEvaluate")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileCanonicalString(enum scriptInstance_t inst, unsigned int stringValue) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum scriptInstance_t, unsigned int)>(L"Scr_CompileCanonicalString")(inst, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFieldValue(enum scriptInstance_t inst, unsigned int objectId, const char* fieldName, int len, char* text) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, const char*, int, char*)>(L"Scr_GetFieldValue")(inst, objectId, fieldName, len, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetValueString(enum scriptInstance_t inst, unsigned int localId, struct VariableValue* value, int len, char* s) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*, int, char*)>(L"Scr_GetValueString")(inst, localId, value, len, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClearValue(enum scriptInstance_t inst, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*)>(L"Scr_ClearValue")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalArrayVariableInternal(enum scriptInstance_t inst, struct VariableValue* parentValue, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*, struct VariableValue*)>(L"Scr_EvalArrayVariableInternal")(inst, parentValue, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalArrayVariable(enum scriptInstance_t inst, unsigned int arrayId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*)>(L"Scr_EvalArrayVariable")(inst, arrayId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalArrayVariableExpression(enum scriptInstance_t inst, union sval_u array, union sval_u index, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalArrayVariableExpression")(inst, array, index, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefArrayVariableExpression(enum scriptInstance_t inst, union sval_u array, union sval_u index) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u)>(L"Scr_RefArrayVariableExpression")(inst, array, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalLocalVariable(enum scriptInstance_t inst, union sval_u expr, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalLocalVariable")(inst, expr, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalObject(enum scriptInstance_t inst, union sval_u classnum, union sval_u entnum, struct VariableValue* value) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, union sval_u, union sval_u, struct VariableValue*)>(L"Scr_EvalObject")(inst, classnum, entnum, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalSelfValue(enum scriptInstance_t inst, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*)>(L"Scr_EvalSelfValue")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetValue(enum scriptInstance_t inst, unsigned int index, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*)>(L"Scr_GetValue")(inst, index, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalVariableExpression(enum scriptInstance_t inst, union sval_u expr, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalVariableExpression")(inst, expr, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefVariableExpression(enum scriptInstance_t inst, union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u)>(L"Scr_RefVariableExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileVariableExpression(enum scriptInstance_t inst, union sval_u* expr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompileVariableExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalPrimitiveExpressionFieldObject(enum scriptInstance_t inst, union sval_u expr, unsigned int localId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, union sval_u, unsigned int)>(L"Scr_EvalPrimitiveExpressionFieldObject")(inst, expr, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompilePrimitiveExpressionFieldObject(enum scriptInstance_t inst, union sval_u* expr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompilePrimitiveExpressionFieldObject")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalFieldVariableInternal(enum scriptInstance_t inst, unsigned int objectId, unsigned int fieldName, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, struct VariableValue*)>(L"Scr_EvalFieldVariableInternal")(inst, objectId, fieldName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalFieldVariable(enum scriptInstance_t inst, unsigned int fieldName, struct VariableValue* value, unsigned int objectId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*, unsigned int)>(L"Scr_EvalFieldVariable")(inst, fieldName, value, objectId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalPrimitiveExpression(enum scriptInstance_t inst, union sval_u expr, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalPrimitiveExpression")(inst, expr, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefBreakonExpression(enum scriptInstance_t inst, union sval_u expr, union sval_u param) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u)>(L"Scr_RefBreakonExpression")(inst, expr, param);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefPrimitiveExpression(enum scriptInstance_t inst, union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u)>(L"Scr_RefPrimitiveExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompilePrimitiveExpressionList(enum scriptInstance_t inst, union sval_u* exprlist) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompilePrimitiveExpressionList")(inst, exprlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileCallExpressionList(enum scriptInstance_t inst, union sval_u* exprlist) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompileCallExpressionList")(inst, exprlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileFunction(enum scriptInstance_t inst, union sval_u* func_name, union sval_u* params) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u*, union sval_u*)>(L"Scr_CompileFunction")(inst, func_name, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileMethod(enum scriptInstance_t inst, union sval_u* expr, union sval_u* func_name, union sval_u* params) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u*, union sval_u*, union sval_u*)>(L"Scr_CompileMethod")(inst, expr, func_name, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileCallExpression(enum scriptInstance_t inst, union sval_u* expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u*)>(L"Scr_CompileCallExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefCall(enum scriptInstance_t inst, union sval_u params) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u)>(L"Scr_RefCall")(inst, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefMethod(enum scriptInstance_t inst, union sval_u expr, union sval_u params) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u)>(L"Scr_RefMethod")(inst, expr, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefCallExpression(enum scriptInstance_t inst, union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u)>(L"Scr_RefCallExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PreEvalBuiltin(enum scriptInstance_t inst, union sval_u params, unsigned int localId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int)>(L"Scr_PreEvalBuiltin")(inst, params, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PostEvalBuiltin(enum scriptInstance_t inst, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*)>(L"Scr_PostEvalBuiltin")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalFunction(enum scriptInstance_t inst, union sval_u func_name, union sval_u params, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalFunction")(inst, func_name, params, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalMethod(enum scriptInstance_t inst, union sval_u expr, union sval_u func_name, union sval_u params, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalMethod")(inst, expr, func_name, params, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalCallExpression(enum scriptInstance_t inst, union sval_u expr, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalCallExpression")(inst, expr, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompilePrimitiveExpression(enum scriptInstance_t inst, union sval_u* expr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompilePrimitiveExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalBoolOrExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalBoolOrExpression")(inst, expr1, expr2, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalBoolAndExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalBoolAndExpression")(inst, expr1, expr2, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalBinaryOperatorExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u opcode, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalBinaryOperatorExpression")(inst, expr1, expr2, opcode, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefBinaryOperatorExpression(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u)>(L"Scr_RefBinaryOperatorExpression")(inst, expr1, expr2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalVector(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u expr3, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, union sval_u, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalVector")(inst, expr1, expr2, expr3, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefVector(enum scriptInstance_t inst, union sval_u expr1, union sval_u expr2, union sval_u expr3) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u, union sval_u, union sval_u)>(L"Scr_RefVector")(inst, expr1, expr2, expr3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalExpression(enum scriptInstance_t inst, union sval_u expr, unsigned int localId, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u, unsigned int, struct VariableValue*)>(L"Scr_EvalExpression")(inst, expr, localId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefExpression(enum scriptInstance_t inst, union sval_u expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, union sval_u)>(L"Scr_RefExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileExpression(enum scriptInstance_t inst, union sval_u* expr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u*)>(L"Scr_CompileExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileTextInternal(enum scriptInstance_t inst, const char* text, struct ScriptExpression_t* scriptExpr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, struct ScriptExpression_t*)>(L"Scr_CompileTextInternal")(inst, text, scriptExpr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileText(enum scriptInstance_t inst, const char* text, struct ScriptExpression_t* scriptExpr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, struct ScriptExpression_t*)>(L"Scr_CompileText")(inst, text, scriptExpr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EvalScriptExpression(enum scriptInstance_t inst, struct ScriptExpression_t* expr, unsigned int localId, struct VariableValue* value, bool freezeScope, bool freezeObjects) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, struct ScriptExpression_t*, unsigned int, struct VariableValue*, bool, bool)>(L"Scr_EvalScriptExpression")(inst, expr, localId, value, freezeScope, freezeObjects);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClearDebugExprValue(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"Scr_ClearDebugExprValue")(inst, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefScriptExpression(enum scriptInstance_t inst, struct ScriptExpression_t* expr) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, struct ScriptExpression_t*)>(L"Scr_RefScriptExpression")(inst, expr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeDebugExprValue(enum scriptInstance_t inst, union sval_u val) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, union sval_u)>(L"Scr_FreeDebugExprValue")(inst, val);
}

#endif // __UNIMPLEMENTED__
