//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_AllocSuperFlareQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_AllocSuperFlareQueries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FreeSuperFlareQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_FreeSuperFlareQueries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetSuperFlareQuads() -> struct GfxVertex*
{
  return Zynamic::Forward<struct GfxVertex* ()>(L"RB_SetSuperFlareQuads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSuperFlareOccluder(struct GfxGenericFilter* FilterInfo, int iFilter, int iPass, int iOccluder) -> void
{
  return Zynamic::Forward<void (struct GfxGenericFilter*, int, int, int)>(L"RB_DrawSuperFlareOccluder")(FilterInfo, iFilter, iPass, iOccluder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSuperFlareOccluders(const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxViewInfo*)>(L"RB_DrawSuperFlareOccluders")(viewInfo);
}

#endif // __UNIMPLEMENTED__
