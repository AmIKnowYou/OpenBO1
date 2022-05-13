//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_idct_islow(struct jpeg_decompress_struct* cinfo, struct jpeg_component_info* compptr, short* coef_block, unsigned char** output_buf, unsigned int output_col)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct jpeg_component_info*, short*, unsigned char**, unsigned int)>(L"jpeg_idct_islow")(cinfo, compptr, coef_block, output_buf, output_col);
}

#endif // __UNIMPLEMENTED__