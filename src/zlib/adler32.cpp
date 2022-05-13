//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto adler32(unsigned long adler, const unsigned char* buf, unsigned int len) -> unsigned long
{
  return Zynamic::Forward<unsigned long (unsigned long, const unsigned char*, unsigned int)>(L"adler32")(adler, buf, len);
}

#endif // __UNIMPLEMENTED__
