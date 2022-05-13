//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_add_quant_table(struct jpeg_compress_struct* cinfo, int which_tbl, const unsigned int* basic_table, int scale_factor, unsigned char force_baseline)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, const unsigned int*, int, unsigned char)>(L"jpeg_add_quant_table")(cinfo, which_tbl, basic_table, scale_factor, force_baseline);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_set_linear_quality(struct jpeg_compress_struct* cinfo, int scale_factor, unsigned char force_baseline)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, unsigned char)>(L"jpeg_set_linear_quality")(cinfo, scale_factor, force_baseline);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int jpeg_quality_scaling(int quality)
{
  return Zynamic::Forward<int (int)>(L"jpeg_quality_scaling")(quality);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_set_quality(struct jpeg_compress_struct* cinfo, int quality, unsigned char force_baseline)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, unsigned char)>(L"jpeg_set_quality")(cinfo, quality, force_baseline);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void add_huff_table(struct jpeg_compress_struct* cinfo, struct JHUFF_TBL** htblptr, const unsigned char* bits, const unsigned char* val)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, struct JHUFF_TBL**, const unsigned char*, const unsigned char*)>(L"add_huff_table")(cinfo, htblptr, bits, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void std_huff_tables(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"std_huff_tables")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_set_defaults(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jpeg_set_defaults")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_default_colorspace(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jpeg_default_colorspace")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_set_colorspace(struct jpeg_compress_struct* cinfo, enum J_COLOR_SPACE colorspace)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum J_COLOR_SPACE)>(L"jpeg_set_colorspace")(cinfo, colorspace);
}

#endif // __UNIMPLEMENTED__