//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void jpeg_CreateDecompress(struct jpeg_decompress_struct* cinfo, int version, unsigned int structsize)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, int, unsigned int)>(L"jpeg_CreateDecompress")(cinfo, version, structsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_destroy_compress(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jpeg_destroy_compress")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void default_decompress_parms(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"default_decompress_parms")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int jpeg_read_header(struct jpeg_decompress_struct* cinfo, unsigned char require_image)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, unsigned char)>(L"jpeg_read_header")(cinfo, require_image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int jpeg_consume_input(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*)>(L"jpeg_consume_input")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char jpeg_finish_decompress(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<unsigned char (struct jpeg_decompress_struct*)>(L"jpeg_finish_decompress")(cinfo);
}

#endif // __UNIMPLEMENTED__