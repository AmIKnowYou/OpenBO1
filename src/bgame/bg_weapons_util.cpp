//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListSort(const char* originalName, struct WeaponComponentList* componentList, char* outputName) -> void
{
  return Zynamic::Forward<void (const char*, struct WeaponComponentList*, char*)>(L"BG_WeaponComponentListSort")(originalName, componentList, outputName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponNameToComponentList(const char* name, struct WeaponComponentList* componentList) -> void
{
  return Zynamic::Forward<void (const char*, struct WeaponComponentList*)>(L"BG_WeaponNameToComponentList")(name, componentList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListIdentify(struct WeaponComponentList* componentList) -> void
{
  return Zynamic::Forward<void (struct WeaponComponentList*)>(L"BG_WeaponComponentListIdentify")(componentList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListCountAttachments(const struct WeaponComponentList* componentList) -> int
{
  return Zynamic::Forward<int (const struct WeaponComponentList*)>(L"BG_WeaponComponentListCountAttachments")(componentList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListRemove(const struct WeaponComponentList* componentListIn, struct WeaponComponentList* componentListOut, bool lookingForAttachements) -> void
{
  return Zynamic::Forward<void (const struct WeaponComponentList*, struct WeaponComponentList*, bool)>(L"BG_WeaponComponentListRemove")(componentListIn, componentListOut, lookingForAttachements);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListRemoveAllAttachments(const struct WeaponComponentList* componentListIn, struct WeaponComponentList* componentListOut) -> void
{
  return Zynamic::Forward<void (const struct WeaponComponentList*, struct WeaponComponentList*)>(L"BG_WeaponComponentListRemoveAllAttachments")(componentListIn, componentListOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListNthAttachment(const struct WeaponComponentList* componentListIn, int nth, struct WeaponComponentList* componentListOut) -> void
{
  return Zynamic::Forward<void (const struct WeaponComponentList*, int, struct WeaponComponentList*)>(L"BG_WeaponComponentListNthAttachment")(componentListIn, nth, componentListOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponComponentListToName(const struct WeaponComponentList* componentList, char* name, int size) -> void
{
  return Zynamic::Forward<void (const struct WeaponComponentList*, char*, int)>(L"BG_WeaponComponentListToName")(componentList, name, size);
}

#endif // __UNIMPLEMENTED__
