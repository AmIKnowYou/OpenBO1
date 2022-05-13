//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Monkey_InitCommunication(const char* server) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Monkey_InitCommunication")(server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_ShutdownCommunication() -> void
{
  return Zynamic::Forward<void ()>(L"Monkey_ShutdownCommunication")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_DisconnectAndExit() -> void
{
  return Zynamic::Forward<void ()>(L"Monkey_DisconnectAndExit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_SendString(const char* string) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Monkey_SendString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Send(const char* type, const char* string) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"Monkey_Send")(type, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_SocketHasData() -> bool
{
  return Zynamic::Forward<bool ()>(L"Monkey_SocketHasData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_RecvString(char* data, int data_size) -> bool
{
  return Zynamic::Forward<bool (char*, int)>(L"Monkey_RecvString")(data, data_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Monkey_Recv(char* type, int type_size, char* string, int string_size) -> bool
{
  return Zynamic::Forward<bool (char*, int, char*, int)>(L"Monkey_Recv")(type, type_size, string, string_size);
}

#endif // __UNIMPLEMENTED__
