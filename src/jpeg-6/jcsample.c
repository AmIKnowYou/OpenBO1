//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void expand_right_edge(unsigned char** image_data, int num_rows, unsigned int input_cols, unsigned int output_cols)
{
  return Zynamic::Forward<void (unsigned char**, int, unsigned int, unsigned int)>(L"expand_right_edge")(image_data, num_rows, input_cols, output_cols);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void sep_downsample(struct jpeg_compress_struct* cinfo, unsigned char*** input_buf, unsigned int in_row_index, unsigned char*** output_buf, unsigned int out_row_group_index)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char***, unsigned int, unsigned char***, unsigned int)>(L"sep_downsample")(cinfo, input_buf, in_row_index, output_buf, out_row_group_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void int_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"int_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void fullsize_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"fullsize_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v1_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"h2v1_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v2_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"h2v2_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v2_smooth_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"h2v2_smooth_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void fullsize_smooth_downsample(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char** output_data)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char**)>(L"fullsize_smooth_downsample")(cinfo, compptr, input_data, output_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_downsampler(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_downsampler")(cinfo);
}

#endif // __UNIMPLEMENTED__