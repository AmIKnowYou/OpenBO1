//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_parser() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_parser")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitOpcodeLookup(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InitOpcodeLookup")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownOpcodeLookup(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ShutdownOpcodeLookup")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddOpcodePos(enum scriptInstance_t inst, unsigned int sourcePos, int type) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, int)>(L"AddOpcodePos")(inst, sourcePos, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveOpcodePos(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"RemoveOpcodePos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddThreadStartOpcodePos(enum scriptInstance_t inst, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"AddThreadStartOpcodePos")(inst, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetOpcodePosOfType(enum scriptInstance_t inst, unsigned int bufferIndex, unsigned int startSourcePos, unsigned int endSourcePos, int type, unsigned int* sourcePos) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int, unsigned int, unsigned int, int, unsigned int*)>(L"Scr_GetOpcodePosOfType")(inst, bufferIndex, startSourcePos, endSourcePos, type, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetClosestSourcePosOfType(enum scriptInstance_t inst, unsigned int bufferIndex, unsigned int sourcePos, int type) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int, int)>(L"Scr_GetClosestSourcePosOfType")(inst, bufferIndex, sourcePos, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPrevSourcePosOpcodeLookup(enum scriptInstance_t inst, const char* codePos) -> struct OpcodeLookup*
{
  return Zynamic::Forward<struct OpcodeLookup* (enum scriptInstance_t, const char*)>(L"Scr_GetPrevSourcePosOpcodeLookup")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourcePosOpcodeLookup(enum scriptInstance_t inst, const char* codePos) -> struct OpcodeLookup*
{
  return Zynamic::Forward<struct OpcodeLookup* (enum scriptInstance_t, const char*)>(L"Scr_GetSourcePosOpcodeLookup")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPrevSourcePos(enum scriptInstance_t inst, const char* codePos, unsigned int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*, unsigned int)>(L"Scr_GetPrevSourcePos")(inst, codePos, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunctionLineNumInternal(const char* buf, unsigned int sourcePos, const char** startLine) -> int
{
  return Zynamic::Forward<int (const char*, unsigned int, const char**)>(L"Scr_GetFunctionLineNumInternal")(buf, sourcePos, startLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetLineNumInternal(const char* buf, unsigned int sourcePos, const char** startLine, int* col, struct SourceBufferInfo* binfo) -> int
{
  return Zynamic::Forward<int (const char*, unsigned int, const char**, int*, struct SourceBufferInfo*)>(L"Scr_GetLineNumInternal")(buf, sourcePos, startLine, col, binfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetLineNum(enum scriptInstance_t inst, unsigned int bufferIndex, unsigned int sourcePos) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_GetLineNum")(inst, bufferIndex, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourcePosOfType(enum scriptInstance_t inst, const char* codePos, int type, struct Scr_SourcePos_t* pos) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, const char*, int, struct Scr_SourcePos_t*)>(L"Scr_GetSourcePosOfType")(inst, codePos, type, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNewSourceBuffer(enum scriptInstance_t inst) -> struct SourceBufferInfo*
{
  return Zynamic::Forward<struct SourceBufferInfo* (enum scriptInstance_t)>(L"Scr_GetNewSourceBuffer")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddSourceBufferInternal(enum scriptInstance_t inst, const char* extFilename, const char* codePos, char* sourceBuf, int len, bool doEolFixup, bool archive) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, const char*, char*, int, bool, bool)>(L"Scr_AddSourceBufferInternal")(inst, extFilename, codePos, sourceBuf, len, doEolFixup, archive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SendSource(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_SendSource")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadFile_FastFile(enum scriptInstance_t inst, const char* filename, const char* extFilename, const char* codePos, bool archive) -> char*
{
  return Zynamic::Forward<char* (enum scriptInstance_t, const char*, const char*, const char*, bool)>(L"Scr_ReadFile_FastFile")(inst, filename, extFilename, codePos, archive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadFile_LoadObj(enum scriptInstance_t inst, const char* filename, const char* extFilename, const char* codePos, bool archive) -> char*
{
  return Zynamic::Forward<char* (enum scriptInstance_t, const char*, const char*, const char*, bool)>(L"Scr_ReadFile_LoadObj")(inst, filename, extFilename, codePos, archive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadFile(enum scriptInstance_t inst, const char* filename, const char* extFilename, const char* codePos, bool archive) -> char*
{
  return Zynamic::Forward<char* (enum scriptInstance_t, const char*, const char*, const char*, bool)>(L"Scr_ReadFile")(inst, filename, extFilename, codePos, archive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddSourceBuffer(enum scriptInstance_t inst, const char* filename, const char* extFilename, const char* codePos, bool archive) -> char*
{
  return Zynamic::Forward<char* (enum scriptInstance_t, const char*, const char*, const char*, bool)>(L"Scr_AddSourceBuffer")(inst, filename, extFilename, codePos, archive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CopyFormattedLine(char* line, const char* rawLine) -> void
{
  return Zynamic::Forward<void (char*, const char*)>(L"Scr_CopyFormattedLine")(line, rawLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetLineInfo(const char* buf, unsigned int sourcePos, int* col, char* line, struct SourceBufferInfo* binfo) -> int
{
  return Zynamic::Forward<int (const char*, unsigned int, int*, char*, struct SourceBufferInfo*)>(L"Scr_GetLineInfo")(buf, sourcePos, col, line, binfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunctionInfo(const char* buf, unsigned int sourcePos, char* line) -> int
{
  return Zynamic::Forward<int (const char*, unsigned int, char*)>(L"Scr_GetFunctionInfo")(buf, sourcePos, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintSourcePos(enum scriptInstance_t inst, int channel, const char* filename, const char* buf, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, const char*, unsigned int)>(L"Scr_PrintSourcePos")(inst, channel, filename, buf, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintSourcePosSpreadSheet(enum scriptInstance_t inst, int channel, const char* filename, const char* buf, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, const char*, unsigned int)>(L"Scr_PrintSourcePosSpreadSheet")(inst, channel, filename, buf, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintFunctionPosSpreadSheet(enum scriptInstance_t inst, int channel, const char* filename, const char* buf, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, const char*, unsigned int)>(L"Scr_PrintFunctionPosSpreadSheet")(inst, channel, filename, buf, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintSourcePosSummary(enum scriptInstance_t inst, int channel, const char* filename, const char* buf, unsigned int sourcePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, const char*, unsigned int)>(L"Scr_PrintSourcePosSummary")(inst, channel, filename, buf, sourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourcePos(enum scriptInstance_t inst, unsigned int bufferIndex, unsigned int sourcePos, char* outBuf, int outBufLen) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int, unsigned int, char*, int)>(L"Scr_GetSourcePos")(inst, bufferIndex, sourcePos, outBuf, outBufLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourceBuffer(enum scriptInstance_t inst, const char* codePos) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*)>(L"Scr_GetSourceBuffer")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetTextSourcePos(enum scriptInstance_t inst, const char* buf, const char* codePos, char* line) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, const char*, char*)>(L"Scr_GetTextSourcePos")(inst, buf, codePos, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintPrevCodePos(enum scriptInstance_t inst, int channel, const char* codePos, unsigned int index) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, unsigned int)>(L"Scr_PrintPrevCodePos")(inst, channel, codePos, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFileName(enum scriptInstance_t inst, const char* codePos) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, const char*)>(L"Scr_PrevCodePosFileName")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFunctionName(enum scriptInstance_t inst, const char* codePos) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, const char*)>(L"Scr_PrevCodePosFunctionName")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFileNameMatches(enum scriptInstance_t inst, const char* codePos, const char* fileName) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, const char*, const char*)>(L"Scr_PrevCodePosFileNameMatches")(inst, codePos, fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintPrevCodePosSpreadSheet(enum scriptInstance_t inst, int channel, const char* codePos, bool summary, bool functionSummary) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, bool, bool)>(L"Scr_PrintPrevCodePosSpreadSheet")(inst, channel, codePos, summary, functionSummary);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetCodePos(enum scriptInstance_t inst, const char* codePos, unsigned int index, char* outBuf, int outBufLen) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int, char*, int)>(L"Scr_GetCodePos")(inst, codePos, index, outBuf, outBufLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFileAndLine(enum scriptInstance_t inst, const char* codePos, const char** filename, int* linenum) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, const char**, int*)>(L"Scr_GetFileAndLine")(inst, codePos, filename, linenum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IgnoreLeaks(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_IgnoreLeaks")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompileError(enum scriptInstance_t inst, unsigned int sourcePos, const char* msg, ...) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, const char*, ...)>(L"CompileError")(inst, sourcePos, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompileError2(enum scriptInstance_t inst, const char* codePos, const char* msg, ...) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, const char*, ...)>(L"CompileError2")(inst, codePos, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RuntimeErrorInternal(enum scriptInstance_t inst, int channel, const char* codePos, unsigned int index, const char* msg) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, const char*, unsigned int, const char*)>(L"RuntimeErrorInternal")(inst, channel, codePos, index, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RuntimeError(enum scriptInstance_t inst, const char* codePos, unsigned int index, const char* msg, const char* dialogMessage) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int, const char*, const char*)>(L"RuntimeError")(inst, codePos, index, msg, dialogMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetLoadedImpureScript(bool loadedImpureScript) -> void
{
  return Zynamic::Forward<void (bool)>(L"Scr_SetLoadedImpureScript")(loadedImpureScript);
}

#endif // __UNIMPLEMENTED__
