//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto NET_Sleep(int msec) -> void
{
  return Zynamic::Forward<void (int)>(L"NET_Sleep")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetCurrentThreadId() -> unsigned long
{
  return Zynamic::Forward<unsigned long ()>(L"Sys_GetCurrentThreadId")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetEvent(void** event) -> void
{
  return Zynamic::Forward<void (void**)>(L"Sys_SetEvent")(event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResetEvent(void** event) -> void
{
  return Zynamic::Forward<void (void**)>(L"Sys_ResetEvent")(event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CreateEvent(int manualReset, int initialState, void** event) -> void
{
  return Zynamic::Forward<void (int, int, void**)>(L"Sys_CreateEvent")(manualReset, initialState, event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitForSingleObjectTimeout(void** event, unsigned int msec) -> int
{
  return Zynamic::Forward<int (void**, unsigned int)>(L"Sys_WaitForSingleObjectTimeout")(event, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitForSingleObject(void** event) -> void
{
  return Zynamic::Forward<void (void**)>(L"Sys_WaitForSingleObject")(event);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetDefaultWorkerThreadsCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Sys_GetDefaultWorkerThreadsCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetCpuCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"Sys_GetCpuCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_InitThreads() -> void
{
  return Zynamic::Forward<void ()>(L"Win_InitThreads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitMainThread() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_InitMainThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitThread(int threadContext) -> void
{
  return Zynamic::Forward<void (int)>(L"Sys_InitThread")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ThreadMain(void* parameter) -> unsigned long
{
  return Zynamic::Forward<unsigned long (void*)>(L"Sys_ThreadMain")(parameter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CreateThread(function* function, unsigned int threadContext) -> void
{
  return Zynamic::Forward<void (function *, unsigned int)>(L"Sys_CreateThread")(function, threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SpawnRenderThread(function* function) -> bool
{
  return Zynamic::Forward<bool (function *)>(L"Sys_SpawnRenderThread")(function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitDemoStreamingEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_InitDemoStreamingEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitForDemoStreamingEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitForDemoStreamingEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetDemoStreamingEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetDemoStreamingEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitServerEvents() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_InitServerEvents")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SpawnServerThread(function* function) -> bool
{
  return Zynamic::Forward<bool (function *)>(L"Sys_SpawnServerThread")(function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SpawnDatabaseThread(function* function) -> bool
{
  return Zynamic::Forward<bool (function *)>(L"Sys_SpawnDatabaseThread")(function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SuspendDiscReads(enum ThreadOwner owner) -> void
{
  return Zynamic::Forward<void (enum ThreadOwner)>(L"Sys_SuspendDiscReads")(owner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResumeDiscReads(enum ThreadOwner owner) -> void
{
  return Zynamic::Forward<void (enum ThreadOwner)>(L"Sys_ResumeDiscReads")(owner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_HaveSuspendedDiscReads(enum ThreadOwner owner) -> int
{
  return Zynamic::Forward<int (enum ThreadOwner)>(L"Sys_HaveSuspendedDiscReads")(owner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitDiscReads() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitDiscReads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_InitWorkerThreadContext() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_InitWorkerThreadContext")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResumeThread(unsigned int threadContext) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Sys_ResumeThread")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_RendererSleep() -> void*
{
  return Zynamic::Forward<void* ()>(L"Sys_RendererSleep")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_RendererReady() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_RendererReady")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_RenderCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_RenderCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_FrontEndSleep() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_FrontEndSleep")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitRenderer() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_WaitRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WakeRenderer(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"Sys_WakeRenderer")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_NotifyRenderer() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_NotifyRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SleepServer() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SleepServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitServer(int timeout) -> int
{
  return Zynamic::Forward<int (int)>(L"Sys_WaitServer")(timeout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WakeServer() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WakeServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ServerCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ServerCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitStartServer(int timeout) -> int
{
  return Zynamic::Forward<int (int)>(L"Sys_WaitStartServer")(timeout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsServerThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsServerThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DatabaseCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_DatabaseCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitStartDatabase() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitStartDatabase")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsDatabaseReady() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_IsDatabaseReady")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SyncDatabase() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SyncDatabase")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WakeDatabase() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WakeDatabase")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_NotifyDatabase() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_NotifyDatabase")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_DatabaseCompleted2() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_DatabaseCompleted2")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsDatabaseReady2() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_IsDatabaseReady2")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WakeDatabase2() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WakeDatabase2")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StopRenderer() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_StopRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StartRenderer() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_StartRenderer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsRenderThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsRenderThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsDatabaseThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsDatabaseThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsMainThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsMainThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetCurrentThreadName() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Sys_GetCurrentThreadName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetThreadContext() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_GetThreadContext")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetValue(int valueIndex, void* data) -> void
{
  return Zynamic::Forward<void (int, void*)>(L"Sys_SetValue")(valueIndex, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetValue(int valueIndex) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Sys_GetValue")(valueIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetWorkerCmdEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetWorkerCmdEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitBackendEvent(unsigned int msec) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"Sys_WaitBackendEvent")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetUpdateSpotLightEffectEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetUpdateSpotLightEffectEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResetUpdateSpotLightEffectEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ResetUpdateSpotLightEffectEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitUpdateNonDependentEffectsCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitUpdateNonDependentEffectsCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetUpdateNonDependentEffectsEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetUpdateNonDependentEffectsEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResetUpdateNonDependentEffectsEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ResetUpdateNonDependentEffectsEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SuspendOtherThreads() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SuspendOtherThreads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetWin32QuitEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetWin32QuitEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_QueryWin32QuitEvent() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_QueryWin32QuitEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitD3DDeviceOKEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitD3DDeviceOKEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearD3DDeviceOKEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearD3DDeviceOKEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetD3DDeviceOKEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetD3DDeviceOKEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_QueryD3DDeviceOKEvent() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_QueryD3DDeviceOKEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitResourcesFlushedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitResourcesFlushedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearResourcesFlushedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearResourcesFlushedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetResourcesFlushedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetResourcesFlushedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitResourcesQueuedEvent(unsigned int msec) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Sys_WaitResourcesQueuedEvent")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearResourcesQueuedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearResourcesQueuedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetResourcesQueuedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetResourcesQueuedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetD3DDeviceStartEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetD3DDeviceStartEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearD3DDeviceStartEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearD3DDeviceStartEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitRGRegisteredEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitRGRegisteredEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetRGRegisteredEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetRGRegisteredEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearRGRegisteredEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearRGRegisteredEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_QueryRGRegisteredEvent() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_QueryRGRegisteredEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_QueryRenderEvent() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_QueryRenderEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetD3DShutdownEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetD3DShutdownEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ClearD3DShutdownEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ClearD3DShutdownEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_QueryD3DShutdownEvent() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_QueryD3DShutdownEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SpawnStreamThread(function* function) -> bool
{
  return Zynamic::Forward<bool (function *)>(L"Sys_SpawnStreamThread")(function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_StreamSleep() -> int
{
  return Zynamic::Forward<int ()>(L"Sys_StreamSleep")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetSndInitializedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetSndInitializedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WakeStream() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WakeStream")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsStreamThread() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsStreamThread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SpawnOcclusion(function* function) -> void
{
  return Zynamic::Forward<void (function *)>(L"Sys_SpawnOcclusion")(function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitForOcclusion() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitForOcclusion")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetOcclusion() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetOcclusion")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetServerAllowNetworkEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetServerAllowNetworkEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResetServerAllowNetworkEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ResetServerAllowNetworkEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetServerNetworkCompletedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_SetServerNetworkCompletedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ResetServerNetworkCompletedEvent() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_ResetServerNetworkCompletedEvent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitAllowServerNetworkLoop() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitAllowServerNetworkLoop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitServerNetworkCompleted() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WaitServerNetworkCompleted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_LockThreadAffinity() -> void
{
  return Zynamic::Forward<void ()>(L"Win_LockThreadAffinity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_UnlockThreadAffinity() -> void
{
  return Zynamic::Forward<void ()>(L"Win_UnlockThreadAffinity")();
}

#endif // __UNIMPLEMENTED__
