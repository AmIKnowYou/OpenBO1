//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_dpost(struct jpeg_decompress_struct* cinfo, enum J_BUF_MODE pass_mode)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, enum J_BUF_MODE)>(L"start_pass_dpost")(cinfo, pass_mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void post_process_1pass(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"post_process_1pass")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void post_process_prepass(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"post_process_prepass")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void post_process_2pass(struct jpeg_decompress_struct* cinfo, unsigned char*** input_buf, unsigned int* in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char** output_buf, unsigned int* out_row_ctr, unsigned int out_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char***, unsigned int*, unsigned int, unsigned char**, unsigned int*, unsigned int)>(L"post_process_2pass")(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_d_post_controller(struct jpeg_decompress_struct* cinfo, unsigned char need_full_buffer)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char)>(L"jinit_d_post_controller")(cinfo, need_full_buffer);
}

#endif // __UNIMPLEMENTED__