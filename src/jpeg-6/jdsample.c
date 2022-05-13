//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_upsample(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_pass_upsample")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void sep_upsample(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"sep_upsample")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void fullsize_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"fullsize_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void noop_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"noop_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void int_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"int_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v1_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"h2v1_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v2_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"h2v2_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v1_fancy_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"h2v1_fancy_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v2_fancy_upsample(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** input_data, unsigned char*** output_data_ptr)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, unsigned char**, unsigned char***)>(L"h2v2_fancy_upsample")(cinfo, compptr, input_data, output_data_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_upsampler(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"jinit_upsampler")(cinfo);
}

#endif // __UNIMPLEMENTED__