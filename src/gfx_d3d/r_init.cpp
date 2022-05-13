//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_init() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FatalInitError(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_FatalInitError")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FatalLockError(HRESULT hr) -> void
{
  return Zynamic::Forward<void (HRESULT)>(L"R_FatalLockError")(hr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ErrorDescription(HRESULT hr) -> const char*
{
  return Zynamic::Forward<const char* (HRESULT)>(L"R_ErrorDescription")(hr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupAntiAliasing(const struct GfxWindowParms* wndParms) -> void
{
  return Zynamic::Forward<void (const struct GfxWindowParms*)>(L"R_SetupAntiAliasing")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetD3DPresentParameters(struct _D3DPRESENT_PARAMETERS_* d3dpp, const struct GfxWindowParms* wndParms) -> void
{
  return Zynamic::Forward<void (struct _D3DPRESENT_PARAMETERS_*, const struct GfxWindowParms*)>(L"R_SetD3DPresentParameters")(d3dpp, wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMonitorDimensions(int* width, int* height) -> bool
{
  return Zynamic::Forward<bool (int*, int*)>(L"R_GetMonitorDimensions")(width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StoreWindowSettings(const struct GfxWindowParms* wndParms) -> void
{
  return Zynamic::Forward<void (const struct GfxWindowParms*)>(L"R_StoreWindowSettings")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDirect3DCaps(unsigned int adapterIndex, struct _D3DCAPS9* caps) -> void
{
  return Zynamic::Forward<void (unsigned int, struct _D3DCAPS9*)>(L"R_GetDirect3DCaps")(adapterIndex, caps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PickRenderer(struct _D3DCAPS9* caps) -> void
{
  return Zynamic::Forward<void (struct _D3DCAPS9*)>(L"R_PickRenderer")(caps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckTransparencyMsaa(unsigned int adapterIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"R_CheckTransparencyMsaa")(adapterIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetShadowmapFormats_DX(unsigned int adapterIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_SetShadowmapFormats_DX")(adapterIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StoreDirect3DCaps(unsigned int adapterIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_StoreDirect3DCaps")(adapterIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitGamma() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitGamma")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcGammaRamp(struct GfxGammaRamp* gammaRamp) -> void
{
  return Zynamic::Forward<void (struct GfxGammaRamp*)>(L"R_CalcGammaRamp")(gammaRamp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetColorMappings() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetColorMappings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetGfxConfig(const struct GfxConfiguration* config) -> void
{
  return Zynamic::Forward<void (const struct GfxConfiguration*)>(L"SetGfxConfig")(config);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnloadGraphicsAssets() -> void
{
  return Zynamic::Forward<void ()>(L"R_UnloadGraphicsAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MakeDedicated(const struct GfxConfiguration* config) -> void
{
  return Zynamic::Forward<void (const struct GfxConfiguration*)>(L"R_MakeDedicated")(config);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSystems() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitSystems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishAttachingToWindow(const struct GfxWindowParms* wndParms) -> void
{
  return Zynamic::Forward<void (const struct GfxWindowParms*)>(L"R_FinishAttachingToWindow")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateForInitOrReset() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_CreateForInitOrReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseForShutdownOrReset() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReleaseForShutdownOrReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompareDisplayModes(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"R_CompareDisplayModes")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddValidRefreshRate(int refreshRate, int rateCount, int* availableRefreshRates) -> int
{
  return Zynamic::Forward<int (int, int, int*)>(L"R_AddValidRefreshRate")(refreshRate, rateCount, availableRefreshRates);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CompareRefreshRates(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"R_CompareRefreshRates")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddValidResolution(int width, int height, int resolutionCount, int* availableResolutions[0x2]) -> int
{
  return Zynamic::Forward<int (int, int, int, int*[0x2])>(L"R_AddValidResolution")(width, height, resolutionCount, availableResolutions);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnumDisplayModes(unsigned int adapterIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_EnumDisplayModes")(adapterIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDeviceType() -> enum _D3DDEVTYPE
{
  return Zynamic::Forward<enum _D3DDEVTYPE ()>(L"R_GetDeviceType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDeviceInternal(struct HWND__* hwnd, unsigned long behavior, struct _D3DPRESENT_PARAMETERS_* d3dpp) -> HRESULT
{
  return Zynamic::Forward<HRESULT (struct HWND__*, unsigned long, struct _D3DPRESENT_PARAMETERS_*)>(L"R_CreateDeviceInternal")(hwnd, behavior, d3dpp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MonitorEnumCallback(struct HMONITOR__* monitorHandle, struct HDC__* hdc, struct tagRECT* rect, long userData) -> int
{
  return Zynamic::Forward<int (struct HMONITOR__*, struct HDC__*, struct tagRECT*, long)>(L"R_MonitorEnumCallback")(monitorHandle, hdc, rect, userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChooseMonitor() -> struct HMONITOR__*
{
  return Zynamic::Forward<struct HMONITOR__* ()>(L"R_ChooseMonitor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChooseAdapter() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_ChooseAdapter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PreCreateWindow() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_PreCreateWindow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateGpuSyncType() -> void
{
  return Zynamic::Forward<void ()>(L"R_UpdateGpuSyncType")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDevice(const struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (const struct GfxWindowParms*)>(L"R_CreateDevice")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitHardware(const struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (const struct GfxWindowParms*)>(L"R_InitHardware")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateWindow(struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (struct GfxWindowParms*)>(L"R_CreateWindow")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateGameWindow(struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (struct GfxWindowParms*)>(L"R_CreateGameWindow")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClosestRefreshRateForMode(unsigned int width, unsigned int height, int refreshRate) -> int
{
  return Zynamic::Forward<int (unsigned int, unsigned int, int)>(L"R_ClosestRefreshRateForMode")(width, height, refreshRate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCustomResolution(struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (struct GfxWindowParms*)>(L"R_SetCustomResolution")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWndParms(struct GfxWindowParms* wndParms) -> void
{
  return Zynamic::Forward<void (struct GfxWindowParms*)>(L"R_SetWndParms")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReduceWindowSettings(struct GfxWindowParms* wndParms) -> bool
{
  return Zynamic::Forward<bool (struct GfxWindowParms*)>(L"R_ReduceWindowSettings")(wndParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckResizeWindow() -> void
{
  return Zynamic::Forward<void ()>(L"R_CheckResizeWindow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResizeWindow() -> void
{
  return Zynamic::Forward<void ()>(L"R_ResizeWindow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitGraphicsApi() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitGraphicsApi")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocateMinimalResources() -> void
{
  return Zynamic::Forward<void ()>(L"R_AllocateMinimalResources")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetIsMultiplayer(bool isMp) -> void
{
  return Zynamic::Forward<void (bool)>(L"R_SetIsMultiplayer")(isMp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownDirect3DInternal() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownDirect3DInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownDirect3D() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownDirect3D")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Register() -> void
{
  return Zynamic::Forward<void ()>(L"R_Register")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitGlobalStructs() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitGlobalStructs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitThreads() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitThreads")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Init() -> void
{
  return Zynamic::Forward<void ()>(L"R_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownStreams() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownStreams")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownInternal(int destroyWindow) -> void
{
  return Zynamic::Forward<void (int)>(L"R_ShutdownInternal")(destroyWindow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Shutdown(int destroyWindow) -> void
{
  return Zynamic::Forward<void (int)>(L"R_Shutdown")(destroyWindow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnloadWorld() -> void
{
  return Zynamic::Forward<void ()>(L"R_UnloadWorld")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginRegistrationInternal() -> void
{
  return Zynamic::Forward<void ()>(L"R_BeginRegistrationInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginRegistration(struct vidConfig_t* vidConfigOut) -> void
{
  return Zynamic::Forward<void (struct vidConfig_t*)>(L"R_BeginRegistration")(vidConfigOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndRegistration() -> void
{
  return Zynamic::Forward<void ()>(L"R_EndRegistration")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TrackStatistics(struct trStatistics_t* stats) -> void
{
  return Zynamic::Forward<void (struct trStatistics_t*)>(L"R_TrackStatistics")(stats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SyncGpu(function* WorkCallback) -> void
{
  return Zynamic::Forward<void (function *)>(L"R_SyncGpu")(WorkCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateTeamColors(const float* color_allies, const float* color_axis) -> void
{
  return Zynamic::Forward<void (const float*, const float*)>(L"R_UpdateTeamColors")(color_allies, color_axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ConfigureRenderer(const struct GfxConfiguration* config) -> void
{
  return Zynamic::Forward<void (const struct GfxConfiguration*)>(L"R_ConfigureRenderer")(config);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResetDevice() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_ResetDevice")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseLostDeviceAssets2() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_ReleaseLostDeviceAssets2")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RecoverLostDevice() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_RecoverLostDevice")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ComErrorCleanup() -> void
{
  return Zynamic::Forward<void ()>(L"R_ComErrorCleanup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StereoActivated() -> bool
{
  return Zynamic::Forward<bool ()>(L"R_StereoActivated")();
}

#endif // __UNIMPLEMENTED__
