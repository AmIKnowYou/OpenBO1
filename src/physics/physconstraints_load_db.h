//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysConstraint(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_PhysConstraint")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysConstraintArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_PhysConstraintArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysConstraints(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_PhysConstraints")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysConstraintsPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_PhysConstraintsPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_PhysConstraint() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_PhysConstraint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_PhysConstraintArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_PhysConstraintArray")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_PhysConstraints() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_PhysConstraints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_PhysConstraintsPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_PhysConstraintsPtr")();
}

#endif // __UNIMPLEMENTED__
