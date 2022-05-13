//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetPairValue(const struct SpawnVar& spawnVar, const char* key) -> const char*
{
  return Zynamic::Forward<const char* (const struct SpawnVar&, const char*)>(L"GetPairValue")(spawnVar, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddSavedCommand(const struct RadiantCommand& command) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&)>(L"AddSavedCommand")(command);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RunSavedRadiantCmds() -> void
{
  return Zynamic::Forward<void ()>(L"RunSavedRadiantCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AssignGameIdMapping(int liveUpdateId, int gameId) -> void
{
  return Zynamic::Forward<void (int, int)>(L"G_AssignGameIdMapping")(liveUpdateId, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetGameIdMapping(int liveUpdateId) -> int
{
  return Zynamic::Forward<int (int)>(L"G_GetGameIdMapping")(liveUpdateId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AssignGameIdMapping(int liveUpdateId, int gameId) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_AssignGameIdMapping")(liveUpdateId, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetGameIdMapping(int liveUpdateId) -> int
{
  return Zynamic::Forward<int (int)>(L"CG_GetGameIdMapping")(liveUpdateId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadiantRemoteInit() -> void
{
  return Zynamic::Forward<void ()>(L"RadiantRemoteInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FindEntity(const struct SpawnVar& spawnVar, int gameId) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const struct SpawnVar&, int)>(L"FindEntity")(spawnVar, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsEntityType(const struct SpawnVar& spawnVar) -> bool
{
  return Zynamic::Forward<bool (const struct SpawnVar&)>(L"IsEntityType")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedEntity() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedEntity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsSpawnPoint(const char* classname) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"G_IsSpawnPoint")(classname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessEntityCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessEntityCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessCameraCommand(struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (struct SpawnVar&)>(L"G_ProcessCameraCommand")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindMiscModel(const float* origin, int gameId) -> int
{
  return Zynamic::Forward<int (const float*, int)>(L"G_FindMiscModel")(origin, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessMiscModelCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessMiscModelCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedMiscModel() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedMiscModel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindCorona(const float* origin, int gameId) -> int
{
  return Zynamic::Forward<int (const float*, int)>(L"G_FindCorona")(origin, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessCoronaCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessCoronaCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedCorona() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedCorona")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_NotifyScriptsOfSelectedScriptStruct(unsigned int structId) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"G_NotifyScriptsOfSelectedScriptStruct")(structId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindStruct(struct SpawnVar& spawnVar, int gameId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct SpawnVar&, int)>(L"G_FindStruct")(spawnVar, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessScriptStructCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"G_ProcessScriptStructCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelectedScriptStruct() -> void
{
  return Zynamic::Forward<void ()>(L"G_ClearSelectedScriptStruct")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NotifyScriptsOfSelectedScriptStruct(unsigned int structId) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"CG_NotifyScriptsOfSelectedScriptStruct")(structId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FindStruct(struct SpawnVar& spawnVar, int gameId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct SpawnVar&, int)>(L"CG_FindStruct")(spawnVar, gameId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessScriptStructCommand(const struct RadiantCommand& command, struct SpawnVar& spawnVar) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&, struct SpawnVar&)>(L"CG_ProcessScriptStructCommand")(command, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearSelectedScriptStruct() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClearSelectedScriptStruct")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RadiantDebugDraw() -> void
{
  return Zynamic::Forward<void ()>(L"G_RadiantDebugDraw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearSelection(function* ignoreFunc) -> void
{
  return Zynamic::Forward<void (function *)>(L"G_ClearSelection")(ignoreFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearSelection(function* ignoreFunc) -> void
{
  return Zynamic::Forward<void (function *)>(L"CG_ClearSelection")(ignoreFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessRadiantCmd(const struct RadiantCommand& command) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&)>(L"CG_ProcessRadiantCmd")(command);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessRadiantCmds() -> bool
{
  return Zynamic::Forward<bool ()>(L"CG_ProcessRadiantCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCommandProcessorType(const struct SpawnVar& spawnVar) -> enum CommandProcessorType
{
  return Zynamic::Forward<enum CommandProcessorType (const struct SpawnVar&)>(L"GetCommandProcessorType")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessRadiantCmd(const struct RadiantCommand& command) -> void
{
  return Zynamic::Forward<void (const struct RadiantCommand&)>(L"G_ProcessRadiantCmd")(command);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ProcessRadiantCmds() -> bool
{
  return Zynamic::Forward<bool ()>(L"G_ProcessRadiantCmds")();
}

#endif // __UNIMPLEMENTED__
