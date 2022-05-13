//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void emit_byte(struct jpeg_compress_struct* cinfo, int val)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int)>(L"emit_byte")(cinfo, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_marker(struct jpeg_compress_struct* cinfo, enum JPEG_MARKER mark)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum JPEG_MARKER)>(L"emit_marker")(cinfo, mark);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_2bytes(struct jpeg_compress_struct* cinfo, int value)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int)>(L"emit_2bytes")(cinfo, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int emit_dqt(struct jpeg_compress_struct* cinfo, int index)
{
  return Zynamic::Forward<int (struct jpeg_compress_struct*, int)>(L"emit_dqt")(cinfo, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_dht(struct jpeg_compress_struct* cinfo, int index, unsigned char is_ac)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, unsigned char)>(L"emit_dht")(cinfo, index, is_ac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_dri(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"emit_dri")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_sof(struct jpeg_compress_struct* cinfo, enum JPEG_MARKER code)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, enum JPEG_MARKER)>(L"emit_sof")(cinfo, code);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_sos(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"emit_sos")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_jfif_app0(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"emit_jfif_app0")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_adobe_app14(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"emit_adobe_app14")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_marker_header(struct jpeg_compress_struct* cinfo, int marker, unsigned int datalen)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int, unsigned int)>(L"write_marker_header")(cinfo, marker, datalen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_marker_byte(struct jpeg_compress_struct* cinfo, int val)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*, int)>(L"write_marker_byte")(cinfo, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_file_header(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"write_file_header")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_frame_header(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"write_frame_header")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_scan_header(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"write_scan_header")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_file_trailer(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"write_file_trailer")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void write_tables_only(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"write_tables_only")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_marker_writer(struct jpeg_compress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_compress_struct*)>(L"jinit_marker_writer")(cinfo);
}

#endif // __UNIMPLEMENTED__