//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetColorCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_EmblemsGetColorCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetUnlockedLayerCount(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetUnlockedLayerCount")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetLayerCost(int layer) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetLayerCost")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetLayerUnlockLevel(int layer) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetLayerUnlockLevel")(layer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetPurchasedLayerCount(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetPurchasedLayerCount")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseLayer(int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"BG_EmblemsPurchaseLayer")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ResultSort(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"ResultSort")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsFlushResults() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsFlushResults")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetResults(int controllerIndex, unsigned int include, unsigned int exclude) -> struct ResultCache*
{
  return Zynamic::Forward<struct ResultCache* (int, unsigned int, unsigned int)>(L"BG_EmblemsGetResults")(controllerIndex, include, exclude);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconCount(int controllerIndex, unsigned int include, unsigned int exclude) -> int
{
  return Zynamic::Forward<int (int, unsigned int, unsigned int)>(L"BG_EmblemsGetIconCount")(controllerIndex, include, exclude);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_EmblemsGetIconCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconID(int controllerIndex, int index, unsigned int include, unsigned int exclude) -> short
{
  return Zynamic::Forward<short (int, int, unsigned int, unsigned int)>(L"BG_EmblemsGetIconID")(controllerIndex, index, include, exclude);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetPurchasedIconCount(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetPurchasedIconCount")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconDesc(int controllerIndex, short id) -> const char*
{
  return Zynamic::Forward<const char* (int, short)>(L"BG_EmblemsGetIconDesc")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconUnlockDesc(int controllerIndex, short id) -> const char*
{
  return Zynamic::Forward<const char* (int, short)>(L"BG_EmblemsGetIconUnlockDesc")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconCost(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetIconCost")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconUnlockLevel(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetIconUnlockLevel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconUnlockPLevel(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetIconUnlockPLevel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconUnclassifyAt(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetIconUnclassifyAt")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconDefaultColor(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetIconDefaultColor")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconImage(short id) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (short)>(L"BG_EmblemsGetIconImage")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetIconOutlineSize(short id) -> float
{
  return Zynamic::Forward<float (short)>(L"BG_EmblemsGetIconOutlineSize")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsIconLocked(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsIconLocked")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsIconClassified(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsIconClassified")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsIconPurchased(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsIconPurchased")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseIcon(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsPurchaseIcon")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseLayer_f() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsPurchaseLayer_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseIcon_f() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsPurchaseIcon_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetCategoryCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_EmblemsGetCategoryCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetCategoryDesc(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_EmblemsGetCategoryDesc")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_EmblemsGetBackgroundCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetTotalBackgroundCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_EmblemsGetTotalBackgroundCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetPurchasedBackgroundCount(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_EmblemsGetPurchasedBackgroundCount")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundID(int index) -> short
{
  return Zynamic::Forward<short (int)>(L"BG_EmblemsGetBackgroundID")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundIndex(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetBackgroundIndex")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundDesc(int controllerIndex, short id) -> const char*
{
  return Zynamic::Forward<const char* (int, short)>(L"BG_EmblemsGetBackgroundDesc")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundUnlockDesc(int controllerIndex, short id) -> const char*
{
  return Zynamic::Forward<const char* (int, short)>(L"BG_EmblemsGetBackgroundUnlockDesc")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundCost(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetBackgroundCost")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundUnlockLevel(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetBackgroundUnlockLevel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundUnlockPLevel(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetBackgroundUnlockPLevel")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundUnclassifyAt(short id) -> int
{
  return Zynamic::Forward<int (short)>(L"BG_EmblemsGetBackgroundUnclassifyAt")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGetBackgroundMaterial(short id) -> struct Material*
{
  return Zynamic::Forward<struct Material* (short)>(L"BG_EmblemsGetBackgroundMaterial")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsBackgroundLocked(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsBackgroundLocked")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsBackgroundClassified(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsBackgroundClassified")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsIsBackgroundPurchased(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsIsBackgroundPurchased")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseBackground(int controllerIndex, short id) -> bool
{
  return Zynamic::Forward<bool (int, short)>(L"BG_EmblemsPurchaseBackground")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseBackgroundByID_f() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsPurchaseBackgroundByID_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsPurchaseBackgroundByIndex_f() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsPurchaseBackgroundByIndex_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsWriteMsg(struct msg_t* msg, short background, struct CompositeEmblemLayer* layers, int layerCount) -> void
{
  return Zynamic::Forward<void (struct msg_t*, short, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsWriteMsg")(msg, background, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsReadMsg(struct msg_t* msg, short* background, struct CompositeEmblemLayer* layers, int layerCount) -> void
{
  return Zynamic::Forward<void (struct msg_t*, short*, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsReadMsg")(msg, background, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsWriteString(short background, struct CompositeEmblemLayer* layers, int layerCount) -> const char*
{
  return Zynamic::Forward<const char* (short, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsWriteString")(background, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsReadString(const char* str, short* background, struct CompositeEmblemLayer* layers, int layerCount) -> bool
{
  return Zynamic::Forward<bool (const char*, short*, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsReadString")(str, background, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsInit() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsClearDefaults() -> void
{
  return Zynamic::Forward<void ()>(L"BG_EmblemsClearDefaults")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsSetDefaultForLevel(int minlevel, int maxlevel, struct CompositeEmblemLayer* s_emblem, int layerCount) -> void
{
  return Zynamic::Forward<void (int, int, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsSetDefaultForLevel")(minlevel, maxlevel, s_emblem, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EmblemsGenerateDefault(int controllerIndex, int level, struct CompositeEmblemLayer* layers, int layerCount) -> void
{
  return Zynamic::Forward<void (int, int, struct CompositeEmblemLayer*, int)>(L"BG_EmblemsGenerateDefault")(controllerIndex, level, layers, layerCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_GetPurchasedEmblemLayers(unsigned char* buffer) -> int
{
  return Zynamic::Forward<int (unsigned char*)>(L"SV_CACValidate_GetPurchasedEmblemLayers")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_IsBackgroundLockedForRank(unsigned char* buffer, int rank, short id) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, int, short)>(L"SV_CACValidate_IsBackgroundLockedForRank")(buffer, rank, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_IsIconLockedForRank(unsigned char* buffer, int rank, short id) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, int, short)>(L"SV_CACValidate_IsIconLockedForRank")(buffer, rank, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_IsBackgroundPurchased(unsigned char* buffer, int rank, short id) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, int, short)>(L"SV_CACValidate_IsBackgroundPurchased")(buffer, rank, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CACValidate_IsIconPurchased(unsigned char* buffer, int rank, short id) -> bool
{
  return Zynamic::Forward<bool (unsigned char*, int, short)>(L"SV_CACValidate_IsIconPurchased")(buffer, rank, id);
}

#endif // __UNIMPLEMENTED__
