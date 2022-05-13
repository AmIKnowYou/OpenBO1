//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_files() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_files")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SV_FileExists(const char* file, const char* dir) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"FS_SV_FileExists")(file, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SV_FOpenFileWrite(const char* filename, const char* dir) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"FS_SV_FOpenFileWrite")(filename, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SV_FOpenFileRead(const char* filename, const char* dir, int* fp) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int*)>(L"FS_SV_FOpenFileRead")(filename, dir, fp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SV_Rename(const char* from, const char* to, const char* dir) -> void
{
  return Zynamic::Forward<void (const char*, const char*, const char*)>(L"FS_SV_Rename")(from, to, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CountFileList(char** list) -> unsigned int
{
  return Zynamic::Forward<unsigned int (char**)>(L"Sys_CountFileList")(list);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetModList(char* listbuf, int bufsize) -> int
{
  return Zynamic::Forward<int (char*, int)>(L"FS_GetModList")(listbuf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Dir_f() -> void
{
  return Zynamic::Forward<void ()>(L"FS_Dir_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_NewDir_f() -> void
{
  return Zynamic::Forward<void ()>(L"FS_NewDir_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_TouchFile_f() -> void
{
  return Zynamic::Forward<void ()>(L"FS_TouchFile_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_iwIwd(const char* iwd, char* base) -> int
{
  return Zynamic::Forward<int (const char*, char*)>(L"FS_iwIwd")(iwd, base);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_serverPak(const char* pak) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_serverPak")(pak);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CompareIwds(char* needediwds, int len, int dlstring) -> enum FS_SERVER_COMPARE_RESULT
{
  return Zynamic::Forward<enum FS_SERVER_COMPARE_RESULT (char*, int, int)>(L"FS_CompareIwds")(needediwds, len, dlstring);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CompareFFs(char* neededFFs, int len, int dlstring) -> enum FS_SERVER_COMPARE_RESULT
{
  return Zynamic::Forward<enum FS_SERVER_COMPARE_RESULT (char*, int, int)>(L"FS_CompareFFs")(neededFFs, len, dlstring);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CompareWithServerFiles(char* neededFiles, int len, int dlstring) -> enum FS_SERVER_COMPARE_RESULT
{
  return Zynamic::Forward<enum FS_SERVER_COMPARE_RESULT (char*, int, int)>(L"FS_CompareWithServerFiles")(neededFiles, len, dlstring);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_RemoveCommands() -> void
{
  return Zynamic::Forward<void ()>(L"FS_RemoveCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddCommands() -> void
{
  return Zynamic::Forward<void ()>(L"FS_AddCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SetRestrictions() -> void
{
  return Zynamic::Forward<void ()>(L"FS_SetRestrictions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LoadedIwds(const char** checksums, const char** names) -> void
{
  return Zynamic::Forward<void (const char**, const char**)>(L"FS_LoadedIwds")(checksums, names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LoadedIwdPureChecksums() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"FS_LoadedIwdPureChecksums")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ReferencedIwds(const char** checksums, const char** names) -> void
{
  return Zynamic::Forward<void (const char**, const char**)>(L"FS_ReferencedIwds")(checksums, names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ReferencedIwdPureChecksums() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"FS_ReferencedIwdPureChecksums")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_PureServerSetLoadedIwds(const char* iwdSums, const char* iwdNames) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"FS_PureServerSetLoadedIwds")(iwdSums, iwdNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ServerSetReferencedFiles(const char* fileSums, const char* fileNames, int maxFiles, int* fs_sums, const char** fs_names) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int, int*, const char**)>(L"FS_ServerSetReferencedFiles")(fileSums, fileNames, maxFiles, fs_sums, fs_names);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ServerSetReferencedIwds(const char* iwdSums, const char* iwdNames) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"FS_ServerSetReferencedIwds")(iwdSums, iwdNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ServerSetReferencedFFs(const char* FFSums, const char* FFNames) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"FS_ServerSetReferencedFFs")(FFSums, FFNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetMapBaseName(const char* mapname) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"FS_GetMapBaseName")(mapname);
}

#endif // __UNIMPLEMENTED__
