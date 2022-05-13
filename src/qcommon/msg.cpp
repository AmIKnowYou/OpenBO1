//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MSG_ReadValueNoXor(struct msg_t* msg, const int bits) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int)>(L"MSG_ReadValueNoXor")(msg, bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadValue(struct msg_t* msg, const int* fromF, int* toF, const int bits, const int size) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int*, int*, const int, const int)>(L"MSG_ReadValue")(msg, fromF, toF, bits, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaAngle(struct msg_t* msg, const float oldFloat) -> float
{
  return Zynamic::Forward<float (struct msg_t*, const float)>(L"MSG_ReadDeltaAngle")(msg, oldFloat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadLastChangedField(struct msg_t* msg, int totalFields) -> int
{
  return Zynamic::Forward<int (struct msg_t*, int)>(L"MSG_ReadLastChangedField")(msg, totalFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadNumFieldsSkipped(struct msg_t* msg, const int skippedFieldBits, const int maxVal) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const int)>(L"MSG_ReadNumFieldsSkipped")(msg, skippedFieldBits, maxVal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_CopyFieldOver(const struct NetField* stateFields, const void* from, void* to, const int fieldNum) -> void
{
  return Zynamic::Forward<void (const struct NetField*, const void*, void*, const int)>(L"MSG_CopyFieldOver")(stateFields, from, to, fieldNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaFields(struct msg_t* msg, const int time, const void* from, void* to, int numFields, const struct NetField* stateFields, const int skippedFieldBits, const bool isEntity) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const int, const void*, void*, int, const struct NetField*, const int, const bool)>(L"MSG_ReadDeltaFields")(msg, time, from, to, numFields, stateFields, skippedFieldBits, isEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, int numFields, int indexBits, const struct NetField* stateFields, const int skippedFieldBits, const bool isEntity) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const void*, void*, unsigned int, int, int, const struct NetField*, const int, const bool)>(L"MSG_ReadDeltaStruct")(msg, time, from, to, number, numFields, indexBits, stateFields, skippedFieldBits, isEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaMatchState(struct msg_t* msg, const int time, const struct MatchState* from, const struct MatchState* to) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const int, const struct MatchState*, const struct MatchState*)>(L"MSG_ReadDeltaMatchState")(msg, time, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaClient(struct msg_t* msg, const int time, const struct clientState_s* from, struct clientState_s* to, int number) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const struct clientState_s*, struct clientState_s*, int)>(L"MSG_ReadDeltaClient")(msg, time, from, to, number);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaEntity(struct msg_t* msg, const int time, const struct entityState_s* from, struct entityState_s* to, int number) -> int
{
  return Zynamic::Forward<int (struct msg_t*, const int, const struct entityState_s*, struct entityState_s*, int)>(L"MSG_ReadDeltaEntity")(msg, time, from, to, number);
}

#endif // __UNIMPLEMENTED__
