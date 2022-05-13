//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_SpawnFloat(const char* key, const char* defaultString, float* out) -> int
{
  return Zynamic::Forward<int (const char*, const char*, float*)>(L"CG_SpawnFloat")(key, defaultString, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityTypeName(struct centity_s* cent) -> const char*
{
  return Zynamic::Forward<const char* (struct centity_s*)>(L"CG_GetEntityTypeName")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrintEntities(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_PrintEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Spawn(int localClientNum) -> struct centity_s*
{
  return Zynamic::Forward<struct centity_s* (int)>(L"CG_Spawn")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Free(int localClientNum, int entNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Free")(localClientNum, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShutdownFakeEntities(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ShutdownFakeEntities")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitFakeEntities(int localClientNum, bool spawnEntsFromMap) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CG_InitFakeEntities")(localClientNum, spawnEntsFromMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetModelIndex(const char* name, int localClientNum) -> int
{
  return Zynamic::Forward<int (const char*, int)>(L"CG_GetModelIndex")(name, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_FreeFields(const struct cent_field_t* fields, unsigned char* base) -> void
{
  return Zynamic::Forward<void (const struct cent_field_t*, unsigned char*)>(L"CScr_FreeFields")(fields, base);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_FreeEntityFields(struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CScr_FreeEntityFields")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_SetDynamicEntityField(int clientNum, struct centity_s* ent, unsigned int index) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, unsigned int)>(L"CScr_SetDynamicEntityField")(clientNum, ent, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetEntityScriptVariable(int clientNum, const char* key, const char* value, struct centity_s* ent) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*, struct centity_s*)>(L"CG_SetEntityScriptVariable")(clientNum, key, value, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseEntityField(int localClientNum, const char* key, const char* value, struct centity_s* ent, int ignoreModel) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*, struct centity_s*, int)>(L"CG_ParseEntityField")(localClientNum, key, value, ent, ignoreModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ParseEntityFields(int localClientNum, struct centity_s* ent, struct SpawnVar& spawnVar, int ignoreModel) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, struct SpawnVar&, int)>(L"CG_ParseEntityFields")(localClientNum, ent, spawnVar, ignoreModel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitScriptMover(struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (struct centity_s*)>(L"CG_InitScriptMover")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetTriggerBrushModel(int localClientNum, struct centity_s* ent) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*)>(L"CG_SetTriggerBrushModel")(localClientNum, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitTrigger(int localClientNum, struct centity_s* self) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*)>(L"CG_InitTrigger")(localClientNum, self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitTriggerWait(int localClientNum, struct centity_s* ent, int* spawnflags, int waitSpawnFlag) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int*, int)>(L"CG_InitTriggerWait")(localClientNum, ent, spawnflags, waitSpawnFlag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitSentientTrigger(struct centity_s* self, int spawnflags) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int)>(L"CG_InitSentientTrigger")(self, spawnflags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SP_trigger_multiple(int localClientNum, struct centity_s* ent, int spawnFlags) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_SP_trigger_multiple")(localClientNum, ent, spawnFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SP_trigger_once(int localClientNum, struct centity_s* ent, int spawnFlags) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_SP_trigger_once")(localClientNum, ent, spawnFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SP_trigger_radius(int localClientNum, struct centity_s* ent, int spawnFlags) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int)>(L"CG_SP_trigger_radius")(localClientNum, ent, spawnFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CallSpawn(int localClientNum, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (int, struct SpawnVar*)>(L"CG_CallSpawn")(localClientNum, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SpawnEntitiesFromString(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SpawnEntitiesFromString")(localClientNum);
}

#endif // __UNIMPLEMENTED__
