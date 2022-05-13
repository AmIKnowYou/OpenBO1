//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_huff(struct jpeg_compress_struct* cinfo, unsigned char gather_statistics)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"start_pass_huff")(cinfo, gather_statistics);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_make_c_derived_tbl(struct jpeg_compress_struct* cinfo, unsigned char isDC, int tblno, struct c_derived_tbl** pdtbl)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char, int, struct c_derived_tbl**)>(L"jpeg_make_c_derived_tbl")(cinfo, isDC, tblno, pdtbl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char dump_buffer(struct working_state* state)
{
  return Zynamic::Forward<unsigned char (struct working_state*)>(L"dump_buffer")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char emit_bits(struct working_state* state, unsigned int code, int size)
{
  return Zynamic::Forward<unsigned char (struct working_state*, unsigned int, int)>(L"emit_bits")(state, code, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char flush_bits(struct working_state* state)
{
  return Zynamic::Forward<unsigned char (struct working_state*)>(L"flush_bits")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_one_block(struct working_state* state, short* block, int last_dc_val, struct c_derived_tbl* dctbl, struct c_derived_tbl* actbl)
{
  return Zynamic::Forward<unsigned char (struct working_state*, short*, int, struct c_derived_tbl*, struct c_derived_tbl*)>(L"encode_one_block")(state, block, last_dc_val, dctbl, actbl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char emit_restart(struct working_state* state, int restart_num)
{
  return Zynamic::Forward<unsigned char (struct working_state*, int)>(L"emit_restart")(state, restart_num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_huff(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_huff")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void finish_pass_huff(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"finish_pass_huff")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void htest_one_block(struct jpeg_compress_struct* cinfo, short* block, int last_dc_val, long* dc_counts, long* ac_counts)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, short*, int, long*, long*)>(L"htest_one_block")(cinfo, block, last_dc_val, dc_counts, ac_counts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_gather(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_gather")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_gen_optimal_table(struct jpeg_compress_struct* cinfo, struct JHUFF_TBL* htbl, long* freq)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct JHUFF_TBL*, long*)>(L"jpeg_gen_optimal_table")(cinfo, htbl, freq);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void finish_pass_gather(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"finish_pass_gather")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_huff_encoder(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_huff_encoder")(cinfo);
}

#endif // __UNIMPLEMENTED__