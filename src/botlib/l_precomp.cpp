//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PrintSourceStack(const struct script_s* scriptstack) -> void
{
  return Zynamic::Forward<void (const struct script_s*)>(L"PrintSourceStack")(scriptstack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SourceError(struct source_s* source, char* str, ...) -> void
{
  return Zynamic::Forward<void (struct source_s*, char*, ...)>(L"SourceError")(source, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SourceWarning(struct source_s* source, char* str, ...) -> void
{
  return Zynamic::Forward<void (struct source_s*, char*, ...)>(L"SourceWarning")(source, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_PushIndent(struct source_s* source, int type, enum parseSkip_t skip) -> void
{
  return Zynamic::Forward<void (struct source_s*, int, enum parseSkip_t)>(L"PC_PushIndent")(source, type, skip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_PopIndent(struct source_s* source, int* type, enum parseSkip_t* skip) -> void
{
  return Zynamic::Forward<void (struct source_s*, int*, enum parseSkip_t*)>(L"PC_PopIndent")(source, type, skip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_PushScript(struct source_s* source, struct script_s* script) -> void
{
  return Zynamic::Forward<void (struct source_s*, struct script_s*)>(L"PC_PushScript")(source, script);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CopyToken(struct token_s* token) -> struct token_s*
{
  return Zynamic::Forward<struct token_s* (struct token_s*)>(L"PC_CopyToken")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_FreeToken(struct token_s* token) -> void
{
  return Zynamic::Forward<void (struct token_s*)>(L"PC_FreeToken")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadSourceToken(struct source_s* source, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*)>(L"PC_ReadSourceToken")(source, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_UnreadSourceToken(struct source_s* source, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*)>(L"PC_UnreadSourceToken")(source, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadDefineParms(struct source_s* source, struct define_s* define, struct token_s** parms, int maxparms) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct define_s*, struct token_s**, int)>(L"PC_ReadDefineParms")(source, define, parms, maxparms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_StringizeTokens(struct token_s* tokens, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct token_s*, struct token_s*)>(L"PC_StringizeTokens")(tokens, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_MergeTokens(struct token_s* t1, struct token_s* t2) -> int
{
  return Zynamic::Forward<int (struct token_s*, struct token_s*)>(L"PC_MergeTokens")(t1, t2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_NameHash(char* name) -> int
{
  return Zynamic::Forward<int (char*)>(L"PC_NameHash")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_AddDefineToHash(struct define_s* define, struct define_s** definehash) -> void
{
  return Zynamic::Forward<void (struct define_s*, struct define_s**)>(L"PC_AddDefineToHash")(define, definehash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_FindHashedDefine(struct define_s** definehash, char* name) -> struct define_s*
{
  return Zynamic::Forward<struct define_s* (struct define_s**, char*)>(L"PC_FindHashedDefine")(definehash, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_FindDefineParm(struct define_s* define, const char* name) -> int
{
  return Zynamic::Forward<int (struct define_s*, const char*)>(L"PC_FindDefineParm")(define, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_FreeDefine(struct define_s* define) -> void
{
  return Zynamic::Forward<void (struct define_s*)>(L"PC_FreeDefine")(define);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ExpandBuiltinDefine(struct source_s* source, struct token_s* deftoken, struct define_s* define, struct token_s** firsttoken, struct token_s** lasttoken) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*, struct define_s*, struct token_s**, struct token_s**)>(L"PC_ExpandBuiltinDefine")(source, deftoken, define, firsttoken, lasttoken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ExpandDefine(struct source_s* source, struct token_s* deftoken, struct define_s* define, struct token_s** firsttoken, struct token_s** lasttoken) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*, struct define_s*, struct token_s**, struct token_s**)>(L"PC_ExpandDefine")(source, deftoken, define, firsttoken, lasttoken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ExpandDefineIntoSource(struct source_s* source, struct token_s* deftoken, struct define_s* define) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*, struct define_s*)>(L"PC_ExpandDefineIntoSource")(source, deftoken, define);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ConvertPath(char* path) -> void
{
  return Zynamic::Forward<void (char*)>(L"PC_ConvertPath")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_include(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_include")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadLine(struct source_s* source, struct token_s* token, bool expandDefines) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*, bool)>(L"PC_ReadLine")(source, token, expandDefines);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_WhiteSpaceBeforeToken(struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct token_s*)>(L"PC_WhiteSpaceBeforeToken")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ClearTokenWhiteSpace(struct token_s* token) -> void
{
  return Zynamic::Forward<void (struct token_s*)>(L"PC_ClearTokenWhiteSpace")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_undef(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_undef")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_define(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_define")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_DefineFromString(const char* string) -> struct define_s*
{
  return Zynamic::Forward<struct define_s* (const char*)>(L"PC_DefineFromString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_AddDefine(struct source_s* source, const char* string) -> int
{
  return Zynamic::Forward<int (struct source_s*, const char*)>(L"PC_AddDefine")(source, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CopyDefine(struct source_s* source, struct define_s* define) -> struct define_s*
{
  return Zynamic::Forward<struct define_s* (struct source_s*, struct define_s*)>(L"PC_CopyDefine")(source, define);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_AddGlobalDefinesToSource(struct source_s* source) -> void
{
  return Zynamic::Forward<void (struct source_s*)>(L"PC_AddGlobalDefinesToSource")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_if_def(struct source_s* source, int type) -> int
{
  return Zynamic::Forward<int (struct source_s*, int)>(L"PC_Directive_if_def")(source, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_ifdef(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_ifdef")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_ifndef(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_ifndef")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_else(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_else")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_endif(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_endif")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_OperatorPriority(int op) -> int
{
  return Zynamic::Forward<int (int)>(L"PC_OperatorPriority")(op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_EvaluateTokens(struct source_s* source, struct token_s* tokens, long* intvalue, double* floatvalue, int integer) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*, long*, double*, int)>(L"PC_EvaluateTokens")(source, tokens, intvalue, floatvalue, integer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Evaluate(struct source_s* source, long* intvalue, double* floatvalue, int integer) -> int
{
  return Zynamic::Forward<int (struct source_s*, long*, double*, int)>(L"PC_Evaluate")(source, intvalue, floatvalue, integer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_DollarEvaluate(struct source_s* source, long* intvalue, double* floatvalue, int integer) -> int
{
  return Zynamic::Forward<int (struct source_s*, long*, double*, int)>(L"PC_DollarEvaluate")(source, intvalue, floatvalue, integer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_elif(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_elif")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_if(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_if")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_line(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_line")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_error(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_error")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_pragma(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_pragma")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnreadSignToken(struct source_s* source) -> void
{
  return Zynamic::Forward<void (struct source_s*)>(L"UnreadSignToken")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_eval(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_eval")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_Directive_evalfloat(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_Directive_evalfloat")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadDirective(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_ReadDirective")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_DollarDirective_evalint(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_DollarDirective_evalint")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_DollarDirective_evalfloat(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_DollarDirective_evalfloat")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadDollarDirective(struct source_s* source) -> int
{
  return Zynamic::Forward<int (struct source_s*)>(L"PC_ReadDollarDirective")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadToken(struct source_s* source, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct source_s*, struct token_s*)>(L"PC_ReadToken")(source, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_CheckTokenString(struct source_s* source, char* string) -> int
{
  return Zynamic::Forward<int (struct source_s*, char*)>(L"PC_CheckTokenString")(source, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_UnreadLastToken(struct source_s* source) -> void
{
  return Zynamic::Forward<void (struct source_s*)>(L"PC_UnreadLastToken")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_UnreadToken(struct source_s* source, struct token_s* token) -> void
{
  return Zynamic::Forward<void (struct source_s*, struct token_s*)>(L"PC_UnreadToken")(source, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadSourceFile(const char* filename) -> struct source_s*
{
  return Zynamic::Forward<struct source_s* (const char*)>(L"LoadSourceFile")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeSource(struct source_s* source) -> void
{
  return Zynamic::Forward<void (struct source_s*)>(L"FreeSource")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_LoadSourceHandle(const char* filename, const char** builtinDefines) -> int
{
  return Zynamic::Forward<int (const char*, const char**)>(L"PC_LoadSourceHandle")(filename, builtinDefines);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_FreeSourceHandle(int handle) -> int
{
  return Zynamic::Forward<int (int)>(L"PC_FreeSourceHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadTokenHandle(int handle, struct pc_token_s* pc_token) -> int
{
  return Zynamic::Forward<int (int, struct pc_token_s*)>(L"PC_ReadTokenHandle")(handle, pc_token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_ReadLineHandle(int handle, struct pc_token_s* pc_token) -> int
{
  return Zynamic::Forward<int (int, struct pc_token_s*)>(L"PC_ReadLineHandle")(handle, pc_token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_UnreadLastTokenHandle(int handle) -> void
{
  return Zynamic::Forward<void (int)>(L"PC_UnreadLastTokenHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PC_SourceFileAndLine(int handle, char* filename, int* line) -> int
{
  return Zynamic::Forward<int (int, char*, int*)>(L"PC_SourceFileAndLine")(handle, filename, line);
}

#endif // __UNIMPLEMENTED__
