//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_win_common() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_win_common")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_Mkdir(const char* path) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Sys_Mkdir")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_Cwd() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Sys_Cwd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DefaultCDPath() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Sys_DefaultCDPath")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DefaultInstallPath() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Sys_DefaultInstallPath")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ListFilteredFiles(struct HunkUser* user, const char* basedir, const char* subdirs, const char* filter, char** list, int* numfiles) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, const char*, const char*, const char*, char**, int*)>(L"Sys_ListFilteredFiles")(user, basedir, subdirs, filter, list, numfiles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HasFileExtension(const char* name, const char* extension) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"HasFileExtension")(name, extension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ListFiles(const char* directory, const char* extension, const char* filter, int* numfiles, int wantsubs) -> char**
{
  return Zynamic::Forward<char** (const char*, const char*, const char*, int*, int)>(L"Sys_ListFiles")(directory, extension, filter, numfiles, wantsubs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DirectoryHasContents(const char* directory) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Sys_DirectoryHasContents")(directory);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitializeCriticalSections() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_InitializeCriticalSections")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_EnterCriticalSection(enum CriticalSection critSect) -> void
{
  return Zynamic::Forward<void (enum CriticalSection)>(L"Sys_EnterCriticalSection")(critSect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_TryEnterCriticalSection(enum CriticalSection critSect) -> bool
{
  return Zynamic::Forward<bool (enum CriticalSection)>(L"Sys_TryEnterCriticalSection")(critSect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_LeaveCriticalSection(enum CriticalSection critSect) -> void
{
  return Zynamic::Forward<void (enum CriticalSection)>(L"Sys_LeaveCriticalSection")(critSect);
}

#endif // __UNIMPLEMENTED__
