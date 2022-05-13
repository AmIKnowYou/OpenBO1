//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto uncompress(unsigned char* dest, unsigned long* destLen, const unsigned char* source, unsigned long sourceLen) -> int
{
  return Zynamic::Forward<int (unsigned char*, unsigned long*, const unsigned char*, unsigned long)>(L"uncompress")(dest, destLen, source, sourceLen);
}

#endif // __UNIMPLEMENTED__
