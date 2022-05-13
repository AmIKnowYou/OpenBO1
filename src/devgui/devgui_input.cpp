//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateScrollInputs(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_UpdateScrollInputs")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateScrollStates(float deltaTime, enum DevGuiInputState* states, float* axis, float* times) -> void
{
  return Zynamic::Forward<void (float, enum DevGuiInputState*, float*, float*)>(L"DevGui_UpdateScrollStates")(deltaTime, states, axis, times);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateMenuScroll(float deltaTime) -> void
{
  return Zynamic::Forward<void (float)>(L"DevGui_UpdateMenuScroll")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_InputInit() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_InputInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_InputShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_InputShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_SelectGamepad(int gamePadIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"DevGui_SelectGamepad")(gamePadIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_InputUpdateGamepad(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"DevGui_InputUpdateGamepad")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_InputUpdateMouse() -> void
{
  return Zynamic::Forward<void ()>(L"DevGui_InputUpdateMouse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_InputUpdate(int localClientNum, float deltaTime) -> bool
{
  return Zynamic::Forward<bool (int, float)>(L"DevGui_InputUpdate")(localClientNum, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_MouseEvent(int dx, int dy) -> void
{
  return Zynamic::Forward<void (int, int)>(L"DevGui_MouseEvent")(dx, dy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_GetMenuScroll(enum DevGuiInputAxis axis) -> short
{
  return Zynamic::Forward<short (enum DevGuiInputAxis)>(L"DevGui_GetMenuScroll")(axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateIntScroll(float deltaTime, __int64 value, __int64 min, __int64 max, enum DevGuiInputAxis axis) -> __int64
{
  return Zynamic::Forward<__int64 (float, __int64, __int64, __int64, enum DevGuiInputAxis)>(L"DevGui_UpdateIntScroll")(deltaTime, value, min, max, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_UpdateFloatScroll(float deltaTime, float value, float min, float max, float step, enum DevGuiInputAxis axis) -> float
{
  return Zynamic::Forward<float (float, float, float, float, float, enum DevGuiInputAxis)>(L"DevGui_UpdateFloatScroll")(deltaTime, value, min, max, step, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsButtonDown(enum DevGuiInputButton button) -> bool
{
  return Zynamic::Forward<bool (enum DevGuiInputButton)>(L"DevGui_IsButtonDown")(button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsButtonPressed(enum DevGuiInputButton button) -> bool
{
  return Zynamic::Forward<bool (enum DevGuiInputButton)>(L"DevGui_IsButtonPressed")(button);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DevGui_IsButtonReleased(enum DevGuiInputButton button) -> bool
{
  return Zynamic::Forward<bool (enum DevGuiInputButton)>(L"DevGui_IsButtonReleased")(button);
}

#endif // __UNIMPLEMENTED__
