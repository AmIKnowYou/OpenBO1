//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DDL_Buffer_WriteHeader(char* buffer, struct ddlBufferHeader_t* header) -> void
{
  return Zynamic::Forward<void (char*, struct ddlBufferHeader_t*)>(L"DDL_Buffer_WriteHeader")(buffer, header);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Buffer_ReadHeader(char* buffer, struct ddlBufferHeader_t* header) -> void
{
  return Zynamic::Forward<void (char*, struct ddlBufferHeader_t*)>(L"DDL_Buffer_ReadHeader")(buffer, header);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Buffer_ReadBits(char* buffer, int offset, int size, unsigned int* value) -> int
{
  return Zynamic::Forward<int (char*, int, int, unsigned int*)>(L"DDL_Buffer_ReadBits")(buffer, offset, size, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Buffer_WriteBits(char* buffer, int offset, int size, unsigned int value) -> int
{
  return Zynamic::Forward<int (char*, int, int, unsigned int)>(L"DDL_Buffer_WriteBits")(buffer, offset, size, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Buffer_ClearBits(char* buffer, int offset, int size) -> int
{
  return Zynamic::Forward<int (char*, int, int)>(L"DDL_Buffer_ClearBits")(buffer, offset, size);
}

#endif // __UNIMPLEMENTED__
