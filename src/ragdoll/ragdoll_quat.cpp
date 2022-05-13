//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatMul(const float* qa, const float* qb, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Ragdoll_QuatMul")(qa, qb, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatMulInvSecond(const float* qa, const float* qb, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Ragdoll_QuatMulInvSecond")(qa, qb, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatConjugate(const float* src, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Ragdoll_QuatConjugate")(src, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatInverse(const float* src, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Ragdoll_QuatInverse")(src, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatPointRotate(const float* p, const float* q, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Ragdoll_QuatPointRotate")(p, q, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Mat33ToQuat(const float* axis[0x3], float* quat) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"Ragdoll_Mat33ToQuat")(axis, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatToAxisAngle(const float* quat, float* axisAngle) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"Ragdoll_QuatToAxisAngle")(quat, axisAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_QuatLerp(const float* qa, const float* qb, const float t, float* dest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, float*)>(L"Ragdoll_QuatLerp")(qa, qb, t, dest);
}

#endif // __UNIMPLEMENTED__
