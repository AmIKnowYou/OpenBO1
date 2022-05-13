//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_fdctmgr(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"start_pass_fdctmgr")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void forward_DCT(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** sample_data, short* coef_blocks[0x64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, short*[0x64], unsigned int, unsigned int, unsigned int)>(L"forward_DCT")(cinfo, compptr, sample_data, coef_blocks, start_row, start_col, num_blocks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void forward_DCT_float(struct jpeg_compress_struct* cinfo, struct jpeg_component_info* compptr, unsigned char** sample_data, short* coef_blocks[0x64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct jpeg_component_info*, unsigned char**, short*[0x64], unsigned int, unsigned int, unsigned int)>(L"forward_DCT_float")(cinfo, compptr, sample_data, coef_blocks, start_row, start_col, num_blocks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_forward_dct(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_forward_dct")(cinfo);
}

#endif // __UNIMPLEMENTED__