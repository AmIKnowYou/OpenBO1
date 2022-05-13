//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Window_GetDynamicFlags(int contextIndex, const struct windowDef_t* w) -> int
{
  return Zynamic::Forward<int (int, const struct windowDef_t*)>(L"Window_GetDynamicFlags")(contextIndex, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Menu_GetCursorItem(int contextIndex, struct menuDef_t* menu) -> int
{
  return Zynamic::Forward<int (int, struct menuDef_t*)>(L"Menu_GetCursorItem")(contextIndex, menu);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Item_GetTextRect(int contextIndex, const struct itemDef_s* item) -> const struct rectDef_s*
{
  return Zynamic::Forward<const struct rectDef_s* (int, const struct itemDef_s*)>(L"Item_GetTextRect")(contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Item_GetNonTextRect(int contextIndex, const struct itemDef_s* item) -> const struct rectDef_s*
{
  return Zynamic::Forward<const struct rectDef_s* (int, const struct itemDef_s*)>(L"Item_GetNonTextRect")(contextIndex, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Window_IsHorizontal(const struct windowDef_t* w) -> bool
{
  return Zynamic::Forward<bool (const struct windowDef_t*)>(L"Window_IsHorizontal")(w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Window_IsVisible(int contextIndex, const struct windowDef_t* w) -> bool
{
  return Zynamic::Forward<bool (int, const struct windowDef_t*)>(L"Window_IsVisible")(contextIndex, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Window_HasFocus(int contextIndex, const struct windowDef_t* w) -> bool
{
  return Zynamic::Forward<bool (int, const struct windowDef_t*)>(L"Window_HasFocus")(contextIndex, w);
}

#endif // __UNIMPLEMENTED__
