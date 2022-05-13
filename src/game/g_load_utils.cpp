//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_SetEntityParsePoint(const char* beginParsePoint) -> void
{
  return Zynamic::Forward<void (const char*)>(L"G_SetEntityParsePoint")(beginParsePoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ResetEntityParsePoint() -> void
{
  return Zynamic::Forward<void ()>(L"G_ResetEntityParsePoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityParsePoint() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"G_GetEntityParsePoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityToken(char* buffer, int bufferSize) -> int
{
  return Zynamic::Forward<int (char*, int)>(L"G_GetEntityToken")(buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddSpawnVarToken(const char* string, struct SpawnVar* spawnVar) -> char*
{
  return Zynamic::Forward<char* (const char*, struct SpawnVar*)>(L"G_AddSpawnVarToken")(string, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseSpawnVars(struct SpawnVar* spawnVar) -> int
{
  return Zynamic::Forward<int (struct SpawnVar*)>(L"G_ParseSpawnVars")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnString(const struct SpawnVar* spawnVar, const char* key, const char* defaultString, const char** out) -> int
{
  return Zynamic::Forward<int (const struct SpawnVar*, const char*, const char*, const char**)>(L"G_SpawnString")(spawnVar, key, defaultString, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_NewString(const char* string) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"G_NewString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vtos(const float* v) -> char*
{
  return Zynamic::Forward<char* (const float*)>(L"vtos")(v);
}

#endif // __UNIMPLEMENTED__
