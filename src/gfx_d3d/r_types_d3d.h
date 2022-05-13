//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_ReleaseAndSetNULL<IDirect3DTexture9>(struct IDirect3DTexture9* var, const char* fn, const char* filename, int line) -> void
{
  return Zynamic::Forward<void (struct IDirect3DTexture9*, const char*, const char*, int)>(L"R_ReleaseAndSetNULL<IDirect3DTexture9>")(var, fn, filename, line);
}

#endif // __UNIMPLEMENTED__
