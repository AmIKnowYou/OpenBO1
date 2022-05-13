//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Encode_SetOptions(int frequency, int quality) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Encode_SetOptions")(frequency, quality);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Encode_Init(int bandwidthEnum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Encode_Init")(bandwidthEnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Encode_Shutdown() -> bool
{
  return Zynamic::Forward<bool ()>(L"Encode_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Encode_Sample(short* buffer_in, char* buffer_out, int maxLength) -> int
{
  return Zynamic::Forward<int (short*, char*, int)>(L"Encode_Sample")(buffer_in, buffer_out, maxLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Encode_GetFrameSize() -> int
{
  return Zynamic::Forward<int ()>(L"Encode_GetFrameSize")();
}

#endif // __UNIMPLEMENTED__
