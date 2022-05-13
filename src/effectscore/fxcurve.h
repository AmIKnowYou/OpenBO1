//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FxCurve_Interpolate1d(const float* key, float intermediateTime) -> float
{
  return Zynamic::Forward<float (const float*, float)>(L"FxCurve_Interpolate1d")(key, intermediateTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FxCurve_Interpolate3d(const float* key, float intermediateTime, float* result) -> void
{
  return Zynamic::Forward<void (const float*, float, float*)>(L"FxCurve_Interpolate3d")(key, intermediateTime, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FxCurveIterator_MoveToTime(struct FxCurveIterator* source, float time) -> void
{
  return Zynamic::Forward<void (struct FxCurveIterator*, float)>(L"FxCurveIterator_MoveToTime")(source, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FxCurveIterator_SampleTime(struct FxCurveIterator* source, float time) -> float
{
  return Zynamic::Forward<float (struct FxCurveIterator*, float)>(L"FxCurveIterator_SampleTime")(source, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FxCurveIterator_SampleTimeVec3(struct FxCurveIterator* source, float* replyVector, float time) -> void
{
  return Zynamic::Forward<void (struct FxCurveIterator*, float*, float)>(L"FxCurveIterator_SampleTimeVec3")(source, replyVector, time);
}

#endif // __UNIMPLEMENTED__
