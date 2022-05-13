//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DDL_Init() -> void
{
  return Zynamic::Forward<void ()>(L"DDL_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetTotalBufferBitSize(struct ddlDef_t* ddl) -> int
{
  return Zynamic::Forward<int (struct ddlDef_t*)>(L"DDL_GetTotalBufferBitSize")(ddl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Printf(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_Printf")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_NoCheckPrintf(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_NoCheckPrintf")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_PrintWarning(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_PrintWarning")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_NoCheckPrintWarning(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_NoCheckPrintWarning")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_PrintError(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_PrintError")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_NoCheckPrintError(const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"DDL_NoCheckPrintError")(fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_IsStateReadyForIO(const struct ddlState_t* state) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*)>(L"DDL_IsStateReadyForIO")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_AssociateBuffer(char* buffer, int bufferSize, struct ddlDef_t* ddl) -> int
{
  return Zynamic::Forward<int (char*, int, struct ddlDef_t*)>(L"DDL_AssociateBuffer")(buffer, bufferSize, ddl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_FixBufferVersion(char* buffer, struct ddlDef_t* ddlTo, const char* ddlName, char* backupBuffer, int bufferSize) -> int
{
  return Zynamic::Forward<int (char*, struct ddlDef_t*, const char*, char*, int)>(L"DDL_FixBufferVersion")(buffer, ddlTo, ddlName, backupBuffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_LoadAssetWithVersion(const char* fileName, int version) -> struct ddlDef_t*
{
  return Zynamic::Forward<struct ddlDef_t* (const char*, int)>(L"DDL_LoadAssetWithVersion")(fileName, version);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_LoadAsset(const char* fileName) -> struct ddlDef_t*
{
  return Zynamic::Forward<struct ddlDef_t* (const char*)>(L"DDL_LoadAsset")(fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_CopyFromBaseState(struct ddlState_t* newState, const struct ddlState_t* baseState) -> void
{
  return Zynamic::Forward<void (struct ddlState_t*, const struct ddlState_t*)>(L"DDL_CopyFromBaseState")(newState, baseState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Reset(struct ddlState_t* searchState, struct ddlDef_t* ddl) -> void
{
  return Zynamic::Forward<void (struct ddlState_t*, struct ddlDef_t*)>(L"DDL_Reset")(searchState, ddl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveTo(const struct ddlState_t* searchState, struct ddlState_t* resultState, int argNum, ...) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*, int, ...)>(L"DDL_MoveTo")(searchState, resultState, argNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveToPath(const struct ddlState_t* searchState, struct ddlState_t* resultState, int depth, const char** ddlPath) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*, int, const char**)>(L"DDL_MoveToPath")(searchState, resultState, depth, ddlPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveToStart(struct ddlState_t* searchState, struct ddlDef_t* ddl) -> int
{
  return Zynamic::Forward<int (struct ddlState_t*, struct ddlDef_t*)>(L"DDL_MoveToStart")(searchState, ddl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveToName(const struct ddlState_t* searchState, struct ddlState_t* resultState, const char* name) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*, const char*)>(L"DDL_MoveToName")(searchState, resultState, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveToIndex(const struct ddlState_t* searchState, struct ddlState_t* resultState, int arrayIndex, int checkValidIndex) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*, int, int)>(L"DDL_MoveToIndex")(searchState, resultState, arrayIndex, checkValidIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_MoveNext(const struct ddlState_t* searchState, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*)>(L"DDL_MoveNext")(searchState, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_IterateNext(const struct ddlState_t* searchState, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*)>(L"DDL_IterateNext")(searchState, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_IteratePrev(const struct ddlState_t* searchState, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*)>(L"DDL_IteratePrev")(searchState, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_IterateFirst(const struct ddlState_t* searchState, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*)>(L"DDL_IterateFirst")(searchState, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetValueChanged(char* buffer) -> void
{
  return Zynamic::Forward<void (char*)>(L"DDL_SetValueChanged")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_WriteIntValueIfChanged(char* buffer, int offset, int size, unsigned int valueToInsert) -> enum ddlIntValueChanged_e
{
  return Zynamic::Forward<enum ddlIntValueChanged_e (char*, int, int, unsigned int)>(L"DDL_WriteIntValueIfChanged")(buffer, offset, size, valueToInsert);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetRawBytes(char* buffer, int offset, int size, const char* valueToInsert) -> int
{
  return Zynamic::Forward<int (char*, int, int, const char*)>(L"DDL_SetRawBytes")(buffer, offset, size, valueToInsert);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_WriteIntValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, unsigned int valueToInsert, char* buffer) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, unsigned int, char*)>(L"DDL_WriteIntValueInternal")(member, absoluteOffset, valueToInsert, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_WriteInt64ValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, unsigned __int64 valueToInsert, char* buffer) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, unsigned __int64, char*)>(L"DDL_WriteInt64ValueInternal")(member, absoluteOffset, valueToInsert, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_WriteStringValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, const char* value, char* buffer) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, const char*, char*)>(L"DDL_WriteStringValueInternal")(member, absoluteOffset, value, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_WriteValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, const char* valueToInsert, char* buffer) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, const char*, char*)>(L"DDL_WriteValueInternal")(member, absoluteOffset, valueToInsert, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetInt(const struct ddlState_t* searchState, unsigned int value, char* buffer) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, unsigned int, char*)>(L"DDL_SetInt")(searchState, value, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetInt64(const struct ddlState_t* searchState, unsigned __int64 value, char* buffer) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, unsigned __int64, char*)>(L"DDL_SetInt64")(searchState, value, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetString(const struct ddlState_t* searchState, const char* value, char* buffer) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, const char*, char*)>(L"DDL_SetString")(searchState, value, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetValue(const struct ddlState_t* searchState, const char* value, char* buffer) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, const char*, char*)>(L"DDL_SetValue")(searchState, value, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_SetUserFlag(char* buffer, int flagIndex, bool state) -> void
{
  return Zynamic::Forward<void (char*, int, bool)>(L"DDL_SetUserFlag")(buffer, flagIndex, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_ReadIntValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, char* buffer) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct ddlMemberDef_t*, int, char*)>(L"DDL_ReadIntValueInternal")(member, absoluteOffset, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_ReadInt64ValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, char* buffer) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (struct ddlMemberDef_t*, int, char*)>(L"DDL_ReadInt64ValueInternal")(member, absoluteOffset, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_ReadStringValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, char* buffer) -> const char*
{
  return Zynamic::Forward<const char* (struct ddlMemberDef_t*, int, char*)>(L"DDL_ReadStringValueInternal")(member, absoluteOffset, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_ReadValueInternal(struct ddlMemberDef_t* member, int absoluteOffset, union ddlResult_t& result, char* buffer) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, union ddlResult_t&, char*)>(L"DDL_ReadValueInternal")(member, absoluteOffset, result, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetInt64(const struct ddlState_t* searchState, char* buffer) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (const struct ddlState_t*, char*)>(L"DDL_GetInt64")(searchState, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetInt(const struct ddlState_t* searchState, char* buffer) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct ddlState_t*, char*)>(L"DDL_GetInt")(searchState, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetString(const struct ddlState_t* searchState, char* buffer) -> const char*
{
  return Zynamic::Forward<const char* (const struct ddlState_t*, char*)>(L"DDL_GetString")(searchState, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetValue(const struct ddlState_t* searchState, union ddlResult_t& result, char* buffer) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, union ddlResult_t&, char*)>(L"DDL_GetValue")(searchState, result, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetBits(char* buffer, int bitOffset, int bitSize, unsigned int* value) -> int
{
  return Zynamic::Forward<int (char*, int, int, unsigned int*)>(L"DDL_GetBits")(buffer, bitOffset, bitSize, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetHeaderVersion(char* buffer) -> int
{
  return Zynamic::Forward<int (char*)>(L"DDL_GetHeaderVersion")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_GetUserFlag(char* buffer, int flagIndex) -> bool
{
  return Zynamic::Forward<bool (char*, int)>(L"DDL_GetUserFlag")(buffer, flagIndex);
}

#endif // __UNIMPLEMENTED__
