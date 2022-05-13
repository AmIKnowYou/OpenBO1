//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'sv_flames''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'sv_flames''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'cl_flames''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'cl_flames''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_flame_system() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_flame_system")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Init_FlameVars() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Init_FlameVars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Reset_FlameVars() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Reset_FlameVars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Init_Classes() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Init_Classes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Init_Sources() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Init_Sources")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Init_DVars() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Init_DVars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_TableInDevGui(const char* tableName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Flame_TableInDevGui")(tableName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_InitDevGui() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_InitDevGui")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Reset() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CMD_PrintDVarsToConsol() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_CMD_PrintDVarsToConsol")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CMD_Test_Toggle() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_CMD_Test_Toggle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CMD_Use_Dvars_Toggle() -> void
{
  return Zynamic::Forward<void ()>(L"Flame_CMD_Use_Dvars_Toggle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_DVarsToFlameVars(struct flameTable* fTable) -> void
{
  return Zynamic::Forward<void (struct flameTable*)>(L"Flame_DVarsToFlameVars")(fTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_FindFlameTable(const char* tableName) -> struct flameTable*
{
  return Zynamic::Forward<struct flameTable* (const char*)>(L"Flame_FindFlameTable")(tableName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_SwayRand(float x, float y, int time) -> float
{
  return Zynamic::Forward<float (float, float, int)>(L"Flame_SwayRand")(x, y, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Flame_Source_Get(int entityNum) -> struct flameSource_t*
{
  return Zynamic::Forward<struct flameSource_t* (int)>(L"SV_Flame_Source_Get")(entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Source_Get(int entityNum) -> struct flameSource_t*
{
  return Zynamic::Forward<struct flameSource_t* (int)>(L"Flame_Source_Get")(entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Get_FlameRender(const char* name) -> struct flameRender_s*
{
  return Zynamic::Forward<struct flameRender_s* (const char*)>(L"Flame_Get_FlameRender")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Item_Init(struct flameGeneric_s* item, int itemSize) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int)>(L"Flame_Item_Init")(item, itemSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_List_Init(struct flameGeneric_s* list, int itemSize, int listSize) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, int, int)>(L"Flame_List_Init")(list, itemSize, listSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_List_Move_Global(struct flameGeneric_s* item, struct flameGeneric_s** fromList, struct flameGeneric_s** toList) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, struct flameGeneric_s**, struct flameGeneric_s**)>(L"Flame_List_Move_Global")(item, fromList, toList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_List_Add_Local(struct flameGeneric_s* item, struct flameGeneric_s** localList) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, struct flameGeneric_s**)>(L"Flame_List_Add_Local")(item, localList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_List_Sub_Local(struct flameGeneric_s* item, struct flameGeneric_s** localList) -> void
{
  return Zynamic::Forward<void (struct flameGeneric_s*, struct flameGeneric_s**)>(L"Flame_List_Sub_Local")(item, localList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flame_Age_All_Objects(int time, int localClientNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_Flame_Age_All_Objects")(time, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Flame_Age_All_Objects(int time) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_Flame_Age_All_Objects")(time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Source_Alloc(int entityNum, int time) -> struct flameSource_t*
{
  return Zynamic::Forward<struct flameSource_t* (int, int)>(L"Flame_Source_Alloc")(entityNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Flame_Source_Alloc(int entityNum, int time) -> struct flameSource_t*
{
  return Zynamic::Forward<struct flameSource_t* (int, int)>(L"SV_Flame_Source_Alloc")(entityNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Render_Sprite(struct cg_s* clientGlobals, struct Material* material, struct flameGeneric_s* flameGeneric, float alpha, float frame, unsigned char col) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct Material*, struct flameGeneric_s*, float, float, unsigned char)>(L"Flame_Render_Sprite")(clientGlobals, material, flameGeneric, alpha, frame, col);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Render_Sprites(struct cg_s* clientGlobals, struct Material* material, struct flameGeneric_s** flameGenericList, int numItems) -> void
{
  return Zynamic::Forward<void (struct cg_s*, struct Material*, struct flameGeneric_s**, int)>(L"Flame_Render_Sprites")(clientGlobals, material, flameGenericList, numItems);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_GetLocalClientFlameSource(int localClientNum, int EntNum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Flame_GetLocalClientFlameSource")(localClientNum, EntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsLastActiveLocalClient(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_IsLastActiveLocalClient")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Source_Update(struct flameSource_t* source, struct flameWeaponConfig_t* weaponConfig, int time) -> void
{
  return Zynamic::Forward<void (struct flameSource_t*, struct flameWeaponConfig_t*, int)>(L"Flame_Source_Update")(source, weaponConfig, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Flame_Update_Source_Internal(struct flameSource_t* source, int entityNum, struct flameWeaponConfig_t* weaponConfig, int time) -> void
{
  return Zynamic::Forward<void (struct flameSource_t*, int, struct flameWeaponConfig_t*, int)>(L"SV_Flame_Update_Source_Internal")(source, entityNum, weaponConfig, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flame_Update_Source_Internal(struct flameSource_t* source, int entityNum, struct flameWeaponConfig_t* weaponConfig, int time, struct flameRender_s* flameRend, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct flameSource_t*, int, struct flameWeaponConfig_t*, int, struct flameRender_s*, int)>(L"CG_Flame_Update_Source_Internal")(source, entityNum, weaponConfig, time, flameRend, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Flame_Update_Source(int entityNum, struct flameWeaponConfig_t* weaponConfig, int time) -> void
{
  return Zynamic::Forward<void (int, struct flameWeaponConfig_t*, int)>(L"SV_Flame_Update_Source")(entityNum, weaponConfig, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flame_Update_Source(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_Flame_Update_Source")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Generate_Verts(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Flame_Generate_Verts")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Flame_Update_ViewModel(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Flame_Update_ViewModel")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Random(bool is_server) -> float
{
  return Zynamic::Forward<float (bool)>(L"Flame_Random")(is_server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CRandom(bool is_server) -> float
{
  return Zynamic::Forward<float (bool)>(L"Flame_CRandom")(is_server);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CalcTimeScale(int startTime, int endTime) -> float
{
  return Zynamic::Forward<float (int, int)>(L"Flame_CalcTimeScale")(startTime, endTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_CalcInvStartSpeed(float invInitialSpeed, float speedScale) -> float
{
  return Zynamic::Forward<float (float, float)>(L"Flame_CalcInvStartSpeed")(invInitialSpeed, speedScale);
}

#endif // __UNIMPLEMENTED__
