//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Flame_ClipVelocity(const float* in, const float* normal, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Flame_ClipVelocity")(in, normal, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'sv_flame_proftimer''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'sv_flame_proftimer''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cl_flame_proftimer''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cl_flame_proftimer''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto trace_sphere(struct trace_t* trace, const float* start, const float* end, float radius, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (struct trace_t*, const float*, const float*, float, struct col_context_t&)>(L"trace_sphere")(trace, start, end, radius, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Server_Trace(struct trace_t* trace, struct flameGeneric_s* gen, const float* startPos, const float* mins, const float* maxs, const float* endPos, struct col_context_t& context, unsigned short& dynEnts[0x2], const int* dynEntsCount, int* ents, int entsCount, int* close_characters, int& close_characters_count, int* close_triggers, int& close_triggers_count) -> void
{
  return Zynamic::Forward<void (struct trace_t*, struct flameGeneric_s*, const float*, const float*, const float*, const float*, struct col_context_t&, unsigned short&[0x2], const int*, int*, int, int*, int&, int*, int&)>(L"Flame_Server_Trace")(trace, gen, startPos, mins, maxs, endPos, context, dynEnts, dynEntsCount, ents, entsCount, close_characters, close_characters_count, close_triggers, close_triggers_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Client_Trace(struct trace_t* trace, struct flameGeneric_s* gen, const float* startPos, const float* mins, const float* maxs, const float* endPos, struct col_context_t& context, unsigned short& dynEnts[0x2], const int* dynEntsCount, int* ents, int entsCount, int* close_characters, int& close_characters_count) -> void
{
  return Zynamic::Forward<void (struct trace_t*, struct flameGeneric_s*, const float*, const float*, const float*, const float*, struct col_context_t&, unsigned short&[0x2], const int*, int*, int, int*, int&)>(L"Flame_Client_Trace")(trace, gen, startPos, mins, maxs, endPos, context, dynEnts, dynEntsCount, ents, entsCount, close_characters, close_characters_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Collision(bool is_server, struct trace_t* trace, struct flameGeneric_s* gen, struct col_context_t& context, unsigned short& dynEnts[0x2], const int* dynEntsCount, int* ents, int entsCount, int* close_characters, int& close_characters_count, int* close_triggers, int& close_triggers_count) -> void
{
  return Zynamic::Forward<void (bool, struct trace_t*, struct flameGeneric_s*, struct col_context_t&, unsigned short&[0x2], const int*, int*, int, int*, int&, int*, int&)>(L"Flame_Phys_Collision")(is_server, trace, gen, context, dynEnts, dynEntsCount, ents, entsCount, close_characters, close_characters_count, close_triggers, close_triggers_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Collision_Response(bool is_server, struct trace_t* trace, struct flameGeneric_s* gen) -> void
{
  return Zynamic::Forward<void (bool, struct trace_t*, struct flameGeneric_s*)>(L"Flame_Phys_Collision_Response")(is_server, trace, gen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Impact_Process(bool is_server, struct flameGeneric_s* gen, struct trace_t* trace, int* models, int models_count) -> void
{
  return Zynamic::Forward<void (bool, struct flameGeneric_s*, struct trace_t*, int*, int)>(L"Flame_Impact_Process")(is_server, gen, trace, models, models_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Items(bool is_server, int localClientNum) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Flame_Phys_Update_Items")(is_server, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'sv_flame_chunks_proximity_cache''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'sv_flame_chunks_proximity_cache''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cl_flame_chunks_proximity_cache''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cl_flame_chunks_proximity_cache''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Items_PerStream(bool is_server, int nitems, struct flameGeneric_s** items, int localClientNum) -> void
{
  return Zynamic::Forward<void (bool, int, struct flameGeneric_s**, int)>(L"Flame_Phys_Update_Items_PerStream")(is_server, nitems, items, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Item_Stream(struct flameGeneric_s* gen, int time, class phys_static_array<flameGeneric_s*, 1000>& flames) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, class phys_static_array<flameGeneric_s *,1000>&)>(L"Flame_Phys_Update_Item_Stream")(gen, time, flames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Item_Chunk(struct flameGeneric_s* gen, int time, class phys_static_array<flameGeneric_s*, 1000>& flames) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, class phys_static_array<flameGeneric_s *,1000>&)>(L"Flame_Phys_Update_Item_Chunk")(gen, time, flames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Item_Fire(struct flameGeneric_s* gen, int time, class phys_static_array<flameGeneric_s*, 1000>& flames) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, class phys_static_array<flameGeneric_s *,1000>&)>(L"Flame_Phys_Update_Item_Fire")(gen, time, flames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Item_Smoke(struct flameGeneric_s* gen, int time, class phys_static_array<flameGeneric_s*, 1000>& flames) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, class phys_static_array<flameGeneric_s *,1000>&)>(L"Flame_Phys_Update_Item_Smoke")(gen, time, flames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Phys_Update_Item_Drip(struct flameGeneric_s* gen, int time, class phys_static_array<flameGeneric_s*, 1000>& flames) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, class phys_static_array<flameGeneric_s *,1000>&)>(L"Flame_Phys_Update_Item_Drip")(gen, time, flames);
}

#endif // __UNIMPLEMENTED__
