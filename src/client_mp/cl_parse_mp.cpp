//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_parse() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cl_parse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SHOWNET(struct msg_t* msg, char* s) -> void
{
  return Zynamic::Forward<void (struct msg_t*, char*)>(L"SHOWNET")(msg, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SavePredictedOriginForServerTime(struct clientActive_t* cl, const int serverTime, const float* predictedOrigin, const float* predictedVelocity, const float* viewangles, int bobCycle, int movementDir) -> void
{
  return Zynamic::Forward<void (struct clientActive_t*, const int, const float*, const float*, const float*, int, int)>(L"CL_SavePredictedOriginForServerTime")(cl, serverTime, predictedOrigin, predictedVelocity, viewangles, bobCycle, movementDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetPredictedOriginForServerTime(struct clientActive_t* cl, const int serverTime, float* predictedOrigin, float* predictedVelocity, float* viewangles, int* bobCycle, int* movementDir) -> bool
{
  return Zynamic::Forward<bool (struct clientActive_t*, const int, float*, float*, float*, int*, int*)>(L"CL_GetPredictedOriginForServerTime")(cl, serverTime, predictedOrigin, predictedVelocity, viewangles, bobCycle, movementDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DeltaEntity(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* frame, int newnum, struct entityState_s* old) -> void
{
  return Zynamic::Forward<void (struct clientActive_t*, struct msg_t*, const int, struct clSnapshot_t*, int, struct entityState_s*)>(L"CL_DeltaEntity")(cl, msg, time, frame, newnum, old);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CopyOldEntity(struct clientActive_t* cl, struct clSnapshot_t* frame, struct entityState_s* old) -> void
{
  return Zynamic::Forward<void (struct clientActive_t*, struct clSnapshot_t*, struct entityState_s*)>(L"CL_CopyOldEntity")(cl, frame, old);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DeltaClient(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* frame, int newnum, struct clientState_s* old, int unchanged) -> void
{
  return Zynamic::Forward<void (struct clientActive_t*, struct msg_t*, const int, struct clSnapshot_t*, int, struct clientState_s*, int)>(L"CL_DeltaClient")(cl, msg, time, frame, newnum, old, unchanged);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParsePacketEntities(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* oldframe, struct clSnapshot_t* newframe) -> int
{
  return Zynamic::Forward<int (struct clientActive_t*, struct msg_t*, const int, struct clSnapshot_t*, struct clSnapshot_t*)>(L"CL_ParsePacketEntities")(cl, msg, time, oldframe, newframe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParsePacketClients(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* oldframe, struct clSnapshot_t* newframe) -> void
{
  return Zynamic::Forward<void (struct clientActive_t*, struct msg_t*, const int, struct clSnapshot_t*, struct clSnapshot_t*)>(L"CL_ParsePacketClients")(cl, msg, time, oldframe, newframe);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ProcessMapCenterFromMatchState(int localClientNum, struct clSnapshot_t* clSnap) -> void
{
  return Zynamic::Forward<void (int, struct clSnapshot_t*)>(L"CL_ProcessMapCenterFromMatchState")(localClientNum, clSnap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateMapCenterFromMatchState(float* newcenter) -> void
{
  return Zynamic::Forward<void (float*)>(L"CL_UpdateMapCenterFromMatchState")(newcenter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseSnapshot(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_ParseSnapshot")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerIdChanged(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_ServerIdChanged")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SystemInfoChanged(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_SystemInfoChanged")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseMapCenter() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ParseMapCenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseGamestate(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_ParseGamestate")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseWWWDownload(const int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*)>(L"CL_ParseWWWDownload")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseDownload(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_ParseDownload")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseCommandString(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_ParseCommandString")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseServerMessage(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_ParseServerMessage")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
