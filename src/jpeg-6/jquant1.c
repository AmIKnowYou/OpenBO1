//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

int select_ncolors(struct jpeg_decompress_struct* cinfo, int* Ncolors)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, int*)>(L"select_ncolors")(cinfo, Ncolors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int output_value(struct jpeg_decompress_struct* cinfo, int ci, int j, int maxj)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, int, int, int)>(L"output_value")(cinfo, ci, j, maxj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int largest_input_value(struct jpeg_decompress_struct* cinfo, int ci, int j, int maxj)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, int, int, int)>(L"largest_input_value")(cinfo, ci, j, maxj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void create_colormap(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"create_colormap")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void create_colorindex(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"create_colorindex")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int* make_odither_array(struct jpeg_decompress_struct* cinfo[0x16], int ncolors)
{
  return Zynamic::Forward<int* (struct jpeg_decompress_struct*[0x16], int)>(L"make_odither_array")(cinfo, ncolors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void create_odither_tables(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"create_odither_tables")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void color_quantize(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"color_quantize")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void color_quantize3(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"color_quantize3")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void quantize_ord_dither(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"quantize_ord_dither")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void quantize3_ord_dither(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"quantize3_ord_dither")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void quantize_fs_dither(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"quantize_fs_dither")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void alloc_fs_workspace(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"alloc_fs_workspace")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_pass_1_quant(struct jpeg_decompress_struct* cinfo, unsigned char is_pre_scan)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char)>(L"start_pass_1_quant")(cinfo, is_pre_scan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void new_color_map_1_quant(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"new_color_map_1_quant")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_1pass_quantizer(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"jinit_1pass_quantizer")(cinfo);
}

#endif // __UNIMPLEMENTED__