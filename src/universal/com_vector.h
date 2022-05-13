//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Vec2Sub(const float* a, const float* b, float* diff) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec2Sub")(a, b, diff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec2Length(const float* v) -> float
{
  return Zynamic::Forward<float (const float*)>(L"Vec2Length")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec2NormalizeFast(float* v) -> void
{
  return Zynamic::Forward<void (float*)>(L"Vec2NormalizeFast")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec2DistanceSq(const float* v0, const float* v1) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"Vec2DistanceSq")(v0, v1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec2Normalize(float* v) -> float
{
  return Zynamic::Forward<float (float*)>(L"Vec2Normalize")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec2NormalizeTo(const float* v, float* out) -> float
{
  return Zynamic::Forward<float (const float*, float*)>(L"Vec2NormalizeTo")(v, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Copy(const float* from, float* to) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Vec3Copy")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3AddScalar(const float* a, const float s, float* sum) -> void
{
  return Zynamic::Forward<void (const float*, const float, float*)>(L"Vec3AddScalar")(a, s, sum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Add(const float* a, const float* b, float* sum) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Add")(a, b, sum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Sub(const float* a, const float* b, float* diff) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Sub")(a, b, diff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Avg(const float* a, const float* b, float* sum) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Avg")(a, b, sum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Lerp(const float* from, const float* to, float frac, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float*)>(L"Vec3Lerp")(from, to, frac, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Scale(const float* v, float scale, float* result) -> void
{
  return Zynamic::Forward<void (const float*, float, float*)>(L"Vec3Scale")(v, scale, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Mul(const float* a, const float* b, float* product) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Mul")(a, b, product);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Abs(const float* a, float* res) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Vec3Abs")(a, res);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Mad(const float* start, float scale, const float* dir, float* result) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*, float*)>(L"Vec3Mad")(start, scale, dir, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3ScaleMad(float scale0, const float* dir0, float scale1, const float* dir1, float* result) -> void
{
  return Zynamic::Forward<void (float, const float*, float, const float*, float*)>(L"Vec3ScaleMad")(scale0, dir0, scale1, dir1, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3ScaleAdd(const float* base, const float* dir, float scale, float* dst) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float*)>(L"Vec3ScaleAdd")(base, dir, scale, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Compare(const float* a, const float* b) -> int
{
  return Zynamic::Forward<int (const float*, const float*)>(L"Vec3Compare")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3NormalizeFast(float* v) -> void
{
  return Zynamic::Forward<void (float*)>(L"Vec3NormalizeFast")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3IsNormalizedEpsilon(const float* v, float epsilon) -> int
{
  return Zynamic::Forward<int (const float*, float)>(L"Vec3IsNormalizedEpsilon")(v, epsilon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3IsNormalized(const float* v) -> int
{
  return Zynamic::Forward<int (const float*)>(L"Vec3IsNormalized")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Distance(const float* v1, const float* v2) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"Vec3Distance")(v1, v2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3DistanceSq(const float* p1, const float* p2) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"Vec3DistanceSq")(p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Cross(const float* v0, const float* v1, float* cross) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Cross")(v0, v1, cross);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Normalize(float* v) -> float
{
  return Zynamic::Forward<float (float*)>(L"Vec3Normalize")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3NormalizeTo(const float* v, float* out) -> float
{
  return Zynamic::Forward<float (const float*, float*)>(L"Vec3NormalizeTo")(v, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Rotate(const float* in, const float* matrix[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"Vec3Rotate")(in, matrix, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3RotateTranspose(const float* in, const float* matrix[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"Vec3RotateTranspose")(in, matrix, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Set(float* v, float x, float y, float z, float w) -> void
{
  return Zynamic::Forward<void (float*, float, float, float, float)>(L"Vec4Set")(v, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Copy(const float* from, float* to) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Vec4Copy")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Lerp(const float* from, const float* to, float frac, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float*)>(L"Vec4Lerp")(from, to, frac, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Scale(const float* v, float scale, float* result) -> void
{
  return Zynamic::Forward<void (const float*, float, float*)>(L"Vec4Scale")(v, scale, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Mad(const float* start, float scale, const float* dir, float* result) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*, float*)>(L"Vec4Mad")(start, scale, dir, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4LengthSq(const float* v) -> float
{
  return Zynamic::Forward<float (const float*)>(L"Vec4LengthSq")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4DivideByW(const float* in, float* out) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Vec4DivideByW")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Length(const float* v) -> float
{
  return Zynamic::Forward<float (const float*)>(L"Vec4Length")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4IsNormalized(const float* v) -> int
{
  return Zynamic::Forward<int (const float*)>(L"Vec4IsNormalized")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec4Normalize(float* v) -> float
{
  return Zynamic::Forward<float (float*)>(L"Vec4Normalize")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Short2LerpAsVec2(const short* from, const short* to, const float frac, float* out) -> void
{
  return Zynamic::Forward<void (const short*, const short*, const float, float*)>(L"Short2LerpAsVec2")(from, to, frac, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Min(const float* a, const float* b, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Min")(a, b, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Vec3Max(const float* a, const float* b, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Vec3Max")(a, b, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto point_aabb_dist2(const float* a, const float* mn, const float* mx) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"point_aabb_dist2")(a, mn, mx);
}

#endif // __UNIMPLEMENTED__
