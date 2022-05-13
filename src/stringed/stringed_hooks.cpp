//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_stringed_hooks() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_stringed_hooks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_UpdateCurrentLanguage() -> void
{
  return Zynamic::Forward<void ()>(L"SEH_UpdateCurrentLanguage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetCurrentLanguage() -> int
{
  return Zynamic::Forward<int ()>(L"SEH_GetCurrentLanguage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_InitLanguage() -> void
{
  return Zynamic::Forward<void ()>(L"SEH_InitLanguage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_UpdateLanguageInfo() -> void
{
  return Zynamic::Forward<void ()>(L"SEH_UpdateLanguageInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_VerifyLanguageSelection(int iLanguageSelection) -> int
{
  return Zynamic::Forward<int (int)>(L"SEH_VerifyLanguageSelection")(iLanguageSelection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_Init_StringEd() -> void
{
  return Zynamic::Forward<void ()>(L"SEH_Init_StringEd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_Shutdown_StringEd() -> void
{
  return Zynamic::Forward<void ()>(L"SEH_Shutdown_StringEd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_StringEd_SetLanguageStrings(int iLanguage) -> int
{
  return Zynamic::Forward<int (int)>(L"SEH_StringEd_SetLanguageStrings")(iLanguage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'overrideLocalizedEntryList''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'overrideLocalizedEntryList''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_GetString_FastFile(const char* psPackageAndStringReference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SE_GetString_FastFile")(psPackageAndStringReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_GetString(const char* psPackageAndStringReference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SE_GetString")(psPackageAndStringReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_StringEd_GetString(const char* pszReference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SEH_StringEd_GetString")(pszReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_SafeTranslateString(const char* pszReference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SEH_SafeTranslateString")(pszReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetLocalizedTokenReference(char* token, const char* reference, const char* messageType, enum msgLocErrType_t errType) -> int
{
  return Zynamic::Forward<int (char*, const char*, const char*, enum msgLocErrType_t)>(L"SEH_GetLocalizedTokenReference")(token, reference, messageType, errType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_ParseDirective(const char* directive, char* resultName, char* resultArg0) -> void
{
  return Zynamic::Forward<void (const char*, char*, char*)>(L"SEH_ParseDirective")(directive, resultName, resultArg0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetBindingForDirective(int localClientNum, const char* directive, char* result) -> void
{
  return Zynamic::Forward<void (int, const char*, char*)>(L"SEH_GetBindingForDirective")(localClientNum, directive, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_ReplaceDirective(int localClientNum, unsigned int* searchPos, unsigned int* dstLen, char* dstString, unsigned int size) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int*, unsigned int*, char*, unsigned int)>(L"SEH_ReplaceDirective")(localClientNum, searchPos, dstLen, dstString, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_ReplaceDirectiveInStringWithBinding(int localClientNum, const char* translatedString, char* finalString) -> int
{
  return Zynamic::Forward<int (int, const char*, char*)>(L"SEH_ReplaceDirectiveInStringWithBinding")(localClientNum, translatedString, finalString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_LocalizeTextMessage(const char* pszInputBuffer, const char* pszMessageType, enum msgLocErrType_t errType) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*, enum msgLocErrType_t)>(L"SEH_LocalizeTextMessage")(pszInputBuffer, pszMessageType, errType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Japanese_ValidShiftJISCode(unsigned int _iHi, unsigned int _iLo) -> bool
{
  return Zynamic::Forward<bool (unsigned int, unsigned int)>(L"Japanese_ValidShiftJISCode")(_iHi, _iLo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Japanese_IsTrailingPunctuation(unsigned int uiCode) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"Japanese_IsTrailingPunctuation")(uiCode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_DecodeLetter(unsigned int firstChar, unsigned int secondChar, int* usedCount, int* pbIsTrailingPunctuation) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int, int*, int*)>(L"SEH_DecodeLetter")(firstChar, secondChar, usedCount, pbIsTrailingPunctuation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_ReadCharFromString(const char** text, int* isTrailingPunctuation) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char**, int*)>(L"SEH_ReadCharFromString")(text, isTrailingPunctuation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Language_IsAsian() -> int
{
  return Zynamic::Forward<int ()>(L"Language_IsAsian")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_PrintStrlen(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"SEH_PrintStrlen")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetLanguageName(const int iLanguage) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"SEH_GetLanguageName")(iLanguage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetLanguageNameAbbr(const int iLanguage) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"SEH_GetLanguageNameAbbr")(iLanguage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SEH_GetLanguageIndexForName(const char* pszLanguageName, int* piLanguageIndex) -> int
{
  return Zynamic::Forward<int (const char*, int*)>(L"SEH_GetLanguageIndexForName")(pszLanguageName, piLanguageIndex);
}

#endif // __UNIMPLEMENTED__
