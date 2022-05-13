//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MSG_EntityIsLinked(const struct entityState_s* ent) -> bool
{
  return Zynamic::Forward<bool (const struct entityState_s*)>(L"MSG_EntityIsLinked")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteGroundEntityNum(const int clientNum, struct msg_t* msg, const int groundEntityNum) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*, const int)>(L"MSG_WriteGroundEntityNum")(clientNum, msg, groundEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaField_Default(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const struct NetField* field, const int* fromF, const int* toF) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const struct NetField*, const int*, const int*)>(L"MSG_WriteDeltaField_Default")(snapInfo, msg, field, fromF, toF);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaStruct(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, unsigned char* from, unsigned char* to, int force, int numFields, int indexBits, const struct NetField* stateFields, int bChangeBit, int skippedFieldBits, bool isEntity) -> int
{
  return Zynamic::Forward<int (struct SnapshotInfo_s*, struct msg_t*, const int, unsigned char*, unsigned char*, int, int, int, const struct NetField*, int, int, bool)>(L"MSG_WriteDeltaStruct")(snapInfo, msg, time, from, to, force, numFields, indexBits, stateFields, bChangeBit, skippedFieldBits, isEntity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteAppendedDeltaStruct(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, unsigned char* from, unsigned char* to, int force, int numFields, int indexBits, const struct NetField* stateFields, int bChangeBit, int skippedFieldBits) -> int
{
  return Zynamic::Forward<int (struct SnapshotInfo_s*, struct msg_t*, const int, unsigned char*, unsigned char*, int, int, int, const struct NetField*, int, int)>(L"MSG_WriteAppendedDeltaStruct")(snapInfo, msg, time, from, to, force, numFields, indexBits, stateFields, bChangeBit, skippedFieldBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityDeltaFields(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct entityState_s* fromES, const struct entityState_s* toES, const int force, int lastChanged, int numFields, const struct NetField* stateFields, const int skippedFieldBits, int* fieldsChanged) -> void
{
  return Zynamic::Forward<void (const struct SnapshotInfo_s*, struct msg_t*, const int, const struct entityState_s*, const struct entityState_s*, const int, int, int, const struct NetField*, const int, int*)>(L"MSG_WriteEntityDeltaFields")(snapInfo, msg, time, fromES, toES, force, lastChanged, numFields, stateFields, skippedFieldBits, fieldsChanged);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityDelta(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct entityState_s* fromES, const struct entityState_s* toES, enum DeltaFlags flags, int numFields, int indexBits, const struct NetField* stateFields) -> int
{
  return Zynamic::Forward<int (const struct SnapshotInfo_s*, struct msg_t*, const int, const struct entityState_s*, const struct entityState_s*, enum DeltaFlags, int, int, const struct NetField*)>(L"MSG_WriteEntityDelta")(snapInfo, msg, time, fromES, toES, flags, numFields, indexBits, stateFields);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaArchivedEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct archivedEntity_s* from, const struct archivedEntity_s* to, enum DeltaFlags flags) -> bool
{
  return Zynamic::Forward<bool (struct SnapshotInfo_s*, struct msg_t*, const int, const struct archivedEntity_s*, const struct archivedEntity_s*, enum DeltaFlags)>(L"MSG_WriteDeltaArchivedEntity")(snapInfo, msg, time, from, to, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaHudElems(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct hudelem_s* from, const struct hudelem_s* to, int count) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, struct msg_t*, const int, const struct hudelem_s*, const struct hudelem_s*, int)>(L"MSG_WriteDeltaHudElems")(snapInfo, msg, time, from, to, count);
}

#endif // __UNIMPLEMENTED__
