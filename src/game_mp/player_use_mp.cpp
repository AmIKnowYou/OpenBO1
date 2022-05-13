//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Player_UseEntity(struct gentity_s* playerEnt, struct gentity_s* useEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"Player_UseEntity")(playerEnt, useEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_ActivateCmd(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"Player_ActivateCmd")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_IsPlayerUsingTurretNearby(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"Player_IsPlayerUsingTurretNearby")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_ActivateHoldCmd(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Player_ActivateHoldCmd")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_ActivateDoubleTapCmd(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Player_ActivateDoubleTapCmd")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_UpdateActivate(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Player_UpdateActivate")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compare_use(const struct useList_t& a, const struct useList_t& b) -> bool
{
  return Zynamic::Forward<bool (const struct useList_t&, const struct useList_t&)>(L"compare_use")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_GetUseList(struct gentity_s* ent, struct useList_t* useList, int prevHintEntIndex) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct useList_t*, int)>(L"Player_GetUseList")(ent, useList, prevHintEntIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_GetItemCursorHint(const struct gclient_s* client, const struct gentity_s* traceEnt) -> int
{
  return Zynamic::Forward<int (const struct gclient_s*, const struct gentity_s*)>(L"Player_GetItemCursorHint")(client, traceEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_SetTurretDropHint(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Player_SetTurretDropHint")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_UpdateCursorHints(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Player_UpdateCursorHints")(ent);
}

#endif // __UNIMPLEMENTED__
