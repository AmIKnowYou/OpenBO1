//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void build_ycc_rgb_table(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"build_ycc_rgb_table")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_pass_merged_upsample(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_pass_merged_upsample")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void merged_2v_upsample(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"merged_2v_upsample")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void merged_1v_upsample(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"merged_1v_upsample")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v1_merged_upsample(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int in_row_group_ctr, unsigned char** output_buf)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int, unsigned char**)>(L"h2v1_merged_upsample")(cinfo, input_buf, in_row_group_ctr, output_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void h2v2_merged_upsample(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int in_row_group_ctr, unsigned char** output_buf)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int, unsigned char**)>(L"h2v2_merged_upsample")(cinfo, input_buf, in_row_group_ctr, output_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_merged_upsampler(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"jinit_merged_upsampler")(cinfo);
}

#endif // __UNIMPLEMENTED__