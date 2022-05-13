//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_IsLeaf(struct ddlMemberDef_t* member) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*)>(L"DDL_Lookup_IsLeaf")(member);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Converter_CopyStates(const struct ddlState_t* const stateFrom, char* bufferFrom, const struct ddlState_t* const stateTo, char* bufferTo) -> void
{
  return Zynamic::Forward<void (const struct ddlState_t* const, char*, const struct ddlState_t* const, char*)>(L"DDL_Converter_CopyStates")(stateFrom, bufferFrom, stateTo, bufferTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Converter_ProcessStates(const struct ddlStructDef_t* const structDef, const int structMemberItr, const struct ddlState_t* const oldState, const struct ddlState_t* const newState, char* oldBuffer, char* newBuffer) -> void
{
  return Zynamic::Forward<void (const struct ddlStructDef_t* const, const int, const struct ddlState_t* const, const struct ddlState_t* const, char*, char*)>(L"DDL_Converter_ProcessStates")(structDef, structMemberItr, oldState, newState, oldBuffer, newBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Converter_TraverseStruct(const struct ddlStructDef_t* const structDef, const struct ddlState_t* const oldBaseState, const struct ddlState_t* const newBaseState, char* oldBuffer, char* newBuffer) -> void
{
  return Zynamic::Forward<void (const struct ddlStructDef_t* const, const struct ddlState_t* const, const struct ddlState_t* const, char*, char*)>(L"DDL_Converter_TraverseStruct")(structDef, oldBaseState, newBaseState, oldBuffer, newBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Converter_Versions(struct ddlDef_t* ddlVersionFrom, struct ddlDef_t* ddlVersionTo, char* buffer, char* backupBuffer, int bufferSize) -> int
{
  return Zynamic::Forward<int (struct ddlDef_t*, struct ddlDef_t*, char*, char*, int)>(L"DDL_Converter_Versions")(ddlVersionFrom, ddlVersionTo, buffer, backupBuffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
