//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_CG_CollWorld() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_CG_CollWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearEntityCollWorld(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearEntityCollWorld")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddEntityToCollSector(int localClientNum, int entIndex, unsigned short sectorIndex) -> void
{
  return Zynamic::Forward<void (int, int, unsigned short)>(L"CG_AddEntityToCollSector")(localClientNum, entIndex, sectorIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AllocEntityCollSector(int localClientNum, const float* mins, const float* maxs) -> unsigned short
{
  return Zynamic::Forward<unsigned short (int, const float*, const float*)>(L"CG_AllocEntityCollSector")(localClientNum, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SortEntityCollSector(int localClientNum, unsigned short sectorIndex, const float* mins, const float* maxs) -> void
{
  return Zynamic::Forward<void (int, unsigned short, const float*, const float*)>(L"CG_SortEntityCollSector")(localClientNum, sectorIndex, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UnlinkEntityColl(int localClientNum, int entIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_UnlinkEntityColl")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LinkEntityColl(int localClientNum, int entIndex, const float* absMins, const float* absMaxs) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const float*)>(L"CG_LinkEntityColl")(localClientNum, entIndex, absMins, absMaxs);
}

#endif // __UNIMPLEMENTED__
