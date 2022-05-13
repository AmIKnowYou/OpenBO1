//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_InitLookAt(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_InitLookAt")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetLookAtAnimNodes(struct actor_s* self, unsigned short animStraight, unsigned short animLeft, unsigned short animRight) -> void
{
  return Zynamic::Forward<void (struct actor_s*, unsigned short, unsigned short, unsigned short)>(L"Actor_SetLookAtAnimNodes")(self, animStraight, animLeft, animRight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetLookAt(struct actor_s* self, const float* vPosition, float fTurnAccel) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float*, float)>(L"Actor_SetLookAt")(self, vPosition, fTurnAccel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CurrentLookAtAnimYawMax(struct actor_s* self) -> float
{
  return Zynamic::Forward<float (struct actor_s*)>(L"Actor_CurrentLookAtAnimYawMax")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_CurrentLookAtYawMax(struct actor_s* self) -> float
{
  return Zynamic::Forward<float (struct actor_s*)>(L"Actor_CurrentLookAtYawMax")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetLookAtYawLimits(struct actor_s* self, float fAnimYawLimit, float fYawLimit, float fBlendTime) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float, float, float)>(L"Actor_SetLookAtYawLimits")(self, fAnimYawLimit, fYawLimit, fBlendTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_StopLookAt(struct actor_s* self, float fTurnAccel) -> void
{
  return Zynamic::Forward<void (struct actor_s*, float)>(L"Actor_StopLookAt")(self, fTurnAccel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateLookAt(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateLookAt")(self);
}

#endif // __UNIMPLEMENTED__
