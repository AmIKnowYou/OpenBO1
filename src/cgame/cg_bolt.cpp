//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_InitBolt(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_InitBolt")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddBolt(int localClientNum, int targetEntityNum, int weapon, const float* position, const float* normal, unsigned char tagIndex, int physUserBody) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, int, int, const float*, const float*, unsigned char, int)>(L"CG_AddBolt")(localClientNum, targetEntityNum, weapon, position, normal, tagIndex, physUserBody);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateBolt(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_UpdateBolt")(localClientNum);
}

#endif // __UNIMPLEMENTED__
