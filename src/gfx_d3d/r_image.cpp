//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_image() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_image")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_IsCodeImage(int track) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Image_IsCodeImage")(track);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_TrackTotalMemory(struct GfxImage* image, int platform, int memory) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, int, int)>(L"Image_TrackTotalMemory")(image, platform, memory);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddImageToList(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_AddImageToList")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetImageList(struct ImageList* imageList) -> void
{
  return Zynamic::Forward<void (struct ImageList*)>(L"R_GetImageList")(imageList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SumOfUsedImages(struct Image_MemUsage* usage) -> void
{
  return Zynamic::Forward<void (struct Image_MemUsage*)>(L"R_SumOfUsedImages")(usage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Release(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_Release")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetAvailableHashLocation(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Image_GetAvailableHashLocation")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Construct(const char* name, int nameSize, unsigned char category, unsigned char semantic, int imageTrack, struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (const char*, int, unsigned char, unsigned char, int, struct GfxImage*)>(L"Image_Construct")(name, nameSize, category, semantic, imageTrack, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_AllocProg(int imageProgType, unsigned char category, unsigned char semantic) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (int, unsigned char, unsigned char)>(L"Image_AllocProg")(imageProgType, category, semantic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Alloc(const char* name, unsigned char category, unsigned char semantic, int imageTrack, float gamma) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, unsigned char, int, float)>(L"Image_Alloc")(name, category, semantic, imageTrack, gamma);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_IsProg(struct GfxImage* image) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*)>(L"Image_IsProg")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Free(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_Free")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetUsage(int imageFlags, enum _D3DFORMAT imageFormat) -> unsigned long
{
  return Zynamic::Forward<unsigned long (int, enum _D3DFORMAT)>(L"Image_GetUsage")(imageFlags, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Create2DTexture_PC(struct GfxImage* image, unsigned short width, unsigned short height, int mipmapCount, int imageFlags, enum _D3DFORMAT imageFormat) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned short, unsigned short, int, int, enum _D3DFORMAT)>(L"Image_Create2DTexture_PC")(image, width, height, mipmapCount, imageFlags, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Create3DTexture_PC(struct GfxImage* image, unsigned short width, unsigned short height, unsigned short depth, int mipmapCount, int imageFlags, enum _D3DFORMAT imageFormat) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned short, unsigned short, unsigned short, int, int, enum _D3DFORMAT)>(L"Image_Create3DTexture_PC")(image, width, height, depth, mipmapCount, imageFlags, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_CreateCubeTexture_PC(struct GfxImage* image, unsigned short edgeLen, int mipmapCount, enum _D3DFORMAT imageFormat) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned short, int, enum _D3DFORMAT)>(L"Image_CreateCubeTexture_PC")(image, edgeLen, mipmapCount, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_SetupRenderTarget(struct GfxImage* image, unsigned short width, unsigned short height, enum _D3DFORMAT imageFormat, const char* name, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned short, unsigned short, enum _D3DFORMAT, const char*, unsigned int)>(L"Image_SetupRenderTarget")(image, width, height, imageFormat, name, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_PicmipForSemantic(unsigned char semantic, struct Picmip* picmip) -> void
{
  return Zynamic::Forward<void (unsigned char, struct Picmip*)>(L"Image_PicmipForSemantic")(semantic, picmip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DuplicateTexture(struct GfxImage* dstImage, const struct GfxImage* srcImage) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*, const struct GfxImage*)>(L"R_DuplicateTexture")(dstImage, srcImage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_AssignDefaultTexture(struct GfxImage* image) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*)>(L"Image_AssignDefaultTexture")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DelayLoadImage(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_DelayLoadImage")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_Texture(struct GfxImageLoadDef** remoteLoadDef, struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImageLoadDef**, struct GfxImage*)>(L"Load_Texture")(remoteLoadDef, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Rebuild(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_Rebuild")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_FindExisting_LoadObj(const char* name) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*)>(L"Image_FindExisting_LoadObj")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_FindExisting_FastFile(const char* name) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*)>(L"Image_FindExisting_FastFile")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_FindExisting(const char* name) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*)>(L"Image_FindExisting")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Register_LoadObj(const char* imageName, unsigned char semantic, int imageTrack) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, int)>(L"Image_Register_LoadObj")(imageName, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Register_FastFile(const char* imageName, unsigned char semantic, int imageTrack) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, int)>(L"Image_Register_FastFile")(imageName, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Register(const char* imageName, unsigned char semantic, int imageTrack) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, int)>(L"Image_Register")(imageName, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeLostImage(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_FreeLostImage")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RebuildLostImage(union XAssetHeader header, void* data) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"R_RebuildLostImage")(header, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseLostImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReleaseLostImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReloadLostImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_ReloadLostImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_UpdatePicmip(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_UpdatePicmip")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Reload(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_Reload")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EnumImages(function* func, void* data) -> void
{
  return Zynamic::Forward<void (function *, void*)>(L"R_EnumImages")(func, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetSurface(struct GfxImage* image) -> struct IDirect3DSurface9*
{
  return Zynamic::Forward<struct IDirect3DSurface9* (struct GfxImage*)>(L"Image_GetSurface")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRawImage() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitRawImage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitCodeImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitCodeImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetPicmip() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetPicmip")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto imagecompare(struct GfxImage* image1, struct GfxImage* image2) -> int
{
  return Zynamic::Forward<int (struct GfxImage*, struct GfxImage*)>(L"imagecompare")(image1, image2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ImagePixelFormat(struct GfxImage* image) -> enum _D3DFORMAT
{
  return Zynamic::Forward<enum _D3DFORMAT (struct GfxImage*)>(L"R_ImagePixelFormat")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ImageList_Output() -> void
{
  return Zynamic::Forward<void ()>(L"R_ImageList_Output")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DownsampleMipMapBilinear(const unsigned char* src, int srcWidth, int srcHeight, int texelPitch, unsigned char* dst) -> void
{
  return Zynamic::Forward<void (const unsigned char*, int, int, int, unsigned char*)>(L"R_DownsampleMipMapBilinear")(src, srcWidth, srcHeight, texelPitch, dst);
}

#endif // __UNIMPLEMENTED__
