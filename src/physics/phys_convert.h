//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Phys_Vec3ToNitrousVec(const float* inVector, class phys_vec3& outVector) -> void
{
  return Zynamic::Forward<void (const float*, class phys_vec3&)>(L"Phys_Vec3ToNitrousVec")(inVector, outVector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Phys_Vec3ToNitrousVec(const float* inVector) -> const class phys_vec3
{
  return Zynamic::Forward<const class phys_vec3 (const float*)>(L"Phys_Vec3ToNitrousVec")(inVector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Phys_AxisToNitrousMat(const float* axis[0x3], class phys_mat44& outMat) -> void
{
  return Zynamic::Forward<void (const float*[0x3], class phys_mat44&)>(L"Phys_AxisToNitrousMat")(axis, outMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Phys_Mat4ToNitrousMat(const float* inMat[0x3], class phys_mat44& outMat) -> void
{
  return Zynamic::Forward<void (const float*[0x3], class phys_mat44&)>(L"Phys_Mat4ToNitrousMat")(inMat, outMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Phys_NitrousVecToVec3(const class phys_vec3& inVector, float* outVector) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, float*)>(L"Phys_NitrousVecToVec3")(inVector, outVector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Phys_NitrousMat44ToVec33(const class phys_mat44& inMat, float* outAxis[0x3]) -> void
{
  return Zynamic::Forward<void (const class phys_mat44&, float*[0x3])>(L"Phys_NitrousMat44ToVec33")(inMat, outAxis);
}

#endif // __UNIMPLEMENTED__
