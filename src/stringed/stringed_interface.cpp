//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SE_LoadFileData(const char* psFileName) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (const char*)>(L"SE_LoadFileData")(psFileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_FreeFileDataAfterLoad(unsigned char* psLoadedFile) -> void
{
  return Zynamic::Forward<void (unsigned char*)>(L"SE_FreeFileDataAfterLoad")(psLoadedFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_R_ListFiles(const char* psExtension, const char* psDir, class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>>& strResults) -> void
{
  return Zynamic::Forward<void (const char*, const char*, class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> >&)>(L"SE_R_ListFiles")(psExtension, psDir, strResults);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SE_BuildFileList(const char* psStartDir, class std::basic_string<char, std::char_traits<char>, Allocator<char, LocalizeStringName>>& strResults) -> int
{
  return Zynamic::Forward<int (const char*, class std::basic_string<char,std::char_traits<char>,Allocator<char,LocalizeStringName> >&)>(L"SE_BuildFileList")(psStartDir, strResults);
}

#endif // __UNIMPLEMENTED__
