//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_BuildRankXPTable() -> void
{
  return Zynamic::Forward<void ()>(L"CL_BuildRankXPTable")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMaxXP() -> int
{
  return Zynamic::Forward<int ()>(L"CL_GetMaxXP")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetMaxPrestige() -> int
{
  return Zynamic::Forward<int ()>(L"CL_GetMaxPrestige")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetRankForXp(int xp) -> int
{
  return Zynamic::Forward<int (int)>(L"CL_GetRankForXp")(xp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetRankData(int rank, enum rankTableColumns_t column) -> const char*
{
  return Zynamic::Forward<const char* (int, enum rankTableColumns_t)>(L"CL_GetRankData")(rank, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetRankIcon(int rank, int prestige, struct Material** handle) -> void
{
  return Zynamic::Forward<void (int, int, struct Material**)>(L"CL_GetRankIcon")(rank, prestige, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetRankIconName(int rank, int prestige) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"CL_GetRankIconName")(rank, prestige);
}

#endif // __UNIMPLEMENTED__
