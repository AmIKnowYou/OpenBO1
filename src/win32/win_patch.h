//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

void Sys_Patch();

inline auto XAssetPatch(const int type, const unsigned int size)
{
  auto DB_GetXAssetSizeHandlers = reinterpret_cast<int(**)()>(0x00E064A0);
  auto DB_XAssetPool = reinterpret_cast<void**>(0x00E06888);
  auto g_poolSize = reinterpret_cast<unsigned*>(0x00E065C8);

  DB_XAssetPool[type] = malloc(size * DB_GetXAssetSizeHandlers[type]());
  g_poolSize[type] = size;
}

inline auto LazyPatch(const unsigned long address, const int opcode = 0x99, const int size = 0x99)
{
  const auto lazy_macro = address + 0x01;
  const auto lazy_condition = address + 0x07;

  if (*reinterpret_cast<volatile unsigned char*>(lazy_macro) != 0x01)
    return;
  if (*reinterpret_cast<volatile unsigned char*>(lazy_condition) == 0x75)
    memset(reinterpret_cast<void*>(lazy_condition), 0x74, 1);
  else if (*reinterpret_cast<volatile unsigned char*>(lazy_condition) == 0x74)
    memset(reinterpret_cast<void*>(lazy_condition), 0x75, 1);
  if (opcode != 0x99)
    memset(reinterpret_cast<void*>(lazy_condition), opcode, size);
}

inline auto  CL_GetServerList   = reinterpret_cast<bool(*)(int source, serverInfo_t** servers, int** count)>(0x566d50);
inline auto  MSG_ReadString     = reinterpret_cast<char*(*)(msg_t* msg, char* string, unsigned maxChars)>(0x6e46c0);
inline auto  Info_ValueForKey   = reinterpret_cast<char*(*)(const char* s, const char* key)>(0x7d2ae0);
inline auto  Dvar_GetString     = reinterpret_cast<const char*(*)(const char* dvarName)>(0x7bdf00);
inline auto  Com_DPrintf        = reinterpret_cast<void(*)(int channel, const char* fmt, ...)>(0x6d1c50);
inline auto  FindServerBySecID  = reinterpret_cast<serverInfo_t*(*)(bdSecurityID* secid, int source)>(0x5a10d0);
inline auto  CL_SetServerInfo   = reinterpret_cast<void(*)(serverInfo_t* server, const char* info, int ping)>(0x568110);
inline auto  Scr_GetNumParam    = reinterpret_cast<int(*)(scriptInstance_t inst)>(0x8de4e0);
inline auto  Scr_AddBool        = reinterpret_cast<void(*)(int value, scriptInstance_t inst)>(0x8de500);
inline auto  Scr_AddInt         = reinterpret_cast<void(*)(int value, scriptInstance_t inst)>(0x8de740);
inline auto  Scr_MakeArray      = reinterpret_cast<void(*)(scriptInstance_t inst)>(0x8dec60);
inline auto  Scr_AddArray       = reinterpret_cast<void(*)(scriptInstance_t inst)>(0x8decb0);
inline auto  Scr_Error          = reinterpret_cast<void(*)(scriptInstance_t inst, const char* error, bool force_terminal)>(0x8def40);
inline auto  Scr_ParamError     = reinterpret_cast<void(*)(unsigned index, const char* error, scriptInstance_t inst)>(0x8df060);
inline auto  Scr_ObjectError    = reinterpret_cast<void(*)(const char* error, scriptInstance_t inst)>(0x8df0d0);
inline auto  Scr_GetInt         = reinterpret_cast<int(*)(unsigned index, scriptInstance_t inst)>(0x8dd550);
inline auto  Scr_GetConstString = reinterpret_cast<VariableUnion(*)(unsigned index, scriptInstance_t inst)>(0x8dda90);
inline auto  CG_ParseFog        = reinterpret_cast<void(*)(int localClientNum)>(0x4ffea0);
inline auto  Assert_MyHandler   = reinterpret_cast<bool(*)(const char* filename, int line, int type, const char* fmt, ...)>(0x788720);
inline auto  CG_GetEntity       = reinterpret_cast<centity_s*(*)(int localClientNum, int entityIndex)>(0x401de0);
inline auto  CG_GetVehicleInfo  = reinterpret_cast<const vehicle_info_t*(*)(int index)>(0x513430);;
inline auto  va                 = reinterpret_cast<char*(*)(const char* format, ...)>(0x007d29a0);
inline auto  Scr_AddEntity      = reinterpret_cast<void(*)(gentity_s* ent, scriptInstance_t inst)>(0x6856f0);
inline auto  Sys_ShowConsole    = reinterpret_cast<void(*)()>(0x7dec60);
inline auto  g_entities         = reinterpret_cast<gentity_s*>(0x03CF2940);
inline auto& scr_const          = *reinterpret_cast<scr_const_t*>(0x03F38F40);

inline auto  VM_Function() -> void {}
inline auto  VM_Method(scr_entref_t ref) -> void {}

struct dwFileTask
{
  char _pad0[0xDC];
  bool m_optional;
  char _pad1[0x3];
};

struct fileRetryInfo
{
  int lastAttemptTime;
  int lastAttemptInterval;
  int retryCount;
};

struct dwFileOperationInfo
{
  dwFileTask fileTask;
  fileRetryInfo retryInfo;
  int taskType;
  bool fetchCompleted;
  bool writeCompleted;
  bool isUserFile;
  bool isCompressedFile;
  const char* menuDef;
  unsigned char* fileBuffer;
  int bufferSize;
  void (__cdecl* fileOperationSucessFunction)(const int, void*);
  taskCompleteResults (__cdecl*fileNotFoundFunction)(const int, void*);
  void (__cdecl* fileOperationFailureFunction)(const int, void*);
  unsigned __int64 ownerID;
  bool* alreadyUploaded;
};

enum statsLocation
{
  STATS_LOCATION_NORMAL = 0x0,
  STATS_LOCATION_FORCE_NORMAL = 0x1,
  STATS_LOCATION_BACKUP = 0x2,
  STATS_LOCATION_STABLE = 0x3,
  STATS_LOCATION_OTHERPLAYER = 0x4,
  STATS_LOCATION_BASICTRAINING = 0x5,
  STATS_LOCATION_GLOBAL = 0x6,
  STATS_LOCATION_GLOBALSTABLE = 0x7,
  STATS_LOCATION_COUNT = 0x8,
};

struct persistentStats
{
  unsigned __int8 statsBuffer[40548];
  bool isChecksumValid;
  bool statsWriteNeeded;
  bool statsValidatedWithDDL;
  bool statsFetched;
};

struct playerNetworkData
{
  persistentStats playerStats;
  persistentStats playerStatsBackup;
  persistentStats stableStatsBuffer;
  persistentStats basicTrainingStats;
  persistentStats globalplayerStats;
  persistentStats globalStablePlayerStats;
  bool firstTimeRunning;
  bool fileShareFetched;
  void* fileOps;
};

typedef void TaskRecord;
typedef void TaskDefinition;
static playerNetworkData controllerNetworkData[1];
static persistentStats   s_otherPlayerStats;
static unsigned char     s_playlist_string_buffer[98304];
static unsigned char     s_temp_global_stats_buffer[40548];
static unsigned char     s_temp_stats_buffer[40548];
static unsigned long     s_playlist_string_buffer_size = sizeof s_playlist_string_buffer;

inline auto LiveStorage_VerifyCorrectStats(persistentStats* stats, statsLocation location) -> void
{
    reinterpret_cast<void(*)(persistentStats *, statsLocation)>(0x00980080)(stats, location);
}

inline auto LiveStorage_GetPersStatsBuffer(const int controllerIndex, statsLocation playerStatsLocation, bool verifyLocation) -> persistentStats*
{
  persistentStats* stats = nullptr;

  switch (playerStatsLocation)
  {
  case STATS_LOCATION_NORMAL:
  case STATS_LOCATION_FORCE_NORMAL:
    stats = &controllerNetworkData[controllerIndex].playerStats;
    break;
  case STATS_LOCATION_BACKUP:
    stats = &controllerNetworkData[controllerIndex].playerStatsBackup;
    break;
  case STATS_LOCATION_STABLE:
    stats = &controllerNetworkData[controllerIndex].stableStatsBuffer;
    break;
  case STATS_LOCATION_OTHERPLAYER:
    stats = &s_otherPlayerStats;
    break;
  case STATS_LOCATION_BASICTRAINING:
    stats = &controllerNetworkData[controllerIndex].basicTrainingStats;
    break;
  case STATS_LOCATION_GLOBAL:
    stats = &controllerNetworkData[controllerIndex].globalplayerStats;
    break;
  case STATS_LOCATION_GLOBALSTABLE:
    stats = &controllerNetworkData[controllerIndex].globalStablePlayerStats;
    break;
  case STATS_LOCATION_COUNT:
    break;
  }

  if (verifyLocation)
    LiveStorage_VerifyCorrectStats(stats, playerStatsLocation);

  return stats;
}

inline auto LiveStorage_GetStatsBuffer(const int controllerIndex, statsLocation playerStatsLocation, bool verifyLocation) -> unsigned char*
{
  return reinterpret_cast<unsigned char*>(LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, verifyLocation));
}

inline auto LiveStorage_GetStatsBufferSize(const int controllerIndex, statsLocation playerStatsLocation, bool verifyLocation) -> int
{
  return 40548;
}

inline auto LiveStorage_GetStatsChecksumValid(const int controllerIndex, statsLocation playerStatsLocation) -> bool
{
  return LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, true)->isChecksumValid;
}

inline auto LiveStorage_SetStatsChecksumValid(const int controllerIndex, statsLocation playerStatsLocation, bool isValid) -> void
{
  LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, true)->isChecksumValid = isValid;
}

inline auto LiveStorage_AreStatsDDLValidated(const int controllerIndex, statsLocation playerStatsLocation) -> bool
{
  return LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, true)->statsValidatedWithDDL;
}

inline auto LiveStorage_SetStatsDDLValidated(const int controllerIndex, statsLocation playerStatsLocation, bool statsValidatedWithDDL) -> void
{
  LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, true)->statsValidatedWithDDL = statsValidatedWithDDL;
}

inline auto LiveStorage_DoWeHaveStats(const int controllerIndex, statsLocation playerStatsLocation) -> bool
{
  return LiveStorage_GetPersStatsBuffer(controllerIndex, playerStatsLocation, true)->statsFetched;
}

inline auto LiveStorage_DoWeHaveCurrentStats(const int controllerIndex) -> bool
{
  return LiveStorage_GetPersStatsBuffer(controllerIndex, STATS_LOCATION_NORMAL, false)->statsFetched;
}

inline auto LiveStorage_SetStatsFetched(const int localControllerIndex, statsLocation playerStatsLocation, bool isFetched) -> void
{
  LiveStorage_GetPersStatsBuffer(localControllerIndex, playerStatsLocation, true)->statsFetched = isFetched;
}

inline auto LiveStorage_SetupNestedTask(const TaskDefinition* taskdef, int controllerIndex, TaskRecord* nestedTask, void* payload) -> TaskRecord*
{
  return reinterpret_cast<TaskRecord * (*)(const TaskDefinition*, int, TaskRecord*, void*)>(0x009805E0)(taskdef, controllerIndex, nestedTask, payload);
}

inline auto LiveStorage_ReadDWFile(const int controllerIndex, dwFileOperationInfo* fileInfo) -> TaskRecord*
{
  return reinterpret_cast<TaskRecord * (*)(int, dwFileOperationInfo*)>(0x00981090)(controllerIndex, fileInfo);
}

inline auto LiveStorage_ReadCommonStats(const int controllerIndex, bool silent, statsLocation location, const TaskDefinition* taskDef, dwFileOperationInfo* fileInfo) -> TaskRecord*
{
  fileInfo->retryInfo.lastAttemptTime = 0;
  fileInfo->retryInfo.lastAttemptInterval = 0;
  fileInfo->retryInfo.retryCount = 0;
  fileInfo->isUserFile = true;
  fileInfo->isCompressedFile = true;
  fileInfo->fileTask.m_optional = true;
  fileInfo->fileBuffer = LiveStorage_GetStatsBuffer(controllerIndex, location, true);
  fileInfo->bufferSize = LiveStorage_GetStatsBufferSize(controllerIndex, location, true);
  fileInfo->menuDef = "popup_fetchstats";

  if (location != STATS_LOCATION_BASICTRAINING)
  {
    memset(s_temp_stats_buffer, 0, sizeof s_temp_stats_buffer);
    fileInfo->fileBuffer = s_temp_stats_buffer;
    fileInfo->bufferSize = sizeof s_temp_stats_buffer;
  }

  return LiveStorage_SetupNestedTask(taskDef, controllerIndex, LiveStorage_ReadDWFile(controllerIndex, fileInfo), fileInfo);
}

inline auto LiveStorage_ClearPlayerStats(const int controllerIndex) -> void
{
  memset(reinterpret_cast<void*>(0x0A56DA38), 0, 241040);
  memset(&controllerNetworkData, 0, sizeof controllerNetworkData);

  *reinterpret_cast<void**>(0xA5A87C4 + 0x3AD90 * controllerIndex) = reinterpret_cast<void*>(0x0A5BD908 + 0x6F58 * controllerIndex);
  controllerNetworkData[controllerIndex].fileOps = reinterpret_cast<void*>(0x0A5BD908 + 0x6F58 * controllerIndex);
}

inline auto CL_ServerInfoPacket(bdSecurityID* secID, msg_t* msg, int time) -> void
{
  clientStatic_t& cls = *reinterpret_cast<clientStatic_t*>(0x00FB2D68);

  int* numServers; // [esp+8h] [ebp-41Ch] BYREF
  char strBuf[1024]; // [esp+Ch] [ebp-418h] BYREF
  serverInfo_t* servers; // [esp+41Ch] [ebp-8h] BYREF

  CL_GetServerList(cls.pingUpdateSource, &servers, &numServers);

  if (!servers)
    return;

  char* infoString = MSG_ReadString(msg, strBuf, 0x400u);
  const int prot = strtol(Info_ValueForKey(infoString, "protocol"), nullptr, 10);
  const char* ptr = Dvar_GetString("debug_protocol");

  if (prot != (*ptr ? atol(ptr) : 2117))
    return Com_DPrintf(14, "Different protocol info packet: %s\n", infoString);

  if (serverInfo_t* server = FindServerBySecID(secID, cls.pingUpdateSource))
  {
    if (!server->pingedTime)
      return;

    const int pingTime = time - server->pingedTime;

    if (pingTime < 0)
      return;

    Com_DPrintf(14, "ping time %dms from %s\n", pingTime, server->hostName);
    CL_SetServerInfo(server, infoString, pingTime);
  }
  else
    Com_DPrintf(14, "Got ping response from %llu, but no match was found. Hax?\n", *secID);
}

inline auto CScr_SwitchToClientVolumetricFog() -> void
{
  cg_s* v3; // eax
  int time; // edi

  if (Scr_GetNumParam(SCRIPTINSTANCE_CLIENT) != 1)
    Scr_Error(SCRIPTINSTANCE_CLIENT, "Incorrect number of parameters\nUSAGE: SwitchToClientVolumetricFog(localClientNum)\n", 0);

  const int Int = Scr_GetInt(0, SCRIPTINSTANCE_CLIENT);
  const LocalClientNum_t v1 = Int;

  if (Int < 0 || Int >= 1)
  {
    const char* v2 = va("Trying to get a local client index for a client '%d' that is not a local client.", Int);
    Scr_Error(SCRIPTINSTANCE_CLIENT, v2, false);
  }

  CG_ParseFog(v1);
}

inline auto CScr_IsInHelicopter() -> void
{
  cg_s* cgArray = reinterpret_cast<cg_s*>(0x00F4FB68);
  cg_s* v4; // eax
  bool v7; // zf

  unsigned __int8 v0 = 0;
  const int Int = Scr_GetInt(0, SCRIPTINSTANCE_CLIENT);
  const LocalClientNum_t v2 = Int;

  if (Int < 0 || Int >= 1)
  {
    const char* v3 = va("Trying to get a local client index for a client '%d' that is not a local client.", Int);
    Scr_Error(SCRIPTINSTANCE_CLIENT, v3, false);
  }

  if (cgArray)
  {
    if (v2 && !Assert_MyHandler(__FUNCSIG__, 2171, 0, "((localClientNum == 0))", "(localClientNum) = %i", v2))
      __debugbreak();

    v4 = cgArray;
  }
  else
    v4 = nullptr;

  if (const CameraMode lastCamMode = v4->cameraData.lastCamMode; lastCamMode == CAM_VEHICLE)
  {
    const centity_s* Entity = CG_GetEntity(v2, v4->predictedPlayerState.viewlocked_entNum);
    v7 = CG_GetVehicleInfo(Entity->nextState.un2.vehicleState.vehicleInfoIndex);
  }
  else
    v7 = lastCamMode == CAM_VEHICLE_GUNNER;

  if (v7)
    v0 = 1;

  Scr_AddInt(v0, SCRIPTINSTANCE_CLIENT);
}

// cg_scr_main_mp.cpp:0x4FE300
inline void (__cdecl *__cdecl CScr_GetFunctionProjectSpecific(const char** pName, int* type))()
{
  BuiltinFunctionDef* client_project_functions = reinterpret_cast<BuiltinFunctionDef*>(0x00E04080);

  for (unsigned int i = 0; i < 0x1A; ++i)
  {
    if (!strcmp(*pName, client_project_functions[i].actionString))
    {
      *pName = client_project_functions[i].actionString;
      *type = client_project_functions[i].type;
      return client_project_functions[i].actionFunc;
    }
  }

  if (!_stricmp(*pName, "SwitchToClientVolumetricFog"))
    return CScr_SwitchToClientVolumetricFog;

  if (!_stricmp(*pName, "SwitchToServerVolumetricFog"))
    return CScr_SwitchToClientVolumetricFog;

  if (!_stricmp(*pName, "IsInHelicopter"))
    return CScr_IsInHelicopter;

  return 0;
}

inline void (__cdecl *__cdecl CScr_GetFunction(const char** pName, int* type))()
{
  BuiltinFunctionDef* client_functions = reinterpret_cast<BuiltinFunctionDef*>(0x00E038B0);

  for (unsigned int i = 0; i < 0x9A; ++i)
  {
    if (!strcmp(*pName, client_functions[i].actionString))
    {
      *pName = client_functions[i].actionString;
      *type = client_functions[i].type;
      return client_functions[i].actionFunc;
    }
  }

  return CScr_GetFunctionProjectSpecific(pName, type);
}

inline void (__cdecl *__cdecl CScr_GetMethodProjectSpecific(const char** pName, int* type))(scr_entref_t)
{
  BuiltinMethodDef* client_project_methods = reinterpret_cast<BuiltinMethodDef*>(0x00C8E660);

  for (unsigned int i = 0; i < 0x1D; ++i)
  {
    if (!strcmp(*pName, client_project_methods[i].actionString))
    {
      *pName = client_project_methods[i].actionString;
      *type = client_project_methods[i].type;
      return client_project_methods[i].actionFunc;
    }
  }

  return VM_Method;
}

inline void (__cdecl *__cdecl CScr_GetMethod(const char** pName, int* type))(scr_entref_t)
{
  BuiltinMethodDef* client_methods = reinterpret_cast<BuiltinMethodDef*>(0x00C8A6A0);

  for (unsigned int i = 0; i < 0x6F; ++i)
  {
    if (!strcmp(*pName, client_methods[i].actionString))
    {
      *pName = client_methods[i].actionString;
      *type = client_methods[i].type;
      return client_methods[i].actionFunc;
    }
  }

  return CScr_GetMethodProjectSpecific(pName, type);
}

inline void (__cdecl *__cdecl Actor_GetMethod(const char** pName))(scr_entref_t)
{
  BuiltinMethodDef* methods_2 = reinterpret_cast<BuiltinMethodDef*>(0x00D359D8);

  for (unsigned int i = 0; i < 0x4D; ++i)
  {
    if (!strcmp(*pName, methods_2[i].actionString))
    {
      *pName = methods_2[i].actionString;
      return methods_2[i].actionFunc;
    }
  }

  return nullptr;
}

inline auto __cdecl PlayerCmd_IsFiring(scr_entref_t entref) -> void
{
  gentity_s* pSelf;

  if (entref.classnum)
  {
    Scr_ObjectError("not an entity", SCRIPTINSTANCE_SERVER);
    pSelf = nullptr;
  }
  else
  {
    if (entref.entnum >= 0x400u && !Assert_MyHandler("C:\\projects_pc\\cod\\codsrc\\src\\cgame_mp\\cg_scr_main_mp.cpp", 1396, 0, "%s", "entref.entnum < MAX_GENTITIES"))
      __debugbreak();

    pSelf = &g_entities[entref.entnum];

    if (!pSelf->client)
      Scr_ObjectError(va("entity %i is not a player", entref.entnum), SCRIPTINSTANCE_SERVER);
  }

  if (const int weaponstate = pSelf->client->ps.weaponstate; weaponstate == 6 || weaponstate == 7 || weaponstate == 8 || weaponstate == 40 || weaponstate == 19 || weaponstate == 20 || weaponstate == 21)
    Scr_AddBool(1, SCRIPTINSTANCE_SERVER);
  else
    Scr_AddBool(0, SCRIPTINSTANCE_SERVER);
}

inline auto __cdecl PlayerCmd_IsMeleeing(scr_entref_t entref) -> void
{
  gentity_s* pSelf;

  if (entref.classnum)
  {
    Scr_ObjectError("not an entity", SCRIPTINSTANCE_SERVER);
    pSelf = nullptr;
  }
  else
  {
    if (entref.entnum >= 0x400u && !Assert_MyHandler("C:\\projects_pc\\cod\\codsrc\\src\\cgame_mp\\cg_scr_main_mp.cpp", 1396, 0, "%s", "entref.entnum < MAX_GENTITIES"))
      __debugbreak();

    pSelf = &g_entities[entref.entnum];

    if (!pSelf->client)
      Scr_ObjectError(va("entity %i is not a player", entref.entnum), SCRIPTINSTANCE_SERVER);
  }

  if (const int weaponstate = pSelf->client->ps.weaponstate; weaponstate == 19 || weaponstate == 20 || weaponstate == 21)
    Scr_AddBool(1, SCRIPTINSTANCE_SERVER);
  else
    Scr_AddBool(0, SCRIPTINSTANCE_SERVER);
}

inline auto __cdecl PlayerCmd_IsSwitchingWeapons(scr_entref_t entref) -> void
{
  gentity_s* pSelf;

  if (entref.classnum)
  {
    Scr_ObjectError("not an entity", SCRIPTINSTANCE_SERVER);
    pSelf = nullptr;
  }
  else
  {
    if (entref.entnum >= 0x400u && !Assert_MyHandler("C:\\projects_pc\\cod\\codsrc\\src\\cgame_mp\\cg_scr_main_mp.cpp", 1396, 0, "%s", "entref.entnum < MAX_GENTITIES"))
      __debugbreak();

    pSelf = &g_entities[entref.entnum];

    if (!pSelf->client)
      Scr_ObjectError(va("entity %i is not a player", entref.entnum), SCRIPTINSTANCE_SERVER);
  }

  if (const int weaponstate = pSelf->client->ps.weaponstate; weaponstate == 1 || weaponstate == 2 || weaponstate == 3 || weaponstate == 4 || weaponstate == 5)
    Scr_AddBool(1, SCRIPTINSTANCE_SERVER);
  else
    Scr_AddBool(0, SCRIPTINSTANCE_SERVER);
}

inline void (__cdecl* __cdecl Player_GetMethod(const char** pName))(scr_entref_t)
{
  BuiltinMethodDef* methods = reinterpret_cast<BuiltinMethodDef*>(0x00CB4540);

  for (unsigned int i = 0; i < 0x9A; ++i)
  {
    if (!strcmp(*pName, methods[i].actionString))
    {
      *pName = methods[i].actionString;
      return methods[i].actionFunc;
    }
  }

  if (!_stricmp(*pName, "IsFiring"))
    return PlayerCmd_IsFiring;

  if (!_stricmp(*pName, "IsMeleeing"))
    return PlayerCmd_IsMeleeing;

  if (!_stricmp(*pName, "IsSwitchingWeapons"))
    return PlayerCmd_IsSwitchingWeapons;

  return nullptr;
}

inline auto Scr_GetTeam(scriptInstance_t inst, int index) -> team_t
{
  VariableUnion team = Scr_GetConstString(index, inst);

  if (team.intValue == scr_const.axis)
    return TEAM_AXIS;

  if (team.intValue == scr_const.allies)
    return TEAM_ALLIES;

  if (team.intValue == scr_const.spectator)
    return TEAM_SPECTATOR;

  return TEAM_FREE;
}

inline auto Scr_GetPlayers() -> void
{
  const Dvar_s*& com_maxclients = *reinterpret_cast<const Dvar_s**>(0x03FC31DC);

  bool all = true;
  team_t team = TEAM_ALLIES;

  if (Scr_GetNumParam(SCRIPTINSTANCE_SERVER))
  {
    if (Scr_GetConstString(0, SCRIPTINSTANCE_SERVER).intValue != scr_const.all)
    {
      team = Scr_GetTeam(SCRIPTINSTANCE_SERVER, 0);
      all = false;
    }
    else
      all = true;
  }

  Scr_MakeArray(SCRIPTINSTANCE_SERVER);

  for (int i = 0; i < com_maxclients->current.integer; ++i)
  {
    gentity_s* ent = &g_entities[0];
    if (ent->client && ent->client->sess.connected == CON_CONNECTED && (all || team == ent->client->sess.cs.team))
    {
      Scr_AddEntity(ent, SCRIPTINSTANCE_SERVER);
      Scr_AddArray(SCRIPTINSTANCE_SERVER);
    }
    ent++;
  }
}

inline void (__cdecl *__cdecl Scr_GetFunction(const char** pName, int* type))()
{
  BuiltinFunctionDef* functions = reinterpret_cast<BuiltinFunctionDef*>(0x00E08510);

  for (unsigned int i = 0; i < 0x17F; ++i)
  {
    if (!_stricmp(*pName, "get_players"))
      return Scr_GetPlayers;

    if (!strcmp(*pName, functions[i].actionString))
    {
      *pName = functions[i].actionString;
      *type = functions[i].type;
      return functions[i].actionFunc;
    }
  }

  return nullptr;
}

