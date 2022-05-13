//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Demo_AllocatePlaybackMemory(int location) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_AllocatePlaybackMemory")(location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_DeallocatePlaybackMemory() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_DeallocatePlaybackMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_Load() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_Load")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_TagPlayer(struct demoTagPlayers* players, unsigned __int64 playerXuid) -> void
{
  return Zynamic::Forward<void (struct demoTagPlayers*, unsigned __int64)>(L"Demo_TagPlayer")(players, playerXuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPlayerTagged(int localClientNum, struct demoTagPlayers* players, unsigned __int64 playerXuid) -> bool
{
  return Zynamic::Forward<bool (int, struct demoTagPlayers*, unsigned __int64)>(L"Demo_IsPlayerTagged")(localClientNum, players, playerXuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_TagPlayers(int localClientNum, struct demoTagPlayers* players) -> void
{
  return Zynamic::Forward<void (int, struct demoTagPlayers*)>(L"Demo_TagPlayers")(localClientNum, players);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_HiResScreenshot(int localClientNum, int tiles) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_HiResScreenshot")(localClientNum, tiles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveScreenshotSuccessful(int controllerIndex, unsigned __int64 fileID) -> void
{
  return Zynamic::Forward<void (int, unsigned __int64)>(L"Demo_SaveScreenshotSuccessful")(controllerIndex, fileID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveScreenshot(int localClientNum, unsigned int fileSlot) -> void
{
  return Zynamic::Forward<void (int, unsigned int)>(L"Demo_SaveScreenshot")(localClientNum, fileSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetCmdInProgess() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_SetCmdInProgess")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetCmdCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_SetCmdCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldProcessCmd(int cmd) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_ShouldProcessCmd")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPlaybackInited() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsPlaybackInited")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPaused() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsPaused")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_KeyframeGenerated() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_KeyframeGenerated")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetCompleted(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"Demo_SetCompleted")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsCompleted() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsShutdownInProgress() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsShutdownInProgress")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsClipRecording() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsClipRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsClipPlaying() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsClipPlaying")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetClipPausedState() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_GetClipPausedState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetJumpTimeFlag(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"Demo_SetJumpTimeFlag")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetJumpTimeFlag() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_GetJumpTimeFlag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetSwitchedPlayersFlag(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"Demo_SetSwitchedPlayersFlag")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSwitchedPlayersFlag() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_GetSwitchedPlayersFlag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldEntityBeVisibleToClient(int entNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_ShouldEntityBeVisibleToClient")(entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_HasClientSpawnedIn(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_HasClientSpawnedIn")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetupForPlayerSwitch(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_SetupForPlayerSwitch")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SwitchPlayer(int localClientNum, bool reverse, int forceClientNum, bool forceToLivePlayer) -> bool
{
  return Zynamic::Forward<bool (int, bool, int, bool)>(L"Demo_SwitchPlayer")(localClientNum, reverse, forceClientNum, forceToLivePlayer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldUpdateViewAngles(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_ShouldUpdateViewAngles")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyFrameTime(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"Demo_GetKeyFrameTime")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetCurrentControllerConfig() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetCurrentControllerConfig")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPublicOnlineMatch() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsPublicOnlineMatch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsCombatTrainingMatch() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsCombatTrainingMatch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsWagerMatch() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsWagerMatch")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsCustomGameMode() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsCustomGameMode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyFrameForJumpBack(int localClientNum, int newServerTime) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Demo_GetKeyFrameForJumpBack")(localClientNum, newServerTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyFrameForJumpForward(int localClientNum, int currentTime) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Demo_GetKeyFrameForJumpForward")(localClientNum, currentTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_DrawTransitionScreen(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_DrawTransitionScreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ActivateTransitionScreen(int transition) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_ActivateTransitionScreen")(transition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsTransitionScreenActive() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsTransitionScreenActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_DrawMetaInformationScreen(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_DrawMetaInformationScreen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsMetaInformationScreenActive() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsMetaInformationScreenActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ResetSnapshotData() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_ResetSnapshotData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ResetTimeValues(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_ResetTimeValues")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ResetSequenceNumbers(int localClientNum, int sequence) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_ResetSequenceNumbers")(localClientNum, sequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ResetWorldInformation(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_ResetWorldInformation")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsGameHudHidden() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsGameHudHidden")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsDemoHudHidden() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsDemoHudHidden")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetCurrentCameraMode() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetCurrentCameraMode")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetNextCameraMode(int cameraMode) -> int
{
  return Zynamic::Forward<int (int)>(L"Demo_GetNextCameraMode")(cameraMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SwitchCameraMode(int localClientNum, int newCamMode) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_SwitchCameraMode")(localClientNum, newCamMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UpdateVisibilityBitsForCameraMode(int localClientNum, int cameraMode) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_UpdateVisibilityBitsForCameraMode")(localClientNum, cameraMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsThirdPersonCamera() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsThirdPersonCamera")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsMovieCamera() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsMovieCamera")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldUpdateMovieCamera(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_ShouldUpdateMovieCamera")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsRenderingScreenshot(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsRenderingScreenshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsRenderingMovie() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsRenderingMovie")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetClipState(int state) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_SetClipState")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetClipState() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetClipState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsClipPreviewRunning() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsClipPreviewRunning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_LerpClipCameraValues(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_LerpClipCameraValues")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UpdateClipTime(int msec) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_UpdateClipTime")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetClipTime() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetClipTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetTotalClipDuration() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetTotalClipDuration")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SwitchTransition(int index, bool direction) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Demo_SwitchTransition")(index, direction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetClipModified(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"Demo_SetClipModified")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsClipModified() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsClipModified")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ProcessPlayback() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_ProcessPlayback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_InitPlaybackData(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_InitPlaybackData")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RestorePreDemoSettings() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_RestorePreDemoSettings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadHeader() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_ReadHeader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadGamestate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_ReadGamestate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RunFirstFrameEvents(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_RunFirstFrameEvents")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadDemoMessage(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_ReadDemoMessage")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ParseServerMessage(int localClientNum, struct msg_t* msg, int msgType, int msgSequence) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int, int)>(L"Demo_ParseServerMessage")(localClientNum, msg, msgType, msgSequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldFilterServerCommandForMovieCamera(const char* cmd) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Demo_ShouldFilterServerCommandForMovieCamera")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ParseServerCommands(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_ParseServerCommands")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ParseSnapshot(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_ParseSnapshot")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadMatchState(int localClientNum, struct msg_t* msg, int time) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int)>(L"Demo_ReadMatchState")(localClientNum, msg, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadPlayerStates(int localClientNum, struct msg_t* msg, int time) -> struct playerState_s
{
  return Zynamic::Forward<struct playerState_s (int, struct msg_t*, int)>(L"Demo_ReadPlayerStates")(localClientNum, msg, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadPacketEntities(int localClientNum, struct msg_t* msg, int time, int deltaNum) -> int
{
  return Zynamic::Forward<int (int, struct msg_t*, int, int)>(L"Demo_ReadPacketEntities")(localClientNum, msg, time, deltaNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadPacketClients(int localClientNum, struct msg_t* msg, int time, int deltaNum) -> int
{
  return Zynamic::Forward<int (int, struct msg_t*, int, int)>(L"Demo_ReadPacketClients")(localClientNum, msg, time, deltaNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetupPlaybackForClient(int localClientNum, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*)>(L"Demo_SetupPlaybackForClient")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RegisterHeliPatches() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_RegisterHeliPatches")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadInfoData(char* name, int handle) -> bool
{
  return Zynamic::Forward<bool (char*, int)>(L"Demo_ReadInfoData")(name, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetDefaultClient(int localClientNum, int defaultClient) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_SetDefaultClient")(localClientNum, defaultClient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetDefaultVisionSet(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_SetDefaultVisionSet")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UpdateCurrentSnapshot(int localClientNum, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, struct playerState_s*)>(L"Demo_UpdateCurrentSnapshot")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_EnableSnapshotProcessing() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_EnableSnapshotProcessing")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_DisableSnapshotProcessing() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_DisableSnapshotProcessing")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GenerateUncompressedSnapshot(int localClientNum, struct msg_t* msg, int msgSequence, int cmdSequence, int serverTime, int physicsTime, int snapFlags, bool writeAllPlayerStates) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int, int, int, int, int, bool)>(L"Demo_GenerateUncompressedSnapshot")(localClientNum, msg, msgSequence, cmdSequence, serverTime, physicsTime, snapFlags, writeAllPlayerStates);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteCustomSnapshotInformation(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_WriteCustomSnapshotInformation")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadCustomSnaphotInformation(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_ReadCustomSnaphotInformation")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UpdateDesiredTime(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_UpdateDesiredTime")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteConfigStrings(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_WriteConfigStrings")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReadConfigStrings(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"Demo_ReadConfigStrings")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UpdateConfigStrings(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_UpdateConfigStrings")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldGenerateKeyFrameSnapshot(int localClientNum, int serverTime) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Demo_ShouldGenerateKeyFrameSnapshot")(localClientNum, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GenerateKeyFrameSnapshot(int localClientNum, int msgSequence, int cmdSequence, int serverTime, int physicsTime, int snapFlags) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, int)>(L"Demo_GenerateKeyFrameSnapshot")(localClientNum, msgSequence, cmdSequence, serverTime, physicsTime, snapFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteKeyFrameInformation(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_WriteKeyFrameInformation")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_InitClipRecord(int localClientNum, bool newClip) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Demo_InitClipRecord")(localClientNum, newClip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteUncompressedClipSnapshot(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_WriteUncompressedClipSnapshot")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteClipCommands(int localClientNum, struct msg_t* msg, bool setClipRecordParams) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, bool)>(L"Demo_WriteClipCommands")(localClientNum, msg, setClipRecordParams);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteClipCommandsInternal(int localClientNum, struct msg_t* msg, bool setClipRecordParams) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, bool)>(L"Demo_WriteClipCommandsInternal")(localClientNum, msg, setClipRecordParams);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteEndOfFrameClipCommand(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WriteEndOfFrameClipCommand")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteClipCommandsWhenPaused(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_WriteClipCommandsWhenPaused")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteTransitionClipCommandBlockToBuffer(int transition, unsigned char* buffer, int maxBufferSize) -> int
{
  return Zynamic::Forward<int (int, unsigned char*, int)>(L"Demo_WriteTransitionClipCommandBlockToBuffer")(transition, buffer, maxBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ParseClipCommand(int localClientNum, struct msg_t* msg, bool setClipPlaybackParams) -> unsigned char
{
  return Zynamic::Forward<unsigned char (int, struct msg_t*, bool)>(L"Demo_ParseClipCommand")(localClientNum, msg, setClipPlaybackParams);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteClipGameState(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_WriteClipGameState")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldFlushClipRecordMessage() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_ShouldFlushClipRecordMessage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveClipRecordMessageToMainMemory(int localClientNum, unsigned char* data, int size, bool forceWrite) -> void
{
  return Zynamic::Forward<void (int, unsigned char*, int, bool)>(L"Demo_SaveClipRecordMessageToMainMemory")(localClientNum, data, size, forceWrite);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_PopulateClipPlayerTags(struct demoMetaInfo* info) -> void
{
  return Zynamic::Forward<void (struct demoMetaInfo*)>(L"Demo_PopulateClipPlayerTags")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_MoveToNextPhase() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_MoveToNextPhase")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetupClipStreamingState() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_SetupClipStreamingState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SendClipToStreamingBuffer(void* data, unsigned int dataSize, unsigned int bytesUploaded) -> unsigned int
{
  return Zynamic::Forward<unsigned int (void*, unsigned int, unsigned int)>(L"Demo_SendClipToStreamingBuffer")(data, dataSize, bytesUploaded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UploadClipSuccess(int controllerIndex, unsigned __int64 fileID) -> void
{
  return Zynamic::Forward<void (int, unsigned __int64)>(L"Demo_UploadClipSuccess")(controllerIndex, fileID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_UploadClipFailure(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_UploadClipFailure")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_PopulateHeliPatches(struct demoMetaInfo* info) -> void
{
  return Zynamic::Forward<void (struct demoMetaInfo*)>(L"Demo_PopulateHeliPatches")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteRecordedClip(int localClientNum, int slot, bool useSegmentInformation) -> void
{
  return Zynamic::Forward<void (int, int, bool)>(L"Demo_WriteRecordedClip")(localClientNum, slot, useSegmentInformation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForConfigString(int configStringIndex, const char* string) -> const char*
{
  return Zynamic::Forward<const char* (int, const char*)>(L"Demo_AdjustTimeForConfigString")(configStringIndex, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForReliableCommand(const char* cmd) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Demo_AdjustTimeForReliableCommand")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForMatchState(int currentTime, int clipTime, struct MatchState* matchstate) -> void
{
  return Zynamic::Forward<void (int, int, struct MatchState*)>(L"Demo_AdjustTimeForMatchState")(currentTime, clipTime, matchstate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForPlayerStateHudElement(int currentTime, int clipTime, int index, struct hudelem_s* hudElem) -> void
{
  return Zynamic::Forward<void (int, int, int, struct hudelem_s*)>(L"Demo_AdjustTimeForPlayerStateHudElement")(currentTime, clipTime, index, hudElem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForPlayerState(int currentTime, int clipTime, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, int, struct playerState_s*)>(L"Demo_AdjustTimeForPlayerState")(currentTime, clipTime, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AdjustTimeForEntityState(int currentTime, int clipTime, struct entityState_s* state) -> void
{
  return Zynamic::Forward<void (int, int, struct entityState_s*)>(L"Demo_AdjustTimeForEntityState")(currentTime, clipTime, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteDemoPreviewPoint(int localClientNum, int restorePoint) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_WriteDemoPreviewPoint")(localClientNum, restorePoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RestoreDemoPreviewPoint(int localClientNum, int restorePoint) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_RestoreDemoPreviewPoint")(localClientNum, restorePoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RestoreUIStateAfterPreview(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_RestoreUIStateAfterPreview")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_HandleInput(int localClientNum, int controllerIndex, int key, int pressed) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"Demo_HandleInput")(localClientNum, controllerIndex, key, pressed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_HandleInputForControllerConfig(int localClientNum, int controllerIndex, int key, int pressed) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"Demo_HandleInputForControllerConfig")(localClientNum, controllerIndex, key, pressed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetButtonPressTime(int demoControlButtonType) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_SetButtonPressTime")(demoControlButtonType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ActivateHoldInput(int localClientNum, int key, int keyBits) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"Demo_ActivateHoldInput")(localClientNum, key, keyBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_HandleHoldInput(int localClientNum, int key, bool holdResult) -> void
{
  return Zynamic::Forward<void (int, int, bool)>(L"Demo_HandleHoldInput")(localClientNum, key, holdResult);
}

#endif // __UNIMPLEMENTED__
