//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_HW_InsertFence(struct IDirect3DQuery9** fence) -> void
{
  return Zynamic::Forward<void (struct IDirect3DQuery9**)>(L"R_HW_InsertFence")(fence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_IsFencePending(struct IDirect3DQuery9* const* fence) -> int
{
  return Zynamic::Forward<int (struct IDirect3DQuery9* const*)>(L"R_HW_IsFencePending")(fence);
}

#endif // __UNIMPLEMENTED__
