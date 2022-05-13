//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_iMCU_row(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_iMCU_row")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_input_pass(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_input_pass")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_output_pass(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_output_pass")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int decompress_onepass(struct jpeg_decompress_struct* cinfo, unsigned char*** output_buf)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, unsigned char***)>(L"decompress_onepass")(cinfo, output_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int consume_data(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*)>(L"consume_data")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int decompress_data(struct jpeg_decompress_struct* cinfo, unsigned char*** output_buf)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, unsigned char***)>(L"decompress_data")(cinfo, output_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char smoothing_ok(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*)>(L"smoothing_ok")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int decompress_smooth_data(struct jpeg_decompress_struct* cinfo, unsigned char*** output_buf)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, unsigned char***)>(L"decompress_smooth_data")(cinfo, output_buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_d_coef_controller(struct jpeg_decompress_struct* cinfo, unsigned char need_full_buffer)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char)>(L"jinit_d_coef_controller")(cinfo, need_full_buffer);
}

#endif // __UNIMPLEMENTED__