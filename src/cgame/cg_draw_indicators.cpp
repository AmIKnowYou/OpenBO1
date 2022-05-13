//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_GrenadeIndicator_GetPlayerPosition(const struct cg_s* cgameGlob, float* playerOrigin) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, float*)>(L"CG_GrenadeIndicator_GetPlayerPosition")(cgameGlob, playerOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawFlashDamage(const struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (const struct cg_s*)>(L"CG_DrawFlashDamage")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawDamageDirectionIndicators(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawDamageDirectionIndicators")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarningPointer(int localClientNum, float centerX, float centerY, const float* grenadeOffset, const float* color, const float radiusOffset) -> void
{
  return Zynamic::Forward<void (int, float, float, const float*, const float*, const float)>(L"CG_DrawWarningPointer")(localClientNum, centerX, centerY, grenadeOffset, color, radiusOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWarningIcon(int localClientNum, float centerX, float centerY, const float* grenadeOffset, const float* color, struct Material* material, const float radiusOffset) -> void
{
  return Zynamic::Forward<void (int, float, float, const float*, const float*, struct Material*, const float)>(L"CG_DrawWarningIcon")(localClientNum, centerX, centerY, grenadeOffset, color, material, radiusOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearHudGrenades() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClearHudGrenades")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddHudGrenade_PositionCheck(const struct cg_s* cgameGlob, const struct centity_s* grenadeEnt, const struct WeaponDef* weapDef) -> float
{
  return Zynamic::Forward<float (const struct cg_s*, const struct centity_s*, const struct WeaponDef*)>(L"CG_AddHudGrenade_PositionCheck")(cgameGlob, grenadeEnt, weapDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddHudGrenade(const struct cg_s* cgameGlob, const struct centity_s* grenadeEnt) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, const struct centity_s*)>(L"CG_AddHudGrenade")(cgameGlob, grenadeEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawGrenadeIndicators(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_DrawGrenadeIndicators")(localClientNum);
}

#endif // __UNIMPLEMENTED__
