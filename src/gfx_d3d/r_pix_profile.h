//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto PIXBeginNamedEvent(int Color, const char* Name, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"PIXBeginNamedEvent")(Color, Name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto PIXSetMarker(int Color, const char* Name, ...) -> void
{
  return Zynamic::Forward<void (int, const char*, ...)>(L"PIXSetMarker")(Color, Name);
}

#endif // __UNIMPLEMENTED__
