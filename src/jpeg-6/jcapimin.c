//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_CreateCompress(struct jpeg_compress_struct* cinfo, int version, unsigned int structsize)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, unsigned int)>(L"jpeg_CreateCompress")(cinfo, version, structsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_suppress_tables(struct jpeg_compress_struct* cinfo, unsigned char suppress)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, unsigned char)>(L"jpeg_suppress_tables")(cinfo, suppress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_finish_compress(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jpeg_finish_compress")(cinfo);
}

#endif // __UNIMPLEMENTED__