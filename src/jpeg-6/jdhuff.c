//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_huff_decoder(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"start_pass_huff_decoder")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_make_d_derived_tbl(struct jpeg_decompress_struct* cinfo, unsigned char isDC, int tblno, struct d_derived_tbl** pdtbl)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char, int, struct d_derived_tbl**)>(L"jpeg_make_d_derived_tbl")(cinfo, isDC, tblno, pdtbl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char jpeg_fill_bit_buffer(struct bitread_working_state* state, long get_buffer, int bits_left, int nbits)
{
  return Zynamic::Forward<unsigned char (struct bitread_working_state*, long, int, int)>(L"jpeg_fill_bit_buffer")(state, get_buffer, bits_left, nbits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int jpeg_huff_decode(struct bitread_working_state* state, long get_buffer, int bits_left, struct d_derived_tbl* htbl, int min_bits)
{
  return Zynamic::Forward<int (struct bitread_working_state*, long, int, struct d_derived_tbl*, int)>(L"jpeg_huff_decode")(state, get_buffer, bits_left, htbl, min_bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char process_restart(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*)>(L"process_restart")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char decode_mcu(struct jpeg_decompress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*, short**[0x64])>(L"decode_mcu")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_huff_decoder(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"jinit_huff_decoder")(cinfo);
}

#endif // __UNIMPLEMENTED__