//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto RB_HW_AllocOcclusionQuery() -> struct IDirect3DQuery9*
{
  return Zynamic::Forward<struct IDirect3DQuery9* ()>(L"RB_HW_AllocOcclusionQuery")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RB_HW_BeginOcclusionQuery(struct IDirect3DQuery9* query, void* device) -> void
{
  return Zynamic::Forward<void (struct IDirect3DQuery9*, void*)>(L"RB_HW_BeginOcclusionQuery")(query, device);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RB_HW_ReadOcclusionQuery(struct IDirect3DQuery9* query) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct IDirect3DQuery9*)>(L"RB_HW_ReadOcclusionQuery")(query);
}

#endif // __UNIMPLEMENTED__
