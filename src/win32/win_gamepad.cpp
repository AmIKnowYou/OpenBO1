//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_win_gamepad() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_win_gamepad")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_Check(int portIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GPad_Check")(portIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_RefreshAll() -> void
{
  return Zynamic::Forward<void ()>(L"GPad_RefreshAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_UpdateDigitals(int portIndex, const struct _XINPUT_GAMEPAD* xpad) -> void
{
  return Zynamic::Forward<void (int, const struct _XINPUT_GAMEPAD*)>(L"GPad_UpdateDigitals")(portIndex, xpad);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_UpdateAnalogs(int portIndex, const struct _XINPUT_GAMEPAD* xpad) -> void
{
  return Zynamic::Forward<void (int, const struct _XINPUT_GAMEPAD*)>(L"GPad_UpdateAnalogs")(portIndex, xpad);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_ConvertStickToFloat(short inX, short inY, float* outX, float* outY) -> void
{
  return Zynamic::Forward<void (short, short, float*, float*)>(L"GPad_ConvertStickToFloat")(inX, inY, outX, outY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_UpdateSticksDown(struct GamePad* gPad) -> void
{
  return Zynamic::Forward<void (struct GamePad*)>(L"GPad_UpdateSticksDown")(gPad);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_UpdateSticks(int portIndex, const struct _XINPUT_GAMEPAD* xpad) -> void
{
  return Zynamic::Forward<void (int, const struct _XINPUT_GAMEPAD*)>(L"GPad_UpdateSticks")(portIndex, xpad);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_InitAll() -> void
{
  return Zynamic::Forward<void ()>(L"GPad_InitAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_UpdateAll() -> void
{
  return Zynamic::Forward<void ()>(L"GPad_UpdateAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_ResetState(int portIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GPad_ResetState")(portIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_IsActive(int portIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"GPad_IsActive")(portIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_GetButton(int portIndex, enum GamePadButton button) -> float
{
  return Zynamic::Forward<float (int, enum GamePadButton)>(L"GPad_GetButton")(portIndex, button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_ButtonRequiresUpdates(int portIndex, enum GamePadButton button) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadButton)>(L"GPad_ButtonRequiresUpdates")(portIndex, button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_IsButtonPressed(int portIndex, enum GamePadButton button) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadButton)>(L"GPad_IsButtonPressed")(portIndex, button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_IsButtonReleased(int portIndex, enum GamePadButton button) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadButton)>(L"GPad_IsButtonReleased")(portIndex, button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_GetStick(int portIndex, enum GamePadStick stick) -> float
{
  return Zynamic::Forward<float (int, enum GamePadStick)>(L"GPad_GetStick")(portIndex, stick);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_GetStickChangedToPressedState(int portIndex, enum GamePadStick stick, enum GamePadStickDir stickDir, bool pressedState) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadStick, enum GamePadStickDir, bool)>(L"GPad_GetStickChangedToPressedState")(portIndex, stick, stickDir, pressedState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_IsStickPressed(int portIndex, enum GamePadStick stick, enum GamePadStickDir stickDir) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadStick, enum GamePadStickDir)>(L"GPad_IsStickPressed")(portIndex, stick, stickDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GPad_IsStickReleased(int portIndex, enum GamePadStick stick, enum GamePadStickDir stickDir) -> bool
{
  return Zynamic::Forward<bool (int, enum GamePadStick, enum GamePadStickDir)>(L"GPad_IsStickReleased")(portIndex, stick, stickDir);
}

#endif // __UNIMPLEMENTED__
