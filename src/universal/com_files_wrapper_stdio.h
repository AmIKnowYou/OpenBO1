//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FileWrapper_Open(const char* ospath, const char* mode) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"FileWrapper_Open")(ospath, mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FileWrapper_GetFileSize(int h) -> int
{
  return Zynamic::Forward<int (int)>(L"FileWrapper_GetFileSize")(h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FileWrapper_Seek(int h, long offset, long origin) -> int
{
  return Zynamic::Forward<int (int, long, long)>(L"FileWrapper_Seek")(h, offset, origin);
}

#endif // __UNIMPLEMENTED__
