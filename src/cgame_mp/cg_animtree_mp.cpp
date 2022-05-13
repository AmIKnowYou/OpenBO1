//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocXAnimCreate(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocXAnimCreate")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CGScr_LoadAnimTrees() -> void
{
  return Zynamic::Forward<void ()>(L"CGScr_LoadAnimTrees")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeClientDObjInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_FreeClientDObjInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetDObjInfo(int localClientNum, int iEntNum, int iEntType, struct XModel* pXModel) -> void
{
  return Zynamic::Forward<void (int, int, int, struct XModel*)>(L"CG_SetDObjInfo")(localClientNum, iEntNum, iEntType, pXModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckDObjInfoMatches(int localClientNum, int iEntNum, int iEntType, struct XModel* pXModel) -> int
{
  return Zynamic::Forward<int (int, int, int, struct XModel*)>(L"CG_CheckDObjInfoMatches")(localClientNum, iEntNum, iEntType, pXModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SafeDObjFree(int localClientNum, int entIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_SafeDObjFree")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeEntityDObjInfo(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_FreeEntityDObjInfo")(localClientNum);
}

#endif // __UNIMPLEMENTED__
