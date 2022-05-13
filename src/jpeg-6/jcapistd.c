//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_start_compress(struct jpeg_compress_struct* cinfo, unsigned char write_all_tables)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"jpeg_start_compress")(cinfo, write_all_tables);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned int jpeg_write_scanlines(struct jpeg_compress_struct* cinfo, unsigned char** scanlines, unsigned int num_lines)
{
  return Zynamic::Forward<unsigned int (struct jpeg_compress_struct*, unsigned char**, unsigned int)>(L"jpeg_write_scanlines")(cinfo, scanlines, num_lines);
}

#endif // __UNIMPLEMENTED__