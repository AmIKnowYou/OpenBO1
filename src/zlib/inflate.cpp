//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto inflateReset(struct z_stream_s* strm) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*)>(L"inflateReset")(strm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto inflateInit2_(struct z_stream_s* strm, int windowBits, const char* version, int stream_size) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, int, const char*, int)>(L"inflateInit2_")(strm, windowBits, version, stream_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto inflateInit_(struct z_stream_s* strm, const char* version, int stream_size) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, const char*, int)>(L"inflateInit_")(strm, version, stream_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fixedtables(struct inflate_state* state) -> void
{
  return Zynamic::Forward<void (struct inflate_state*)>(L"fixedtables")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto updatewindow(struct z_stream_s* strm, unsigned int out) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, unsigned int)>(L"updatewindow")(strm, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto inflate(struct z_stream_s* strm, int flush) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, int)>(L"inflate")(strm, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto inflateEnd(struct z_stream_s* strm) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*)>(L"inflateEnd")(strm);
}

#endif // __UNIMPLEMENTED__
