//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto CM_BuildAxialPlanes(const struct cbrush_t* brush, float* axialPlanes[0x4]) -> void
{
  return Zynamic::Forward<void (const struct cbrush_t*, float*[0x4])>(L"CM_BuildAxialPlanes")(brush, axialPlanes);
}

#endif // __UNIMPLEMENTED__
