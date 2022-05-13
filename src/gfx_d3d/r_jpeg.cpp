//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto init_destination(struct jpeg_compress_struct* cinfo) -> void
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"init_destination")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto term_destination(struct jpeg_compress_struct* cinfo) -> void
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"term_destination")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jpegDest(struct jpeg_compress_struct* cinfo, unsigned char* outfile, int size) -> void
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char*, int)>(L"jpegDest")(cinfo, outfile, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Z_MallocJpeg(unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"Z_MallocJpeg")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExitJpeg() -> void
{
  return Zynamic::Forward<void ()>(L"ExitJpeg")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintfJpeg(char* message) -> void
{
  return Zynamic::Forward<void (char*)>(L"PrintfJpeg")(message);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveJpg(const char* filename, int quality, int image_width, int image_height, unsigned char* image_buffer, unsigned char* output_buffer) -> void
{
  return Zynamic::Forward<void (const char*, int, int, int, unsigned char*, unsigned char*)>(L"R_SaveJpg")(filename, quality, image_width, image_height, image_buffer, output_buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Jpeg_HunkAlloc(unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"Jpeg_HunkAlloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReadJpgSetup(void* data, int dataLen, int* width, int* height, enum _D3DFORMAT* imageFormat) -> void*
{
  return Zynamic::Forward<void* (void*, int, int*, int*, enum _D3DFORMAT*)>(L"R_ReadJpgSetup")(data, dataLen, width, height, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReadJpg(void* context, unsigned char* pixels, int pitch, int height) -> bool
{
  return Zynamic::Forward<bool (void*, unsigned char*, int, int)>(L"R_ReadJpg")(context, pixels, pitch, height);
}

#endif // __UNIMPLEMENTED__
