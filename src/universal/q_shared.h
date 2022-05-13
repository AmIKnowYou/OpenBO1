//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto AssignToSmallerType<unsigned char>(unsigned char& dest, int src) -> void
{
  return Zynamic::Forward<void (unsigned char&, int)>(L"AssignToSmallerType<unsigned char>")(dest, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_HashString(const char* fname, int len) -> int
{
  return Zynamic::Forward<int (const char*, int)>(L"Com_HashString")(fname, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_BitCheckAssert(const unsigned int* array, int bitNum, int size) -> int
{
  return Zynamic::Forward<int (const unsigned int*, int, int)>(L"Com_BitCheckAssert")(array, bitNum, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_BitSetAssert(unsigned int* array, int bitNum, int size) -> void
{
  return Zynamic::Forward<void (unsigned int*, int, int)>(L"Com_BitSetAssert")(array, bitNum, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_BitClearAssert(unsigned int* array, int bitNum, int size) -> void
{
  return Zynamic::Forward<void (unsigned int*, int, int)>(L"Com_BitClearAssert")(array, bitNum, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto renderOptions_s::CopyWeaponOptions(const struct renderOptions_s& o) -> void
{
  return Zynamic::Forward<public void (const struct renderOptions_s&)>(L"renderOptions_s::CopyWeaponOptions")(o);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Com_IsRagdollTrajectory(const struct trajectory_t* trajectory) -> bool
{
  return Zynamic::Forward<bool (const struct trajectory_t*)>(L"Com_IsRagdollTrajectory")(trajectory);
}

#endif // __UNIMPLEMENTED__
