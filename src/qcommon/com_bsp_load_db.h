//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_ComPrimaryLight(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_ComPrimaryLight")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComPrimaryLightArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_ComPrimaryLightArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComWaterCellArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_ComWaterCellArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComBurnableSampleArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_ComBurnableSampleArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComBurnableCell(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_ComBurnableCell")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComBurnableCellArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_ComBurnableCellArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComWorld(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_ComWorld")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_ComWorldPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_ComWorldPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_ComWorldPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_ComWorldPtr")();
}

#endif // __UNIMPLEMENTED__
