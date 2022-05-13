//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Turret_PlaceTurret_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_Trace(const enum turret_handler handler, struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentmask, struct col_context_t& context) -> void
{
  return Zynamic::Forward<void (const enum turret_handler, struct trace_t*, const float*, const float*, const float*, const float*, int, int, struct col_context_t&)>(L"Turret_PlaceTurret_Trace")(handler, results, start, mins, maxs, end, passEntityNum, contentmask, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_UpdateFooting(const enum turret_handler handler, const int moverEntNum, struct trace_t* trace, float* outOrigin, float* outAxis[0x3]) -> int
{
  return Zynamic::Forward<int (const enum turret_handler, const int, struct trace_t*, float*, float*[0x3])>(L"Turret_PlaceTurret_UpdateFooting")(handler, moverEntNum, trace, outOrigin, outAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_Internal(const enum turret_handler handler, const int clientNum, const int moverEntNum, const float* moverOrigin, const float* viewOrigin, const float* viewAngles, float* outOrigin, float* outAngles) -> int
{
  return Zynamic::Forward<int (const enum turret_handler, const int, const int, const float*, const float*, const float*, float*, float*)>(L"Turret_PlaceTurret_Internal")(handler, clientNum, moverEntNum, moverOrigin, viewOrigin, viewAngles, outOrigin, outAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_Client(const int localClientNum, const struct entityState_s* es, float* outOrigin, float* outAngles) -> int
{
  return Zynamic::Forward<int (const int, const struct entityState_s*, float*, float*)>(L"Turret_PlaceTurret_Client")(localClientNum, es, outOrigin, outAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_PlaceTurret_Server(struct playerState_s* ps, float* outOrigin, float* outAngles) -> int
{
  return Zynamic::Forward<int (struct playerState_s*, float*, float*)>(L"Turret_PlaceTurret_Server")(ps, outOrigin, outAngles);
}

#endif // __UNIMPLEMENTED__
