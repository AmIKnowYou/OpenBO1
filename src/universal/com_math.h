//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto IS_NAN(float x) -> int
{
  return Zynamic::Forward<int (float)>(L"IS_NAN")(x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fsel(float comparand, float valGE, float valLT) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"I_fsel")(comparand, valGE, valLT);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_rsqrt(const float number) -> const float
{
  return Zynamic::Forward<const float (const float)>(L"I_rsqrt")(number);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fres(float val) -> float
{
  return Zynamic::Forward<float (float)>(L"I_fres")(val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fmax(float x, float y) -> float
{
  return Zynamic::Forward<float (float, float)>(L"I_fmax")(x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fmin(float x, float y) -> float
{
  return Zynamic::Forward<float (float, float)>(L"I_fmin")(x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fclamp(float val, float min, float max) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"I_fclamp")(val, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_flerp(float a, float b, float w) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"I_flerp")(a, b, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fmap(float minx, float maxx, float miny, float maxy, float x) -> float
{
  return Zynamic::Forward<float (float, float, float, float, float)>(L"I_fmap")(minx, maxx, miny, maxy, x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto I_fmodulus(float f, float mod) -> float
{
  return Zynamic::Forward<float (float, float)>(L"I_fmodulus")(f, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CountBitsEnabled(unsigned int num) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"CountBitsEnabled")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto PointToBoxDistSq(const float* pt, const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"PointToBoxDistSq")(pt, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixNegateXY(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixNegateXY")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto QuatMultiply(const float* in1, const float* in2, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"QuatMultiply")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto AngleNormalize180(const float angle) -> float
{
  return Zynamic::Forward<float (const float)>(L"AngleNormalize180")(angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto CosOfSumOfArcCos(float cos0, float cos1) -> float
{
  return Zynamic::Forward<float (float, float)>(L"CosOfSumOfArcCos")(cos0, cos1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto PointDistSqFromBounds(const float* v, const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"PointDistSqFromBounds")(v, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixTransformVector(const float* in1, const float* in2[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"MatrixTransformVector")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixTransposeTransformVector(const float* in1, const float* in2[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"MatrixTransposeTransformVector")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixSwapXYNegateX(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixSwapXYNegateX")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto TransposeMatrix(const float* matrix[0x3], float* transpose[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"TransposeMatrix")(matrix, transpose);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RotatePoint(float* point, const float* mat[0x3]) -> void
{
  return Zynamic::Forward<void (float*, const float*[0x3])>(L"RotatePoint")(point, mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RotatePoint(const float* v, const float* q, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"RotatePoint")(v, q, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ConvertQuatToMat(const struct DObjAnimMat* mat, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, float*[0x3])>(L"ConvertQuatToMat")(mat, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ConvertQuatToSkelMat(const struct DObjAnimMat* mat, struct DObjSkelMat* skelMat) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, struct DObjSkelMat*)>(L"ConvertQuatToSkelMat")(mat, skelMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixTransformVectorQuatTrans(const float* in, const struct DObjAnimMat* mat, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const struct DObjAnimMat*, float*)>(L"MatrixTransformVectorQuatTrans")(in, mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ConvertQuatToInverseMat(const struct DObjAnimMat* mat, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, float*[0x3])>(L"ConvertQuatToInverseMat")(mat, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ConvertQuatToInverseSkelMat(const struct DObjAnimMat* mat, struct DObjSkelMat* skelMat) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, struct DObjSkelMat*)>(L"ConvertQuatToInverseSkelMat")(mat, skelMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto QuatMultiplyEquals(const float* in, float* inout) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"QuatMultiplyEquals")(in, inout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto QuatMultiplyInverse(const float* in1, const float* in2, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"QuatMultiplyInverse")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto DObjSkelMatToMatrix43(const struct DObjSkelMat* inSkelMat, float* outMatrix[0x3]) -> void
{
  return Zynamic::Forward<void (const struct DObjSkelMat*, float*[0x3])>(L"DObjSkelMatToMatrix43")(inSkelMat, outMatrix);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto QuatMultiplyReverseInverse(const float* in1, const float* in2, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"QuatMultiplyReverseInverse")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto MatrixTransformVectorQuatTransEquals(const struct DObjAnimMat* in, float* inout) -> void
{
  return Zynamic::Forward<void (const struct DObjAnimMat*, float*)>(L"MatrixTransformVectorQuatTransEquals")(in, inout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto QuatMultiplyReverseEquals(const float* in, float* inout) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"QuatMultiplyReverseEquals")(in, inout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto InvMatrixTransformVectorQuatTrans(const float* in, const struct DObjAnimMat* mat, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const struct DObjAnimMat*, float*)>(L"InvMatrixTransformVectorQuatTrans")(in, mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto VecLessThan(float* a, float* b) -> int
{
  return Zynamic::Forward<int (float*, float*)>(L"VecLessThan")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto LerpAngleVector(const float* from, const float* to, const float frac, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, float*)>(L"LerpAngleVector")(from, to, frac, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_TransformSkelMat(const float* origin, const struct DObjSkelMat* mat, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const struct DObjSkelMat*, float*)>(L"R_TransformSkelMat")(origin, mat, out);
}

#endif // __UNIMPLEMENTED__
