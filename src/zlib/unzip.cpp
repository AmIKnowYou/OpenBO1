//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto unzlocal_getShort(struct _iobuf* fin, unsigned long* pX) -> int
{
  return Zynamic::Forward<int (struct _iobuf*, unsigned long*)>(L"unzlocal_getShort")(fin, pX);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzlocal_getLong(struct _iobuf* fin, unsigned long* pX) -> int
{
  return Zynamic::Forward<int (struct _iobuf*, unsigned long*)>(L"unzlocal_getLong")(fin, pX);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzlocal_SearchCentralDir(struct _iobuf* fin) -> unsigned long
{
  return Zynamic::Forward<unsigned long (struct _iobuf*)>(L"unzlocal_SearchCentralDir")(fin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzReOpen(const char* path, unsigned char* file) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (const char*, unsigned char*)>(L"unzReOpen")(path, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzOpen(const char* path) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (const char*)>(L"unzOpen")(path);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzClose(unsigned char* file) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"unzClose")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzGetGlobalInfo(unsigned char* file, struct unz_global_info_s* pglobal_info) -> int
{
  return Zynamic::Forward<int (unsigned char*, struct unz_global_info_s*)>(L"unzGetGlobalInfo")(file, pglobal_info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzlocal_DosDateToTmuDate(unsigned long ulDosDate, struct tm_unz_s* ptm) -> void
{
  return Zynamic::Forward<void (unsigned long, struct tm_unz_s*)>(L"unzlocal_DosDateToTmuDate")(ulDosDate, ptm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzlocal_GetCurrentFileInfoInternal(unsigned char* file, struct unz_file_info_s* pfile_info, struct unz_file_info_internal_s* pfile_info_internal, char* szFileName, unsigned long fileNameBufferSize, void* extraField, unsigned long extraFieldBufferSize, char* szComment, unsigned long commentBufferSize) -> int
{
  return Zynamic::Forward<int (unsigned char*, struct unz_file_info_s*, struct unz_file_info_internal_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)>(L"unzlocal_GetCurrentFileInfoInternal")(file, pfile_info, pfile_info_internal, szFileName, fileNameBufferSize, extraField, extraFieldBufferSize, szComment, commentBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzGetCurrentFileInfo(unsigned char* file, struct unz_file_info_s* pfile_info, char* szFileName, unsigned long fileNameBufferSize, void* extraField, unsigned long extraFieldBufferSize, char* szComment, unsigned long commentBufferSize) -> int
{
  return Zynamic::Forward<int (unsigned char*, struct unz_file_info_s*, char*, unsigned long, void*, unsigned long, char*, unsigned long)>(L"unzGetCurrentFileInfo")(file, pfile_info, szFileName, fileNameBufferSize, extraField, extraFieldBufferSize, szComment, commentBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzGoToFirstFile(unsigned char* file) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"unzGoToFirstFile")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzGoToNextFile(unsigned char* file) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"unzGoToNextFile")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzGetCurrentFileInfoPosition(unsigned char* file, unsigned long* pos) -> int
{
  return Zynamic::Forward<int (unsigned char*, unsigned long*)>(L"unzGetCurrentFileInfoPosition")(file, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzSetCurrentFileInfoPosition(unsigned char* file, unsigned long pos) -> int
{
  return Zynamic::Forward<int (unsigned char*, unsigned long)>(L"unzSetCurrentFileInfoPosition")(file, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzlocal_CheckCurrentFileCoherencyHeader(struct unz_s* s, unsigned int* piSizeVar, unsigned long* poffset_local_extrafield, unsigned int* psize_local_extrafield) -> int
{
  return Zynamic::Forward<int (struct unz_s*, unsigned int*, unsigned long*, unsigned int*)>(L"unzlocal_CheckCurrentFileCoherencyHeader")(s, piSizeVar, poffset_local_extrafield, psize_local_extrafield);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzOpenCurrentFile(unsigned char* file) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"unzOpenCurrentFile")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzReadCurrentFile(unsigned char* file, unsigned char* buf, unsigned int len) -> int
{
  return Zynamic::Forward<int (unsigned char*, unsigned char*, unsigned int)>(L"unzReadCurrentFile")(file, buf, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unztell(unsigned char* file) -> long
{
  return Zynamic::Forward<long (unsigned char*)>(L"unztell")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto unzCloseCurrentFile(unsigned char* file) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"unzCloseCurrentFile")(file);
}

#endif // __UNIMPLEMENTED__
