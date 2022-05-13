//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

unsigned char jpeg_start_decompress(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*)>(L"jpeg_start_decompress")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char output_pass_setup(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*)>(L"output_pass_setup")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned int jpeg_read_scanlines(struct jpeg_decompress_struct* cinfo, unsigned char** scanlines, unsigned int max_lines)
{
  return Zynamic::Forward<unsigned int (struct jpeg_decompress_struct*, unsigned char**, unsigned int)>(L"jpeg_read_scanlines")(cinfo, scanlines, max_lines);
}

#endif // __UNIMPLEMENTED__