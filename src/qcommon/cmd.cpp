//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cmd() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Wait_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_Wait_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Cbuf_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto memcpy_noncrt(void* dst, const void* src, unsigned int length) -> void
{
  return Zynamic::Forward<void (void*, const void*, unsigned int)>(L"memcpy_noncrt")(dst, src, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto strlen_noncrt(const char* str) -> int
{
  return Zynamic::Forward<int (const char*)>(L"strlen_noncrt")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ShiftArgs(int count, struct CmdArgs* args) -> void
{
  return Zynamic::Forward<void (int, struct CmdArgs*)>(L"Cmd_ShiftArgs")(count, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_AddText(int localClientNum, const char* text) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Cbuf_AddText")(localClientNum, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_InsertText(int localClientNum, const char* text) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Cbuf_InsertText")(localClientNum, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_AddServerText_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cbuf_AddServerText_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecuteServerString(const char* text) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Cmd_ExecuteServerString")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_SV_Execute() -> void
{
  return Zynamic::Forward<void ()>(L"Cbuf_SV_Execute")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_AddServerCommandInternal(const char* cmdName, function* function, struct cmd_function_s* allocedCmd) -> void
{
  return Zynamic::Forward<void (const char*, function *, struct cmd_function_s*)>(L"Cmd_AddServerCommandInternal")(cmdName, function, allocedCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecSafeDvarSingleCommmandOnly(int localClientNum, int controllerIndex, const char* singleCommand, const char*** dvarWhitelistArray) -> void
{
  return Zynamic::Forward<void (int, int, const char*, const char***)>(L"Cmd_ExecSafeDvarSingleCommmandOnly")(localClientNum, controllerIndex, singleCommand, dvarWhitelistArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteBufferInternal(int localClientNum, int controllerIndex, struct itemDef_s* item, const char* buffer, const char*** dvarWhitelistArray, bool restrict) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*, const char***, bool)>(L"Cbuf_ExecuteBufferInternal")(localClientNum, controllerIndex, item, buffer, dvarWhitelistArray, restrict);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteBuffer_Restricted(int localClientNum, int controllerIndex, const char* buffer) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"Cbuf_ExecuteBuffer_Restricted")(localClientNum, controllerIndex, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteBuffer(int localClientNum, int controllerIndex, const char* buffer) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"Cbuf_ExecuteBuffer")(localClientNum, controllerIndex, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteBufferUI(int localClientNum, int controllerIndex, struct itemDef_s* item, const char* buffer) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*)>(L"Cbuf_ExecuteBufferUI")(localClientNum, controllerIndex, item, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteInternal(int localClientNum, int controllerIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Cbuf_ExecuteInternal")(localClientNum, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_Execute(int localClientNum, int controllerIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Cbuf_Execute")(localClientNum, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecFromDisk(int localClientNum, int controllerIndex, const char* filename) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"Cmd_ExecFromDisk")(localClientNum, controllerIndex, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecFromDiskAddText(int localClientNum, int controllerIndex, const char* filename) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"Cmd_ExecFromDiskAddText")(localClientNum, controllerIndex, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecFromFastFile(int localClientNum, int controllerIndex, const char* filename) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"Cmd_ExecFromFastFile")(localClientNum, controllerIndex, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Exec_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_Exec_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecAddText_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_ExecAddText_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Vstr_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_Vstr_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_ArgvBuffer(int arg, char* buffer, int bufferLength) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"SV_Cmd_ArgvBuffer")(arg, buffer, bufferLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ArgsBuffer(int start, char* buffer, int bufLength) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"Cmd_ArgsBuffer")(start, buffer, bufLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_IsWhiteSpaceChar(char letter) -> bool
{
  return Zynamic::Forward<bool (char)>(L"Cmd_IsWhiteSpaceChar")(letter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_EmitString(const char* str, struct CmdArgs* argsPriv) -> void
{
  return Zynamic::Forward<void (const char*, struct CmdArgs*)>(L"Cmd_EmitString")(str, argsPriv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_EvaluateExpression(const char** text_in, struct CmdArgs* argsPriv) -> void
{
  return Zynamic::Forward<void (const char**, struct CmdArgs*)>(L"Cmd_EvaluateExpression")(text_in, argsPriv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringInternal(const char* text_in, int max_tokens, bool evalExpressions, const char** argv, struct CmdArgs* argsPriv) -> int
{
  return Zynamic::Forward<int (const char*, int, bool, const char**, struct CmdArgs*)>(L"Cmd_TokenizeStringInternal")(text_in, max_tokens, evalExpressions, argv, argsPriv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AssertCmdArgsConsistency(const struct CmdArgs* args) -> void
{
  return Zynamic::Forward<void (const struct CmdArgs*)>(L"AssertCmdArgsConsistency")(args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringKernel(int localClientNum, int localControllerIndex, struct itemDef_s* item, const char* text_in, int max_tokens, bool evalExpressions, struct CmdArgs* args) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*, int, bool, struct CmdArgs*)>(L"Cmd_TokenizeStringKernel")(localClientNum, localControllerIndex, item, text_in, max_tokens, evalExpressions, args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_EndTokenizedStringKernel(struct CmdArgs* args) -> void
{
  return Zynamic::Forward<void (struct CmdArgs*)>(L"Cmd_EndTokenizedStringKernel")(args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringWithLimit(const char* text_in, int max_tokens) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"Cmd_TokenizeStringWithLimit")(text_in, max_tokens);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringWithLimitNoEval(const char* text_in, int max_tokens) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"Cmd_TokenizeStringWithLimitNoEval")(text_in, max_tokens);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeString(const char* text_in) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Cmd_TokenizeString")(text_in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringNoEval(const char* text_in) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Cmd_TokenizeStringNoEval")(text_in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_EndTokenizedString() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_EndTokenizedString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_TokenizeString(const char* text_in) -> void
{
  return Zynamic::Forward<void (const char*)>(L"SV_Cmd_TokenizeString")(text_in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_EndTokenizedString() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Cmd_EndTokenizedString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_FindCommand(const char* cmdName) -> struct cmd_function_s*
{
  return Zynamic::Forward<struct cmd_function_s* (const char*)>(L"Cmd_FindCommand")(cmdName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_AddCommandInternal(const char* cmdName, function* function, struct cmd_function_s* allocedCmd) -> void
{
  return Zynamic::Forward<void (const char*, function *, struct cmd_function_s*)>(L"Cmd_AddCommandInternal")(cmdName, function, allocedCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_RemoveCommand(const char* cmdName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Cmd_RemoveCommand")(cmdName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_SetAutoComplete(const char* cmdName, const char* dir, const char* ext) -> void
{
  return Zynamic::Forward<void (const char*, const char*, const char*)>(L"Cmd_SetAutoComplete")(cmdName, dir, ext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ForEach(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"Cmd_ForEach")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ResetConAccessCommands() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_ResetConAccessCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_SetConAccess(const char* str) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Cmd_SetConAccess")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ForEachConsoleAccessName(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"Cmd_ForEachConsoleAccessName")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_GetAutoCompleteFileList(const char* cmdName, int* fileCount, int allocTrackType) -> const char**
{
  return Zynamic::Forward<const char** (const char*, int*, int)>(L"Cmd_GetAutoCompleteFileList")(cmdName, fileCount, allocTrackType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ResetArgs(struct CmdArgs* args) -> void
{
  return Zynamic::Forward<void (struct CmdArgs*)>(L"Cmd_ResetArgs")(args);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ComErrorCleanup() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_ComErrorCleanup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecuteSingleCommandInternal(int localClientNum, int controllerIndex, struct itemDef_s* item, const char* text, bool restrict) -> void
{
  return Zynamic::Forward<void (int, int, struct itemDef_s*, const char*, bool)>(L"Cmd_ExecuteSingleCommandInternal")(localClientNum, controllerIndex, item, text, restrict);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecuteSingleCommand(int localClientNum, int controllerIndex, const char* text) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"Cmd_ExecuteSingleCommand")(localClientNum, controllerIndex, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_List_f() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_List_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Cmd_Init")();
}

#endif // __UNIMPLEMENTED__
