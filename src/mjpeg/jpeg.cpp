//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::dct(short* out, unsigned char* in, int pitch) -> void
{
  return Zynamic::Forward<public void (short*, unsigned char*, int)>(L"jpeg_encode::dct")(out, in, pitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::init_quant(int quality_factor) -> void
{
  return Zynamic::Forward<public void (int)>(L"jpeg_encode::init_quant")(quality_factor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::quant(short* out, short* in, unsigned short* quant_table_ptr) -> void
{
  return Zynamic::Forward<public void (short*, short*, unsigned short*)>(L"jpeg_encode::quant")(out, in, quant_table_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::huffman(unsigned char* out, short* in, struct jpeg_encode_state* channel) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*, short*, struct jpeg_encode_state*)>(L"jpeg_encode::huffman")(out, in, channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::do_block(unsigned char* out, unsigned char* in, int pitch, struct jpeg_encode_state* channel) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*, unsigned char*, int, struct jpeg_encode_state*)>(L"jpeg_encode::do_block")(out, in, pitch, channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Out32(unsigned char*& out, unsigned int d) -> void
{
  return Zynamic::Forward<void (unsigned char*&, unsigned int)>(L"Out32")(out, d);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OutRational(unsigned char*& out, float val, int div) -> void
{
  return Zynamic::Forward<void (unsigned char*&, float, int)>(L"OutRational")(out, val, div);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::write_header(unsigned char* out, int width, int height, bool greyscale, bool tables, struct jpeg_exif* exif) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*, int, int, bool, bool, struct jpeg_exif*)>(L"jpeg_encode::write_header")(out, width, height, greyscale, tables, exif);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::begin(unsigned char* out, int width, int height, int quality, bool tables, struct jpeg_exif* exif) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*, int, int, int, bool, struct jpeg_exif*)>(L"jpeg_encode::begin")(out, width, height, quality, tables, exif);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::end(unsigned char* out) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*)>(L"jpeg_encode::end")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto jpeg_encode::encode(unsigned char* out, int width, int height, int pitch, int quality, unsigned char* y, unsigned char* u, unsigned char* v, bool tables, struct jpeg_exif* exif) -> unsigned char*
{
  return Zynamic::Forward<public unsigned char* (unsigned char*, int, int, int, int, unsigned char*, unsigned char*, unsigned char*, bool, struct jpeg_exif*)>(L"jpeg_encode::encode")(out, width, height, pitch, quality, y, u, v, tables, exif);
}

#endif // __UNIMPLEMENTED__
