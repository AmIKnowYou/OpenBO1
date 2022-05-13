//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_SightTrace(struct actor_s* self, const float* start, const float* end, int passEntNum) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, const float*, int)>(L"Actor_SightTrace")(self, start, end, passEntNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeePointFrom(struct actor_s* self, const float* vStart, const float* vEnd, float fMaxDistSqrd, int ignoreEntityNum) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, const float*, float, int)>(L"Actor_CanSeePointFrom")(self, vStart, vEnd, fMaxDistSqrd, ignoreEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInFovAndRange(struct actor_s* self, const float* vEyePos, const float* vPoint, float fovDot, float fMaxDistSqrd) -> int
{
  return Zynamic::Forward<int (struct actor_s*, const float*, const float*, float, float)>(L"PointInFovAndRange")(self, vEyePos, vPoint, fovDot, fMaxDistSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeePointExInternal(struct actor_s* self, const float* vPoint, float fovDot, float fMaxDistSqrd, int ignoreEntityNum, float* vViewPos) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, float, float, int, float*)>(L"Actor_CanSeePointExInternal")(self, vPoint, fovDot, fMaxDistSqrd, ignoreEntityNum, vViewPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeePointEx(struct actor_s* self, const float* vPoint, float fovDot, float fMaxDistSqrd, int ignoreEntityNum) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const float*, float, float, int)>(L"Actor_CanSeePointEx")(self, vPoint, fovDot, fMaxDistSqrd, ignoreEntityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeeEntity(struct actor_s* self, const struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const struct gentity_s*)>(L"Actor_CanSeeEntity")(self, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateVisCache(struct actor_s* self, const struct gentity_s* ent, struct sentient_info_t* pInfo, bool bVisible) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const struct gentity_s*, struct sentient_info_t*, bool)>(L"Actor_UpdateVisCache")(self, ent, pInfo, bVisible);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeeEntityEx(struct actor_s* self, const struct gentity_s* ent, float fovDot, float fMaxDistSqrd) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, const struct gentity_s*, float, float)>(L"Actor_CanSeeEntityEx")(self, ent, fovDot, fMaxDistSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeeSentient(struct actor_s* self, struct sentient_s* sentient, int iMaxLatency) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*, struct sentient_s*, int)>(L"Actor_CanSeeSentient")(self, sentient, iMaxLatency);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CanSeeEnemy(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_CanSeeEnemy")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compare_sentient_sort(const void* pe1, const void* pe2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compare_sentient_sort")(pe1, pe2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateSight(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateSight")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateLastKnownPos(struct actor_s* self, struct sentient_s* other) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*)>(L"Actor_UpdateLastKnownPos")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateLastEnemySightPos(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateLastEnemySightPos")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateEyeInformation(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateEyeInformation")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetEyePosition(struct actor_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetEyePosition")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetDebugEyePosition(struct actor_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetDebugEyePosition")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetEyeDirection(struct actor_s* self, float* vEyeDir) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetEyeDirection")(self, vEyeDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetEyeOffset(struct actor_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float*)>(L"Actor_GetEyeOffset")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetMuzzleInfo(struct actor_s* self, float* vOrigin, float* vForward) -> int
{
  return Zynamic::Forward<int (struct actor_s*, float*, float*)>(L"Actor_GetMuzzleInfo")(self, vOrigin, vForward);
}

#endif // __UNIMPLEMENTED__
