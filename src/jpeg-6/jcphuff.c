//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void start_pass_phuff(struct jpeg_compress_struct* cinfo, unsigned char gather_statistics)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"start_pass_phuff")(cinfo, gather_statistics);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void dump_buffer(struct phuff_entropy_encoder* entropy)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*)>(L"dump_buffer")(entropy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_bits(struct phuff_entropy_encoder* entropy, unsigned int code, int size)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*, unsigned int, int)>(L"emit_bits")(entropy, code, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void flush_bits(struct phuff_entropy_encoder* entropy)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*)>(L"flush_bits")(entropy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_symbol(struct phuff_entropy_encoder* entropy, int tbl_no, int symbol)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*, int, int)>(L"emit_symbol")(entropy, tbl_no, symbol);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_buffered_bits(struct phuff_entropy_encoder* entropy, char* bufstart, unsigned int nbits)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*, char*, unsigned int)>(L"emit_buffered_bits")(entropy, bufstart, nbits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_eobrun(struct phuff_entropy_encoder* entropy)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*)>(L"emit_eobrun")(entropy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_restart(struct phuff_entropy_encoder* entropy, int restart_num)
{
  return Zynamic::Forward<void (struct phuff_entropy_encoder*, int)>(L"emit_restart")(entropy, restart_num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_DC_first(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_DC_first")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_AC_first(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_AC_first")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_DC_refine(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_DC_refine")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char encode_mcu_AC_refine(struct jpeg_compress_struct* cinfo, short** MCU_data[0x64])
{
  return Zynamic::Forward<unsigned char (struct jpeg_compress_struct*, short**[0x64])>(L"encode_mcu_AC_refine")(cinfo, MCU_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void finish_pass_phuff(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"finish_pass_phuff")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void finish_pass_gather_phuff(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"finish_pass_gather_phuff")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_phuff_encoder(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_phuff_encoder")(cinfo);
}

#endif // __UNIMPLEMENTED__