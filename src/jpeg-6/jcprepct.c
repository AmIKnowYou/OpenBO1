//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_prep(struct jpeg_compress_struct* cinfo, enum J_BUF_MODE pass_mode)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum J_BUF_MODE)>(L"start_pass_prep")(cinfo, pass_mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void expand_bottom_edge(unsigned char** image_data, unsigned int num_cols, int input_rows, int output_rows)
{
  return Zynamic::Forward<void (unsigned char**, unsigned int, int, int)>(L"expand_bottom_edge")(image_data, num_cols, input_rows, output_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void pre_process_data(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned int* in_row_ctr, unsigned int in_rows_avail, unsigned char*** output_buf, unsigned int* out_row_group_ctr, unsigned int out_row_groups_avail)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned int*, unsigned int, unsigned char***, unsigned int*, unsigned int)>(L"pre_process_data")(cinfo, input_buf, in_row_ctr, in_rows_avail, output_buf, out_row_group_ctr, out_row_groups_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void pre_process_context(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned int* in_row_ctr, unsigned int in_rows_avail, unsigned char*** output_buf, unsigned int* out_row_group_ctr, unsigned int out_row_groups_avail)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned int*, unsigned int, unsigned char***, unsigned int*, unsigned int)>(L"pre_process_context")(cinfo, input_buf, in_row_ctr, in_rows_avail, output_buf, out_row_group_ctr, out_row_groups_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void create_context_buffer(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"create_context_buffer")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_c_prep_controller(struct jpeg_compress_struct* cinfo, unsigned char need_full_buffer)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"jinit_c_prep_controller")(cinfo, need_full_buffer);
}

#endif // __UNIMPLEMENTED__