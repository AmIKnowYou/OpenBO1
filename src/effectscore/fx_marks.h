//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FX_GetMarksSystem(int clientIndex) -> struct FxMarksSystem*
{
  return Zynamic::Forward<struct FxMarksSystem* (int)>(L"FX_GetMarksSystem")(clientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_MarkToHandle(struct FxMarksSystem* marksSystem, struct FxMark* mark) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxMarksSystem*, struct FxMark*)>(L"FX_MarkToHandle")(marksSystem, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_MarkContextsEqual(const struct GfxMarkContext* contextA, const struct GfxMarkContext* contextB) -> bool
{
  return Zynamic::Forward<bool (const struct GfxMarkContext*, const struct GfxMarkContext*)>(L"FX_MarkContextsEqual")(contextA, contextB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_MarkFromHandle(struct FxMarksSystem* marksSystem, unsigned short handle) -> struct FxMark*
{
  return Zynamic::Forward<struct FxMark* (struct FxMarksSystem*, unsigned short)>(L"FX_MarkFromHandle")(marksSystem, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TriGroupToHandle(struct FxMarksSystem* marksSystem, struct FxTriGroup* group) -> int
{
  return Zynamic::Forward<int (struct FxMarksSystem*, struct FxTriGroup*)>(L"FX_TriGroupToHandle")(marksSystem, group);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TriGroupFromHandle(struct FxMarksSystem* marksSystem, int handle) -> struct FxTriGroup*
{
  return Zynamic::Forward<struct FxTriGroup* (struct FxMarksSystem*, int)>(L"FX_TriGroupFromHandle")(marksSystem, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PointGroupToHandle(struct FxMarksSystem* marksSystem, struct FxPointGroup* group) -> int
{
  return Zynamic::Forward<int (struct FxMarksSystem*, struct FxPointGroup*)>(L"FX_PointGroupToHandle")(marksSystem, group);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PointGroupFromHandle(struct FxMarksSystem* marksSystem, int handle) -> struct FxPointGroup*
{
  return Zynamic::Forward<struct FxPointGroup* (struct FxMarksSystem*, int)>(L"FX_PointGroupFromHandle")(marksSystem, handle);
}

#endif // __UNIMPLEMENTED__
