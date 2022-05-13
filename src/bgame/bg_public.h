//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto IsBulletImpactMOD(enum meansOfDeath_t mod) -> bool
{
  return Zynamic::Forward<bool (enum meansOfDeath_t)>(L"IsBulletImpactMOD")(mod);
}

#endif // __UNIMPLEMENTED__
