//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Monkey_AssertCallback(const char* assertMsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Monkey_AssertCallback")(assertMsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Error(const char* text) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Monkey_Error")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_GrabComPrints(bool enable) -> void
{
  return Zynamic::Forward<void (bool)>(L"Monkey_GrabComPrints")(enable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_ComPrintHook(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Monkey_ComPrintHook")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Start() -> void
{
  return Zynamic::Forward<void ()>(L"Monkey_Start")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_IsRunning() -> bool
{
  return Zynamic::Forward<bool ()>(L"Monkey_IsRunning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"Monkey_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_KeepAlive() -> void
{
  return Zynamic::Forward<void ()>(L"Monkey_KeepAlive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Event(const char* event) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Monkey_Event")(event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_UseRandomInput() -> bool
{
  return Zynamic::Forward<bool ()>(L"Monkey_UseRandomInput")();
}

#endif // __UNIMPLEMENTED__
