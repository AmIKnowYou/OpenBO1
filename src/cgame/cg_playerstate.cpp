//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_DamageFeedback(int localClientNum, int yawByte, int pitchByte, int damage) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"CG_DamageFeedback")(localClientNum, yawByte, pitchByte, damage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Respawn(int localClientNum, int spectate) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Respawn")(localClientNum, spectate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetSpectatorViewAngles(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ResetSpectatorViewAngles")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerstateEvents(int localClientNum, struct playerState_s* ps, const struct transPlayerState_t* ops) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*, const struct transPlayerState_t*)>(L"CG_CheckPlayerstateEvents")(localClientNum, ps, ops);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TransitionPlayerState(int localClientNum, struct playerState_s* ps, const struct transPlayerState_t* ops) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*, const struct transPlayerState_t*)>(L"CG_TransitionPlayerState")(localClientNum, ps, ops);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearTransPlayerState(struct transPlayerState_t* transPs) -> void
{
  return Zynamic::Forward<void (struct transPlayerState_t*)>(L"CG_ClearTransPlayerState")(transPs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExtractTransPlayerState(const struct playerState_s* ps, struct transPlayerState_t* transPs) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, struct transPlayerState_t*)>(L"CG_ExtractTransPlayerState")(ps, transPs);
}

#endif // __UNIMPLEMENTED__
