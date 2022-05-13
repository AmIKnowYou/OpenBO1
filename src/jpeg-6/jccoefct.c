//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_iMCU_row(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"start_iMCU_row")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_pass_coef(struct jpeg_compress_struct* cinfo, enum J_BUF_MODE pass_mode)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum J_BUF_MODE)>(L"start_pass_coef")(cinfo, pass_mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char compress_data(struct jpeg_compress_struct* cinfo, unsigned char*** input_buf)
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, unsigned char***)>(L"compress_data")(cinfo, input_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char compress_first_pass(struct jpeg_compress_struct* cinfo, unsigned char*** input_buf)
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, unsigned char***)>(L"compress_first_pass")(cinfo, input_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char compress_output(struct jpeg_compress_struct* cinfo, unsigned char*** input_buf)
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, unsigned char***)>(L"compress_output")(cinfo, input_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_c_coef_controller(struct jpeg_compress_struct* cinfo, unsigned char need_full_buffer)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"jinit_c_coef_controller")(cinfo, need_full_buffer);
}

#endif // __UNIMPLEMENTED__