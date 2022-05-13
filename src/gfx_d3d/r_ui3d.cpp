//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_ui3dStatus''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_ui3dStatus''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitUI3DStack(struct GfxUI3DStack* stack) -> void
{
  return Zynamic::Forward<void (struct GfxUI3DStack*)>(L"R_InitUI3DStack")(stack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetUI3DStack() -> struct GfxUI3DStack*
{
  return Zynamic::Forward<struct GfxUI3DStack* ()>(L"R_GetUI3DStack")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3DStack_Push(struct GfxUI3DStack* stack, int val) -> void
{
  return Zynamic::Forward<void (struct GfxUI3DStack*, int)>(L"R_UI3DStack_Push")(stack, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3DStack_Pop(struct GfxUI3DStack* stack) -> void
{
  return Zynamic::Forward<void (struct GfxUI3DStack*)>(L"R_UI3DStack_Pop")(stack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3DStack_Top(struct GfxUI3DStack* stack) -> int
{
  return Zynamic::Forward<int (struct GfxUI3DStack*)>(L"R_UI3DStack_Top")(stack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_ScrPlaceFromTextureWindow(int windowIndex) -> struct ScreenPlacement*
{
  return Zynamic::Forward<struct ScreenPlacement* (int)>(L"R_UI3D_ScrPlaceFromTextureWindow")(windowIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_GetUVSetup(int windowIndex, float* out) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"R_UI3D_GetUVSetup")(windowIndex, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_SetBlurRadius(float blurRadius) -> void
{
  return Zynamic::Forward<void (float)>(L"R_UI3D_SetBlurRadius")(blurRadius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_CheckRenderTarget() -> void
{
  return Zynamic::Forward<void ()>(L"R_UI3D_CheckRenderTarget")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_OnetimeInit(unsigned short width, unsigned short height, bool useDisplaySize, int pmemLocation, bool allocatePingPongBuffer) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned short, bool, int, bool)>(L"R_UI3D_OnetimeInit")(width, height, useDisplaySize, pmemLocation, allocatePingPongBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"R_UI3D_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_PerframeInit() -> void
{
  return Zynamic::Forward<void ()>(L"R_UI3D_PerframeInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_SetupBackendData_UVConstants(struct GfxUI3DBackend* ui3dBackend) -> void
{
  return Zynamic::Forward<void (struct GfxUI3DBackend*)>(L"R_UI3D_SetupBackendData_UVConstants")(ui3dBackend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_SetupBackendData(struct GfxUI3DBackend* ui3dBackend) -> void
{
  return Zynamic::Forward<void (struct GfxUI3DBackend*)>(L"R_UI3D_SetupBackendData")(ui3dBackend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupUI3D(struct ScreenPlacement* scrPlace, int viewportWidth, int viewportHeight) -> void
{
  return Zynamic::Forward<void (struct ScreenPlacement*, int, int)>(L"ScrPlace_SetupUI3D")(scrPlace, viewportWidth, viewportHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_IncrementRenderCmdCount(int wndIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"R_UI3D_IncrementRenderCmdCount")(wndIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UI3D_SetupTextureWindow(int windowIndex, float normX, float normY, float normWidth, float normHeight) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float)>(L"R_UI3D_SetupTextureWindow")(windowIndex, normX, normY, normWidth, normHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UI3D_SetShaderConstants(struct GfxCmdBufSourceState* source, const struct GfxUI3DBackend* rbUI3D) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxUI3DBackend*)>(L"RB_UI3D_SetShaderConstants")(source, rbUI3D);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetUI3DSamplerAndConstants(struct GfxCmdBufSourceState* cmdBufSrcState, const struct GfxUI3DBackend* rbUI3D) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const struct GfxUI3DBackend*)>(L"RB_SetUI3DSamplerAndConstants")(cmdBufSrcState, rbUI3D);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UI3D_ViewportIsValid(const struct GfxViewport* vp) -> bool
{
  return Zynamic::Forward<bool (const struct GfxViewport*)>(L"RB_UI3D_ViewportIsValid")(vp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UI3D_GetValidWindows(const struct GfxUI3DBackend* rbUI3D, int* validWindowsArray) -> int
{
  return Zynamic::Forward<int (const struct GfxUI3DBackend*, int*)>(L"RB_UI3D_GetValidWindows")(rbUI3D, validWindowsArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UI3D_RenderToTexture(const void* cmds, const struct GfxUI3DBackend* rbUI3D, const struct GfxCmdBufInput* input) -> void
{
  return Zynamic::Forward<void (const void*, const struct GfxUI3DBackend*, const struct GfxCmdBufInput*)>(L"RB_UI3D_RenderToTexture")(cmds, rbUI3D, input);
}

#endif // __UNIMPLEMENTED__
