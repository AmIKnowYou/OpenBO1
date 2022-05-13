//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Window_GetRect(const struct windowDef_t* w) -> const struct rectDef_s*
{
  return Zynamic::Forward<const struct rectDef_s* (const struct windowDef_t*)>(L"Window_GetRect")(w);
}

#endif // __UNIMPLEMENTED__
