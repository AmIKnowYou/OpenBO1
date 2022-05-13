//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DB_MemAlloc(unsigned int size, unsigned int type, unsigned int allocType, const char* filename, int flags) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned int, unsigned int, unsigned int, const char*, int)>(L"DB_MemAlloc")(size, type, allocType, filename, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_AllocXBlocks(unsigned int* blockSize, const char* filename, struct XBlock* blocks, unsigned int allocType, int flags) -> void
{
  return Zynamic::Forward<void (unsigned int*, const char*, struct XBlock*, unsigned int, int)>(L"DB_AllocXBlocks")(blockSize, filename, blocks, allocType, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_FreeXBlocks(struct XBlock* blocks, int flags) -> void
{
  return Zynamic::Forward<void (struct XBlock*, int)>(L"DB_FreeXBlocks")(blocks, flags);
}

#endif // __UNIMPLEMENTED__
