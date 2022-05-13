//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElem_CompressBasis(const float* inBasis[0x3], char* outBasis[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], char*[0x3])>(L"FX_TrailElem_CompressBasis")(inBasis, outBasis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElem_UncompressBasis(const char* inBasis[0x3], float* basis[0x3]) -> void
{
  return Zynamic::Forward<void (const char*[0x3], float*[0x3])>(L"FX_TrailElem_UncompressBasis")(inBasis, basis);
}

#endif // __UNIMPLEMENTED__
