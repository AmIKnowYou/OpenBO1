//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void init_source(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"init_source")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void skip_input_data(struct jpeg_decompress_struct* cinfo, long num_bytes)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, long)>(L"skip_input_data")(cinfo, num_bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_memory_src(struct jpeg_decompress_struct* cinfo, const unsigned char* pubData, int iBytes)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, const unsigned char*, int)>(L"jpeg_memory_src")(cinfo, pubData, iBytes);
}

#endif // __UNIMPLEMENTED__