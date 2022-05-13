//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto StringTable_HashString(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"StringTable_HashString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_Alloc(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"StringTable_Alloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CellCompare(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CellCompare")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_ParseFileIntoTable(const char* filename, struct StringTable* table) -> void
{
  return Zynamic::Forward<void (const char*, struct StringTable*)>(L"StringTable_ParseFileIntoTable")(filename, table);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_GetAsset_LoadObj(const char* filename, const struct StringTable** tablePtr) -> void
{
  return Zynamic::Forward<void (const char*, const struct StringTable**)>(L"StringTable_GetAsset_LoadObj")(filename, tablePtr);
}

#endif // __UNIMPLEMENTED__
