//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_s_allocGlob''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_s_allocGlob''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_InitTempImages() -> void
{
  return Zynamic::Forward<void ()>(L"R_StreamAlloc_InitTempImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_SetupTempImage(enum _D3DFORMAT format, bool linear, int width, int height, int mipLevels) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (enum _D3DFORMAT, bool, int, int, int)>(L"R_StreamAlloc_SetupTempImage")(format, linear, width, height, mipLevels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_ReleaseTempImage(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"R_StreamAlloc_ReleaseTempImage")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_Lock() -> void
{
  return Zynamic::Forward<void ()>(L"R_StreamAlloc_Lock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_Unlock() -> void
{
  return Zynamic::Forward<void ()>(L"R_StreamAlloc_Unlock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_FreeImageByImportance(int size, float importance, struct GfxImage** unloadImage) -> bool
{
  return Zynamic::Forward<bool (int, float, struct GfxImage**)>(L"R_StreamAlloc_FreeImageByImportance")(size, importance, unloadImage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_CanAllocate(int size, float importance, struct GfxImage** unloadImage) -> bool
{
  return Zynamic::Forward<bool (int, float, struct GfxImage**)>(L"R_StreamAlloc_CanAllocate")(size, importance, unloadImage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_FreeImage(struct GfxImage* image, int imagePart, bool dirty, int* freedSize) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (struct GfxImage*, int, bool, int*)>(L"R_StreamAlloc_FreeImage")(image, imagePart, dirty, freedSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StreamAlloc_Flush() -> void
{
  return Zynamic::Forward<void ()>(L"R_StreamAlloc_Flush")();
}

#endif // __UNIMPLEMENTED__
