//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::CSteamAchievements(struct Achievement_t* Achievements, int NumAchievements) -> void
{
  return Zynamic::Forward<public void (struct Achievement_t*, int)>(L"CSteamAchievements::CSteamAchievements")(Achievements, NumAchievements);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::~CSteamAchievements() -> void
{
  return Zynamic::Forward<public void ()>(L"CSteamAchievements::~CSteamAchievements")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::RequestStats() -> bool
{
  return Zynamic::Forward<public bool ()>(L"CSteamAchievements::RequestStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::SetAchievement(const char* ID) -> void
{
  return Zynamic::Forward<public void (const char*)>(L"CSteamAchievements::SetAchievement")(ID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::StoreStats() -> void
{
  return Zynamic::Forward<public void ()>(L"CSteamAchievements::StoreStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::ResetStats() -> void
{
  return Zynamic::Forward<public void ()>(L"CSteamAchievements::ResetStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::OnUserStatsReceived(struct UserStatsReceived_t* pCallback) -> void
{
  return Zynamic::Forward<public void (struct UserStatsReceived_t*)>(L"CSteamAchievements::OnUserStatsReceived")(pCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::OnUserStatsStored(struct UserStatsStored_t* pCallback) -> void
{
  return Zynamic::Forward<public void (struct UserStatsStored_t*)>(L"CSteamAchievements::OnUserStatsStored")(pCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto CSteamAchievements::OnAchievementStored(struct UserAchievementStored_t* pCallback) -> void
{
  return Zynamic::Forward<public void (struct UserAchievementStored_t*)>(L"CSteamAchievements::OnAchievementStored")(pCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GiveAchievement_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_GiveAchievement_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_ResetAchievement_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_ResetAchievement_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Achievements_Init() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Achievements_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Achievements_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Achievements_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Achievements_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Achievements_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_GiveAchievement(const char* achievementName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"LiveSteam_GiveAchievement")(achievementName);
}

#endif // __UNIMPLEMENTED__
