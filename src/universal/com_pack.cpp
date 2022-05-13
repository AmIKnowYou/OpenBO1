//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FloatPack9S(const float unitFloat) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float)>(L"FloatPack9S")(unitFloat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FloatPack10S(const float unitFloat) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float)>(L"FloatPack10S")(unitFloat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3PackUnitVec(const float* unitVec) -> union PackedUnitVec
{
  return Zynamic::Forward<union PackedUnitVec (const float*)>(L"Vec3PackUnitVec")(unitVec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3UnpackUnitVec(const union PackedUnitVec in, float* out) -> void
{
  return Zynamic::Forward<void (const union PackedUnitVec, float*)>(L"Vec3UnpackUnitVec")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec4PackQuat(const float* in) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*)>(L"Vec4PackQuat")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2PackTexCoords(const float* in) -> union PackedTexCoords
{
  return Zynamic::Forward<union PackedTexCoords (const float*)>(L"Vec2PackTexCoords")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2UnpackTexCoords(const union PackedTexCoords in, float* out) -> void
{
  return Zynamic::Forward<void (const union PackedTexCoords, float*)>(L"Vec2UnpackTexCoords")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3PackNormAxis(const float* axis[0x3], float* result[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"Vec3PackNormAxis")(axis, result);
}

#endif // __UNIMPLEMENTED__
