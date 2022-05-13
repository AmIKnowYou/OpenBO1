//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Image_GetMipmapResolution(int baseWidth, int baseHeight, int mipmap, unsigned short* mipWidth, unsigned short* mipHeight) -> void
{
  return Zynamic::Forward<void (int, int, int, unsigned short*, unsigned short*)>(L"Image_GetMipmapResolution")(baseWidth, baseHeight, mipmap, mipWidth, mipHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetPlatformScreenWidth(int platform, int screenWidth) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Image_GetPlatformScreenWidth")(platform, screenWidth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetPlatformScreenHeight(int platform, int screenHeight) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Image_GetPlatformScreenHeight")(platform, screenHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_TrackFullscreenTexture(struct GfxImage* image, int fullscreenWidth, int fullscreenHeight, int picmip, enum _D3DFORMAT format) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, int, int, int, enum _D3DFORMAT)>(L"Image_TrackFullscreenTexture")(image, fullscreenWidth, fullscreenHeight, picmip, format);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_TrackTexture(struct GfxImage* image, int imageFlags, enum _D3DFORMAT format, int width, int height, int depth) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, int, enum _D3DFORMAT, int, int, int)>(L"Image_TrackTexture")(image, imageFlags, format, width, height, depth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetCardMemoryAmountForMipLevel(enum _D3DFORMAT format, unsigned int mipWidth, unsigned int mipHeight, unsigned int mipDepth) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum _D3DFORMAT, unsigned int, unsigned int, unsigned int)>(L"Image_GetCardMemoryAmountForMipLevel")(format, mipWidth, mipHeight, mipDepth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetCardMemoryAmount(unsigned int imageFlags, enum _D3DFORMAT format, unsigned int width, unsigned int height, unsigned int depth) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum _D3DFORMAT, unsigned int, unsigned int, unsigned int)>(L"Image_GetCardMemoryAmount")(imageFlags, format, width, height, depth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_SourceBytesPerSlice_PC(enum _D3DFORMAT format, int width, int height) -> int
{
  return Zynamic::Forward<int (enum _D3DFORMAT, int, int)>(L"Image_SourceBytesPerSlice_PC")(format, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Upload2D_CopyDataBlock_PC(int width, int height, const unsigned char* src, enum _D3DFORMAT format, int dstPitch, unsigned char* dst) -> void
{
  return Zynamic::Forward<void (int, int, const unsigned char*, enum _D3DFORMAT, int, unsigned char*)>(L"Image_Upload2D_CopyDataBlock_PC")(width, height, src, format, dstPitch, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Upload2D_CopyData_PC(const struct GfxImage* image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char* src) -> void
{
  return Zynamic::Forward<void (const struct GfxImage*, enum _D3DFORMAT, enum _D3DCUBEMAP_FACES, unsigned int, const unsigned char*)>(L"Image_Upload2D_CopyData_PC")(image, format, face, mipLevel, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Upload3D_CopyData_PC(const struct GfxImage* image, enum _D3DFORMAT format, unsigned int mipLevel, const unsigned char* src) -> void
{
  return Zynamic::Forward<void (const struct GfxImage*, enum _D3DFORMAT, unsigned int, const unsigned char*)>(L"Image_Upload3D_CopyData_PC")(image, format, mipLevel, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_UploadData(struct GfxImage* image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char* src) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, enum _D3DFORMAT, enum _D3DCUBEMAP_FACES, unsigned int, const unsigned char*)>(L"Image_UploadData")(image, format, face, mipLevel, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_CountMipmaps(unsigned int imageFlags, unsigned int width, unsigned int height, unsigned int depth) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int, unsigned int, unsigned int)>(L"Image_CountMipmaps")(imageFlags, width, height, depth);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetPicmip(const struct GfxImage* image, struct Picmip* picmip) -> void
{
  return Zynamic::Forward<void (const struct GfxImage*, struct Picmip*)>(L"Image_GetPicmip")(image, picmip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Setup(struct GfxImage* image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char* name, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, int, int, int, int, enum _D3DFORMAT, const char*, unsigned int)>(L"Image_Setup")(image, width, height, depth, imageFlags, imageFormat, name, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_SetupAndLoad(struct GfxImage* image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char* name, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, int, int, int, int, enum _D3DFORMAT, const char*, unsigned int)>(L"Image_SetupAndLoad")(image, width, height, depth, imageFlags, imageFormat, name, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_CubemapFace(unsigned int faceIndex) -> enum _D3DCUBEMAP_FACES
{
  return Zynamic::Forward<enum _D3DCUBEMAP_FACES (unsigned int)>(L"Image_CubemapFace")(faceIndex);
}

#endif // __UNIMPLEMENTED__
