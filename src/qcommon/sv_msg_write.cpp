//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_msg() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_msg")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_LoopThroughFields(const struct NetFieldList* fieldToCheck) -> void
{
  return Zynamic::Forward<void (const struct NetFieldList*)>(L"MSG_LoopThroughFields")(fieldToCheck);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_CheckForDuplicateOffsets() -> void
{
  return Zynamic::Forward<void ()>(L"MSG_CheckForDuplicateOffsets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetStateFieldListForEntityType(const int eType, bool isDemoSnapshot) -> const struct NetFieldList*
{
  return Zynamic::Forward<const struct NetFieldList* (const int, bool)>(L"MSG_GetStateFieldListForEntityType")(eType, isDemoSnapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetNetFieldList(enum netFieldTypes_t fieldType, bool isDemoSnapshot) -> const struct NetFieldList*
{
  return Zynamic::Forward<const struct NetFieldList* (enum netFieldTypes_t, bool)>(L"MSG_GetNetFieldList")(fieldType, isDemoSnapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteReliableCommandToBuffer(const char* pszCommand, char** pszBuffer, char* allocBufferBase, int allocBufferLength, int* allocBufferPos) -> void
{
  return Zynamic::Forward<void (const char*, char**, char*, int, int*)>(L"MSG_WriteReliableCommandToBuffer")(pszCommand, pszBuffer, allocBufferBase, allocBufferLength, allocBufferPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_PacketAnalyze_WriteOriginFloat_Delta(const int clientNum, struct msg_t* msg, int bits, float value, int roundedValue, int roundedOldValue) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, int, float, int, int)>(L"MSG_PacketAnalyze_WriteOriginFloat_Delta")(clientNum, msg, bits, value, roundedValue, roundedOldValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteOriginFloat(const struct SnapshotInfo_s* snapInfo, const int clientNum, struct msg_t* msg, int bits, float value, float oldValue) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, const int, struct msg_t*, int, float, float)>(L"MSG_WriteOriginFloat")(snapInfo, clientNum, msg, bits, value, oldValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_PacketAnalyze_WriteOriginZFloat_Delta(const struct SnapshotInfo_s* snapInfo, const int clientNum, struct msg_t* msg, float value, int roundedValue, int roundedOldValue, int truncDelta) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, const int, struct msg_t*, float, int, int, int)>(L"MSG_PacketAnalyze_WriteOriginZFloat_Delta")(snapInfo, clientNum, msg, value, roundedValue, roundedOldValue, truncDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteOriginZFloat(const struct SnapshotInfo_s* snapInfo, const int clientNum, struct msg_t* msg, float value, float oldValue) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, const int, struct msg_t*, float, float)>(L"MSG_WriteOriginZFloat")(snapInfo, clientNum, msg, value, oldValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDemoRoundedFloat(struct msg_t* msg, int bits, float value, float oldValue, int diffBits, int fullBits) -> void
{
  return Zynamic::Forward<void (struct msg_t*, int, float, float, int, int)>(L"MSG_WriteDemoRoundedFloat")(msg, bits, value, oldValue, diffBits, fullBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ValuesAreEqual(const int clientNum, int bits, int size, const int* fromF, const int* toF) -> bool
{
  return Zynamic::Forward<bool (const int, int, int, const int*, const int*)>(L"MSG_ValuesAreEqual")(clientNum, bits, size, fromF, toF);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ShouldSendPSField(const struct SnapshotInfo_s* snapInfo, bool sendOriginAndVel, const struct playerState_s* ps, const struct playerState_s* oldPs, const struct NetField* field) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, bool, const struct playerState_s*, const struct playerState_s*, const struct NetField*)>(L"MSG_ShouldSendPSField")(snapInfo, sendOriginAndVel, ps, oldPs, field);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityIndex(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int index, const int indexBits) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const int, const int)>(L"MSG_WriteEntityIndex")(snapInfo, msg, index, indexBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteLastChangedField(struct msg_t* msg, const int lastChangedFieldNum, int numFields) -> void
{
  return Zynamic::Forward<void (struct msg_t*, const int, int)>(L"MSG_WriteLastChangedField")(msg, lastChangedFieldNum, numFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaTime(const int clientNum, struct msg_t* msg, int timeBase, int time) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, int, int)>(L"MSG_WriteDeltaTime")(clientNum, msg, timeBase, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaFrameTime(const int clientNum, struct msg_t* msg, int timeBase, int time) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, int, int)>(L"MSG_WriteDeltaFrameTime")(clientNum, msg, timeBase, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEFlags(const int clientNum, struct msg_t* msg, const int oldFlags, const int newFlags) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, const int, const int)>(L"MSG_WriteEFlags")(clientNum, msg, oldFlags, newFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEventNum(const int clientNum, struct msg_t* msg, int eventNum) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, int)>(L"MSG_WriteEventNum")(clientNum, msg, eventNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEventParam(const int clientNum, struct msg_t* msg, int eventParam) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, int)>(L"MSG_WriteEventParam")(clientNum, msg, eventParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_HighBitNumber(unsigned int v) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"MSG_HighBitNumber")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteRangedFloat(const int clientNum, struct msg_t* msg, const float oldValue, const float value, const float begin, const float end, const int precision, const bool oftenZeroOrOne, const char* fieldName) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const int, struct msg_t*, const float, const float, const float, const float, const int, const bool, const char*)>(L"MSG_WriteRangedFloat")(clientNum, msg, oldValue, value, begin, end, precision, oftenZeroOrOne, fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetPacketEntityTypeForEType(int eType) -> enum PacketEntityType
{
  return Zynamic::Forward<enum PacketEntityType (int)>(L"MSG_GetPacketEntityTypeForEType")(eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_EncodeSkippedFields(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, int numFieldsSkipped, const int skippedFieldBits) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, int, const int)>(L"MSG_EncodeSkippedFields")(snapInfo, msg, numFieldsSkipped, skippedFieldBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteValueNoXor(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, int value, const int bits, const char* fieldName) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, int, const int, const char*)>(L"MSG_WriteValueNoXor")(snapInfo, msg, value, bits, fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteValue(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int* fromF, const int* toF, const int bits, const int size, const char* fieldName) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const int*, const int*, const int, const int, const char*)>(L"MSG_WriteValue")(snapInfo, msg, fromF, toF, bits, size, fieldName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaAngle(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const float oldFloat, const float fullFloat) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const float, const float)>(L"MSG_WriteDeltaAngle")(snapInfo, msg, oldFloat, fullFloat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaField_Internal(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const struct NetField* field, const int fieldNum, const int* fromF, const int* toF) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, struct msg_t*, const int, const unsigned char*, const unsigned char*, const struct NetField*, const int, const int*, const int*)>(L"MSG_WriteDeltaField_Internal")(snapInfo, msg, time, from, to, field, fieldNum, fromF, toF);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaField(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const struct NetField* field, const int fieldNum, const bool forceSend, const bool xorValue, const int lastChangedField, const int skippedFieldBits, const bool sendSkippedFields) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, struct msg_t*, const int, const unsigned char*, const unsigned char*, const struct NetField*, const int, const bool, const bool, const int, const int, const bool)>(L"MSG_WriteDeltaField")(snapInfo, msg, time, from, to, field, fieldNum, forceSend, xorValue, lastChangedField, skippedFieldBits, sendSkippedFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaFields(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const int force, int lastChanged, int numFields, const struct NetField* stateFields, const int skippedFieldBits, bool writeEntUnlinkBit, bool isEntity) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const int, const unsigned char*, const unsigned char*, const int, int, int, const struct NetField*, const int, bool, bool)>(L"MSG_WriteDeltaFields")(snapInfo, msg, time, from, to, force, lastChanged, numFields, stateFields, skippedFieldBits, writeEntUnlinkBit, isEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityRemoval(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, unsigned char* from, int indexBits, bool changeBit) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, struct msg_t*, unsigned char*, int, bool)>(L"MSG_WriteEntityRemoval")(snapInfo, msg, from, indexBits, changeBit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityDeltaForEType(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, int eType, const struct entityState_s* from, const struct entityState_s* to, enum DeltaFlags flags) -> int
{
  return Zynamic::Forward<int (struct SnapshotInfo_s*, struct msg_t*, const int, int, const struct entityState_s*, const struct entityState_s*, enum DeltaFlags)>(L"MSG_WriteEntityDeltaForEType")(snapInfo, msg, time, eType, from, to, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_TrTypeUsesTrDuration(const int trType) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"MSG_TrTypeUsesTrDuration")(trType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ShouldEntityFieldBeForcedSent(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, const struct entityState_s*, const struct entityState_s*, const struct NetField*)>(L"MSG_ShouldEntityFieldBeForcedSent")(snapInfo, from, to, field);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ShouldEntityFieldBeForcedHidden(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, const struct entityState_s*, const struct entityState_s*, const struct NetField*)>(L"MSG_ShouldEntityFieldBeForcedHidden")(snapInfo, from, to, field);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ShouldSendEntityField(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field) -> bool
{
  return Zynamic::Forward<bool (const struct SnapshotInfo_s*, const struct entityState_s*, const struct entityState_s*, const struct NetField*)>(L"MSG_ShouldSendEntityField")(snapInfo, from, to, field);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct entityState_s* from, const struct entityState_s* to, enum DeltaFlags flags) -> int
{
  return Zynamic::Forward<int (struct SnapshotInfo_s*, struct msg_t*, const int, const struct entityState_s*, const struct entityState_s*, enum DeltaFlags)>(L"MSG_WriteEntity")(snapInfo, msg, time, from, to, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaClient(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct clientState_s* from, const struct clientState_s* to, int force) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, struct msg_t*, const int, const struct clientState_s*, const struct clientState_s*, int)>(L"MSG_WriteDeltaClient")(snapInfo, msg, time, from, to, force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WithinAllowedPredictionError(float dist, const struct playerState_s* to) -> bool
{
  return Zynamic::Forward<bool (float, const struct playerState_s*)>(L"MSG_WithinAllowedPredictionError")(dist, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetLastChangedField(const struct SnapshotInfo_s* snapInfo, const unsigned char* from, const unsigned char* to, int numFields, const struct NetField* stateFields) -> int
{
  return Zynamic::Forward<int (const struct SnapshotInfo_s*, const unsigned char*, const unsigned char*, int, const struct NetField*)>(L"MSG_GetLastChangedField")(snapInfo, from, to, numFields, stateFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaPlayerstate(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct playerState_s* from, const struct playerState_s* to) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, struct msg_t*, const int, const struct playerState_s*, const struct playerState_s*)>(L"MSG_WriteDeltaPlayerstate")(snapInfo, msg, time, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaMatchState(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct MatchState* from, const struct MatchState* to) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, struct msg_t*, const int, const struct MatchState*, const struct MatchState*)>(L"MSG_WriteDeltaMatchState")(snapInfo, msg, time, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaHudElems_LastChangedField(struct SnapshotInfo_s* snapInfo, int i, const struct hudelem_s* from, const struct hudelem_s* to) -> int
{
  return Zynamic::Forward<int (struct SnapshotInfo_s*, int, const struct hudelem_s*, const struct hudelem_s*)>(L"MSG_WriteDeltaHudElems_LastChangedField")(snapInfo, i, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaHudElems_ValidateHudElem(const struct hudelem_s* from, const struct hudelem_s* to) -> void
{
  return Zynamic::Forward<void (const struct hudelem_s*, const struct hudelem_s*)>(L"MSG_WriteDeltaHudElems_ValidateHudElem")(from, to);
}

#endif // __UNIMPLEMENTED__
