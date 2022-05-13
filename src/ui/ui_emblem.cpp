//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UI_EmblemCyclePalette(int index, int direction) -> int
{
  return Zynamic::Forward<int (int, int)>(L"UI_EmblemCyclePalette")(index, direction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemClampLayer(struct CompositeEmblemLayer* layer) -> void
{
  return Zynamic::Forward<void (struct CompositeEmblemLayer*)>(L"UI_EmblemClampLayer")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCustomEmblemInternal(int contextIndex, const struct rectDef_s* rect, const float* color, struct CompositeEmblemLayer* layers, int layerCount, bool withSpinner) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*, struct CompositeEmblemLayer*, int, bool)>(L"UI_DrawCustomEmblemInternal")(contextIndex, rect, color, layers, layerCount, withSpinner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawCustomEmblem(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawCustomEmblem")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawEmblemSelector(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*)>(L"UI_DrawEmblemSelector")(localClientNum, contextIndex, item, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlayerEmblemServer(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*)>(L"UI_DrawPlayerEmblemServer")(localClientNum, contextIndex, item, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlayerEmblem(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*)>(L"UI_DrawPlayerEmblem")(localClientNum, contextIndex, item, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawPlayerEmblemByXuid(const int localClientNum, int contextIndex, struct itemDef_s* item, const struct rectDef_s* rect, const float* color, unsigned __int64 xuid) -> void
{
  return Zynamic::Forward<void (const int, int, struct itemDef_s*, const struct rectDef_s*, const float*, unsigned __int64)>(L"UI_DrawPlayerEmblemByXuid")(localClientNum, contextIndex, item, rect, color, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawEmblemIconThumbnail(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawEmblemIconThumbnail")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawEmblemColors(int contextIndex, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct rectDef_s*, const float*)>(L"UI_DrawEmblemColors")(contextIndex, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemUpdate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_EmblemUpdate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetSelectedLayer() -> int
{
  return Zynamic::Forward<int ()>(L"UI_EmblemGetSelectedLayer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemCanOutlineLayer(int layer) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_EmblemCanOutlineLayer")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemCanDuplicateLayer(int controllerIndex, int layer) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"UI_EmblemCanDuplicateLayer")(controllerIndex, layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemDuplicate_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemDuplicate_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemIsModified(int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"UI_EmblemIsModified")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetLayerName(int layer) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"UI_EmblemGetLayerName")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetSelectedBackgroundID() -> short
{
  return Zynamic::Forward<short ()>(L"UI_EmblemGetSelectedBackgroundID")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetStateDisplay(int controllerIndex, int idx) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"UI_EmblemGetStateDisplay")(controllerIndex, idx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetCategoryDisplay(int controllerIndex, int idx) -> const char*
{
  return Zynamic::Forward<const char* (int, int)>(L"UI_EmblemGetCategoryDisplay")(controllerIndex, idx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetFilterCount(int controllerIndex, int state, int category) -> const int
{
  return Zynamic::Forward<const int (int, int, int)>(L"UI_EmblemGetFilterCount")(controllerIndex, state, category);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetFilterIconID(int controllerIndex, int state, int category, int index) -> const short
{
  return Zynamic::Forward<const short (int, int, int, int)>(L"UI_EmblemGetFilterIconID")(controllerIndex, state, category, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemSelect(int layer) -> void
{
  return Zynamic::Forward<void (int)>(L"UI_EmblemSelect")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemSelect_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemSelect_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemReset_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemReset_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemClear_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemClear_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemClearAll_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemClearAll_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemRotate_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemRotate_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMove_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMove_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemScale_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemScale_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemIcon_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemIcon_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemPalette_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemPalette_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemPaletteCycle_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemPaletteCycle_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemPalettePick_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemPalettePick_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemOutline_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemOutline_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemToggleOutline_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemToggleOutline_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemFlip_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemFlip_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemToggleFlip_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemToggleFlip_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveLayer(int controllerIndex, int targetz) -> void
{
  return Zynamic::Forward<void (int, int)>(L"UI_EmblemMoveLayer")(controllerIndex, targetz);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveLayer_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveLayer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveLayerRelative_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveLayerRelative_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemCopy_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemCopy_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemBeginEdit_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemBeginEdit_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemEndEdit_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemEndEdit_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemSetProfile_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemSetProfile_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemGetProfile_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemGetProfile_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemSelectBackground_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemSelectBackground_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemDump_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemDump_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemClearDefaults_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemClearDefaults_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemSetAsDefault_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemSetAsDefault_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveUpRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveUpRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveDownRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveDownRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveLeftRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveLeftRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemMoveRightRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemMoveRightRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemScaleUpRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemScaleUpRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemScaleDownRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemScaleDownRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemRotateLeftRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemRotateLeftRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemRotateRightRepeatEnabled_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemRotateRightRepeatEnabled_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemRepeatBttnsLooseFocus_f() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemRepeatBttnsLooseFocus_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EmblemRegisterCmds() -> void
{
  return Zynamic::Forward<void ()>(L"UI_EmblemRegisterCmds")();
}

#endif // __UNIMPLEMENTED__
