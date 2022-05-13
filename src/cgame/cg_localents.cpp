//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_localents() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_localents")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitLocalEntities(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"CG_InitLocalEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeLocalEntity(const int localClientNum, struct localEntity_s* le) -> void
{
  return Zynamic::Forward<void (const int, struct localEntity_s*)>(L"CG_FreeLocalEntity")(localClientNum, le);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AllocLocalEntity(const int localClientNum) -> struct localEntity_s*
{
  return Zynamic::Forward<struct localEntity_s* (const int)>(L"CG_AllocLocalEntity")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddMovingTracer(const struct cg_s* cgameGlob, struct localEntity_s* le, const struct refdef_s* refdef) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, struct localEntity_s*, const struct refdef_s*)>(L"CG_AddMovingTracer")(cgameGlob, le, refdef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddLocalEntityTracerBeams(const int localClientNum) -> void
{
  return Zynamic::Forward<void (const int)>(L"CG_AddLocalEntityTracerBeams")(localClientNum);
}

#endif // __UNIMPLEMENTED__
