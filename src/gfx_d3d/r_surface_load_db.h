//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxSurface(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxSurface")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxSurfaceArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxSurfaceArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxLightmapArray(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxLightmapArray")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxLightmapArrayArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxLightmapArrayArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxSurface() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_GfxSurface")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxSurfaceArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_GfxSurfaceArray")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxLightmapArray() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_GfxLightmapArray")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxLightmapArrayArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_GfxLightmapArrayArray")(count);
}

#endif // __UNIMPLEMENTED__
