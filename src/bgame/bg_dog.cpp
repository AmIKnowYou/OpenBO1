//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_Actor_GetAnimStateIndex(unsigned short animStateName) -> int
{
  return Zynamic::Forward<int (unsigned short)>(L"BG_Actor_GetAnimStateIndex")(animStateName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Actor_GetAnimStateName(int animStateIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_Actor_GetAnimStateName")(animStateIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Actor_GetAnimStateCategoryName(int animStateIndex) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"BG_Actor_GetAnimStateCategoryName")(animStateIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dog_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Dog_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_SetNewAnimationState(int localClientNum, struct animInfo_t* animInfo, struct actorLerpFrame_t* lf, int newAnimationState, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, struct animInfo_t*, struct actorLerpFrame_t*, int, const struct entityState_s*)>(L"BG_Dog_SetNewAnimationState")(localClientNum, animInfo, lf, newAnimationState, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ApplyNewAnimState(struct XAnimTree_s* pAnimTree, struct actorLerpFrame_t* lf, int newAnimationState) -> bool
{
  return Zynamic::Forward<bool (struct XAnimTree_s*, struct actorLerpFrame_t*, int)>(L"ApplyNewAnimState")(pAnimTree, lf, newAnimationState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_UpdateAnimationState(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Dog_UpdateAnimationState")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_SetAnimState(struct entityState_s* es, int animState) -> void
{
  return Zynamic::Forward<void (struct entityState_s*, int)>(L"BG_Dog_SetAnimState")(es, animState);
}

#endif // __UNIMPLEMENTED__
