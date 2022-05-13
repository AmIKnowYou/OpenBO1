//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto SentientHandle::isDefined() -> int
{
  return Zynamic::Forward<public int ()>(L"SentientHandle::isDefined")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto SentientHandle::sentient() -> struct sentient_s*
{
  return Zynamic::Forward<public struct sentient_s* ()>(L"SentientHandle::sentient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sentient_EnemyTeam(enum team_t eTeam) -> enum team_t
{
  return Zynamic::Forward<enum team_t (enum team_t)>(L"Sentient_EnemyTeam")(eTeam);
}

#endif // __UNIMPLEMENTED__
