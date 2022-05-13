//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_image_wavelet() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_image_wavelet")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Wavelet_ConsumeBits(unsigned short bitCount, struct WaveletDecode* decode) -> void
{
  return Zynamic::Forward<void (unsigned short, struct WaveletDecode*)>(L"Wavelet_ConsumeBits")(bitCount, decode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Wavelet_DecodeValue(const struct WaveletHuffmanDecode* decodeTable, unsigned short bitCount, int bias, struct WaveletDecode* decode) -> int
{
  return Zynamic::Forward<int (const struct WaveletHuffmanDecode*, unsigned short, int, struct WaveletDecode*)>(L"Wavelet_DecodeValue")(decodeTable, bitCount, bias, decode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Wavelet_AddDeltaToMipmap(unsigned char* inout, int size, struct WaveletDecode* decode, const int* dstChanOffset) -> void
{
  return Zynamic::Forward<void (unsigned char*, int, struct WaveletDecode*, const int*)>(L"Wavelet_AddDeltaToMipmap")(inout, size, decode, dstChanOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Wavelet_DecompressLevel(unsigned char* src, unsigned char* dst, struct WaveletDecode* decode) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned char*, struct WaveletDecode*)>(L"Wavelet_DecompressLevel")(src, dst, decode);
}

#endif // __UNIMPLEMENTED__
