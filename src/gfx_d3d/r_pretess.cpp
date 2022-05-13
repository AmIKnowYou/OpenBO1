//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_InitDrawSurfListInfo(struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (struct GfxDrawSurfListInfo*)>(L"R_InitDrawSurfListInfo")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitDrawSurfList(const union GfxDrawSurf* drawSurfs, unsigned int drawSurfCount, struct GfxBackEndData* data) -> void
{
  return Zynamic::Forward<void (const union GfxDrawSurf*, unsigned int, struct GfxBackEndData*)>(L"R_EmitDrawSurfList")(drawSurfs, drawSurfCount, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetKeyCount(const union GfxDrawSurf* drawSurfs, unsigned int drawSurfCount, unsigned int primarySortKey) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int, unsigned int)>(L"R_GetKeyCount")(drawSurfs, drawSurfCount, primarySortKey);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MergeAndEmitDrawSurfLists(unsigned int firstStage, unsigned int stageCount, struct GfxBackEndData* data) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, struct GfxBackEndData*)>(L"R_MergeAndEmitDrawSurfLists")(firstStage, stageCount, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginPreTess(bool lockBuffer) -> void
{
  return Zynamic::Forward<void (bool)>(L"R_BeginPreTess")(lockBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocPreTessIndices(int count) -> unsigned short*
{
  return Zynamic::Forward<unsigned short* (int)>(L"R_AllocPreTessIndices")(count);
}

#endif // __UNIMPLEMENTED__
