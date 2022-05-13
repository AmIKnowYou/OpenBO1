//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_ResetLastGamePadEventTime() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ResetLastGamePadEventTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bind_GP_SticksConfigs_f() -> void
{
  return Zynamic::Forward<void ()>(L"Bind_GP_SticksConfigs_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bind_GP_ButtonsConfigs_f() -> void
{
  return Zynamic::Forward<void ()>(L"Bind_GP_ButtonsConfigs_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitGamepadCommands() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitGamepadCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitGamepadAxisBindings() -> void
{
  return Zynamic::Forward<void ()>(L"CL_InitGamepadAxisBindings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_StringToPhysicalAxis(const char* axisName) -> enum GamepadPhysicalAxis
{
  return Zynamic::Forward<enum GamepadPhysicalAxis (const char*)>(L"Gamepad_StringToPhysicalAxis")(axisName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Axis_StringToVirtualAxis(const char* axisName) -> enum GamepadVirtualAxis
{
  return Zynamic::Forward<enum GamepadVirtualAxis (const char*)>(L"Axis_StringToVirtualAxis")(axisName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Axis_NumToAxisString(enum GamepadPhysicalAxis axis) -> const char*
{
  return Zynamic::Forward<const char* (enum GamepadPhysicalAxis)>(L"Axis_NumToAxisString")(axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_VirtualAxisName(enum GamepadVirtualAxis axis) -> const char*
{
  return Zynamic::Forward<const char* (enum GamepadVirtualAxis)>(L"Gamepad_VirtualAxisName")(axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_InputTypeStringToId(const char* name) -> enum GamepadMapping
{
  return Zynamic::Forward<enum GamepadMapping (const char*)>(L"Gamepad_InputTypeStringToId")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_InputTypeName(enum GamepadMapping mapType) -> const char*
{
  return Zynamic::Forward<const char* (enum GamepadMapping)>(L"Gamepad_InputTypeName")(mapType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_BindAxis(struct GpadAxesGlob* gaGlob, enum GamepadPhysicalAxis realIndex, enum GamepadVirtualAxis axisIndex, enum GamepadMapping mapType) -> void
{
  return Zynamic::Forward<void (struct GpadAxesGlob*, enum GamepadPhysicalAxis, enum GamepadVirtualAxis, enum GamepadMapping)>(L"Gamepad_BindAxis")(gaGlob, realIndex, axisIndex, mapType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Axis_Bind_f() -> void
{
  return Zynamic::Forward<void ()>(L"Axis_Bind_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Axis_Unbindall_f() -> void
{
  return Zynamic::Forward<void ()>(L"Axis_Unbindall_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_WriteBindings(int localClientNum, int f) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Gamepad_WriteBindings")(localClientNum, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadGenerateAPad(int localClientNum, int portIndex, int physicalAxis, int time) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"CL_GamepadGenerateAPad")(localClientNum, portIndex, physicalAxis, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadEvent(int portIndex, int physicalAxis, int value, int time) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"CL_GamepadEvent")(portIndex, physicalAxis, value, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadAxisValue(int localClientNum, int virtualAxis) -> float
{
  return Zynamic::Forward<float (int, int)>(L"CL_GamepadAxisValue")(localClientNum, virtualAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CheckForIgnoreDueToRepeat(int localClientNum, int key, int repeatCount, int time) -> bool
{
  return Zynamic::Forward<bool (int, int, int, int)>(L"CL_CheckForIgnoreDueToRepeat")(localClientNum, key, repeatCount, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsGamepadKey(int key) -> bool
{
  return Zynamic::Forward<bool (int)>(L"IsGamepadKey")(key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadResetMenuScrollTime(int localClientNum, int key, int down, unsigned int time) -> void
{
  return Zynamic::Forward<void (int, int, int, unsigned int)>(L"CL_GamepadResetMenuScrollTime")(localClientNum, key, down, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadButtonEvent(int localClientNum, int controllerIndex, int key, int buttonEvent, unsigned int time, int gamePadButton) -> void
{
  return Zynamic::Forward<void (int, int, int, int, unsigned int, int)>(L"CL_GamepadButtonEvent")(localClientNum, controllerIndex, key, buttonEvent, time, gamePadButton);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadButtonEventForPort(int portIndex, int key, int buttonEvent, unsigned int time, int button) -> void
{
  return Zynamic::Forward<void (int, int, int, unsigned int, int)>(L"CL_GamepadButtonEventForPort")(portIndex, key, buttonEvent, time, button);
}

#endif // __UNIMPLEMENTED__
