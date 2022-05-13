//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_AmmoCounterRegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_AmmoCounterRegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBaseRectPos(int localClientNum, const struct rectDef_s* rect, float* base) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, float*)>(L"GetBaseRectPos")(localClientNum, rect, base);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetSelectedWeaponIndex(const struct cg_s* cgameGlob) -> int
{
  return Zynamic::Forward<int (const struct cg_s*)>(L"CG_GetSelectedWeaponIndex")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponAltIndex(const struct cg_s* cgameGlob, int weaponIndex) -> int
{
  return Zynamic::Forward<int (const struct cg_s*, int)>(L"GetWeaponAltIndex")(cgameGlob, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClipCounterWeapIdx(const struct cg_s* cgameGlob, unsigned int weapIndex) -> int
{
  return Zynamic::Forward<int (const struct cg_s*, unsigned int)>(L"ClipCounterWeapIdx")(cgameGlob, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AmmoColor(struct cg_s* cgameGlob, float* color, unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (struct cg_s*, float*, unsigned int)>(L"AmmoColor")(cgameGlob, color, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AmmoCounterFadeAlpha(int localClientNum, struct cg_s* cgameGlob) -> float
{
  return Zynamic::Forward<float (int, struct cg_s*)>(L"AmmoCounterFadeAlpha")(localClientNum, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmoMagazine(struct cg_s* cgameGlob, const float* base, unsigned int weapIdx, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, unsigned int, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmoMagazine")(cgameGlob, base, weapIdx, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmoShortMagazine(struct cg_s* cgameGlob, const float* base, unsigned int weapIdx, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, unsigned int, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmoShortMagazine")(cgameGlob, base, weapIdx, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmoShotgunShells(struct cg_s* cgameGlob, const float* base, unsigned int weapIdx, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, unsigned int, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmoShotgunShells")(cgameGlob, base, weapIdx, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmoRockets(struct cg_s* cgameGlob, const float* base, unsigned int weapIdx, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, unsigned int, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmoRockets")(cgameGlob, base, weapIdx, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmoBeltfed(struct cg_s* cgameGlob, const float* base, unsigned int weapIdx, const struct WeaponDef* weapDef, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, unsigned int, const struct WeaponDef*, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmoBeltfed")(cgameGlob, base, weapIdx, weapDef, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawClipAmmo(struct cg_s* cgameGlob, const float* base, int weapIdx, const struct WeaponDef* weapDef, const struct WeaponVariantDef* weapVarDef, float* color) -> void
{
  return Zynamic::Forward<void (struct cg_s*, const float*, int, const struct WeaponDef*, const struct WeaponVariantDef*, float*)>(L"DrawClipAmmo")(cgameGlob, base, weapIdx, weapDef, weapVarDef, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawAmmoCounterSingle(int localClientNum, struct rectDef_s* rect, float* color, bool last) -> void
{
  return Zynamic::Forward<void (int, struct rectDef_s*, float*, bool)>(L"CG_DrawAmmoCounterSingle")(localClientNum, rect, color, last);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponAmmoStock(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int)>(L"CG_DrawPlayerWeaponAmmoStock")(localClientNum, rect, font, scale, color, material, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawFuelTankPercentage(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, float text_x, float text_y) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, float, float)>(L"CG_DrawFuelTankPercentage")(localClientNum, rect, font, scale, color, material, textStyle, text_x, text_y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponAmmoClip(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, float text_x, float text_y, int textAlignMode) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int, float, float, int)>(L"CG_DrawPlayerWeaponAmmoClip")(localClientNum, rect, font, scale, color, material, textStyle, text_x, text_y, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponAmmoClipDualWield(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, float*, struct Material*, int)>(L"CG_DrawPlayerWeaponAmmoClipDualWield")(localClientNum, rect, font, scale, color, material, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DpadIconDims(const struct rectDef_s* rect, unsigned int slotIdx, const struct WeaponVariantDef* weapVariantDef, float* x, float* y, float* w, float* h) -> void
{
  return Zynamic::Forward<void (const struct rectDef_s*, unsigned int, const struct WeaponVariantDef*, float*, float*, float*, float*)>(L"DpadIconDims")(rect, slotIdx, weapVariantDef, x, y, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DpadTextPos(int localClientNum, const struct rectDef_s* rect, unsigned int slotIdx, const struct WeaponVariantDef* weapVariantDef, float* x, float* y) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, unsigned int, const struct WeaponVariantDef*, float*, float*)>(L"DpadTextPos")(localClientNum, rect, slotIdx, weapVariantDef, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActionSlotIsActive(int localClientNum, unsigned int slotIdx) -> bool
{
  return Zynamic::Forward<bool (int, unsigned int)>(L"ActionSlotIsActive")(localClientNum, slotIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DpadFadeAlpha(int localClientNum, struct cg_s* cgameGlob) -> float
{
  return Zynamic::Forward<float (int, struct cg_s*)>(L"DpadFadeAlpha")(localClientNum, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHudAlphaDPad(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetHudAlphaDPad")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHudAlphaAmmoCounter(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"CG_GetHudAlphaAmmoCounter")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ActionSlotIsUsable(const int localClientNum, unsigned int slotIdx) -> bool
{
  return Zynamic::Forward<bool (const int, unsigned int)>(L"CG_ActionSlotIsUsable")(localClientNum, slotIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerActionSlotDpad(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Material*)>(L"CG_DrawPlayerActionSlotDpad")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerActionSlotBack(int localClientNum, const struct rectDef_s* rect, unsigned int slotIdx, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, unsigned int, const float*, struct Material*)>(L"CG_DrawPlayerActionSlotBack")(localClientNum, rect, slotIdx, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerActionSlotArrow(int localClientNum, const struct rectDef_s* rect, unsigned int slotIdx, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, unsigned int, float*, struct Material*)>(L"CG_DrawPlayerActionSlotArrow")(localClientNum, rect, slotIdx, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerActionSlot(int localClientNum, const struct rectDef_s* rect, unsigned int slotIdx, float* color, struct Font_s* textFont, float textScale, int textStyle) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, unsigned int, float*, struct Font_s*, float, int)>(L"CG_DrawPlayerActionSlot")(localClientNum, rect, slotIdx, color, textFont, textScale, textStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerActionSlotBind(int localClientNum, const struct rectDef_s* rect, unsigned int slotIdx, float* color, struct Font_s* textFont, float textScale, int textStyle, int textAlignMode, struct itemDef_s* item, const char* text) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, unsigned int, float*, struct Font_s*, float, int, int, struct itemDef_s*, const char*)>(L"CG_DrawPlayerActionSlotBind")(localClientNum, rect, slotIdx, color, textFont, textScale, textStyle, textAlignMode, item, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponBackground(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct Material*)>(L"CG_DrawPlayerWeaponBackground")(localClientNum, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponAmmoClipGraphic(int localClientNum, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"CG_DrawPlayerWeaponAmmoClipGraphic")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponAmmoClipGraphicDualWield(int localClientNum, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"CG_DrawPlayerWeaponAmmoClipGraphicDualWield")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawStretchPicGun(const struct ScreenPlacement* scrPlace, const struct rectDef_s* rect, const float* color, struct Material* material, enum weaponIconRatioType_t ratio) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, const struct rectDef_s*, const float*, struct Material*, enum weaponIconRatioType_t)>(L"DrawStretchPicGun")(scrPlace, rect, color, material, ratio);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponIcon(int localClientNum, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"CG_DrawPlayerWeaponIcon")(localClientNum, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawPlayerWeaponLowAmmoWarning(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float textScale, int textStyle, float text_x, float text_y, int textAlignMode, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, struct Font_s*, float, int, float, float, int, struct Material*)>(L"CG_DrawPlayerWeaponLowAmmoWarning")(localClientNum, rect, font, textScale, textStyle, text_x, text_y, textAlignMode, material);
}

#endif // __UNIMPLEMENTED__
