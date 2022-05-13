//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_q_parse() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_q_parse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetParseThreadInfo() -> struct ParseThreadInfo*
{
  return Zynamic::Forward<struct ParseThreadInfo* ()>(L"Com_GetParseThreadInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitParseInfo(struct parseInfo_t* pi) -> void
{
  return Zynamic::Forward<void (struct parseInfo_t*)>(L"Com_InitParseInfo")(pi);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitParse() -> void
{
  return Zynamic::Forward<void ()>(L"Com_InitParse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_BeginParseSession(const char* filename) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_BeginParseSession")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_EndParseSession() -> void
{
  return Zynamic::Forward<void ()>(L"Com_EndParseSession")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ResetParseSessions() -> void
{
  return Zynamic::Forward<void ()>(L"Com_ResetParseSessions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetSpaceDelimited(int spaceDelimited) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_SetSpaceDelimited")(spaceDelimited);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetKeepStringQuotes(int keepStringQuotes) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_SetKeepStringQuotes")(keepStringQuotes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetCSV(int csv) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_SetCSV")(csv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetParseNegativeNumbers(int negativeNumbers) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_SetParseNegativeNumbers")(negativeNumbers);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetCurrentParseLine() -> int
{
  return Zynamic::Forward<int ()>(L"Com_GetCurrentParseLine")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetScriptErrorPrefix(const char* prefix) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_SetScriptErrorPrefix")(prefix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetScriptErrorPrefix() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Com_GetScriptErrorPrefix")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SetScriptWarningPrefix(const char* prefix) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Com_SetScriptWarningPrefix")(prefix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetScriptWarningPrefix() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Com_GetScriptWarningPrefix")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ScriptErrorDrop(const char* msg, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Com_ScriptErrorDrop")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ScriptError(const char* msg, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Com_ScriptError")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ScriptWarning(const char* msg, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Com_ScriptWarning")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UngetToken() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UngetToken")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseSetMark(const char** text, struct com_parse_mark_t* mark) -> void
{
  return Zynamic::Forward<void (const char**, struct com_parse_mark_t*)>(L"Com_ParseSetMark")(text, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseReturnToMark(const char** text, struct com_parse_mark_t* mark) -> void
{
  return Zynamic::Forward<void (const char**, struct com_parse_mark_t*)>(L"Com_ParseReturnToMark")(text, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SkipWhitespace(const char* data, int* newLines) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int*)>(L"SkipWhitespace")(data, newLines);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Compress(char* data_p) -> int
{
  return Zynamic::Forward<int (char*)>(L"Com_Compress")(data_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetLastTokenPos() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Com_GetLastTokenPos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseCSV(const char** data_p, int allowLineBreaks) -> char*
{
  return Zynamic::Forward<char* (const char**, int)>(L"Com_ParseCSV")(data_p, allowLineBreaks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseExt(const char** data_p, int allowLineBreaks) -> char*
{
  return Zynamic::Forward<char* (const char**, int)>(L"Com_ParseExt")(data_p, allowLineBreaks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Parse(const char** data_p) -> const char*
{
  return Zynamic::Forward<const char* (const char**)>(L"Com_Parse")(data_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseOnLine(const char** data_p) -> const char*
{
  return Zynamic::Forward<const char* (const char**)>(L"Com_ParseOnLine")(data_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetTokenType() -> enum ParseTokenType
{
  return Zynamic::Forward<enum ParseTokenType ()>(L"Com_GetTokenType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_MatchToken(const char** buf_p, const char* match, int warning) -> int
{
  return Zynamic::Forward<int (const char**, const char*, int)>(L"Com_MatchToken")(buf_p, match, warning);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SkipBracedSection(const char** program, unsigned int startDepth, const int iMaxNesting) -> int
{
  return Zynamic::Forward<int (const char**, unsigned int, const int)>(L"Com_SkipBracedSection")(program, startDepth, iMaxNesting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SkipRestOfLine(const char** data) -> void
{
  return Zynamic::Forward<void (const char**)>(L"Com_SkipRestOfLine")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetArgCountOnLine(const char** data_p) -> int
{
  return Zynamic::Forward<int (const char**)>(L"Com_GetArgCountOnLine")(data_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseRestOfLine(const char** data_p) -> const char*
{
  return Zynamic::Forward<const char* (const char**)>(L"Com_ParseRestOfLine")(data_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseFloat(const char** buf_p) -> float
{
  return Zynamic::Forward<float (const char**)>(L"Com_ParseFloat")(buf_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseFloatOnLine(const char** buf_p) -> float
{
  return Zynamic::Forward<float (const char**)>(L"Com_ParseFloatOnLine")(buf_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_ParseInt(const char** buf_p) -> int
{
  return Zynamic::Forward<int (const char**)>(L"Com_ParseInt")(buf_p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Parse1DMatrix(const char** buf_p, int x, float* m) -> void
{
  return Zynamic::Forward<void (const char**, int, float*)>(L"Com_Parse1DMatrix")(buf_p, x, m);
}

#endif // __UNIMPLEMENTED__
