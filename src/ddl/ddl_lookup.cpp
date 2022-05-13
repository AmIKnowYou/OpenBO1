//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_IsMemberAtOffset(struct ddlMemberDef_t* member, int parentOffset, struct ddlDef_t* ddl, int searchOffset, int& arrayIndex) -> int
{
  return Zynamic::Forward<int (struct ddlMemberDef_t*, int, struct ddlDef_t*, int, int&)>(L"DDL_Lookup_IsMemberAtOffset")(member, parentOffset, ddl, searchOffset, arrayIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_FindInStruct(struct ddlStructDef_t* structDef, struct ddlDef_t* ddl, int parentOffset, int searchOffset, int& arrayIndex) -> struct ddlMemberDef_t*
{
  return Zynamic::Forward<struct ddlMemberDef_t* (struct ddlStructDef_t*, struct ddlDef_t*, int, int, int&)>(L"DDL_Lookup_FindInStruct")(structDef, ddl, parentOffset, searchOffset, arrayIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_GetMemberFromOffset(int offset, const struct ddlState_t* searchState, int& arrayIndex) -> struct ddlMemberDef_t*
{
  return Zynamic::Forward<struct ddlMemberDef_t* (int, const struct ddlState_t*, int&)>(L"DDL_Lookup_GetMemberFromOffset")(offset, searchState, arrayIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_ClearState(struct ddlState_t* searchState) -> void
{
  return Zynamic::Forward<void (struct ddlState_t*)>(L"DDL_Lookup_ClearState")(searchState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_FindMemberDef(const char* memberName, struct ddlStructDef_t* structDef) -> struct ddlMemberDef_t*
{
  return Zynamic::Forward<struct ddlMemberDef_t* (const char*, struct ddlStructDef_t*)>(L"DDL_Lookup_FindMemberDef")(memberName, structDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_MoveToIndex(const struct ddlState_t* searchState, int arrayIndex, struct ddlState_t* resultState, int checkValidIndex) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, int, struct ddlState_t*, int)>(L"DDL_Lookup_MoveToIndex")(searchState, arrayIndex, resultState, checkValidIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_MoveTo(const struct ddlState_t* searchState, const char* name, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, const char*, struct ddlState_t*)>(L"DDL_Lookup_MoveTo")(searchState, name, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_MoveNext(const struct ddlState_t* searchState, struct ddlState_t* resultState) -> int
{
  return Zynamic::Forward<int (const struct ddlState_t*, struct ddlState_t*)>(L"DDL_Lookup_MoveNext")(searchState, resultState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DDL_Lookup_MoveToStart(struct ddlState_t* resultState, struct ddlDef_t* ddl) -> int
{
  return Zynamic::Forward<int (struct ddlState_t*, struct ddlDef_t*)>(L"DDL_Lookup_MoveToStart")(resultState, ddl);
}

#endif // __UNIMPLEMENTED__
