//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto LiveStorage_WriteChecksumToBuffer(unsigned char* buffer, const int len) -> void
{
  return Zynamic::Forward<void (unsigned char*, const int)>(L"LiveStorage_WriteChecksumToBuffer")(buffer, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SystemTimeToInt() -> int
{
  return Zynamic::Forward<int ()>(L"SystemTimeToInt")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStats(unsigned char* buffer) -> void
{
  return Zynamic::Forward<void (unsigned char*)>(L"LiveStorage_ResetStats")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetDvarFromLocString(const int controllerIndex, const char* dvarName, const char* preLocalizedText) -> void
{
  return Zynamic::Forward<void (const int, const char*, const char*)>(L"SetDvarFromLocString")(controllerIndex, dvarName, preLocalizedText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ResetCreateAClassNames(const int controllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"ResetCreateAClassNames")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_InitCustomClassesNames() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_InitCustomClassesNames")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadStats(const int __formal, bool validate, bool silent) -> void
{
  return Zynamic::Forward<void (const int, bool, bool)>(L"LiveStorage_ReadStats")(__formal, validate, silent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadStatsIfDirChanged(const int __formal) -> void
{
  return Zynamic::Forward<void (const int)>(L"LiveStorage_ReadStatsIfDirChanged")(__formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_UploadStats() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_UploadStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_UploadStatsForController(const int controllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LiveStorage_UploadStatsForController")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'fileops''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'fileops''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ResetFileOp(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"SV_ResetFileOp")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetFreeFileOp() -> struct dwFileOperationInfo*
{
  return Zynamic::Forward<struct dwFileOperationInfo* ()>(L"SV_GetFreeFileOp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DumpFileOps() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DumpFileOps")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UseFileOp() -> void
{
  return Zynamic::Forward<void ()>(L"SV_UseFileOp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FreeFileOp() -> void
{
  return Zynamic::Forward<void ()>(L"SV_FreeFileOp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetXP_f() -> void
{
  return Zynamic::Forward<void ()>(L"CL_GetXP_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_Init_Platform() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_Init_Platform")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_fetchPlaylistsFileTask''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_fetchPlaylistsFileTask''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_FetchPlaylistsLocal(const int controllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LiveStorage_FetchPlaylistsLocal")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_CheckOngoingSessionTasks_Platform() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_CheckOngoingSessionTasks_Platform")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'lbRemoteTask''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'lbRemoteTask''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'dwOverlappedTasks''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'dwOverlappedTasks''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_playerStats''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_playerStats''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SendStatsBufferToClient(unsigned __int64 uid, unsigned char* buffer, int buffersize, enum blobtype_t blobtype, bool sendOK) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned char*, int, enum blobtype_t, bool)>(L"LiveStorage_SendStatsBufferToClient")(uid, buffer, buffersize, blobtype, sendOK);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetClientDDLStat(int clientnum, const char* stat, int* outInt) -> bool
{
  return Zynamic::Forward<bool (int, const char*, int*)>(L"SV_GetClientDDLStat")(clientnum, stat, outInt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetStatFromBlob(char* buffer, const char* stat, int* outInt) -> bool
{
  return Zynamic::Forward<bool (char*, const char*, int*)>(L"SV_GetStatFromBlob")(buffer, stat, outInt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetIntClientStatByGameMode(int clientNum, int* outInt, const char* gameMode, const char* statName) -> bool
{
  return Zynamic::Forward<bool (int, int*, const char*, const char*)>(L"SV_GetIntClientStatByGameMode")(clientNum, outInt, gameMode, statName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWInitStats() -> void
{
  return Zynamic::Forward<void ()>(L"SV_DWInitStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetClientLBStat(int clientNum, int statId, int value) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"SV_SetClientLBStat")(clientNum, statId, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MakeClientLBRow(int clientNum, const struct LbPlayerStat* const stats, const int type, const int lbIndex, class LeaderBoardRow<10>* const row, bool statWriteTypeAdd) -> bool
{
  return Zynamic::Forward<bool (int, const struct LbPlayerStat* const, const int, const int, class LeaderBoardRow<10>* const, bool)>(L"SV_MakeClientLBRow")(clientNum, stats, type, lbIndex, row, statWriteTypeAdd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CommitClientLeaderboardsSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_CommitClientLeaderboardsSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CommitClientLeaderboardsFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_CommitClientLeaderboardsFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto operator++(enum day_t& in) -> enum day_t&
{
  return Zynamic::Forward<enum day_t& (enum day_t&)>(L"operator++")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DoTimedStatsForClient(int clientnum, const char* gameModePrefix, class LeaderBoardRow<10>* weeklyRow, int weeklylbIndex, class LeaderBoardRow<10>* monthlyRow, int monthlylBIndex) -> void
{
  return Zynamic::Forward<void (int, const char*, class LeaderBoardRow<10>*, int, class LeaderBoardRow<10>*, int)>(L"SV_DoTimedStatsForClient")(clientnum, gameModePrefix, weeklyRow, weeklylbIndex, monthlyRow, monthlylBIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetMatchesPlayed(const char* gameModePrefix, int resetPeriod) -> int
{
  return Zynamic::Forward<int (const char*, int)>(L"LiveStorage_GetMatchesPlayed")(gameModePrefix, resetPeriod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetIntClientStatMatchDeltaByGameMode(int clientNum, int* outInt, const char* gameMode, const char* statName) -> bool
{
  return Zynamic::Forward<bool (int, int*, const char*, const char*)>(L"SV_GetIntClientStatMatchDeltaByGameMode")(clientNum, outInt, gameMode, statName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetTotalMatchesPlayedByGameModeForClient(int clientNum, const char* gameModePrefix) -> int
{
  return Zynamic::Forward<int (int, const char*)>(L"SV_GetTotalMatchesPlayedByGameModeForClient")(clientNum, gameModePrefix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetClientStatsForRow(int clientNum, const char* gameModePrefix, bool delta) -> void
{
  return Zynamic::Forward<void (int, const char*, bool)>(L"SV_SetClientStatsForRow")(clientNum, gameModePrefix, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ArePrestigeLBsEnabledForClient(struct client_t* client) -> bool
{
  return Zynamic::Forward<bool (struct client_t*)>(L"SV_ArePrestigeLBsEnabledForClient")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetGlobalLBsForClient(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_SetGlobalLBsForClient")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_MakeClientGlobalLBRow(int clientNum, const struct LbPlayerStat* const stats, const int lbIndex, class LeaderBoardRow<10>* const row) -> bool
{
  return Zynamic::Forward<bool (int, const struct LbPlayerStat* const, const int, class LeaderBoardRow<10>* const)>(L"SV_MakeClientGlobalLBRow")(clientNum, stats, lbIndex, row);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CommitClientLeaderboards() -> void
{
  return Zynamic::Forward<void ()>(L"SV_CommitClientLeaderboards")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_IsStatsBlobOK(void* data) -> bool
{
  return Zynamic::Forward<bool (void*)>(L"SV_IsStatsBlobOK")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientGlobalStatsSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_DWReadClientGlobalStatsSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientGlobalStatsFailure(const int controllerIndex, void* data) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int, void*)>(L"SV_DWReadClientGlobalStatsFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientCACSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_DWReadClientCACSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientCACFailure(const int controllerIndex, void* data) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int, void*)>(L"SV_DWReadClientCACFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWWriteClientGlobalStatsSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_DWWriteClientGlobalStatsSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ReadClientFileSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_ReadClientFileSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ReadClientFileFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_ReadClientFileFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteClientFileSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_WriteClientFileSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ReadDWFileDeferred(struct dwFileOperationInfo* fileInfo) -> void
{
  return Zynamic::Forward<void (struct dwFileOperationInfo*)>(L"SV_ReadDWFileDeferred")(fileInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteClientFileDeferred(struct client_t* client, struct dwFileOperationInfo* fileInfo) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct dwFileOperationInfo*)>(L"SV_WriteClientFileDeferred")(client, fileInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientStats(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_DWReadClientStats")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWReadClientCAC(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_DWReadClientCAC")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_DWWriteClientStats(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_DWWriteClientStats")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto operator++(enum sv_cacvalidate_state_t& in) -> enum sv_cacvalidate_state_t&
{
  return Zynamic::Forward<enum sv_cacvalidate_state_t& (enum sv_cacvalidate_state_t&)>(L"operator++")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_SetIntStat(unsigned char* buffer, const char* stat, unsigned int value) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, const char*, unsigned int)>(L"SV_CACValidate_SetIntStat")(buffer, stat, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_EvaluateStatsBlobs(bool* oldcacok, bool* globalok, unsigned char* oldcacblob, unsigned char* globalblob, int oldcacsize, int globalsize) -> void
{
  return Zynamic::Forward<void (bool*, bool*, unsigned char*, unsigned char*, int, int)>(L"SV_CACValidate_EvaluateStatsBlobs")(oldcacok, globalok, oldcacblob, globalblob, oldcacsize, globalsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PrestigeReset(char* liveStatsBuffer) -> void
{
  return Zynamic::Forward<void (char*)>(L"SV_PrestigeReset")(liveStatsBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ValidateClientCAC(unsigned char* oldcacblob, int oldcacblobsize, unsigned char* newcacblob, int newcacblobsize, unsigned char* globalblob, int globalblobsize, unsigned __int64 clientUID) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, int, unsigned char*, int, unsigned char*, int, unsigned __int64)>(L"SV_ValidateClientCAC")(oldcacblob, oldcacblobsize, newcacblob, newcacblobsize, globalblob, globalblobsize, clientUID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateSendClientMsgSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_CACValidateSendClientMsgSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateSendClientMsgFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"SV_CACValidateSendClientMsgFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateSendClientMsg(unsigned __int64 uid, unsigned int msg) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned int)>(L"SV_CACValidateSendClientMsg")(uid, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteCACSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateWriteCACSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteGlobalSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateWriteGlobalSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteCACFailure(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateWriteCACFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteGlobalFailure(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateWriteGlobalFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteCAC(unsigned __int64 client, unsigned char* cacblob, unsigned int cacsize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned char*, unsigned int)>(L"SV_CACValidateWriteCAC")(client, cacblob, cacsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateWriteGlobal(unsigned __int64 client, unsigned char* globalblob, unsigned int globalsize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned char*, unsigned int)>(L"SV_CACValidateWriteGlobal")(client, globalblob, globalsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadCACSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateReadCACSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadCACFailure(const int controllerIndex, void* data) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int, void*)>(L"SV_CACValidateReadCACFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadCAC(unsigned __int64 client, unsigned char* cacblob, unsigned int cacsize) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (unsigned __int64, unsigned char*, unsigned int)>(L"SV_CACValidateReadCAC")(client, cacblob, cacsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadGlobalSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"SV_CACValidateReadGlobalSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadGlobalFailure(const int controllerIndex, void* data) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int, void*)>(L"SV_CACValidateReadGlobalFailure")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateReadGlobal(unsigned __int64 client, unsigned char* globalblob, unsigned int globalblobsize) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (unsigned __int64, unsigned char*, unsigned int)>(L"SV_CACValidateReadGlobal")(client, globalblob, globalblobsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidateHandleRequest(unsigned __int64 clientID, unsigned char* compressedcac, unsigned int cacsize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, unsigned char*, unsigned int)>(L"SV_CACValidateHandleRequest")(clientID, compressedcac, cacsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_OnNewStatsFromServer(unsigned char* compressedblob, unsigned int blobsize, enum blobtype_t blobtype) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned int, enum blobtype_t)>(L"Live_OnNewStatsFromServer")(compressedblob, blobsize, blobtype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CACValidate_DispatchMessage(unsigned __int64 senderID, void* message, unsigned int messageSize) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, void*, unsigned int)>(L"Live_CACValidate_DispatchMessage")(senderID, message, messageSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetPlaylistFetchedTime() -> void
{
  return Zynamic::Forward<void ()>(L"SV_SetPlaylistFetchedTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetPlaylistFetchedTime() -> int
{
  return Zynamic::Forward<int ()>(L"SV_GetPlaylistFetchedTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetShouldMapRotate(bool should) -> void
{
  return Zynamic::Forward<void (bool)>(L"SV_SetShouldMapRotate")(should);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ShouldMapRotate() -> bool
{
  return Zynamic::Forward<bool ()>(L"SV_ShouldMapRotate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_FetchWADDeferred() -> void
{
  return Zynamic::Forward<void ()>(L"SV_FetchWADDeferred")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetGlobalBlobSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"LiveStorage_GetGlobalBlobSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetGlobalBlobFileNotFound(const int controlleridx, void* data) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int, void*)>(L"LiveStorage_GetGlobalBlobFileNotFound")(controlleridx, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadPlayerGlobalBlob() -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* ()>(L"LiveStorage_ReadPlayerGlobalBlob")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_AreWeFetchingStats() -> bool
{
  return Zynamic::Forward<bool ()>(L"LiveStorage_AreWeFetchingStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_BeginStatsFetch() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_BeginStatsFetch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_FinishStatsFetch() -> void
{
  return Zynamic::Forward<void ()>(L"LiveStorage_FinishStatsFetch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_FirstTimeRunning(const int __formal) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"LiveStorage_FirstTimeRunning")(__formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SetFirstTimeRunning(bool running) -> void
{
  return Zynamic::Forward<void (bool)>(L"LiveStorage_SetFirstTimeRunning")(running);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SaveRecentServersComplete(int controllerindex, void* data) -> void
{
  return Zynamic::Forward<void (int, void*)>(L"LiveStorage_SaveRecentServersComplete")(controllerindex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SaveRecentServers(unsigned char* buffer, int buffSize) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (unsigned char*, int)>(L"LiveStorage_SaveRecentServers")(buffer, buffSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadRecentServersSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"LiveStorage_ReadRecentServersSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadRecentServers(unsigned char* buf, int bufsize) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (unsigned char*, int)>(L"LiveStorage_ReadRecentServers")(buf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DeleteGlobalStatsSuccess(const int controllerIndex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"LiveStorage_DeleteGlobalStatsSuccess")(controllerIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DeleteGlobalStatsNotFound(const int controllerindex, void* data) -> void
{
  return Zynamic::Forward<void (const int, void*)>(L"LiveStorage_DeleteGlobalStatsNotFound")(controllerindex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DeleteGlobalStats(const int controllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"LiveStorage_DeleteGlobalStats")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
