//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Clan_GetName(int controllerIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"Clan_GetName")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
