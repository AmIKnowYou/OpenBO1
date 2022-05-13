//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto YEncIsCritical(unsigned char c) -> bool
{
  return Zynamic::Forward<bool (unsigned char)>(L"YEncIsCritical")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_EncodeYEnc(unsigned char* indata, int inlen, char* outdata, int outlen) -> int
{
  return Zynamic::Forward<int (unsigned char*, int, char*, int)>(L"Com_EncodeYEnc")(indata, inlen, outdata, outlen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DecodeYEnc(const char* indata, unsigned char* outdata, int outlen) -> int
{
  return Zynamic::Forward<int (const char*, unsigned char*, int)>(L"Com_DecodeYEnc")(indata, outdata, outlen);
}

#endif // __UNIMPLEMENTED__
