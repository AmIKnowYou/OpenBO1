//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectToHandle(struct FxSystem* system, struct FxEffect* effect) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxSystem*, struct FxEffect*)>(L"FX_EffectToHandle")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectFromHandle(struct FxSystem* system, unsigned short handle) -> struct FxEffect*
{
  return Zynamic::Forward<struct FxEffect* (struct FxSystem*, unsigned short)>(L"FX_EffectFromHandle")(system, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectHandleFromIndex(unsigned int index) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned int)>(L"FX_EffectHandleFromIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_IndexFromEffectHandle(unsigned short handle) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned short)>(L"FX_IndexFromEffectHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PoolToHandle_Generic<FxTrailElem, FxTrailElem, 2048>(struct FxPool<FxTrailElem, FxTrailElem>* poolArray, struct FxTrailElem* item_slim) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxPool<FxTrailElem,FxTrailElem>*, struct FxTrailElem*)>(L"FX_PoolToHandle_Generic<FxTrailElem,FxTrailElem,2048>")(poolArray, item_slim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PoolFromHandle_Generic<FxTrailElem, FxTrailElem, 2048>(struct FxPool<FxTrailElem, FxTrailElem>* poolArray, unsigned short handle) -> struct FxTrailElem*
{
  return Zynamic::Forward<struct FxTrailElem* (struct FxPool<FxTrailElem,FxTrailElem>*, unsigned short)>(L"FX_PoolFromHandle_Generic<FxTrailElem,FxTrailElem,2048>")(poolArray, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_ElemToHandle(struct FxSystem* system, struct FxElem* elem) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxSystem*, struct FxElem*)>(L"FX_ElemToHandle")(system, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_ElemFromHandle(struct FxSystem* system, unsigned short handle) -> struct FxElem*
{
  return Zynamic::Forward<struct FxElem* (struct FxSystem*, unsigned short)>(L"FX_ElemFromHandle")(system, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElemToHandle(struct FxSystem* system, struct FxTrailElem* trailElem) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxSystem*, struct FxTrailElem*)>(L"FX_TrailElemToHandle")(system, trailElem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElemFromHandle(struct FxSystem* system, unsigned short handle) -> struct FxTrailElem*
{
  return Zynamic::Forward<struct FxTrailElem* (struct FxSystem*, unsigned short)>(L"FX_TrailElemFromHandle")(system, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailToHandle(struct FxSystem* system, struct FxTrail* trail) -> unsigned short
{
  return Zynamic::Forward<unsigned short (struct FxSystem*, struct FxTrail*)>(L"FX_TrailToHandle")(system, trail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailFromHandle(struct FxSystem* system, unsigned short handle) -> struct FxTrail*
{
  return Zynamic::Forward<struct FxTrail* (struct FxSystem*, unsigned short)>(L"FX_TrailFromHandle")(system, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_AddRefToEffect(struct FxSystem* __formal, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_AddRefToEffect")(__formal, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_DelRefToEffect(struct FxSystem* system, struct FxEffect* effect, unsigned int stackCount) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, unsigned int)>(L"FX_DelRefToEffect")(system, effect, stackCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_AcquireEffectLock_IsLiveEffect(struct FxEffect* effect) -> bool
{
  return Zynamic::Forward<bool (struct FxEffect*)>(L"FX_AcquireEffectLock_IsLiveEffect")(effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BeginIteratingOverEffects_Cooperative(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_BeginIteratingOverEffects_Cooperative")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_WaitBeginIteratingOverEffects_Exclusive(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_WaitBeginIteratingOverEffects_Exclusive")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BeginIteratingOverEffects_Exclusive(struct FxSystem* system) -> bool
{
  return Zynamic::Forward<bool (struct FxSystem*)>(L"FX_BeginIteratingOverEffects_Exclusive")(system);
}

#endif // __UNIMPLEMENTED__
