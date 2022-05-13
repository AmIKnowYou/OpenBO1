//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto deflateInit2_(struct z_stream_s* strm, int level, int method, int windowBits, int memLevel, int strategy, const char* version, int stream_size) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, int, int, int, int, int, const char*, int)>(L"deflateInit2_")(strm, level, method, windowBits, memLevel, strategy, version, stream_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto deflateReset(struct z_stream_s* strm) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*)>(L"deflateReset")(strm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto putShortMSB(struct internal_state* s, unsigned int b) -> void
{
  return Zynamic::Forward<void (struct internal_state*, unsigned int)>(L"putShortMSB")(s, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto flush_pending(struct z_stream_s* strm) -> void
{
  return Zynamic::Forward<void (struct z_stream_s*)>(L"flush_pending")(strm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto deflate(struct z_stream_s* strm, int flush) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, int)>(L"deflate")(strm, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto deflateEnd(struct z_stream_s* strm) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*)>(L"deflateEnd")(strm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto read_buf(struct z_stream_s* strm, unsigned char* buf, unsigned int size) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, unsigned char*, unsigned int)>(L"read_buf")(strm, buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto lm_init(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"lm_init")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto longest_match_fast(struct internal_state* s, unsigned int cur_match) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct internal_state*, unsigned int)>(L"longest_match_fast")(s, cur_match);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampShortNonNegative(short value) -> short
{
  return Zynamic::Forward<short (short)>(L"ClampShortNonNegative")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fill_window(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"fill_window")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto deflate_stored(struct internal_state* s, int flush) -> enum block_state
{
  return Zynamic::Forward<enum block_state (struct internal_state*, int)>(L"deflate_stored")(s, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto deflate_fast(struct internal_state* s, int flush) -> enum block_state
{
  return Zynamic::Forward<enum block_state (struct internal_state*, int)>(L"deflate_fast")(s, flush);
}

#endif // __UNIMPLEMENTED__
