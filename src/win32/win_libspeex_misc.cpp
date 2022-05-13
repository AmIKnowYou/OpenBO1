//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto speex_alloc(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"speex_alloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto speex_free(void* ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"speex_free")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto speex_realloc(void* ptr, int size) -> void*
{
  return Zynamic::Forward<void* (void*, int)>(L"speex_realloc")(ptr, size);
}

#endif // __UNIMPLEMENTED__
