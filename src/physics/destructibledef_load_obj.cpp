//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DestructibleDef_Strcpy(unsigned char* member, const char* keyValue) -> void
{
  return Zynamic::Forward<void (unsigned char*, const char*)>(L"DestructibleDef_Strcpy")(member, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DestructiblePiece_SetFlag(struct DestructiblePiece* piece, const char* pValue, const int iFieldType, int minVal, int maxVal, int flag) -> int
{
  return Zynamic::Forward<int (struct DestructiblePiece*, const char*, const int, int, int, int)>(L"DestructiblePiece_SetFlag")(piece, pValue, iFieldType, minVal, maxVal, flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DestructiblePiece_ParseDefSpecificFieldType(unsigned char* pStruct, const char* pValue, const int iFieldType, const int iFieldOffset) -> int
{
  return Zynamic::Forward<int (unsigned char*, const char*, const int, const int)>(L"DestructiblePiece_ParseDefSpecificFieldType")(pStruct, pValue, iFieldType, iFieldOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DestructiblePieceLoadFile(const char* name, struct DestructiblePiece* destructiblePiece) -> struct DestructiblePiece*
{
  return Zynamic::Forward<struct DestructiblePiece* (const char*, struct DestructiblePiece*)>(L"DestructiblePieceLoadFile")(name, destructiblePiece);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Destructible_ParseDefSpecificFieldType(unsigned char* pStruct, const char* pValue, const int iFieldType, const int iFieldOffset) -> int
{
  return Zynamic::Forward<int (unsigned char*, const char*, const int, const int)>(L"Destructible_ParseDefSpecificFieldType")(pStruct, pValue, iFieldType, iFieldOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DestructibleDefLoadFile(const char* name, function* Alloc) -> struct DestructibleDef*
{
  return Zynamic::Forward<struct DestructibleDef* (const char*, function *)>(L"DestructibleDefLoadFile")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBoneIndex(const struct XModel* model, unsigned int name, unsigned char* index) -> int
{
  return Zynamic::Forward<int (const struct XModel*, unsigned int, unsigned char*)>(L"XModelGetBoneIndex")(model, name, index);
}

#endif // __UNIMPLEMENTED__
