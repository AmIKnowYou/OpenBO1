//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto AssertUninitializedRenderTarget(const struct GfxRenderTarget* renderTarget) -> void
{
  return Zynamic::Forward<void (const struct GfxRenderTarget*)>(L"AssertUninitializedRenderTarget")(renderTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DescribeFormat(enum _D3DFORMAT format) -> const char*
{
  return Zynamic::Forward<const char* (enum _D3DFORMAT)>(L"R_DescribeFormat")(format);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDepthStencilFormatOk(enum _D3DFORMAT renderTargetFormat, enum _D3DFORMAT depthStencilFormat) -> bool
{
  return Zynamic::Forward<bool (enum _D3DFORMAT, enum _D3DFORMAT)>(L"R_IsDepthStencilFormatOk")(renderTargetFormat, depthStencilFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDepthStencilFormat(enum _D3DFORMAT renderTargetFormat) -> enum _D3DFORMAT
{
  return Zynamic::Forward<enum _D3DFORMAT (enum _D3DFORMAT)>(L"R_GetDepthStencilFormat")(renderTargetFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFrameBufferDepthStencilRes(int* depthStencilWidth, int* depthStencilHeight) -> void
{
  return Zynamic::Forward<void (int*, int*)>(L"R_GetFrameBufferDepthStencilRes")(depthStencilWidth, depthStencilHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFullScreenRes(enum FullscreenType screenType, int* fullscreenWidth, int* fullscreenHeight) -> void
{
  return Zynamic::Forward<void (enum FullscreenType, int*, int*)>(L"R_GetFullScreenRes")(screenType, fullscreenWidth, fullscreenHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShareRenderTarget(unsigned char idFrom, unsigned char idTo) -> void
{
  return Zynamic::Forward<void (unsigned char, unsigned char)>(L"R_ShareRenderTarget")(idFrom, idTo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssignSingleSampleDepthStencilSurface(enum FullscreenType screenType) -> struct IDirect3DSurface9*
{
  return Zynamic::Forward<struct IDirect3DSurface9* (enum FullscreenType)>(L"R_AssignSingleSampleDepthStencilSurface")(screenType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssignImageToRenderTargetDepthStencil(struct GfxRenderTarget* renderTarget, struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxRenderTarget*, struct GfxImage*)>(L"R_AssignImageToRenderTargetDepthStencil")(renderTarget, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssignImageToRenderTargetColor(struct GfxRenderTarget* renderTarget, struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxRenderTarget*, struct GfxImage*)>(L"R_AssignImageToRenderTargetColor")(renderTarget, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderTargetImage(int imageProgType, unsigned short width, unsigned short height, enum _D3DFORMAT format, enum RenderTargetUsage usage, struct GfxRenderTarget* renderTarget, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (int, unsigned short, unsigned short, enum _D3DFORMAT, enum RenderTargetUsage, struct GfxRenderTarget*, unsigned int)>(L"R_InitRenderTargetImage")(imageProgType, width, height, format, usage, renderTarget, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitAndTrackRenderTargetImage(int imageProgType, unsigned short width, unsigned short height, enum _D3DFORMAT format, enum RenderTargetUsage usage, struct GfxRenderTarget* renderTarget) -> void
{
  return Zynamic::Forward<void (int, unsigned short, unsigned short, enum _D3DFORMAT, enum RenderTargetUsage, struct GfxRenderTarget*)>(L"R_InitAndTrackRenderTargetImage")(imageProgType, width, height, format, usage, renderTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSizedRenderTargetImage(int imageProgType, int fullscreenWidth, int fullscreenHeight, int picmip, enum _D3DFORMAT format, enum RenderTargetUsage usage, struct GfxRenderTarget* renderTarget, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (int, int, int, int, enum _D3DFORMAT, enum RenderTargetUsage, struct GfxRenderTarget*, unsigned int)>(L"R_InitSizedRenderTargetImage")(imageProgType, fullscreenWidth, fullscreenHeight, picmip, format, usage, renderTarget, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitFullscreenRenderTargetImage(int imageProgType, enum FullscreenType screenType, int picmip, enum _D3DFORMAT format, enum RenderTargetUsage usage, struct GfxRenderTarget* renderTarget) -> void
{
  return Zynamic::Forward<void (int, enum FullscreenType, int, enum _D3DFORMAT, enum RenderTargetUsage, struct GfxRenderTarget*)>(L"R_InitFullscreenRenderTargetImage")(imageProgType, screenType, picmip, format, usage, renderTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderTargetImage_Composite(int imageProgType, struct GfxRenderTarget* renderTarget) -> void
{
  return Zynamic::Forward<void (int, struct GfxRenderTarget*)>(L"R_InitRenderTargetImage_Composite")(imageProgType, renderTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitShadowmapRenderTarget(int imageProgType, unsigned short tileRes, unsigned short tileRowCount, struct GfxRenderTarget* renderTarget, enum ShadowmapRTTiling tilingMethond) -> void
{
  return Zynamic::Forward<void (int, unsigned short, unsigned short, struct GfxRenderTarget*, enum ShadowmapRTTiling)>(L"R_InitShadowmapRenderTarget")(imageProgType, tileRes, tileRowCount, renderTarget, tilingMethond);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitFrameBufferRenderTarget_Win32(struct GfxRenderTarget* renderTarget) -> void
{
  return Zynamic::Forward<void (struct GfxRenderTarget*)>(L"R_InitFrameBufferRenderTarget_Win32")(renderTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitFrameBufferRenderTarget() -> enum _D3DFORMAT
{
  return Zynamic::Forward<enum _D3DFORMAT ()>(L"R_InitFrameBufferRenderTarget")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShareRenderTarget_ReplaceColor(unsigned char idFrom, unsigned char idTo, struct IDirect3DSurface9* colorSurface) -> void
{
  return Zynamic::Forward<void (unsigned char, unsigned char, struct IDirect3DSurface9*)>(L"R_ShareRenderTarget_ReplaceColor")(idFrom, idTo, colorSurface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSceneNullRenderTarget_PC() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitSceneNullRenderTarget_PC")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitIntZRenderTarget_PC() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitIntZRenderTarget_PC")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderTargets_PC() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitRenderTargets_PC")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderTargets() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitRenderTargets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutDownSingleRenderTarget(struct GfxRenderTarget* rt) -> void
{
  return Zynamic::Forward<void (struct GfxRenderTarget*)>(L"R_ShutDownSingleRenderTarget")(rt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownRenderTargets() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownRenderTargets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderTargetName(unsigned char renderTargetId) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"R_RenderTargetName")(renderTargetId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckExtraCamTargets() -> void
{
  return Zynamic::Forward<void ()>(L"R_CheckExtraCamTargets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitExtraCamRenderTargets(unsigned int width, unsigned int height, int location) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, int)>(L"R_InitExtraCamRenderTargets")(width, height, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownExtraCamRenderTargets() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownExtraCamRenderTargets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitUI3DRenderTarget(unsigned short width, unsigned short height, int location, bool allocatePingPongBuffer) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned short, int, bool)>(L"R_InitUI3DRenderTarget")(width, height, location, allocatePingPongBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownUI3DRenderTarget(bool freePingPongBuffer) -> void
{
  return Zynamic::Forward<void (bool)>(L"R_ShutdownUI3DRenderTarget")(freePingPongBuffer);
}

#endif // __UNIMPLEMENTED__
