//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MSG_GetMapCenter() -> float*
{
  return Zynamic::Forward<float* ()>(L"MSG_GetMapCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMinBitCountForNum(const unsigned int num[0x3]) -> int
{
  return Zynamic::Forward<int (const unsigned int[0x3])>(L"GetMinBitCountForNum")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_Init(struct msg_t* buf, unsigned char* data, int length) -> void
{
  return Zynamic::Forward<void (struct msg_t*, unsigned char*, int)>(L"MSG_Init")(buf, data, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_InitReadOnly(struct msg_t* buf, unsigned char* data, int length) -> void
{
  return Zynamic::Forward<void (struct msg_t*, unsigned char*, int)>(L"MSG_InitReadOnly")(buf, data, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_InitReadOnlySplit(struct msg_t* buf, unsigned char* data, int length, unsigned char* data2, int length2) -> void
{
  return Zynamic::Forward<void (struct msg_t*, unsigned char*, int, unsigned char*, int)>(L"MSG_InitReadOnlySplit")(buf, data, length, data2, length2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_BeginReading(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_BeginReading")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_Discard(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_Discard")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetByte(struct msg_t* msg, int where) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int)>(L"MSG_GetByte")(msg, where);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetUsedBitCount(const struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (const struct msg_t*)>(L"MSG_GetUsedBitCount")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetNumBitsRead(const struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (const struct msg_t*)>(L"MSG_GetNumBitsRead")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_SetBookmark(const struct msg_t* msg, struct msg_bookmark_t* bookmark) -> void
{
  return Zynamic::Forward<void (const struct msg_t*, struct msg_bookmark_t*)>(L"MSG_SetBookmark")(msg, bookmark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GotoBookmark(struct msg_t* msg, const struct msg_bookmark_t* bookmark) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const struct msg_bookmark_t*)>(L"MSG_GotoBookmark")(msg, bookmark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteBits(struct msg_t* msg, int value, int bits) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, int)>(L"MSG_WriteBits")(msg, value, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteBit0(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_WriteBit0")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteBit1(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_WriteBit1")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadBits(struct msg_t* msg, int bits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int)>(L"MSG_ReadBits")(msg, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadBit(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadBit")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_CompressWithZLib(const unsigned char* from, int inSizeBytes, unsigned char* to, int outSizeBytes) -> int
{
  return Zynamic::Forward<int (const unsigned char*, int, unsigned char*, int)>(L"MSG_CompressWithZLib")(from, inSizeBytes, to, outSizeBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteBitsCompress(bool trainHuffman, const unsigned char* from, int fromSizeBytes, unsigned char* to, int toSizeBytes) -> int
{
  return Zynamic::Forward<int (bool, const unsigned char*, int, unsigned char*, int)>(L"MSG_WriteBitsCompress")(trainHuffman, from, fromSizeBytes, to, toSizeBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto showHuffmanData() -> void
{
  return Zynamic::Forward<void ()>(L"showHuffmanData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_DecompressWithZLib(const unsigned char* from, int inSizeBytes, unsigned char* to, int outSizeBytes) -> int
{
  return Zynamic::Forward<int (const unsigned char*, int, unsigned char*, int)>(L"MSG_DecompressWithZLib")(from, inSizeBytes, to, outSizeBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadBitsCompress(const unsigned char* from, int fromSizeBytes, unsigned char* to, int toSizeBytes) -> int
{
  return Zynamic::Forward<int (const unsigned char*, int, unsigned char*, int)>(L"MSG_ReadBitsCompress")(from, fromSizeBytes, to, toSizeBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_Embed(struct msg_t* dest, struct msg_t* src) -> void
{
  return Zynamic::Forward<void (struct msg_t*, struct msg_t*)>(L"MSG_Embed")(dest, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_UnEmbed(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_UnEmbed")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteByte(struct msg_t* msg, int c) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int)>(L"MSG_WriteByte")(msg, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteData(struct msg_t* buf, const void* data, int length) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const void*, int)>(L"MSG_WriteData")(buf, data, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteShort(struct msg_t* msg, int c) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int)>(L"MSG_WriteShort")(msg, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteLong(struct msg_t* msg, int c) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int)>(L"MSG_WriteLong")(msg, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteFloat(struct msg_t* sb, float f) -> void
{
  return Zynamic::Forward<void (struct msg_t*, float)>(L"MSG_WriteFloat")(sb, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteInt64(struct msg_t* msg, unsigned __int64 c) -> void
{
  return Zynamic::Forward<void (struct msg_t*, unsigned __int64)>(L"MSG_WriteInt64")(msg, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteString(struct msg_t* sb, const char* s) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const char*)>(L"MSG_WriteString")(sb, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteBigString(struct msg_t* sb, const char* s) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const char*)>(L"MSG_WriteBigString")(sb, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteAngle(struct msg_t* sb, int bits, float f) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, float)>(L"MSG_WriteAngle")(sb, bits, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteAngle16(struct msg_t* sb, float f) -> void
{
  return Zynamic::Forward<void (struct msg_t*, float)>(L"MSG_WriteAngle16")(sb, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteRangedFloatBits(struct msg_t* sb, float f, float begin, float end, int bits) -> void
{
  return Zynamic::Forward<void (struct msg_t*, float, float, float, int)>(L"MSG_WriteRangedFloatBits")(sb, f, begin, end, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadByte(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadByte")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadShort(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadShort")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadLong(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadLong")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadInt64(struct msg_t* msg) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (struct msg_t*)>(L"MSG_ReadInt64")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadFloat(struct msg_t* msg) -> float
{
  return Zynamic::Forward<float (struct msg_t*)>(L"MSG_ReadFloat")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadString(struct msg_t* msg, char* string, unsigned int maxChars) -> char*
{
  return Zynamic::Forward<char* (struct msg_t*, char*, unsigned int)>(L"MSG_ReadString")(msg, string, maxChars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadBigString(struct msg_t* msg) -> char*
{
  return Zynamic::Forward<char* (struct msg_t*)>(L"MSG_ReadBigString")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadStringLine(struct msg_t* msg, char* string, unsigned int maxChars) -> char*
{
  return Zynamic::Forward<char* (struct msg_t*, char*, unsigned int)>(L"MSG_ReadStringLine")(msg, string, maxChars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadAngle(struct msg_t* msg, int bits) -> float
{
  return Zynamic::Forward<float (struct msg_t*, int)>(L"MSG_ReadAngle")(msg, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadAngle16(struct msg_t* msg) -> float
{
  return Zynamic::Forward<float (struct msg_t*)>(L"MSG_ReadAngle16")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadRangedFloatBits(struct msg_t* sb, float begin, float end, int bits) -> float
{
  return Zynamic::Forward<float (struct msg_t*, float, float, int)>(L"MSG_ReadRangedFloatBits")(sb, begin, end, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadData(struct msg_t* msg, void* data, int len) -> void
{
  return Zynamic::Forward<void (struct msg_t*, void*, int)>(L"MSG_ReadData")(msg, data, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKey(struct msg_t* msg, int key, int oldV, int newV, int bits) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, int, int, int)>(L"MSG_WriteDeltaKey")(msg, key, oldV, newV, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKey(struct msg_t* msg, int key, int oldV, int bits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int, int, int)>(L"MSG_ReadDeltaKey")(msg, key, oldV, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteKey(struct msg_t* msg, int key, int newV, int bits) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, int, int)>(L"MSG_WriteKey")(msg, key, newV, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadKey(struct msg_t* msg, int key, int bits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int, int)>(L"MSG_ReadKey")(msg, key, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKeyByte(struct msg_t* msg, int key, int oldV, int newV) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, int, int)>(L"MSG_WriteDeltaKeyByte")(msg, key, oldV, newV);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKeyByte(struct msg_t* msg, int key, int oldV) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int, int)>(L"MSG_ReadDeltaKeyByte")(msg, key, oldV);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKeyShort(struct msg_t* msg, int key, int oldV, int newV) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, int, int)>(L"MSG_WriteDeltaKeyShort")(msg, key, oldV, newV);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKeyShort(struct msg_t* msg, int key, int oldV) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int, int)>(L"MSG_ReadDeltaKeyShort")(msg, key, oldV);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_SetDefaultUserCmd(struct playerState_s* ps, struct usercmd_s* cmd) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct usercmd_s*)>(L"MSG_SetDefaultUserCmd")(ps, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, const struct usercmd_s* to, int forceSendAngles) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, const struct usercmd_s*, const struct usercmd_s*, int)>(L"MSG_WriteDeltaUsercmdKey")(msg, key, from, to, forceSendAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, struct usercmd_s* to) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, const struct usercmd_s*, struct usercmd_s*)>(L"MSG_ReadDeltaUsercmdKey")(msg, key, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ClearLastReferencedEntity(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"MSG_ClearLastReferencedEntity")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaTime(struct msg_t* msg, int timeBase) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int)>(L"MSG_ReadDeltaTime")(msg, timeBase);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaGroundEntity(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadDeltaGroundEntity")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaEventField(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadDeltaEventField")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaEventParamField(struct msg_t* msg) -> int
{
  return Zynamic::Forward<int (struct msg_t*)>(L"MSG_ReadDeltaEventParamField")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadEFlags(struct msg_t* msg, const int oldFlags) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int)>(L"MSG_ReadEFlags")(msg, oldFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadOriginFloat(int bits, struct msg_t* msg, float oldValue) -> float
{
  return Zynamic::Forward<float (int, struct msg_t*, float)>(L"MSG_ReadOriginFloat")(bits, msg, oldValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadOriginZFloat(struct msg_t* msg, float oldValue) -> float
{
  return Zynamic::Forward<float (struct msg_t*, float)>(L"MSG_ReadOriginZFloat")(msg, oldValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDemoRoundedFloat(struct msg_t* msg, int bits, float oldValue, int diffBits, int fullBits) -> float
{
  return Zynamic::Forward<float (struct msg_t*, int, float, int, int)>(L"MSG_ReadDemoRoundedFloat")(msg, bits, oldValue, diffBits, fullBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadRangedFloat(struct msg_t* msg, const float oldValue, const float begin, const float end, const int precision, const bool oftenZeroOrOne) -> float
{
  return Zynamic::Forward<float (struct msg_t*, const float, const float, const float, const int, const bool)>(L"MSG_ReadRangedFloat")(msg, oldValue, begin, end, precision, oftenZeroOrOne);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadEntityIndex(struct msg_t* msg, int indexBits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int)>(L"MSG_ReadEntityIndex")(msg, indexBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaField(struct msg_t* msg, const int time, const void* from, void* to, const struct NetField* field, int print, bool noXor) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const int, const void*, void*, const struct NetField*, int, bool)>(L"MSG_ReadDeltaField")(msg, time, from, to, field, print, noXor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadAppendedDeltaStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, int numFields, int indexBits, const struct NetField* stateFields, const int skippedFieldBits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const void*, void*, unsigned int, int, int, const struct NetField*, const int)>(L"MSG_ReadAppendedDeltaStruct")(msg, time, from, to, number, numFields, indexBits, stateFields, skippedFieldBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaEntityStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, const int totalFields, const int skippedFieldBits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const void*, void*, unsigned int, const int, const int)>(L"MSG_ReadDeltaEntityStruct")(msg, time, from, to, number, totalFields, skippedFieldBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaArchivedEntity(struct msg_t* msg, const int time, const struct archivedEntity_s* from, struct archivedEntity_s* to, int number) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const struct archivedEntity_s*, struct archivedEntity_s*, int)>(L"MSG_ReadDeltaArchivedEntity")(msg, time, from, to, number);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaHudElems(struct msg_t* msg, const int time, const struct hudelem_s* from, struct hudelem_s* to, int count) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const int, const struct hudelem_s*, struct hudelem_s*, int)>(L"MSG_ReadDeltaHudElems")(msg, time, from, to, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaPlayerstate(const int localClientNum, struct msg_t* msg, const int time, const struct playerState_s* from, struct playerState_s* to, bool predictedFieldsIgnoreXor) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, const int, const struct playerState_s*, struct playerState_s*, bool)>(L"MSG_ReadDeltaPlayerstate")(localClientNum, msg, time, from, to, predictedFieldsIgnoreXor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_initHuffmanInternal() -> void
{
  return Zynamic::Forward<void ()>(L"MSG_initHuffmanInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_InitHuffman() -> void
{
  return Zynamic::Forward<void ()>(L"MSG_InitHuffman")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_DumpNetFieldChanges_f() -> void
{
  return Zynamic::Forward<void ()>(L"MSG_DumpNetFieldChanges_f")();
}

#endif // __UNIMPLEMENTED__
