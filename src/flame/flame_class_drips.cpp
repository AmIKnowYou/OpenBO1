//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Class_Drips_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Alloc(bool is_server) -> struct flameDrips_t*
{
  return Zynamic::Forward<struct flameDrips_t* (bool)>(L"Flame_Class_Drips_Alloc")(is_server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Free(bool is_server, struct flameDrips_t* fire) -> void
{
  return Zynamic::Forward<void (bool, struct flameDrips_t*)>(L"Flame_Class_Drips_Free")(is_server, fire);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Free_If_Stream(bool is_server, struct flameStream_s* stream) -> void
{
  return Zynamic::Forward<void (bool, struct flameStream_s*)>(L"Flame_Class_Drips_Free_If_Stream")(is_server, stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Age(bool is_server, int time, int localClientNum) -> void
{
  return Zynamic::Forward<void (bool, int, int)>(L"Flame_Class_Drips_Age")(is_server, time, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Spawn(bool is_server, struct flameChunk_s* fromChunk, int curTime, float minLifeFrac) -> struct flameDrips_t*
{
  return Zynamic::Forward<struct flameDrips_t* (bool, struct flameChunk_s*, int, float)>(L"Flame_Class_Drips_Spawn")(is_server, fromChunk, curTime, minLifeFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Render_Item(int localClientNum, struct flameDrips_t* fire) -> void
{
  return Zynamic::Forward<void (int, struct flameDrips_t*)>(L"Flame_Class_Drips_Render_Item")(localClientNum, fire);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Render_All(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Flame_Class_Drips_Render_All")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Drips_Render_Local_List(int localClientNum, struct flameDrips_t* start) -> void
{
  return Zynamic::Forward<void (int, struct flameDrips_t*)>(L"Flame_Class_Drips_Render_Local_List")(localClientNum, start);
}

#endif // __UNIMPLEMENTED__
