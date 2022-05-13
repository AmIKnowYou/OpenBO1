//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_OffhandRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_OffhandRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBestOffhand(const struct playerState_s* predictedPlayerState, int offhandSlot) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"GetBestOffhand")(predictedPlayerState, offhandSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsOffHandDisplayVisible(const struct cg_s* cgameGlob) -> bool
{
  return Zynamic::Forward<bool (const struct cg_s*)>(L"IsOffHandDisplayVisible")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcOffHandAmmo(const struct playerState_s* predictedPlayerState, int weaponType) -> int
{
  return Zynamic::Forward<int (const struct playerState_s*, int)>(L"CalcOffHandAmmo")(predictedPlayerState, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawOffHandIcon(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material, enum OffhandSlot weaponType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Material*, enum OffhandSlot)>(L"CG_DrawOffHandIcon")(localClientNum, rect, color, material, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OffHandFlash(const struct cg_s* cgameGlob, const float* base_color, float* out_color) -> void
{
  return Zynamic::Forward<void (const struct cg_s*, const float*, float*)>(L"OffHandFlash")(cgameGlob, base_color, out_color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawOffHandHighlight(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material, enum OffhandSlot weaponType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Material*, enum OffhandSlot)>(L"CG_DrawOffHandHighlight")(localClientNum, rect, color, material, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawOffHandAmmo(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle, enum OffhandSlot weaponType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int, enum OffhandSlot)>(L"CG_DrawOffHandAmmo")(localClientNum, rect, font, scale, color, textStyle, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawOffHandName(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, int textStyle, enum OffhandSlot weaponType) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, const float*, int, enum OffhandSlot)>(L"CG_DrawOffHandName")(localClientNum, rect, font, scale, color, textStyle, weaponType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SwitchOffHandCmd(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_SwitchOffHandCmd")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrepOffHand(int localClientNum, const struct entityState_s* ent, unsigned int weaponIndex, bool isPlayerView) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, unsigned int, bool)>(L"CG_PrepOffHand")(localClientNum, ent, weaponIndex, isPlayerView);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UseOffHand(int localClientNum, const struct centity_s* cent, unsigned int weaponIndex, bool isPlayerView) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, unsigned int, bool)>(L"CG_UseOffHand")(localClientNum, cent, weaponIndex, isPlayerView);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetEquippedOffHand(int localClientNum, int offHandIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_SetEquippedOffHand")(localClientNum, offHandIndex);
}

#endif // __UNIMPLEMENTED__
