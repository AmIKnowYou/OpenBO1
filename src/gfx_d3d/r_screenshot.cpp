//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_screenshot() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_screenshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ScreenshotFilename(int lastNumber, const char* extension, char* fileName) -> void
{
  return Zynamic::Forward<void (int, const char*, char*)>(L"R_ScreenshotFilename")(lastNumber, extension, fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DownsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned char* src, unsigned char* dst) -> void
{
  return Zynamic::Forward<void (int, int, int, int, unsigned char*, unsigned char*)>(L"R_DownsamplePixelData")(oldSize, newSize, stride, bytesPerPixel, src, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpsamplePixelData(int oldSize, int newSize, int stride, int bytesPerPixel, unsigned char* src, unsigned char* dst) -> void
{
  return Zynamic::Forward<void (int, int, int, int, unsigned char*, unsigned char*)>(L"R_UpsamplePixelData")(oldSize, newSize, stride, bytesPerPixel, src, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResampleImage(int oldWidth, int oldHeight, int newWidth, int newHeight, int bytesPerPixel, unsigned char* data) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, unsigned char*)>(L"R_ResampleImage")(oldWidth, oldHeight, newWidth, newHeight, bytesPerPixel, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFrontBufferData(int x, int y, int width, int height, int bytesPerPixel, unsigned char* buffer) -> bool
{
  return Zynamic::Forward<bool (int, int, int, int, int, unsigned char*)>(L"R_GetFrontBufferData")(x, y, width, height, bytesPerPixel, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto half2float(unsigned short h) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned short)>(L"half2float")(h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto convertmantissa(unsigned int i) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"convertmantissa")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto initHalfToFloat() -> void
{
  return Zynamic::Forward<void ()>(L"initHalfToFloat")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBackBufferDataHDR(int x, int y, int width, int height, int bytesPerPixel, float* buffer) -> bool
{
  return Zynamic::Forward<bool (int, int, int, int, int, float*)>(L"R_GetBackBufferDataHDR")(x, y, width, height, bytesPerPixel, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TakeResampledScreenshot(int width, int height, int bytesPerPixel, int headerSize) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (int, int, int, int)>(L"R_TakeResampledScreenshot")(width, height, bytesPerPixel, headerSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LevelShot() -> void
{
  return Zynamic::Forward<void ()>(L"R_LevelShot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveGameShot(const char* saveName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"R_SaveGameShot")(saveName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TakeScreenshot(const char* filename, enum _D3DXIMAGE_FILEFORMAT format) -> bool
{
  return Zynamic::Forward<bool (const char*, enum _D3DXIMAGE_FILEFORMAT)>(L"R_TakeScreenshot")(filename, format);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TakeScreenshotJpgCallback(void* param) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_TakeScreenshotJpgCallback")(param);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TakeScreenshotTgaCallback(void* param) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_TakeScreenshotTgaCallback")(param);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ScreenshotCommand(enum GfxScreenshotType type) -> void
{
  return Zynamic::Forward<void (enum GfxScreenshotType)>(L"R_ScreenshotCommand")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginHiResShot(int tiles) -> void
{
  return Zynamic::Forward<void (int)>(L"R_BeginHiResShot")(tiles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateHiResShot(float row, float col) -> void
{
  return Zynamic::Forward<void (float, float)>(L"R_UpdateHiResShot")(row, col);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndHiResShot() -> void
{
  return Zynamic::Forward<void ()>(L"R_EndHiResShot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotCalcReflectionFactor(const int shotIndex, const int colIndex, const int rowIndex, const float n0, const float n1) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const int, const int, const int, const float, const float)>(L"R_CubemapShotCalcReflectionFactor")(shotIndex, colIndex, rowIndex, n0, n1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapFaceNormalize(float* inbuffer, const int size, float* average) -> void
{
  return Zynamic::Forward<void (float*, const int, float*)>(L"R_CubemapFaceNormalize")(inbuffer, size, average);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotRotateClockwise(float* inbuffer, float* tmpbuffer, const int size) -> void
{
  return Zynamic::Forward<void (float*, float*, const int)>(L"R_CubemapShotRotateClockwise")(inbuffer, tmpbuffer, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotRotateAntiClockwise(float* inbuffer, float* tmpbuffer, const int size) -> void
{
  return Zynamic::Forward<void (float*, float*, const int)>(L"R_CubemapShotRotateAntiClockwise")(inbuffer, tmpbuffer, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotFlipVertical(float* buffer, const int size) -> void
{
  return Zynamic::Forward<void (float*, const int)>(L"R_CubemapShotFlipVertical")(buffer, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotFlipHorizontal(float* buffer, const int size) -> void
{
  return Zynamic::Forward<void (float*, const int)>(L"R_CubemapShotFlipHorizontal")(buffer, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotCopySurfaceToBufferHDR(float* buffer, const int bufferSizeInBytes) -> void
{
  return Zynamic::Forward<void (float*, const int)>(L"R_CubemapShotCopySurfaceToBufferHDR")(buffer, bufferSizeInBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotWriteTargaHeader(const int res, unsigned char* fileBuffer) -> void
{
  return Zynamic::Forward<void (const int, unsigned char*)>(L"R_CubemapShotWriteTargaHeader")(res, fileBuffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotCopyBufferToTarga(const unsigned char* srcBuffer, unsigned char* targa) -> void
{
  return Zynamic::Forward<void (const unsigned char*, unsigned char*)>(L"R_CubemapShotCopyBufferToTarga")(srcBuffer, targa);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotApplyFresnelToTarga(const enum CubemapShot shotIndex, const float n0, const float n1, unsigned char* targa) -> void
{
  return Zynamic::Forward<void (const enum CubemapShot, const float, const float, unsigned char*)>(L"R_CubemapShotApplyFresnelToTarga")(shotIndex, n0, n1, targa);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyCubemapShot(enum CubemapShot shotIndex) -> void
{
  return Zynamic::Forward<void (enum CubemapShot)>(L"R_CopyCubemapShot")(shotIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotWriteTargaFile(const char* filename, const enum CubemapShot shotIndex, const float n0, const float n1) -> void
{
  return Zynamic::Forward<void (const char*, const enum CubemapShot, const float, const float)>(L"R_CubemapShotWriteTargaFile")(filename, shotIndex, n0, n1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotSetInitialState() -> void
{
  return Zynamic::Forward<void ()>(L"R_CubemapShotSetInitialState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotRestoreState() -> void
{
  return Zynamic::Forward<void ()>(L"R_CubemapShotRestoreState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginCubemapShot(const int pixelWidthHeight, const int pixelBorder) -> void
{
  return Zynamic::Forward<void (const int, const int)>(L"R_BeginCubemapShot")(pixelWidthHeight, pixelBorder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndCubemapShot(const enum CubemapShot shotIndex) -> void
{
  return Zynamic::Forward<void (const enum CubemapShot)>(L"R_EndCubemapShot")(shotIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveCubemapShot(const char* filename, const enum CubemapShot shotIndex, const float n0, const float n1) -> void
{
  return Zynamic::Forward<void (const char*, const enum CubemapShot, const float, const float)>(L"R_SaveCubemapShot")(filename, shotIndex, n0, n1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateReflectionRawDataFromCubemapShot(struct DiskGfxReflectionProbe* probeRawData, const int downSampleRes) -> void
{
  return Zynamic::Forward<void (struct DiskGfxReflectionProbe*, const int)>(L"R_CreateReflectionRawDataFromCubemapShot")(probeRawData, downSampleRes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDirForCubemapPixel(int faceIndex, float x, float y, float* dir) -> void
{
  return Zynamic::Forward<void (int, float, float, float*)>(L"R_GetDirForCubemapPixel")(faceIndex, x, y, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapLightingForDir(float** linearColors[0x3], int width, int height, const float* dir, const float* baseColor, unsigned char* pixel) -> void
{
  return Zynamic::Forward<void (float**[0x3], int, int, const float*, const float*, unsigned char*)>(L"R_CubemapLightingForDir")(linearColors, width, height, dir, baseColor, pixel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapLighting(float** linearColors[0x3], int width, int height, const float* baseColor, unsigned char** pixels) -> void
{
  return Zynamic::Forward<void (float**[0x3], int, int, const float*, unsigned char**)>(L"R_CubemapLighting")(linearColors, width, height, baseColor, pixels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CubemapShotExtractLinearLight(unsigned char** pixels, int width, int height, float** linearColors[0x3]) -> void
{
  return Zynamic::Forward<void (unsigned char**, int, int, float**[0x3])>(L"R_CubemapShotExtractLinearLight")(pixels, width, height, linearColors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightingFromCubemapShots(const float* baseColor) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_LightingFromCubemapShots")(baseColor);
}

#endif // __UNIMPLEMENTED__
