//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PS_CreatePunctuationTable(struct script_s* script, struct punctuation_s* punctuations) -> void
{
  return Zynamic::Forward<void (struct script_s*, struct punctuation_s*)>(L"PS_CreatePunctuationTable")(script, punctuations);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptError(struct script_s* script, const char* str, ...) -> void
{
  return Zynamic::Forward<void (struct script_s*, const char*, ...)>(L"ScriptError")(script, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptWarning(struct script_s* script, const char* str, ...) -> void
{
  return Zynamic::Forward<void (struct script_s*, const char*, ...)>(L"ScriptWarning")(script, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetScriptPunctuations(struct script_s* script) -> void
{
  return Zynamic::Forward<void (struct script_s*)>(L"SetScriptPunctuations")(script);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadWhiteSpace(struct script_s* script) -> int
{
  return Zynamic::Forward<int (struct script_s*)>(L"PS_ReadWhiteSpace")(script);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadEscapeCharacter(struct script_s* script, char* ch) -> int
{
  return Zynamic::Forward<int (struct script_s*, char*)>(L"PS_ReadEscapeCharacter")(script, ch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadString(struct script_s* script, struct token_s* token, int quote) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*, int)>(L"PS_ReadString")(script, token, quote);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadName(struct script_s* script, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*)>(L"PS_ReadName")(script, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NumberValue(char* string, int subtype, unsigned long* intvalue, double* floatvalue) -> void
{
  return Zynamic::Forward<void (char*, int, unsigned long*, double*)>(L"NumberValue")(string, subtype, intvalue, floatvalue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadNumber(struct script_s* script, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*)>(L"PS_ReadNumber")(script, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadPunctuation(struct script_s* script, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*)>(L"PS_ReadPunctuation")(script, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadPrimitive(struct script_s* script, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*)>(L"PS_ReadPrimitive")(script, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PS_ReadToken(struct script_s* script, struct token_s* token) -> int
{
  return Zynamic::Forward<int (struct script_s*, struct token_s*)>(L"PS_ReadToken")(script, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StripDoubleQuotes(char* string) -> void
{
  return Zynamic::Forward<void (char*)>(L"StripDoubleQuotes")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EndOfScript(struct script_s* script) -> int
{
  return Zynamic::Forward<int (struct script_s*)>(L"EndOfScript")(script);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadScriptFile(const char* filename) -> struct script_s*
{
  return Zynamic::Forward<struct script_s* (const char*)>(L"LoadScriptFile")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadScriptMemory(const char* ptr, int length, const char* name) -> struct script_s*
{
  return Zynamic::Forward<struct script_s* (const char*, int, const char*)>(L"LoadScriptMemory")(ptr, length, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeScript(struct script_s* script) -> void
{
  return Zynamic::Forward<void (struct script_s*)>(L"FreeScript")(script);
}

#endif // __UNIMPLEMENTED__
