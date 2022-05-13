//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Image_GetPcStreamedMips(struct GfxImageFileHeader* fileHeader) -> unsigned char
{
  return Zynamic::Forward<unsigned char (struct GfxImageFileHeader*)>(L"Image_GetPcStreamedMips")(fileHeader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_ValidateHeader(struct GfxImageFileHeader* imageFile, const char* filepath) -> bool
{
  return Zynamic::Forward<bool (struct GfxImageFileHeader*, const char*)>(L"Image_ValidateHeader")(imageFile, filepath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_SetupFromFile(struct GfxImage* image, const struct GfxImageFileHeader* fileHeader, enum _D3DFORMAT imageFormat, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, const struct GfxImageFileHeader*, enum _D3DFORMAT, unsigned int)>(L"Image_SetupFromFile")(image, fileHeader, imageFormat, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_CountMipmapsForFile(const struct GfxImageFileHeader* fileHeader) -> int
{
  return Zynamic::Forward<int (const struct GfxImageFileHeader*)>(L"Image_CountMipmapsForFile")(fileHeader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_ExpandBgr(const unsigned char* src, unsigned int count, unsigned char* dst) -> void
{
  return Zynamic::Forward<void (const unsigned char*, unsigned int, unsigned char*)>(L"Image_ExpandBgr")(src, count, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_AllocTempMemory(int bytes) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (int)>(L"Image_AllocTempMemory")(bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_FreeTempMemory(unsigned char* mem, int bytes) -> void
{
  return Zynamic::Forward<void (unsigned char*, int)>(L"Image_FreeTempMemory")(mem, bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadWavelet(struct GfxImage* image, const struct GfxImageFileHeader* fileHeader, const unsigned char* data, enum _D3DFORMAT format, int bytesPerPixel, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, const struct GfxImageFileHeader*, const unsigned char*, enum _D3DFORMAT, int, unsigned int)>(L"Image_LoadWavelet")(image, fileHeader, data, format, bytesPerPixel, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadBitmap(struct GfxImage* image, const struct GfxImageFileHeader* fileHeader, unsigned char* data, enum _D3DFORMAT format, int bytesPerPixel, int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, const struct GfxImageFileHeader*, unsigned char*, enum _D3DFORMAT, int, int)>(L"Image_LoadBitmap")(image, fileHeader, data, format, bytesPerPixel, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadDxtc(struct GfxImage* image, const struct GfxImageFileHeader* fileHeader, const unsigned char* data, enum _D3DFORMAT format, int bytesPerBlock, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, const struct GfxImageFileHeader*, const unsigned char*, enum _D3DFORMAT, int, unsigned int)>(L"Image_LoadDxtc")(image, fileHeader, data, format, bytesPerBlock, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadFromData(struct GfxImage* image, struct GfxImageFileHeader* fileHeader, unsigned char* srcData, unsigned int allocFlags) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, struct GfxImageFileHeader*, unsigned char*, unsigned int)>(L"Image_LoadFromData")(image, fileHeader, srcData, allocFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_PrintTruncatedFileError(const char* filepath) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Image_PrintTruncatedFileError")(filepath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadToBuffer(struct GfxImage* image, bool loadHighmip, unsigned char** imageBuffer, int* bufferSize) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*, bool, unsigned char**, int*)>(L"Image_LoadToBuffer")(image, loadHighmip, imageBuffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto readCallback() -> void
{
  return Zynamic::Forward<void ()>(L"readCallback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadFromFileWithReader(struct GfxImage* image, bool loadHighmip, function* OpenFileRead) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*, bool, function *)>(L"Image_LoadFromFileWithReader")(image, loadHighmip, OpenFileRead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Image_LoadFromFileWithReader(struct GfxImage* image, bool loadHighmip, function* OpenFileRead) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*, bool, function *)>(L"_Image_LoadFromFileWithReader")(image, loadHighmip, OpenFileRead);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadFromFile(struct GfxImage* image, bool loadHighmip) -> bool
{
  return Zynamic::Forward<bool (struct GfxImage*, bool)>(L"Image_LoadFromFile")(image, loadHighmip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Generate2D(struct GfxImage* image, unsigned char* pixels, int width, int height, enum _D3DFORMAT imageFormat) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned char*, int, int, enum _D3DFORMAT)>(L"Image_Generate2D")(image, pixels, width, height, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GenerateCube(struct GfxImage* image, const unsigned char** pixels[0x15], int edgeLen, enum _D3DFORMAT imageFormat, const unsigned int mipCount) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, const unsigned char**[0x15], int, enum _D3DFORMAT, const unsigned int)>(L"Image_GenerateCube")(image, pixels, edgeLen, imageFormat, mipCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadSolid(struct GfxImage* image, unsigned char r, unsigned char g, unsigned char b, unsigned char a) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, unsigned char, unsigned char, unsigned char, unsigned char)>(L"Image_LoadSolid")(image, r, g, b, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadWhite(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadWhite")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadWhiteR32F(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadWhiteR32F")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadG16R16(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadG16R16")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadR5G6B5(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadR5G6B5")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadBlack(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadBlack")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadBlank(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadBlank")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadGray(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadGray")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadIdentityNormalMap(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadIdentityNormalMap")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadWhiteTransparent(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadWhiteTransparent")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadPixelCostColorCode(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_LoadPixelCostColorCode")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_LoadBuiltin(const char* name, unsigned char semantic, int imageTrack) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, int)>(L"Image_LoadBuiltin")(name, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Load(const char* name, unsigned char semantic, int imageTrack) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (const char*, unsigned char, int)>(L"Image_Load")(name, semantic, imageTrack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_BuildWaterMap(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"Image_BuildWaterMap")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateWaterMap(char* name, unsigned short imageWidth, unsigned short imageHeight) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (char*, unsigned short, unsigned short)>(L"R_CreateWaterMap")(name, imageWidth, imageHeight);
}

#endif // __UNIMPLEMENTED__
