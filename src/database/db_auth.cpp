//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DB_AuthLoad_InflateInit(struct z_stream_s* stream, bool isSecure, const char* __formal) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, bool, const char*)>(L"DB_AuthLoad_InflateInit")(stream, isSecure, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_AuthLoad_InflateEnd(struct z_stream_s* stream) -> void
{
  return Zynamic::Forward<void (struct z_stream_s*)>(L"DB_AuthLoad_InflateEnd")(stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_AuthLoad_Inflate(struct z_stream_s* stream, int flush) -> int
{
  return Zynamic::Forward<int (struct z_stream_s*, int)>(L"DB_AuthLoad_Inflate")(stream, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto tom_game_malloc(unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"tom_game_malloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto tom_game_realloc(void* ptr, unsigned int size) -> void*
{
  return Zynamic::Forward<void* (void*, unsigned int)>(L"tom_game_realloc")(ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto tom_game_calloc(unsigned int num, unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int)>(L"tom_game_calloc")(num, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto tom_game_free(void* ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"tom_game_free")(ptr);
}

#endif // __UNIMPLEMENTED__
