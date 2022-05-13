//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PhysConstraints_Strcpy(unsigned char* member, const char* keyValue) -> void
{
  return Zynamic::Forward<void (unsigned char*, const char*)>(L"PhysConstraints_Strcpy")(member, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CON_ParseSpecificField(unsigned char* pStruct, const char* pValue, const int fieldType, const int fieldOffset) -> int
{
  return Zynamic::Forward<int (unsigned char*, const char*, const int, const int)>(L"CON_ParseSpecificField")(pStruct, pValue, fieldType, fieldOffset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysConstraintsPostLoadFixup(struct PhysConstraints* physConstraints) -> void
{
  return Zynamic::Forward<void (struct PhysConstraints*)>(L"PhysConstraintsPostLoadFixup")(physConstraints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysConstraintsLoadFile(const char* name, function* Alloc) -> struct PhysConstraints*
{
  return Zynamic::Forward<struct PhysConstraints* (const char*, function *)>(L"PhysConstraintsLoadFile")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysConstraintsPrecache(const char* name, function* Alloc) -> struct PhysConstraints*
{
  return Zynamic::Forward<struct PhysConstraints* (const char*, function *)>(L"PhysConstraintsPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPhysConstraints(const char* name) -> struct PhysConstraints*
{
  return Zynamic::Forward<struct PhysConstraints* (const char*)>(L"GetPhysConstraints")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysConstraintsUpdateField(const char* name, const char* keyvalue) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"PhysConstraintsUpdateField")(name, keyvalue);
}

#endif // __UNIMPLEMENTED__
