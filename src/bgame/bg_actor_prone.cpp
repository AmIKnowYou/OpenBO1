//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_ActorIsProne(struct actor_prone_info_s* pInfo, int iCurrentTime) -> int
{
  return Zynamic::Forward<int (struct actor_prone_info_s*, int)>(L"BG_ActorIsProne")(pInfo, iCurrentTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetActorProneFraction(struct actor_prone_info_s* pInfo, int iCurrentTime) -> float
{
  return Zynamic::Forward<float (struct actor_prone_info_s*, int)>(L"BG_GetActorProneFraction")(pInfo, iCurrentTime);
}

#endif // __UNIMPLEMENTED__
