//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Source_Sound_Init(struct flameSource_t* source) -> void
{
  return Zynamic::Forward<void (struct flameSource_t*)>(L"Flame_Class_Source_Sound_Init")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Source_Sound(int localClientNum, bool isFiring, bool isFirstPerson, int time, struct flameTable* table, struct flameSource_t* source) -> void
{
  return Zynamic::Forward<void (int, bool, bool, int, struct flameTable*, struct flameSource_t*)>(L"Flame_Class_Source_Sound")(localClientNum, isFiring, isFirstPerson, time, table, source);
}

#endif // __UNIMPLEMENTED__
