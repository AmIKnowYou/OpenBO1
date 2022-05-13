//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FS_FileRead(void* ptr, unsigned int len, struct _iobuf* stream) -> unsigned int
{
  return Zynamic::Forward<unsigned int (void*, unsigned int, struct _iobuf*)>(L"FS_FileRead")(ptr, len, stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileWrite(const void* ptr, unsigned int len, struct _iobuf* stream) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const void*, unsigned int, struct _iobuf*)>(L"FS_FileWrite")(ptr, len, stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileOpenReadBinary(const char* filename) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (const char*)>(L"FS_FileOpenReadBinary")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileOpenReadText(const char* filename) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (const char*)>(L"FS_FileOpenReadText")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileOpenWriteBinary(const char* filename) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (const char*)>(L"FS_FileOpenWriteBinary")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileOpenAppendText(const char* filename) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (const char*)>(L"FS_FileOpenAppendText")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileOpenWriteText(const char* filename) -> struct _iobuf*
{
  return Zynamic::Forward<struct _iobuf* (const char*)>(L"FS_FileOpenWriteText")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileClose(struct _iobuf* stream) -> void
{
  return Zynamic::Forward<void (struct _iobuf*)>(L"FS_FileClose")(stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileSeek(struct _iobuf* file, long offset, int whence) -> int
{
  return Zynamic::Forward<int (struct _iobuf*, long, int)>(L"FS_FileSeek")(file, offset, whence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_FileGetFileSize(struct _iobuf* file) -> int
{
  return Zynamic::Forward<int (struct _iobuf*)>(L"FS_FileGetFileSize")(file);
}

#endif // __UNIMPLEMENTED__
