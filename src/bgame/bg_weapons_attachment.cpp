//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentNames() -> const char**
{
  return Zynamic::Forward<const char** ()>(L"BG_GetAttachmentNames")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentName(enum eAttachment index) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachment)>(L"BG_GetAttachmentName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentIndex(const char* name) -> enum eAttachment
{
  return Zynamic::Forward<enum eAttachment (const char*)>(L"BG_GetAttachmentIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentPointName(enum eAttachmentPoint index) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachmentPoint)>(L"BG_GetAttachmentPointName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentPointIndex(const char* name) -> enum eAttachmentPoint
{
  return Zynamic::Forward<enum eAttachmentPoint (const char*)>(L"BG_GetAttachmentPointIndex")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionGroup(const char* name) -> enum eWeaponOptionGroup
{
  return Zynamic::Forward<enum eWeaponOptionGroup (const char*)>(L"BG_GetWeaponOptionGroup")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentArrayIndex(enum eAttachment attachment) -> int
{
  return Zynamic::Forward<int (enum eAttachment)>(L"BG_GetAttachmentArrayIndex")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentDisplayName(enum eAttachment attachment) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachment)>(L"BG_GetAttachmentDisplayName")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentReference(enum eAttachment attachment) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachment)>(L"BG_GetAttachmentReference")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentImage(enum eAttachment attachment) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachment)>(L"BG_GetAttachmentImage")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentDesc(enum eAttachment attachment) -> const char*
{
  return Zynamic::Forward<const char* (enum eAttachment)>(L"BG_GetAttachmentDesc")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentCost(enum eAttachment attachment) -> int
{
  return Zynamic::Forward<int (enum eAttachment)>(L"BG_GetAttachmentCost")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentPointCost(enum eAttachmentPoint attachmentPoint) -> int
{
  return Zynamic::Forward<int (enum eAttachmentPoint)>(L"BG_GetAttachmentPointCost")(attachmentPoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentPointIndexFromAttachment(enum eAttachment attachment) -> enum eAttachmentPoint
{
  return Zynamic::Forward<enum eAttachmentPoint (enum eAttachment)>(L"BG_GetAttachmentPointIndexFromAttachment")(attachment);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AreAttachmentsCompatible(enum eAttachment attachment1, enum eAttachment attachment2) -> bool
{
  return Zynamic::Forward<bool (enum eAttachment, enum eAttachment)>(L"BG_AreAttachmentsCompatible")(attachment1, attachment2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentTableEntry(int index) -> const struct AttachmentTableEntry*
{
  return Zynamic::Forward<const struct AttachmentTableEntry* (int)>(L"BG_GetAttachmentTableEntry")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetAttachmentPointTableEntry(int index) -> const struct AttachmentPointTableEntry*
{
  return Zynamic::Forward<const struct AttachmentPointTableEntry* (int)>(L"BG_GetAttachmentPointTableEntry")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponAttachmentCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_GetWeaponAttachmentCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionCountForGroup(enum eWeaponOptionGroup optionGroup) -> int
{
  return Zynamic::Forward<int (enum eWeaponOptionGroup)>(L"BG_GetWeaponOptionCountForGroup")(optionGroup);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionCount() -> int
{
  return Zynamic::Forward<int ()>(L"BG_GetWeaponOptionCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionArrayIndex(int weaponOption) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetWeaponOptionArrayIndex")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionDisplayName(int weaponOption) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_GetWeaponOptionDisplayName")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionReference(int weaponOption) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_GetWeaponOptionReference")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionImage(int weaponOption) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_GetWeaponOptionImage")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionCost(int weaponOption) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetWeaponOptionCost")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionGroup(int weaponOption) -> enum eWeaponOptionGroup
{
  return Zynamic::Forward<enum eWeaponOptionGroup (int)>(L"BG_GetWeaponOptionGroup")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionUnlockLvl(int weaponOption) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetWeaponOptionUnlockLvl")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionUnlockPLevel(int weaponOption) -> int
{
  return Zynamic::Forward<int (int)>(L"BG_GetWeaponOptionUnlockPLevel")(weaponOption);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionNumFromIndexAndGroup(int index, enum eWeaponOptionGroup weaponOptionGroup) -> int
{
  return Zynamic::Forward<int (int, enum eWeaponOptionGroup)>(L"BG_GetWeaponOptionNumFromIndexAndGroup")(index, weaponOptionGroup);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponOptionFromName(const char* optionName) -> int
{
  return Zynamic::Forward<int (const char*)>(L"BG_GetWeaponOptionFromName")(optionName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponAttachmentTableRow(const struct StringTable* attachmentTable, int row, struct WeaponAttachmentTableEntry* entry) -> void
{
  return Zynamic::Forward<void (const struct StringTable*, int, struct WeaponAttachmentTableEntry*)>(L"BG_LoadWeaponAttachmentTableRow")(attachmentTable, row, entry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadAttachmentRow(const struct StringTable* attachmentTable, int row, struct AttachmentTableEntry* entry, int* count) -> void
{
  return Zynamic::Forward<void (const struct StringTable*, int, struct AttachmentTableEntry*, int*)>(L"BG_LoadAttachmentRow")(attachmentTable, row, entry, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponOptionRow(const struct StringTable* attachmentTable, int row, struct WeaponOptionTableEntry* entry, int* count) -> void
{
  return Zynamic::Forward<void (const struct StringTable*, int, struct WeaponOptionTableEntry*, int*)>(L"BG_LoadWeaponOptionRow")(attachmentTable, row, entry, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadAttachmentPointRow(const struct StringTable* attachmentTable, int row, struct AttachmentPointTableEntry* entry, int* count) -> void
{
  return Zynamic::Forward<void (const struct StringTable*, int, struct AttachmentPointTableEntry*, int*)>(L"BG_LoadAttachmentPointRow")(attachmentTable, row, entry, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponOptions(const struct StringTable* attachmentTable) -> void
{
  return Zynamic::Forward<void (const struct StringTable*)>(L"BG_LoadWeaponOptions")(attachmentTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadWeaponAttachmentTable() -> void
{
  return Zynamic::Forward<void ()>(L"BG_LoadWeaponAttachmentTable")();
}

#endif // __UNIMPLEMENTED__
