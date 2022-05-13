//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Pregame_SetState(enum pregameStateEnum s) -> void
{
  return Zynamic::Forward<void (enum pregameStateEnum)>(L"Pregame_SetState")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_GetState() -> enum pregameStateEnum
{
  return Zynamic::Forward<enum pregameStateEnum ()>(L"Pregame_GetState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_isEnabled() -> bool
{
  return Zynamic::Forward<bool ()>(L"Pregame_isEnabled")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_StartPregame() -> void
{
  return Zynamic::Forward<void ()>(L"Pregame_StartPregame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_StartGame() -> void
{
  return Zynamic::Forward<void ()>(L"Pregame_StartGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_Reset() -> void
{
  return Zynamic::Forward<void ()>(L"Pregame_Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_ResetData() -> void
{
  return Zynamic::Forward<void ()>(L"Pregame_ResetData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_ResetDataForClient(unsigned int clientNum) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Pregame_ResetDataForClient")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_ShouldLoadPregame() -> bool
{
  return Zynamic::Forward<bool ()>(L"Pregame_ShouldLoadPregame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Pregame_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_GetAssignedPregameTeam(unsigned int clientNum) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"Pregame_GetAssignedPregameTeam")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_SetAssignedPregameClass(unsigned int clientNum, const char* pclass) -> void
{
  return Zynamic::Forward<void (unsigned int, const char*)>(L"Pregame_SetAssignedPregameClass")(clientNum, pclass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_SetAssignedPregameTeam(unsigned int clientNum, enum team_t pteam) -> void
{
  return Zynamic::Forward<void (unsigned int, enum team_t)>(L"Pregame_SetAssignedPregameTeam")(clientNum, pteam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pregame_GetAssignedPregameClass(unsigned int clientNum) -> char*
{
  return Zynamic::Forward<char* (unsigned int)>(L"Pregame_GetAssignedPregameClass")(clientNum);
}

#endif // __UNIMPLEMENTED__
