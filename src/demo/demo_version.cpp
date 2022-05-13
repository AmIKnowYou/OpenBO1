//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Demo_GetVersion() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetVersion")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetNetFieldListForType(enum netFieldTypes_t fieldType) -> const struct NetFieldList*
{
  return Zynamic::Forward<const struct NetFieldList* (enum netFieldTypes_t)>(L"Demo_GetNetFieldListForType")(fieldType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetStateFieldListForEntityType(const int eType) -> const struct NetFieldList*
{
  return Zynamic::Forward<const struct NetFieldList* (const int)>(L"Demo_GetStateFieldListForEntityType")(eType);
}

#endif // __UNIMPLEMENTED__
