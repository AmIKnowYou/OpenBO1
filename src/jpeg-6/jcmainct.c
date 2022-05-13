//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_main(struct jpeg_compress_struct* cinfo, enum J_BUF_MODE pass_mode)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum J_BUF_MODE)>(L"start_pass_main")(cinfo, pass_mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void process_data_simple_main(struct jpeg_compress_struct* cinfo, unsigned char** input_buf, unsigned int* in_row_ctr, unsigned int in_rows_avail)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char**, unsigned int*, unsigned int)>(L"process_data_simple_main")(cinfo, input_buf, in_row_ctr, in_rows_avail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_c_main_controller(struct jpeg_compress_struct* cinfo, unsigned char need_full_buffer)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"jinit_c_main_controller")(cinfo, need_full_buffer);
}

#endif // __UNIMPLEMENTED__