//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_HandleSpectatorInput(int localClientNum, class bitarray<51>* button_bits) -> void
{
  return Zynamic::Forward<void (int, class bitarray<51>*)>(L"CG_HandleSpectatorInput")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_HandleSpecialStateInput(int localClientNum, class bitarray<51>* button_bits) -> void
{
  return Zynamic::Forward<void (int, class bitarray<51>*)>(L"CG_HandleSpecialStateInput")(localClientNum, button_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldUpdateViewAngles(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CG_ShouldUpdateViewAngles")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GamepadCheckStartAndBack(int localClientNum, int button, const char* cmd) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"CG_GamepadCheckStartAndBack")(localClientNum, button, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GamepadSpectatorInput(int localClientNum, int button, const char* cmd) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"CG_GamepadSpectatorInput")(localClientNum, button, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GamepadKillCamInput(int localClientNum, int button, const char* cmd) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"CG_GamepadKillCamInput")(localClientNum, button, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TranslateGamepadButton(int localClientNum, int button, const char* cmd) -> bool
{
  return Zynamic::Forward<bool (int, int, const char*)>(L"CG_TranslateGamepadButton")(localClientNum, button, cmd);
}

#endif // __UNIMPLEMENTED__
