//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxStaticModelDrawInst(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxStaticModelDrawInst")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxStaticModelDrawInstArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxStaticModelDrawInstArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxStaticModelInstArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxStaticModelInstArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxStaticModelDrawInst() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_GfxStaticModelDrawInst")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxStaticModelDrawInstArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_GfxStaticModelDrawInstArray")(count);
}

#endif // __UNIMPLEMENTED__
