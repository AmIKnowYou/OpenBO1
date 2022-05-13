//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto DynEnt_GetEntityDef(unsigned short dynEntId, enum DynEntityDrawType drawType) -> const struct DynEntityDef*
{
  return Zynamic::Forward<const struct DynEntityDef* (unsigned short, enum DynEntityDrawType)>(L"DynEnt_GetEntityDef")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto DynEnt_GetClientEntity(unsigned short dynEntId, enum DynEntityDrawType drawType) -> struct DynEntityClient*
{
  return Zynamic::Forward<struct DynEntityClient* (unsigned short, enum DynEntityDrawType)>(L"DynEnt_GetClientEntity")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto DynEnt_GetEntityColl(enum DynEntityCollType collType, unsigned short dynEntId) -> struct DynEntityColl*
{
  return Zynamic::Forward<struct DynEntityColl* (enum DynEntityCollType, unsigned short)>(L"DynEnt_GetEntityColl")(collType, dynEntId);
}

#endif // __UNIMPLEMENTED__
