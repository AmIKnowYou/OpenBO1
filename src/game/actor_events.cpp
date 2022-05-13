//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_EventDefaultRadiusSqrd(enum ai_event_t eType) -> float
{
  return Zynamic::Forward<float (enum ai_event_t)>(L"Actor_EventDefaultRadiusSqrd")(eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventDefaultHeightDiff(enum ai_event_t eType) -> float
{
  return Zynamic::Forward<float (enum ai_event_t)>(L"Actor_EventDefaultHeightDiff")(eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_DumpEvents(struct actor_s* self, enum ai_event_t event, struct gentity_s* originator) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_event_t, struct gentity_s*)>(L"Actor_DumpEvents")(self, event, originator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetPerfectInfo(struct actor_s* self, struct sentient_s* pOther) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*)>(L"Actor_GetPerfectInfo")(self, pOther);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_WasAttackedBy(struct actor_s* self, struct sentient_s* pOther) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*)>(L"Actor_WasAttackedBy")(self, pOther);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BroadcastTeamEvent(struct sentient_s* sentient, enum ai_event_t eType) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, enum ai_event_t)>(L"Actor_BroadcastTeamEvent")(sentient, eType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_IsOnSameTeam(struct gentity_s* originator, struct actor_s* pActor, int teamFlags) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct actor_s*, int)>(L"Actor_IsOnSameTeam")(originator, pActor, teamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BroadcastPointEvent(struct gentity_s* originator, enum ai_event_t eType, int teamFlags, const float* vOrigin, float fRadiusSqrd) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, enum ai_event_t, int, const float*, float)>(L"Actor_BroadcastPointEvent")(originator, eType, teamFlags, vOrigin, fRadiusSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BroadcastLineEvent(struct gentity_s* originator, struct gentity_s* hitEnt, enum ai_event_t eType, int teamFlags, const float* vStart, const float* vEnd, float fRadiusSqrd) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, enum ai_event_t, int, const float*, const float*, float)>(L"Actor_BroadcastLineEvent")(originator, hitEnt, eType, teamFlags, vStart, vEnd, fRadiusSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventFootstep(struct actor_s* self, struct sentient_s* originator, const float* vOrigin) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*, const float*)>(L"Actor_EventFootstep")(self, originator, vOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventNewEnemy(struct actor_s* self, struct sentient_s* originator) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*)>(L"Actor_EventNewEnemy")(self, originator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventPain(struct actor_s* self, struct sentient_s* pCasualty, struct sentient_s* pAttacker) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*, struct sentient_s*)>(L"Actor_EventPain")(self, pCasualty, pAttacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventDeath(struct actor_s* self, struct sentient_s* pCasualty, struct sentient_s* pAttacker) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*, struct sentient_s*)>(L"Actor_EventDeath")(self, pCasualty, pAttacker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventExplosion(struct actor_s* self, struct gentity_s* originator, const float* vOrigin) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, const float*)>(L"Actor_EventExplosion")(self, originator, vOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventGrenadePing(struct actor_s* self, struct gentity_s* originator, const float* vOrigin) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, const float*)>(L"Actor_EventGrenadePing")(self, originator, vOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventGunshot(struct actor_s* self, struct sentient_s* originator, const float* vOrigin) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct sentient_s*, const float*)>(L"Actor_EventGunshot")(self, originator, vOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventBullet(struct actor_s* self, struct gentity_s* originator, const float* vStart, const float* vEnd, const float* vClosest, float fDistSqrd, float fRadiusSqrd, enum PARM_SUPPRESSION suppression) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, const float*, const float*, const float*, float, float, enum PARM_SUPPRESSION)>(L"Actor_EventBullet")(self, originator, vStart, vEnd, vClosest, fDistSqrd, fRadiusSqrd, suppression);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ReceivePointEvent(struct actor_s* self, struct gentity_s* originator, enum ai_event_t eType, const float* vOrigin, float fDistSqrd, float fRadiusSqrd) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, enum ai_event_t, const float*, float, float)>(L"Actor_ReceivePointEvent")(self, originator, eType, vOrigin, fDistSqrd, fRadiusSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ReceiveLineEvent(struct actor_s* self, struct gentity_s* originator, struct gentity_s* hitEnt, enum ai_event_t eType, const float* vStart, const float* vEnd, const float* vClosest, float fDistSqrd, float fRadiusSqrd) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct gentity_s*, struct gentity_s*, enum ai_event_t, const float*, const float*, const float*, float, float)>(L"Actor_ReceiveLineEvent")(self, originator, hitEnt, eType, vStart, vEnd, vClosest, fDistSqrd, fRadiusSqrd);
}

#endif // __UNIMPLEMENTED__
