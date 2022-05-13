//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_XAssetHeader(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_XAssetHeader")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_XAsset(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_XAsset")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_XAssetHeader() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_XAssetHeader")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_XAsset() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_XAsset")();
}

#endif // __UNIMPLEMENTED__
