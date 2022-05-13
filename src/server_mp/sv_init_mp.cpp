//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_SetConfigstring(int index, const char* val) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"SV_SetConfigstring")(index, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetConfigstring(int index, char* buffer, int bufferSize) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"SV_GetConfigstring")(index, buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetConfigstringConst(int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int)>(L"SV_GetConfigstringConst")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetConfigValueForKey(int start, int max, const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (int, int, const char*, const char*)>(L"SV_SetConfigValueForKey")(start, max, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetUserinfo(int index, const char* val) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"SV_SetUserinfo")(index, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetUserinfo(int index, char* buffer, int bufferSize) -> void
{
  return Zynamic::Forward<void (int, char*, int)>(L"SV_GetUserinfo")(index, buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CreateBaseline() -> void
{
  return Zynamic::Forward<void ()>(L"SV_CreateBaseline")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetXUIDConfigStrings() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetXUIDConfigStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Startup(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_Startup")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetExpectedHunkUsage(char* mapname) -> void
{
  return Zynamic::Forward<void (char*)>(L"SV_SetExpectedHunkUsage")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClearServer() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ClearServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_InitArchivedSnapshot() -> void
{
  return Zynamic::Forward<void ()>(L"SV_InitArchivedSnapshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetSystemInfoConfig() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetSystemInfoConfig")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SaveSystemInfo() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SaveSystemInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetServerDvarsBeforeScriptsInit() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetServerDvarsBeforeScriptsInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SpawnServer(int controllerIndex, const char* server, int mapIsPreloaded, int savegame) -> void
{
  return Zynamic::Forward<void (int, const char*, int, int)>(L"SV_SpawnServer")(controllerIndex, server, mapIsPreloaded, savegame);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllocateClientMemory_SizeRequired(int maxLocalClients, int maxClients) -> int
{
  return Zynamic::Forward<int (int, int)>(L"SV_AllocateClientMemory_SizeRequired")(maxLocalClients, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_AllocateClientMemory(struct HunkUser* hunk, int maxLocalClients, int maxClients) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, int, int)>(L"SV_AllocateClientMemory")(hunk, maxLocalClients, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeClientMemory(struct HunkUser* hunk, int maxLocalClients, int maxClients) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, int, int)>(L"SV_FreeClientMemory")(hunk, maxLocalClients, maxClients);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Loaded() -> bool
{
  return Zynamic::Forward<bool ()>(L"SV_Loaded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Init() -> void
{
  return Zynamic::Forward<void ()>(L"SV_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FinalMessage(const char* message) -> void
{
  return Zynamic::Forward<void (const char*)>(L"SV_FinalMessage")(message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DropAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DropAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Shutdown(const char* finalmsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"SV_Shutdown")(finalmsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClearServerThreadOwnsGame() -> void
{
  return Zynamic::Forward<void ()>(L"SV_ClearServerThreadOwnsGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IncServerThreadOwnsGame() -> void
{
  return Zynamic::Forward<void ()>(L"SV_IncServerThreadOwnsGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DecServerThreadOwnsGame() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DecServerThreadOwnsGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetServerThreadOwnsGame() -> int
{
  return Zynamic::Forward<int ()>(L"SV_GetServerThreadOwnsGame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CheckThread() -> void
{
  return Zynamic::Forward<void ()>(L"SV_CheckThread")();
}

#endif // __UNIMPLEMENTED__
