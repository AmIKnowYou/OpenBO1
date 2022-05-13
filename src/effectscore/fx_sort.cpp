//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_CalcRunnerParentSortOrder(struct FxEffect* effect) -> int
{
  return Zynamic::Forward<int (struct FxEffect*)>(L"FX_CalcRunnerParentSortOrder")(effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FirstEffectIsFurther(struct FxEffect* firstEffect, struct FxEffect* secondEffect) -> bool
{
  return Zynamic::Forward<bool (struct FxEffect*, struct FxEffect*)>(L"FX_FirstEffectIsFurther")(firstEffect, secondEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SortEffects(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_SortEffects")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetInsertSortElem(const struct FxSystem* system, const struct FxEffect* effect, const struct FxElem* elem, struct FxInsertSortElem* sortElem) -> void
{
  return Zynamic::Forward<void (const struct FxSystem*, const struct FxEffect*, const struct FxElem*, struct FxInsertSortElem*)>(L"FX_GetInsertSortElem")(system, effect, elem, sortElem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ExistingElemSortsBeforeNewElem(const struct FxSystem* system, const struct FxEffect* effect, const struct FxElem* remoteElem, const struct FxInsertSortElem* sortElemNew) -> bool
{
  return Zynamic::Forward<bool (const struct FxSystem*, const struct FxEffect*, const struct FxElem*, const struct FxInsertSortElem*)>(L"FX_ExistingElemSortsBeforeNewElem")(system, effect, remoteElem, sortElemNew);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SortSpriteElemIntoEffect(struct FxSystem* system, struct FxEffect* effect, struct FxElem* remoteElem, struct FxElem* elem) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxElem*, struct FxElem*)>(L"FX_SortSpriteElemIntoEffect")(system, effect, remoteElem, elem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SortNewElemsInEffect(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"FX_SortNewElemsInEffect")(system, effect);
}

#endif // __UNIMPLEMENTED__
