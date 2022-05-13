//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void rgb_ycc_start(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"rgb_ycc_start")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void rgb_ycc_convert(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned char*** output_buf, unsigned int output_row, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned char***, unsigned int, int)>(L"rgb_ycc_convert")(cinfo, input_buf, output_buf, output_row, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void rgb_gray_convert(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned char*** output_buf, unsigned int output_row, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned char***, unsigned int, int)>(L"rgb_gray_convert")(cinfo, input_buf, output_buf, output_row, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void cmyk_ycck_convert(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned char*** output_buf, unsigned int output_row, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned char***, unsigned int, int)>(L"cmyk_ycck_convert")(cinfo, input_buf, output_buf, output_row, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void grayscale_convert(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned char*** output_buf, unsigned int output_row, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned char***, unsigned int, int)>(L"grayscale_convert")(cinfo, input_buf, output_buf, output_row, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void null_convert(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned char*** output_buf, unsigned int output_row, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned char***, unsigned int, int)>(L"null_convert")(cinfo, input_buf, output_buf, output_row, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_color_converter(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_color_converter")(cinfo);
}

#endif // __UNIMPLEMENTED__