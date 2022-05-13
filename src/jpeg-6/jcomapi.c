//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_abort(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"jpeg_abort")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_destroy(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"jpeg_destroy")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct JQUANT_TBL* jpeg_alloc_quant_table(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<struct JQUANT_TBL* (struct jpeg_common_struct*)>(L"jpeg_alloc_quant_table")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct JHUFF_TBL* jpeg_alloc_huff_table(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<struct JHUFF_TBL* (struct jpeg_common_struct*)>(L"jpeg_alloc_huff_table")(cinfo);
}

#endif // __UNIMPLEMENTED__