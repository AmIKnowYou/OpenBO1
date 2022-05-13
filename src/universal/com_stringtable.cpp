//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto StringTable_FirstHashIndex(const struct StringTable* table, int hash) -> int
{
  return Zynamic::Forward<int (const struct StringTable*, int)>(L"StringTable_FirstHashIndex")(table, hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_LookupRowNumForValue(const struct StringTable* table, const int comparisonColumn, const char* value) -> int
{
  return Zynamic::Forward<int (const struct StringTable*, const int, const char*)>(L"StringTable_LookupRowNumForValue")(table, comparisonColumn, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_LookupColumnNumForValue(const struct StringTable* table, const int comparisonRow, const char* value) -> int
{
  return Zynamic::Forward<int (const struct StringTable*, const int, const char*)>(L"StringTable_LookupColumnNumForValue")(table, comparisonRow, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_LookupRowNumForValue(const struct StringTable* table, const int comparisonColumn1, const char* value1, const int comparisonColumn2, const char* value2, const int comparisonColumn3, const char* value3) -> int
{
  return Zynamic::Forward<int (const struct StringTable*, const int, const char*, const int, const char*, const int, const char*)>(L"StringTable_LookupRowNumForValue")(table, comparisonColumn1, value1, comparisonColumn2, value2, comparisonColumn3, value3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_GetColumnValueForRow(const struct StringTable* table, const int row, const int column) -> const char*
{
  return Zynamic::Forward<const char* (const struct StringTable*, const int, const int)>(L"StringTable_GetColumnValueForRow")(table, row, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_Lookup(const struct StringTable* table, const int comparisonColumn, const char* value, const int valueColumn) -> const char*
{
  return Zynamic::Forward<const char* (const struct StringTable*, const int, const char*, const int)>(L"StringTable_Lookup")(table, comparisonColumn, value, valueColumn);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_Lookup(const struct StringTable* table, const int comparisonColumn1, const char* value1, const int comparisonColumn2, const char* value2, const int valueColumn) -> const char*
{
  return Zynamic::Forward<const char* (const struct StringTable*, const int, const char*, const int, const char*, const int)>(L"StringTable_Lookup")(table, comparisonColumn1, value1, comparisonColumn2, value2, valueColumn);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_Find(const struct StringTable* table, int* results, int maxResults, const int comparisonColumn1, const char* value1, const int comparisonColumn2, const char* value2) -> int
{
  return Zynamic::Forward<int (const struct StringTable*, int*, int, const int, const char*, const int, const char*)>(L"StringTable_Find")(table, results, maxResults, comparisonColumn1, value1, comparisonColumn2, value2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_RowCount(const struct StringTable* table) -> int
{
  return Zynamic::Forward<int (const struct StringTable*)>(L"StringTable_RowCount")(table);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_ColumnCount(const struct StringTable* table) -> int
{
  return Zynamic::Forward<int (const struct StringTable*)>(L"StringTable_ColumnCount")(table);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_Checksum(const struct StringTable* table, unsigned int initialCrc) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct StringTable*, unsigned int)>(L"StringTable_Checksum")(table, initialCrc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_GetAsset_FastFile(const char* filename, const struct StringTable** tablePtr) -> void
{
  return Zynamic::Forward<void (const char*, const struct StringTable**)>(L"StringTable_GetAsset_FastFile")(filename, tablePtr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringTable_GetAsset(const char* filename, const struct StringTable** tablePtr) -> void
{
  return Zynamic::Forward<void (const char*, const struct StringTable**)>(L"StringTable_GetAsset")(filename, tablePtr);
}

#endif // __UNIMPLEMENTED__
