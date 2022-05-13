//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteData(struct MemoryFile* memFile, int byteCount, const void* p) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int, const void*)>(L"MemFile_WriteData")(memFile, byteCount, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteCString(struct MemoryFile* memFile, const char* string) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, const char*)>(L"MemFile_WriteCString")(memFile, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteByte(struct MemoryFile* memFile, unsigned char value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, unsigned char)>(L"MemFile_WriteByte")(memFile, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteShort(struct MemoryFile* memFile, short value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, short)>(L"MemFile_WriteShort")(memFile, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteUInt(struct MemoryFile* memFile, unsigned int value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, unsigned int)>(L"MemFile_WriteUInt")(memFile, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteInt(struct MemoryFile* memFile, int value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, int)>(L"MemFile_WriteInt")(memFile, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_WriteFloat(struct MemoryFile* memFile, float valuef) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, float)>(L"MemFile_WriteFloat")(memFile, valuef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_ReadVec3(struct MemoryFile* memFile, float* value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, float*)>(L"MemFile_ReadVec3")(memFile, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MemFile_ArchiveByte(struct MemoryFile* memFile, unsigned char* value) -> void
{
  return Zynamic::Forward<void (struct MemoryFile*, unsigned char*)>(L"MemFile_ArchiveByte")(memFile, value);
}

#endif // __UNIMPLEMENTED__
