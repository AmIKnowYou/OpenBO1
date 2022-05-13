//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FFT_Init(int* fftBitswap, struct complex_s* fftTrigTable) -> void
{
  return Zynamic::Forward<void (int*, struct complex_s*)>(L"FFT_Init")(fftBitswap, fftTrigTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FFT(struct complex_s* data_inout, unsigned long log2_count, int* bitSwap, struct complex_s* trigTable) -> void
{
  return Zynamic::Forward<void (struct complex_s*, unsigned long, int*, struct complex_s*)>(L"FFT")(data_inout, log2_count, bitSwap, trigTable);
}

#endif // __UNIMPLEMENTED__
