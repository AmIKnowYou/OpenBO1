//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_com_files() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_com_files")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetOsFolderPath(int folder, char* ospath) -> char*
{
  return Zynamic::Forward<char* (int, char*)>(L"FS_GetOsFolderPath")(folder, ospath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Initialized() -> int
{
  return Zynamic::Forward<int ()>(L"FS_Initialized")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AllocMem(int bytes) -> void*
{
  return Zynamic::Forward<void* (int)>(L"FS_AllocMem")(bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FreeMem(void* buffer) -> void
{
  return Zynamic::Forward<void (void*)>(L"FS_FreeMem")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CheckFileSystemStarted() -> void
{
  return Zynamic::Forward<void ()>(L"FS_CheckFileSystemStarted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_IwdIsPure(const struct iwd_t* iwd) -> int
{
  return Zynamic::Forward<int (const struct iwd_t*)>(L"FS_IwdIsPure")(iwd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_DisablePureCheck(bool disable) -> void
{
  return Zynamic::Forward<void (bool)>(L"FS_DisablePureCheck")(disable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LoadStack() -> int
{
  return Zynamic::Forward<int ()>(L"FS_LoadStack")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_UseSearchPath(const struct searchpath_s* pSearch) -> int
{
  return Zynamic::Forward<int (const struct searchpath_s*)>(L"FS_UseSearchPath")(pSearch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LanguageHasAssets(int iLanguage) -> int
{
  return Zynamic::Forward<int (int)>(L"FS_LanguageHasAssets")(iLanguage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_HashFileName(const char* fname, int hashSize) -> long
{
  return Zynamic::Forward<long (const char*, int)>(L"FS_HashFileName")(fname, hashSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetCurrentThread() -> enum FsThread
{
  return Zynamic::Forward<enum FsThread ()>(L"FS_GetCurrentThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_HandleForFile(const char* name, enum FsThread thread) -> int
{
  return Zynamic::Forward<int (const char*, enum FsThread)>(L"FS_HandleForFile")(name, thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_HandleForFileCurrentThread(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_HandleForFileCurrentThread")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileForHandle(int f) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (int)>(L"FS_FileForHandle")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_filelength(int f) -> int
{
  return Zynamic::Forward<int (int)>(L"FS_filelength")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ReplaceSeparators(char* path) -> void
{
  return Zynamic::Forward<void (char*)>(L"FS_ReplaceSeparators")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_BuildOSPathForThread(const char* base, const char* game, const char* qpath, char* ospath, enum FsThread thread) -> void
{
  return Zynamic::Forward<void (const char*, const char*, const char*, char*, enum FsThread)>(L"FS_BuildOSPathForThread")(base, game, qpath, ospath, thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_BuildOSPath(const char* base, const char* game, const char* qpath, char* ospath) -> void
{
  return Zynamic::Forward<void (const char*, const char*, const char*, char*)>(L"FS_BuildOSPath")(base, game, qpath, ospath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CreatePath(char* OSPath) -> int
{
  return Zynamic::Forward<int (char*)>(L"FS_CreatePath")(OSPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileExists(const char* file) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_FileExists")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_OSFPathExists(const char* file) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_OSFPathExists")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CopyFile(char* fromOSPath, char* toOSPath) -> void
{
  return Zynamic::Forward<void (char*, char*)>(L"FS_CopyFile")(fromOSPath, toOSPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Remove(const char* osPath) -> void
{
  return Zynamic::Forward<void (const char*)>(L"FS_Remove")(osPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FCloseFile(int h) -> void
{
  return Zynamic::Forward<void (int)>(L"FS_FCloseFile")(h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FCloseLogFile(int h) -> void
{
  return Zynamic::Forward<void (int)>(L"FS_FCloseLogFile")(h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetHandleAndOpenFile(const char* filename, const char* ospath, enum FsThread thread) -> int
{
  return Zynamic::Forward<int (const char*, const char*, enum FsThread)>(L"FS_GetHandleAndOpenFile")(filename, ospath, thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileWriteToDirForThread(const char* filename, const char* dir, const char* osbasepath, enum FsThread thread) -> int
{
  return Zynamic::Forward<int (const char*, const char*, const char*, enum FsThread)>(L"FS_FOpenFileWriteToDirForThread")(filename, dir, osbasepath, thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileWriteToDir(const char* filename, const char* dir, const char* osbasepath) -> int
{
  return Zynamic::Forward<int (const char*, const char*, const char*)>(L"FS_FOpenFileWriteToDir")(filename, dir, osbasepath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileWrite(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_FOpenFileWrite")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileWriteCurrentThread(const char* filename, const char* dir, const char* osbasepath) -> int
{
  return Zynamic::Forward<int (const char*, const char*, const char*)>(L"FS_FOpenFileWriteCurrentThread")(filename, dir, osbasepath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenTextFileWrite(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_FOpenTextFileWrite")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileAppend(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_FOpenFileAppend")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FilenameCompare(const char* s1, const char* s2) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"FS_FilenameCompare")(s1, s2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_PureIgnoreFiles(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_PureIgnoreFiles")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_IsBackupSubStr(const char* filenameSubStr) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"FS_IsBackupSubStr")(filenameSubStr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SanitizeFilename(const char* filename, char* sanitizedName, int sanitizedNameSize) -> bool
{
  return Zynamic::Forward<bool (const char*, char*, int)>(L"FS_SanitizeFilename")(filename, sanitizedName, sanitizedNameSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FilesAreLoadedGlobally(const char* filename) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"FS_FilesAreLoadedGlobally")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileReadForThread(const char* filename, int* file, enum FsThread thread) -> int
{
  return Zynamic::Forward<int (const char*, int*, enum FsThread)>(L"FS_FOpenFileReadForThread")(filename, file, thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileRead(const char* filename, int* file) -> int
{
  return Zynamic::Forward<int (const char*, int*)>(L"FS_FOpenFileRead")(filename, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileReadCurrentThread(const char* filename, int* file) -> int
{
  return Zynamic::Forward<int (const char*, int*)>(L"FS_FOpenFileReadCurrentThread")(filename, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_TouchFile(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_TouchFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Delete(const char* filename) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_Delete")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Read(void* buffer, int len, int h) -> int
{
  return Zynamic::Forward<int (void*, int, int)>(L"FS_Read")(buffer, len, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Write(const void* buffer, int len, int h) -> int
{
  return Zynamic::Forward<int (const void*, int, int)>(L"FS_Write")(buffer, len, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_WriteToDemo(const void* buffer, int len, int h) -> int
{
  return Zynamic::Forward<int (const void*, int, int)>(L"FS_WriteToDemo")(buffer, len, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Printf(int h, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"FS_Printf")(h, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Seek(int f, long offset, int origin) -> int
{
  return Zynamic::Forward<int (int, long, int)>(L"FS_Seek")(f, offset, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ReadFile(const char* qpath, void** buffer) -> int
{
  return Zynamic::Forward<int (const char*, void**)>(L"FS_ReadFile")(qpath, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ResetFiles() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ResetFiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FreeFile(void* buffer) -> void
{
  return Zynamic::Forward<void (void*)>(L"FS_FreeFile")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_WriteFile(const char* filename, const void* buffer, int size) -> int
{
  return Zynamic::Forward<int (const char*, const void*, int)>(L"FS_WriteFile")(filename, buffer, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetFileOsPath(const char* filename, char* ospath) -> int
{
  return Zynamic::Forward<int (const char*, char*)>(L"FS_GetFileOsPath")(filename, ospath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_OpenFileOverwrite(const char* qpath) -> int
{
  return Zynamic::Forward<int (const char*)>(L"FS_OpenFileOverwrite")(qpath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LoadZipFile(char* zipfile, const char* basename) -> struct iwd_t*
{
  return Zynamic::Forward<struct iwd_t* (char*, const char*)>(L"FS_LoadZipFile")(zipfile, basename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_LoadFakeIwdFile(char* fakeiwdfile, const char* basename) -> struct iwd_t*
{
  return Zynamic::Forward<struct iwd_t* (char*, const char*)>(L"FS_LoadFakeIwdFile")(fakeiwdfile, basename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ReturnPath(const char* zname, char* zpath, int* depth) -> int
{
  return Zynamic::Forward<int (const char*, char*, int*)>(L"FS_ReturnPath")(zname, zpath, depth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddFileToList(struct HunkUser* user, const char* name, const char** list, int nfiles) -> int
{
  return Zynamic::Forward<int (struct HunkUser*, const char*, const char**, int)>(L"FS_AddFileToList")(user, name, list, nfiles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ListFilteredFiles(struct searchpath_s* searchPath, const char* path, const char* extension, const char* filter, enum FsListBehavior_e behavior, int* numfiles, int allocTrackType) -> const char**
{
  return Zynamic::Forward<const char** (struct searchpath_s*, const char*, const char*, const char*, enum FsListBehavior_e, int*, int)>(L"FS_ListFilteredFiles")(searchPath, path, extension, filter, behavior, numfiles, allocTrackType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ListFiles(const char* path, const char* extension, enum FsListBehavior_e behavior, int* numfiles, int allocTrackType) -> const char**
{
  return Zynamic::Forward<const char** (const char*, const char*, enum FsListBehavior_e, int*, int)>(L"FS_ListFiles")(path, extension, behavior, numfiles, allocTrackType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ListFilesInLocation(const char* path, const char* extension, enum FsListBehavior_e behavior, int* numfiles, int lookInFlags, int allocTrackType) -> const char**
{
  return Zynamic::Forward<const char** (const char*, const char*, enum FsListBehavior_e, int*, int, int)>(L"FS_ListFilesInLocation")(path, extension, behavior, numfiles, lookInFlags, allocTrackType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_CheckLocation(const char* path, int lookInFlags) -> bool
{
  return Zynamic::Forward<bool (const char*, int)>(L"FS_CheckLocation")(path, lookInFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ListFilteredFilesInLocation(const char* path, const char* extension, const char* filter, enum FsListBehavior_e behavior, int* numfiles, int lookInFlags, int allocTrackType) -> const char**
{
  return Zynamic::Forward<const char** (const char*, const char*, const char*, enum FsListBehavior_e, int*, int, int)>(L"FS_ListFilteredFilesInLocation")(path, extension, filter, behavior, numfiles, lookInFlags, allocTrackType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_FreeFileList(char** list) -> void
{
  return Zynamic::Forward<void (char**)>(L"Sys_FreeFileList")(list);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetFileList(const char* path, const char* extension, enum FsListBehavior_e behavior, char* listbuf, int bufsize) -> int
{
  return Zynamic::Forward<int (const char*, const char*, enum FsListBehavior_e, char*, int)>(L"FS_GetFileList")(path, extension, behavior, listbuf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ConvertPath(char* s) -> void
{
  return Zynamic::Forward<void (char*)>(L"FS_ConvertPath")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_PathCmp(const char* s1, const char* s2) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"FS_PathCmp")(s1, s2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_SortFileList(const char** filelist, int numfiles) -> void
{
  return Zynamic::Forward<void (const char**, int)>(L"FS_SortFileList")(filelist, numfiles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_DisplayPath(int bLanguageCull) -> void
{
  return Zynamic::Forward<void (int)>(L"FS_DisplayPath")(bLanguageCull);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FullPath_f() -> void
{
  return Zynamic::Forward<void ()>(L"FS_FullPath_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Path_f() -> void
{
  return Zynamic::Forward<void ()>(L"FS_Path_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IwdFileLanguage(const char* pszIwdFileName) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"IwdFileLanguage")(pszIwdFileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto iwdsort(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"iwdsort")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddSearchPath(struct searchpath_s* search) -> void
{
  return Zynamic::Forward<void (struct searchpath_s*)>(L"FS_AddSearchPath")(search);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddIwdFilesForGameDirectory(const char* path, const char* pszGameFolder) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"FS_AddIwdFilesForGameDirectory")(path, pszGameFolder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddUserMapDirIWDs(const char* pszGameFolder) -> void
{
  return Zynamic::Forward<void (const char*)>(L"FS_AddUserMapDirIWDs")(pszGameFolder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddGameDirectory(const char* path, const char* dir, int bLanguageDirectory, int iLanguage) -> void
{
  return Zynamic::Forward<void (const char*, const char*, int, int)>(L"FS_AddGameDirectory")(path, dir, bLanguageDirectory, iLanguage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddLocalizedGameDirectory(const char* path, const char* dir) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"FS_AddLocalizedGameDirectory")(path, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutdownSearchPaths(struct searchpath_s* p) -> void
{
  return Zynamic::Forward<void (struct searchpath_s*)>(L"FS_ShutdownSearchPaths")(p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutdownServerFileReferences(int* numFiles, const char** fileNames) -> void
{
  return Zynamic::Forward<void (int*, const char**)>(L"FS_ShutdownServerFileReferences")(numFiles, fileNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutdownServerIwdNames() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ShutdownServerIwdNames")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutdownServerReferencedIwds() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ShutdownServerReferencedIwds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutdownServerReferencedFFs() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ShutdownServerReferencedFFs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Shutdown(int closemfp) -> void
{
  return Zynamic::Forward<void (int)>(L"FS_Shutdown")(closemfp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"FS_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddDevGameDirs(const char* path, bool allow_devraw) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"FS_AddDevGameDirs")(path, allow_devraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Startup(const char* gameName, bool allow_devraw) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"FS_Startup")(gameName, allow_devraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ClearIwdReferences() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ClearIwdReferences")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_AddIwdPureCheckReference(const struct searchpath_s* search) -> void
{
  return Zynamic::Forward<void (const struct searchpath_s*)>(L"FS_AddIwdPureCheckReference")(search);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_ShutDownIwdPureCheckReferences() -> void
{
  return Zynamic::Forward<void ()>(L"FS_ShutDownIwdPureCheckReferences")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_IsBasePathValid() -> bool
{
  return Zynamic::Forward<bool ()>(L"FS_IsBasePathValid")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_InitFilesystem(bool allow_devraw) -> void
{
  return Zynamic::Forward<void (bool)>(L"FS_InitFilesystem")(allow_devraw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Restart(int localClientNum, int checksumFeed) -> void
{
  return Zynamic::Forward<void (int, int)>(L"FS_Restart")(localClientNum, checksumFeed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_NeedRestart(int checksumFeed) -> int
{
  return Zynamic::Forward<int (int)>(L"FS_NeedRestart")(checksumFeed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FOpenFileByMode(const char* qpath, int* f, enum fsMode_t mode) -> int
{
  return Zynamic::Forward<int (const char*, int*, enum fsMode_t)>(L"FS_FOpenFileByMode")(qpath, f, mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FTell(int f) -> int
{
  return Zynamic::Forward<int (int)>(L"FS_FTell")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_Flush(int f) -> void
{
  return Zynamic::Forward<void (int)>(L"FS_Flush")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBspFilename(char* filename, int size, const char* mapname) -> void
{
  return Zynamic::Forward<void (char*, int, const char*)>(L"Com_GetBspFilename")(filename, size, mapname);
}

#endif // __UNIMPLEMENTED__
