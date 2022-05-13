//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Decode_Init(int bandwidthEnum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Decode_Init")(bandwidthEnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Decode_SetOptions(int frequency) -> void
{
  return Zynamic::Forward<void (int)>(L"Decode_SetOptions")(frequency);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Decode_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Decode_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Decode_Sample(char* buffer, int maxLength, short* out, int frame_size) -> int
{
  return Zynamic::Forward<int (char*, int, short*, int)>(L"Decode_Sample")(buffer, maxLength, out, frame_size);
}

#endif // __UNIMPLEMENTED__
