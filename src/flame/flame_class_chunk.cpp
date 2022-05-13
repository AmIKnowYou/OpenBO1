//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_flame_class_chunk() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_flame_class_chunk")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Class_Chunk_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Alloc(bool is_server) -> struct flameChunk_s*
{
  return Zynamic::Forward<struct flameChunk_s* (bool)>(L"Flame_Class_Chunk_Alloc")(is_server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Free(bool is_server, struct flameChunk_s* chunk) -> void
{
  return Zynamic::Forward<void (bool, struct flameChunk_s*)>(L"Flame_Class_Chunk_Free")(is_server, chunk);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Spawn_Items(bool is_server, int curTime, struct flameChunk_s* trav) -> void
{
  return Zynamic::Forward<void (bool, int, struct flameChunk_s*)>(L"Flame_Phys_Spawn_Items")(is_server, curTime, trav);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Age(bool is_server, int time, int localClientNum) -> void
{
  return Zynamic::Forward<void (bool, int, int)>(L"Flame_Class_Chunk_Age")(is_server, time, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Spawn(bool is_server, struct flameChunkSpawnVars_t* spawnVars, struct flameChunk_s** chunkList, float* velocityAdd, struct flameTable* fTable) -> struct flameChunk_s*
{
  return Zynamic::Forward<struct flameChunk_s* (bool, struct flameChunkSpawnVars_t*, struct flameChunk_s**, float*, struct flameTable*)>(L"Flame_Class_Chunk_Spawn")(is_server, spawnVars, chunkList, velocityAdd, fTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Render_Item(int localClientNum, struct flameChunk_s* chunk) -> void
{
  return Zynamic::Forward<void (int, struct flameChunk_s*)>(L"Flame_Class_Chunk_Render_Item")(localClientNum, chunk);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Class_Chunk_Render_All(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Flame_Class_Chunk_Render_All")(localClientNum);
}

#endif // __UNIMPLEMENTED__
