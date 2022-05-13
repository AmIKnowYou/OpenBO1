//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_LoadingString(int localClientNum, const char* s) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CG_LoadingString")(localClientNum, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsShowingProgress_LoadObj() -> bool
{
  return Zynamic::Forward<bool ()>(L"CG_IsShowingProgress_LoadObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsShowingProgress_FastFile() -> bool
{
  return Zynamic::Forward<bool ()>(L"CG_IsShowingProgress_FastFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawInformation(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawInformation")(localClientNum);
}

#endif // __UNIMPLEMENTED__
