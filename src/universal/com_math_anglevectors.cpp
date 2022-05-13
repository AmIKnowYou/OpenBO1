//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto AngleVectors(const float* angles, float* forward, float* right, float* up) -> void
{
  return Zynamic::Forward<void (const float*, float*, float*, float*)>(L"AngleVectors")(angles, forward, right, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnglesToAxis(const float* angles, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const float*, float*[0x3])>(L"AnglesToAxis")(angles, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnglesToQuat(const float* angles, float* quat) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"AnglesToQuat")(angles, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatToAxis(const float* quat, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const float*, float*[0x3])>(L"QuatToAxis")(quat, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToSignedAngles(const float* axis[0x3], float* angles) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"AxisToSignedAngles")(axis, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedangles(const float* vec, float* angles) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"vectosignedangles")(vec, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedpitch(const float* vec) -> float
{
  return Zynamic::Forward<float (const float*)>(L"vectosignedpitch")(vec);
}

#endif // __UNIMPLEMENTED__
