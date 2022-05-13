//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'Demo_SaveModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'Demo_SaveModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_StartSaveProcess() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_StartSaveProcess")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_Save(unsigned char* data, int size, bool writeInfoFile) -> void
{
  return Zynamic::Forward<void (unsigned char*, int, bool)>(L"Demo_Save")(data, size, writeInfoFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveInternal(unsigned char* data, int size, bool writeInfoFile) -> void
{
  return Zynamic::Forward<void (unsigned char*, int, bool)>(L"Demo_SaveInternal")(data, size, writeInfoFile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_StartStreaming(const int controllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"Demo_StartStreaming")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_StopStreaming() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_StopStreaming")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AreDifferencesValid(int diffBefore, int diffAfter) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Demo_AreDifferencesValid")(diffBefore, diffAfter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AppendToStreamingHistory(int val, bool isAdded) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"Demo_AppendToStreamingHistory")(val, isAdded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetCurrUsedBuffer() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetCurrUsedBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_CurrAvailableBuffer() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_CurrAvailableBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveToStreamBuffer(const void* data, int dataSize) -> void
{
  return Zynamic::Forward<void (const void*, int)>(L"Demo_SaveToStreamBuffer")(data, dataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RecordSentPacket(unsigned int size) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Demo_RecordSentPacket")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldThrottle() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_ShouldThrottle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ThrottleStream(unsigned int dataSize) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"Demo_ThrottleStream")(dataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteToStream(void* data, unsigned int dataSize, unsigned int bytesUploaded) -> unsigned int
{
  return Zynamic::Forward<unsigned int (void*, unsigned int, unsigned int)>(L"Demo_WriteToStream")(data, dataSize, bytesUploaded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SaveCallback(struct jqBatch* batch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"Demo_SaveCallback")(batch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetActiveMemoryBuffer() -> unsigned char*
{
  return Zynamic::Forward<unsigned char* ()>(L"Demo_GetActiveMemoryBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SwapActiveMemoryBuffer() -> unsigned char*
{
  return Zynamic::Forward<unsigned char* ()>(L"Demo_SwapActiveMemoryBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetIntermissionPoint(float* origin, float* angles) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"Demo_SetIntermissionPoint")(origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetIntermissionPointOrigin(float* origin[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"Demo_GetIntermissionPointOrigin")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetIntermissionPointAngles(float* angles[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"Demo_GetIntermissionPointAngles")(angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_RecordPlayerSessionState(int clientNum, int state) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_RecordPlayerSessionState")(clientNum, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPlayerSpectating(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsPlayerSpectating")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsInFinalKillcam() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsInFinalKillcam")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPlayerDead(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsPlayerDead")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ClientConnected(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_ClientConnected")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetDemoClientIndex() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetDemoClientIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SetDemoClientIndex(int index) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_SetDemoClientIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldWriteToDemoFile() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_ShouldWriteToDemoFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldBuildDemoSnapshot() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_ShouldBuildDemoSnapshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteHeader(struct msg_t* msg, bool isDemoClip) -> void
{
  return Zynamic::Forward<void (struct msg_t*, bool)>(L"Demo_WriteHeader")(msg, isDemoClip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_BuildDemoSnapshot() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_BuildDemoSnapshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteSnapshotStartData(int localClientNum, struct msg_t* msg, int msgSequence, int cmdSequence, int serverTime, int physicsTime, int lastFrame, int snapFlags) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*, int, int, int, int, int, int)>(L"Demo_WriteSnapshotStartData")(localClientNum, msg, msgSequence, cmdSequence, serverTime, physicsTime, lastFrame, snapFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteGamestateToBuffer(int clientNum, int demoMsgType, struct msg_t* msg, int msgSequence) -> void
{
  return Zynamic::Forward<void (int, int, struct msg_t*, int)>(L"Demo_WriteGamestateToBuffer")(clientNum, demoMsgType, msg, msgSequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ShouldFilterServerCommand(int clientNum, const char* cmd) -> bool
{
  return Zynamic::Forward<bool (int, const char*)>(L"Demo_ShouldFilterServerCommand")(clientNum, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteServerCommands(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WriteServerCommands")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteMatchState(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WriteMatchState")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WritePlayerStates(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WritePlayerStates")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WritePacketEntities(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WritePacketEntities")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WritePacketClients(struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct msg_t*)>(L"Demo_WritePacketClients")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_PopulateStaticInfoData(struct demoMetaInfo* info) -> void
{
  return Zynamic::Forward<void (struct demoMetaInfo*)>(L"Demo_PopulateStaticInfoData")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteToBuffer(void* to, void* from, int size, int bytesWritten, int maxBufferSize) -> int
{
  return Zynamic::Forward<int (void*, void*, int, int, int)>(L"Demo_WriteToBuffer")(to, from, size, bytesWritten, maxBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteInfoDataToBuffer(struct demoMetaInfo* info, unsigned char* buffer, int maxBufferSize) -> int
{
  return Zynamic::Forward<int (struct demoMetaInfo*, unsigned char*, int)>(L"Demo_WriteInfoDataToBuffer")(info, buffer, maxBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_WriteInfoData(int handle, struct demoMetaInfo* info) -> void
{
  return Zynamic::Forward<void (int, struct demoMetaInfo*)>(L"Demo_WriteInfoData")(handle, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_InfoPlayerConnected(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_InfoPlayerConnected")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_InfoPlayerDisconnected(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_InfoPlayerDisconnected")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AddBookmark(int type, int time, int clientNum1, int clientNum2) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"Demo_AddBookmark")(type, time, clientNum1, clientNum2);
}

#endif // __UNIMPLEMENTED__
