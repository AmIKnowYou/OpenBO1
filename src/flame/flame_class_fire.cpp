//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_flame_class_fire() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_flame_class_fire")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Class_Fire_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Alloc(bool is_server) -> struct flameFire_t*
{
  return Zynamic::Forward<struct flameFire_t* (bool)>(L"Flame_Class_Fire_Alloc")(is_server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Free(bool is_server, struct flameFire_t* fire) -> void
{
  return Zynamic::Forward<void (bool, struct flameFire_t*)>(L"Flame_Class_Fire_Free")(is_server, fire);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Age(bool is_server, int time, int localClientNum) -> void
{
  return Zynamic::Forward<void (bool, int, int)>(L"Flame_Class_Fire_Age")(is_server, time, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Spawn(bool is_server, struct flameChunk_s* fromChunk, int curTime, float minLifeFrac) -> struct flameFire_t*
{
  return Zynamic::Forward<struct flameFire_t* (bool, struct flameChunk_s*, int, float)>(L"Flame_Class_Fire_Spawn")(is_server, fromChunk, curTime, minLifeFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Render_Item(int localClientNum, struct flameFire_t* fire) -> void
{
  return Zynamic::Forward<void (int, struct flameFire_t*)>(L"Flame_Class_Fire_Render_Item")(localClientNum, fire);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Render_All(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Flame_Class_Fire_Render_All")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Fire_Render_Local_List(int localClientNum, struct flameFire_t* start) -> void
{
  return Zynamic::Forward<void (int, struct flameFire_t*)>(L"Flame_Class_Fire_Render_Local_List")(localClientNum, start);
}

#endif // __UNIMPLEMENTED__
