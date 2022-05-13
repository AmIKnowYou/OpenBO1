//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DB_InitStreams(struct XBlock* blocks) -> void
{
  return Zynamic::Forward<void (struct XBlock*)>(L"DB_InitStreams")(blocks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_SetStreamIndex(unsigned int index) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"DB_SetStreamIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_PushStreamPos(unsigned int index) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"DB_PushStreamPos")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_PopStreamPos() -> void
{
  return Zynamic::Forward<void ()>(L"DB_PopStreamPos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_GetStreamPos() -> unsigned char*
{
  return Zynamic::Forward<unsigned char* ()>(L"DB_GetStreamPos")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_AllocStreamPos(int alignment) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (int)>(L"DB_AllocStreamPos")(alignment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_IncStreamPos(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"DB_IncStreamPos")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_InsertPointer() -> const void**
{
  return Zynamic::Forward<const void** ()>(L"DB_InsertPointer")();
}

#endif // __UNIMPLEMENTED__
