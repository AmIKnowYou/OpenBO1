//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto LeaderBoardRow<10>::serialize(class bdByteBuffer& buffer) -> void
{
  return Zynamic::Forward<public void (class bdByteBuffer&)>(L"LeaderBoardRow<10>::serialize")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto LeaderBoardRow<10>::deserialize(class bdReference<bdByteBuffer> buffer) -> bool
{
  return Zynamic::Forward<public bool (class bdReference<bdByteBuffer>)>(L"LeaderBoardRow<10>::deserialize")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private inline auto CCallback<CSteamAchievements, UserAchievementStored_t, 0>::GetCallbackSizeBytes() -> int
{
  return Zynamic::Forward<private int ()>(L"CCallback<CSteamAchievements,UserAchievementStored_t,0>::GetCallbackSizeBytes")();
}

#endif // __UNIMPLEMENTED__
