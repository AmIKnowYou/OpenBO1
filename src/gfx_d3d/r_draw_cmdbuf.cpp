//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Scr_ReadInt(const char** pos) -> int
{
  return Zynamic::Forward<int (const char**)>(L"Scr_ReadInt")(pos);
}

#endif // __UNIMPLEMENTED__
