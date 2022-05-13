//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto yylex() -> int
{
  return Zynamic::Forward<int ()>(L"yylex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_get_next_buffer() -> int
{
  return Zynamic::Forward<int ()>(L"yy_get_next_buffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_get_previous_state() -> int
{
  return Zynamic::Forward<int ()>(L"yy_get_previous_state")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_try_NUL_trans(int yy_current_state) -> int
{
  return Zynamic::Forward<int (int)>(L"yy_try_NUL_trans")(yy_current_state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yyrestart(struct _iobuf* input_file) -> void
{
  return Zynamic::Forward<void (struct _iobuf*)>(L"yyrestart")(input_file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_load_buffer_state() -> void
{
  return Zynamic::Forward<void ()>(L"yy_load_buffer_state")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_create_buffer(struct _iobuf* file, int size) -> struct yy_buffer_state*
{
  return Zynamic::Forward<struct yy_buffer_state* (struct _iobuf*, int)>(L"yy_create_buffer")(file, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_init_buffer(struct yy_buffer_state* b, struct _iobuf* file) -> void
{
  return Zynamic::Forward<void (struct yy_buffer_state*, struct _iobuf*)>(L"yy_init_buffer")(b, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_flush_buffer(struct yy_buffer_state* b) -> void
{
  return Zynamic::Forward<void (struct yy_buffer_state*)>(L"yy_flush_buffer")(b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_fatal_error(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"yy_fatal_error")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_flex_alloc(unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"yy_flex_alloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto yy_flex_realloc(void* ptr, unsigned int size) -> void*
{
  return Zynamic::Forward<void* (void*, unsigned int)>(L"yy_flex_realloc")(ptr, size);
}

#endif // __UNIMPLEMENTED__
