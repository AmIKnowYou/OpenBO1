//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto BG_HasPerk(const unsigned int* perks, unsigned int perkIndex) -> bool
{
  return Zynamic::Forward<bool (const unsigned int*, unsigned int)>(L"BG_HasPerk")(perks, perkIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_SetPerk(unsigned int* perks, unsigned int perkIndex) -> void
{
  return Zynamic::Forward<void (unsigned int*, unsigned int)>(L"BG_SetPerk")(perks, perkIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_UnsetPerk(unsigned int* perks, unsigned int perkIndex) -> void
{
  return Zynamic::Forward<void (unsigned int*, unsigned int)>(L"BG_UnsetPerk")(perks, perkIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BG_ClearPerks(unsigned int* perks) -> void
{
  return Zynamic::Forward<void (unsigned int*)>(L"BG_ClearPerks")(perks);
}

#endif // __UNIMPLEMENTED__
