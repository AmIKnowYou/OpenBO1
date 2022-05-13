//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto OnSameTeam(struct gentity_s* ent1, struct gentity_s* ent2) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*)>(L"OnSameTeam")(ent1, ent2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TeamplayInfoMessage(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"TeamplayInfoMessage")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckTeamStatus() -> void
{
  return Zynamic::Forward<void ()>(L"CheckTeamStatus")();
}

#endif // __UNIMPLEMENTED__
