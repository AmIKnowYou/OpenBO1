//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_actor_badplace() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_actor_badplace")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateBadPlaceCount(struct badplace_t* place, int delta) -> void
{
  return Zynamic::Forward<void (struct badplace_t*, int)>(L"Path_UpdateBadPlaceCount")(place, delta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FreeBadPlace(int index) -> void
{
  return Zynamic::Forward<void (int)>(L"Path_FreeBadPlace")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_FindBadPlace(unsigned int name) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"Path_FindBadPlace")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_UpdateBadPlaces() -> void
{
  return Zynamic::Forward<void ()>(L"Path_UpdateBadPlaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_AllocBadPlace(unsigned int name, int duration, union badplace_parms_t* params) -> struct badplace_t*
{
  return Zynamic::Forward<struct badplace_t* (unsigned int, int, union badplace_parms_t*)>(L"Path_AllocBadPlace")(name, duration, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_MakeBadPlaceEx(unsigned int name, int duration, int teamflags, int type, union badplace_parms_t* parms) -> void
{
  return Zynamic::Forward<void (unsigned int, int, int, int, union badplace_parms_t*)>(L"Path_MakeBadPlaceEx")(name, duration, teamflags, type, parms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawBadPlace(struct badplace_t* place) -> void
{
  return Zynamic::Forward<void (struct badplace_t*)>(L"Path_DrawBadPlace")(place);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_DrawBadPlaces() -> void
{
  return Zynamic::Forward<void ()>(L"Path_DrawBadPlaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_InitBadPlaces() -> void
{
  return Zynamic::Forward<void ()>(L"Path_InitBadPlaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Path_ShutdownBadPlaces() -> void
{
  return Zynamic::Forward<void ()>(L"Path_ShutdownBadPlaces")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsInAnyBadPlace(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_IsInAnyBadPlace")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_UpdateFleeingActors() -> void
{
  return Zynamic::Forward<void ()>(L"Actor_BadPlace_UpdateFleeingActors")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_GetMaximumFleeRadius() -> float
{
  return Zynamic::Forward<float ()>(L"Actor_BadPlace_GetMaximumFleeRadius")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_HasPotentialNodeDuplicates(struct pathsort_t* potentialNodes, int potentialNodeCount, struct pathnode_t* checkNode) -> bool
{
  return Zynamic::Forward<bool (struct pathsort_t*, int, struct pathnode_t*)>(L"Actor_BadPlace_HasPotentialNodeDuplicates")(potentialNodes, potentialNodeCount, checkNode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_IsNodeInAnyBadPlace(struct pathnode_t* node) -> bool
{
  return Zynamic::Forward<bool (struct pathnode_t*)>(L"Actor_BadPlace_IsNodeInAnyBadPlace")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_FindSafeNodeOutsideBadPlace(struct actor_s* self, struct pathsort_t* potentialNodes, float maxFleeDist) -> int
{
  return Zynamic::Forward<int (struct actor_s*, struct pathsort_t*, float)>(L"Actor_BadPlace_FindSafeNodeOutsideBadPlace")(self, potentialNodes, maxFleeDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_FindSafeNodeAlongPath(struct actor_s* self) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (struct actor_s*)>(L"Actor_BadPlace_FindSafeNodeAlongPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_AttemptEscape(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_BadPlace_AttemptEscape")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_Flee_Start(struct actor_s* self, enum ai_state_t ePrevState) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, enum ai_state_t)>(L"Actor_BadPlace_Flee_Start")(self, ePrevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BadPlace_Flee_Think(struct actor_s* self) -> enum actor_think_result_t
{
  return Zynamic::Forward<enum actor_think_result_t (struct actor_s*)>(L"Actor_BadPlace_Flee_Think")(self);
}

#endif // __UNIMPLEMENTED__
