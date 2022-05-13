//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxTextureLoad(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxTextureLoad")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxRawTextureArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxRawTextureArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxImageLoadDef(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxImageLoadDef")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxImage(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxImage")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxImagePtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_GfxImagePtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_GfxImagePtrArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_GfxImagePtrArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxImagePtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_GfxImagePtr")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_GfxImagePtrArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_GfxImagePtrArray")(count);
}

#endif // __UNIMPLEMENTED__
