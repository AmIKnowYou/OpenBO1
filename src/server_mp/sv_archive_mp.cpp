//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_GentityNumLocal(int num) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (int)>(L"SV_GentityNumLocal")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetClientStateLocal(int clientNum) -> const struct clientState_s*
{
  return Zynamic::Forward<const struct clientState_s* (int)>(L"G_GetClientStateLocal")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetMatchStateLocal() -> const struct MatchState*
{
  return Zynamic::Forward<const struct MatchState* ()>(L"G_GetMatchStateLocal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFollowPlayerStateLocal(int clientNum, struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (int, struct playerState_s*)>(L"GetFollowPlayerStateLocal")(clientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ArchiveSnapshot(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"SV_ArchiveSnapshot")(msg);
}

#endif // __UNIMPLEMENTED__
