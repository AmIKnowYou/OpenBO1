//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto LocalizeName::GetType() -> int
{
  return Zynamic::Forward<public int ()>(L"LocalizeName::GetType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LocalizeStringName::GetName() -> char*
{
  return Zynamic::Forward<public char* ()>(L"LocalizeStringName::GetName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CStringEdPackage::Clear() -> void
{
  return Zynamic::Forward<public void ()>(L"CStringEdPackage::Clear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::Filename_WithoutExt(const char* psFilename) -> char*
{
  return Zynamic::Forward<private char* (const char*)>(L"CStringEdPackage::Filename_WithoutExt")(psFilename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::Filename_WithoutPath(const char* psFilename) -> char*
{
  return Zynamic::Forward<private char* (const char*)>(L"CStringEdPackage::Filename_WithoutPath")(psFilename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CStringEdPackage::SetupNewFileParse(const char* psFileName) -> void
{
  return Zynamic::Forward<public void (const char*)>(L"CStringEdPackage::SetupNewFileParse")(psFileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::CheckLineForKeyword(const char* psKeyword, const char*& psLine) -> int
{
  return Zynamic::Forward<private int (const char*, const char*&)>(L"CStringEdPackage::CheckLineForKeyword")(psKeyword, psLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::IsStringFormatCorrect(const char* string) -> bool
{
  return Zynamic::Forward<private bool (const char*)>(L"CStringEdPackage::IsStringFormatCorrect")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::ConvertCRLiterals_Read(class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>> string) -> class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>>
{
  return Zynamic::Forward<private class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> > (class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> >)>(L"CStringEdPackage::ConvertCRLiterals_Read")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::REMKill(char* psBuffer) -> void
{
  return Zynamic::Forward<private void (char*)>(L"CStringEdPackage::REMKill")(psBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CStringEdPackage::ReadLine(const char*& psParsePos, char* psDest) -> int
{
  return Zynamic::Forward<public int (const char*&, char*)>(L"CStringEdPackage::ReadLine")(psParsePos, psDest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::InsideQuotes(const char* psLine) -> class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>>
{
  return Zynamic::Forward<private class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> > (const char*)>(L"CStringEdPackage::InsideQuotes")(psLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CStringEdPackage::ParseLine(const char* psLine, bool forceEnglish) -> const char*
{
  return Zynamic::Forward<public const char* (const char*, bool)>(L"CStringEdPackage::ParseLine")(psLine, forceEnglish);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::GetCurrentReference_ParseOnly() -> const char*
{
  return Zynamic::Forward<private const char* ()>(L"CStringEdPackage::GetCurrentReference_ParseOnly")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::AddEntry(const char* psLocalReference) -> void
{
  return Zynamic::Forward<private void (const char*)>(L"CStringEdPackage::AddEntry")(psLocalReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto CStringEdPackage::SetString(const char* psLocalReference, const char* psNewString, int bSentenceIsEnglish) -> void
{
  return Zynamic::Forward<private void (const char*, const char*, int)>(L"CStringEdPackage::SetString")(psLocalReference, psNewString, bSentenceIsEnglish);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_GetFoundFile(class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>>& strResult) -> const char*
{
  return Zynamic::Forward<const char* (class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> >&)>(L"SE_GetFoundFile")(strResult);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_Load(const char* psFileName, bool forceEnglish) -> const char*
{
  return Zynamic::Forward<const char* (const char*, bool)>(L"SE_Load")(psFileName, forceEnglish);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_GetString_LoadObj(const char* psPackageAndStringReference) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"SE_GetString_LoadObj")(psPackageAndStringReference);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_NewLanguage() -> void
{
  return Zynamic::Forward<void ()>(L"SE_NewLanguage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_Init() -> void
{
  return Zynamic::Forward<void ()>(L"SE_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_ShutDown() -> void
{
  return Zynamic::Forward<void ()>(L"SE_ShutDown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_LoadLanguage(bool forceEnglish) -> const char*
{
  return Zynamic::Forward<const char* (bool)>(L"SE_LoadLanguage")(forceEnglish);
}

#endif // __UNIMPLEMENTED__
