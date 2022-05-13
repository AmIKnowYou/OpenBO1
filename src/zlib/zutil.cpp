//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto zcalloc(unsigned char* opaque, unsigned int items, unsigned int size) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned char*, unsigned int, unsigned int)>(L"zcalloc")(opaque, items, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto zcfree(unsigned char* opaque, unsigned char* ptr) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned char*)>(L"zcfree")(opaque, ptr);
}

#endif // __UNIMPLEMENTED__
