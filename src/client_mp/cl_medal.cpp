//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_GetMedalData(int medalIndex, enum medalTableColumns_t column) -> const char*
{
  return Zynamic::Forward<const char* (int, enum medalTableColumns_t)>(L"CG_GetMedalData")(medalIndex, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetMedalLocalizedXP(float xpScale, int medalIndex, bool teamBased) -> const char*
{
  return Zynamic::Forward<const char* (float, int, bool)>(L"CG_GetMedalLocalizedXP")(xpScale, medalIndex, teamBased);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWagerMedalData(int wagerMedalIndex, enum wagerMedalTableColumns_t column) -> const char*
{
  return Zynamic::Forward<const char* (int, enum wagerMedalTableColumns_t)>(L"CG_GetWagerMedalData")(wagerMedalIndex, column);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWagerMedalLocalizedCP(int wagerMedalIndex, bool teamBased) -> const char*
{
  return Zynamic::Forward<const char* (int, bool)>(L"CG_GetWagerMedalLocalizedCP")(wagerMedalIndex, teamBased);
}

#endif // __UNIMPLEMENTED__
