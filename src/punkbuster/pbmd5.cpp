//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Transform(unsigned long* buf, unsigned long* in) -> void
{
  return Zynamic::Forward<void (unsigned long*, unsigned long*)>(L"Transform")(buf, in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MD5Init(struct MD5_CTX* mdContext, unsigned long pseudoRandomNumber) -> void
{
  return Zynamic::Forward<void (struct MD5_CTX*, unsigned long)>(L"MD5Init")(mdContext, pseudoRandomNumber);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MD5Update(struct MD5_CTX* mdContext, unsigned char* inBuf, unsigned int inLen) -> void
{
  return Zynamic::Forward<void (struct MD5_CTX*, unsigned char*, unsigned int)>(L"MD5Update")(mdContext, inBuf, inLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MD5Final(struct MD5_CTX* mdContext) -> void
{
  return Zynamic::Forward<void (struct MD5_CTX*)>(L"MD5Final")(mdContext);
}

#endif // __UNIMPLEMENTED__
