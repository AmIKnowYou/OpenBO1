//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_SpawnFloat(const struct SpawnVar* spawnVar, const char* key, const char* defaultString, float* out) -> int
{
  return Zynamic::Forward<int (const struct SpawnVar*, const char*, const char*, float*)>(L"G_SpawnFloat")(spawnVar, key, defaultString, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnInt(const struct SpawnVar* spawnVar, const char* key, const char* defaultString, int* out) -> int
{
  return Zynamic::Forward<int (const struct SpawnVar*, const char*, const char*, int*)>(L"G_SpawnInt")(spawnVar, key, defaultString, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadOnlyField(struct gentity_s* ent, int offset) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Scr_ReadOnlyField")(ent, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityWrapper(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"G_FreeEntityWrapper")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetEntityScriptVariableInternal(const char* key, const char* value) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*, const char*)>(L"G_SetEntityScriptVariableInternal")(key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetEntityScriptVariable(const char* key, const char* value, struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct gentity_s*)>(L"G_SetEntityScriptVariable")(key, value, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseEntityField(const char* key, const char* value, struct gentity_s* ent, int radiant_update) -> void
{
  return Zynamic::Forward<void (const char*, const char*, struct gentity_s*, int)>(L"G_ParseEntityField")(key, value, ent, radiant_update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseEntityFields(const struct SpawnVar& spawnVar, struct gentity_s* ent, int radiant_update) -> void
{
  return Zynamic::Forward<void (const struct SpawnVar&, struct gentity_s*, int)>(L"G_ParseEntityFields")(spawnVar, ent, radiant_update);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnStruct(struct SpawnVar& spawnVar) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct SpawnVar&)>(L"G_SpawnStruct")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DuplicateEntityFields(struct gentity_s* dest, const struct gentity_s* source) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct gentity_s*)>(L"G_DuplicateEntityFields")(dest, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DuplicateScriptFields(struct gentity_s* dest, const struct gentity_s* source) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct gentity_s*)>(L"G_DuplicateScriptFields")(dest, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetItemForClassname(const char* classname, unsigned char model) -> const struct gitem_s*
{
  return Zynamic::Forward<const struct gitem_s* (const char*, unsigned char)>(L"G_GetItemForClassname")(classname, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindSpawnFunc(const char* classname, const struct SpawnFuncEntry* spawnFuncArray, int spawnFuncCount) -> function*
{
  return Zynamic::Forward<function * (const char*, const struct SpawnFuncEntry*, int)>(L"G_FindSpawnFunc")(classname, spawnFuncArray, spawnFuncCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClientOnlyEntity(const struct SpawnVar& spawnVar) -> bool
{
  return Zynamic::Forward<bool (const struct SpawnVar&)>(L"IsClientOnlyEntity")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupDestructible(struct gentity_s* ent, const char* destructibleName) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const char*)>(L"G_SetupDestructible")(ent, destructibleName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupDestructible(struct gentity_s* ent, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"G_SetupDestructible")(ent, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CallSpawn(struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*)>(L"G_CallSpawn")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CallSpawnEntity(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"G_CallSpawnEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddFieldsForEntity() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddFieldsForEntity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_AddFieldsForRadiant() -> void
{
  return Zynamic::Forward<void ()>(L"GScr_AddFieldsForRadiant")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetEntityField(int entnum, int offset) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Scr_SetEntityField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetGenericField(unsigned char* b, enum fieldtype_t type, int ofs, unsigned int whichbits) -> void
{
  return Zynamic::Forward<void (unsigned char*, enum fieldtype_t, int, unsigned int)>(L"GScr_SetGenericField")(b, type, ofs, whichbits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetObjectField(unsigned int classnum, int entnum, int offset) -> int
{
  return Zynamic::Forward<int (unsigned int, int, int)>(L"Scr_SetObjectField")(classnum, entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntityField(int entnum, int offset) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Scr_GetEntityField")(entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_GetGenericField(unsigned char* b, enum fieldtype_t type, int ofs, unsigned int whichbits) -> void
{
  return Zynamic::Forward<void (unsigned char*, enum fieldtype_t, int, unsigned int)>(L"GScr_GetGenericField")(b, type, ofs, whichbits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetObjectField(unsigned int classnum, int entnum, int offset) -> void
{
  return Zynamic::Forward<void (unsigned int, int, int)>(L"Scr_GetObjectField")(classnum, entnum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeEntityConstStrings(struct gentity_s* pEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_FreeEntityConstStrings")(pEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeEntity(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Scr_FreeEntity")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddEntity(struct gentity_s* ent, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, enum scriptInstance_t)>(L"Scr_AddEntity")(ent, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntityAllowNull(unsigned int index, enum scriptInstance_t inst) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (unsigned int, enum scriptInstance_t)>(L"Scr_GetEntityAllowNull")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntity(unsigned int index) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (unsigned int)>(L"Scr_GetEntity")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeHudElem(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"Scr_FreeHudElem")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddHudElem(struct game_hudelem_s* hud) -> void
{
  return Zynamic::Forward<void (struct game_hudelem_s*)>(L"Scr_AddHudElem")(hud);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExecEntThread(struct gentity_s* ent, int handle, unsigned int paramcount) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct gentity_s*, int, unsigned int)>(L"Scr_ExecEntThread")(ent, handle, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Notify(struct gentity_s* ent, unsigned short stringValue, unsigned int paramcount) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, unsigned short, unsigned int)>(L"Scr_Notify")(ent, stringValue, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEnt() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetEnt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntArray() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_GetEntArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GScr_SetDynamicEntityField(struct gentity_s* ent, unsigned int index) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, unsigned int)>(L"GScr_SetDynamicEntityField")(ent, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_worldspawn(struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct SpawnVar*)>(L"SP_worldspawn")(spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnEntitiesFromString() -> void
{
  return Zynamic::Forward<void ()>(L"G_SpawnEntitiesFromString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LoadStructs() -> void
{
  return Zynamic::Forward<void ()>(L"G_LoadStructs")();
}

#endif // __UNIMPLEMENTED__
