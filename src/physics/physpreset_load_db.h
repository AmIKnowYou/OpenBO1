//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysPreset(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_PhysPreset")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_PhysPresetPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_PhysPresetPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_PhysPresetPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_PhysPresetPtr")();
}

#endif // __UNIMPLEMENTED__
