//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_InitAnim(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitAnim")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsAnimScriptAlive(struct actor_s* self) -> const int
{
  return Zynamic::Forward<const int (struct actor_s*)>(L"Actor_IsAnimScriptAlive")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_KillAnimScript(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_KillAnimScript")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetAnimScript(struct actor_s* self, struct scr_animscript_t* pAnimScriptFunc, unsigned char moveMode, enum ai_animmode_t animMode, enum scriptAnimAIFunctionTypes_t animScript) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct scr_animscript_t*, unsigned char, enum ai_animmode_t, enum scriptAnimAIFunctionTypes_t)>(L"Actor_SetAnimScript")(self, pAnimScriptFunc, moveMode, animMode, animScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimMoveAway(struct actor_s* self, struct scr_animscript_t* pAnimScriptFunc) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct scr_animscript_t*)>(L"Actor_AnimMoveAway")(self, pAnimScriptFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimStop(struct actor_s* self, struct scr_animscript_t* pAnimScriptFunc) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct scr_animscript_t*)>(L"Actor_AnimStop")(self, pAnimScriptFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetStopAnim(struct actor_s* self) -> struct scr_animscript_t*
{
  return Zynamic::Forward<struct scr_animscript_t* (struct actor_s*)>(L"Actor_GetStopAnim")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimTryWalk(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_AnimTryWalk")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimTryRun(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_AnimTryRun")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimPain(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_AnimPain")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimDeath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_AnimDeath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimSpecific(struct actor_s* self, struct scr_animscript_t* func, enum ai_animmode_t eAnimMode, bool bUseGoalWeight) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct scr_animscript_t*, enum ai_animmode_t, bool)>(L"Actor_AnimSpecific")(self, func, eAnimMode, bUseGoalWeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimSetCompleteGoalWeight(struct actor_s* self, struct DObj* obj, struct XAnimTree_s* tree, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct DObj*, struct XAnimTree_s*, unsigned int, float, float, float, unsigned int, unsigned int, int)>(L"Actor_AnimSetCompleteGoalWeight")(self, obj, tree, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_AnimClearGoalWeight(struct actor_s* self, struct XAnimTree_s* tree, unsigned int animIndex, float blendTime) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct XAnimTree_s*, unsigned int, float)>(L"Actor_AnimClearGoalWeight")(self, tree, animIndex, blendTime);
}

#endif // __UNIMPLEMENTED__
