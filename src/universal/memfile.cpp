//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MemFile_CommonInit(struct MemoryFile* memFile, int size, void* buffer, bool errorOnOverflow, bool compress_enabled) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, void*, bool, bool)>(L"MemFile_CommonInit")(memFile, size, buffer, errorOnOverflow, compress_enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_InitForReading(struct MemoryFile* memFile, int size, void* buffer, bool compress_enabled) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, void*, bool)>(L"MemFile_InitForReading")(memFile, size, buffer, compress_enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_InitForWriting(struct MemoryFile* memFile, int size, void* buffer, bool errorOnOverflow, bool compress_enabled) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, void*, bool, bool)>(L"MemFile_InitForWriting")(memFile, size, buffer, errorOnOverflow, compress_enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CountGuestsInUse() -> int
{
  return Zynamic::Forward<int ()>(L"Live_CountGuestsInUse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_StartSegment(struct MemoryFile* memFile, int index) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int)>(L"MemFile_StartSegment")(memFile, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_EndSegment(struct MemoryFile* memFile) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*)>(L"MemFile_EndSegment")(memFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_inflateInit(struct MemoryFile* memFile, void* next_in, int len) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, void*, int)>(L"MemFile_inflateInit")(memFile, next_in, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_GetSegmentAddess(struct MemoryFile* memFile, int index) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (struct MemoryFile*, int)>(L"MemFile_GetSegmentAddess")(memFile, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_MoveToSegment(struct MemoryFile* memFile, int index) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int)>(L"MemFile_MoveToSegment")(memFile, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_IsReading(struct MemoryFile* memFile) -> bool
{
  return Zynamic::Forward<bool (struct MemoryFile*)>(L"MemFile_IsReading")(memFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_WriteDataFlushInternal(struct MemoryFile* memFile) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*)>(L"MemFile_WriteDataFlushInternal")(memFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_WriteDataInternal(struct MemoryFile* memFile, int byteCount, const void* p) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, const void*)>(L"MemFile_WriteDataInternal")(memFile, byteCount, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_ReadCString(struct MemoryFile* memFile) -> const char*
{
  return Zynamic::Forward<const char* (struct MemoryFile*)>(L"MemFile_ReadCString")(memFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_ReadData(struct MemoryFile* memFile, int byteCount, void* p) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, void*)>(L"MemFile_ReadData")(memFile, byteCount, p);
}

#endif // __UNIMPLEMENTED__
