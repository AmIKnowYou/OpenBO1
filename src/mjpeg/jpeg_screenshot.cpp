//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto jpeg_screenshot_set_frame_info(int width, int height, int row, int col, int tiles, float tileX, float tileY, int yOffset, float yAspect, float progress) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, float, float, int, float, float)>(L"jpeg_screenshot_set_frame_info")(width, height, row, col, tiles, tileX, tileY, yOffset, yAspect, progress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jpeg_screenshot_chunk(unsigned char* out, struct jpeg_encode& encode) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned char*, struct jpeg_encode&)>(L"jpeg_screenshot_chunk")(out, encode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jpeg_screenshot_tile(unsigned char* outY, unsigned char* outU, unsigned char* outV) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned char*, unsigned char*)>(L"jpeg_screenshot_tile")(outY, outU, outV);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jpeg_screenshot_row(unsigned char* out, unsigned char* inY, unsigned char* inU, unsigned char* inV, int row, struct jpeg_encode& encode) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, struct jpeg_encode&)>(L"jpeg_screenshot_row")(out, inY, inU, inV, row, encode);
}

#endif // __UNIMPLEMENTED__
