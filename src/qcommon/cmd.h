//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Cmd_Args() -> struct CmdArgs*
{
  return Zynamic::Forward<struct CmdArgs* ()>(L"Cmd_Args")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Cmd_Argc() -> int
{
  return Zynamic::Forward<int ()>(L"Cmd_Argc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SV_Cmd_Argc() -> int
{
  return Zynamic::Forward<int ()>(L"SV_Cmd_Argc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Cmd_Argv(int argIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"Cmd_Argv")(argIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SV_Cmd_Argv(int argIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"SV_Cmd_Argv")(argIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Cmd_ItemDef() -> struct itemDef_s*
{
  return Zynamic::Forward<struct itemDef_s* ()>(L"Cmd_ItemDef")();
}

#endif // __UNIMPLEMENTED__
