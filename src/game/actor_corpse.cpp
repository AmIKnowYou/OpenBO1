//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_GetActorCorpseIndex(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"G_GetActorCorpseIndex")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetFreeActorCorpseIndex(int reuse) -> int
{
  return Zynamic::Forward<int (int)>(L"G_GetFreeActorCorpseIndex")(reuse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RemoveOneActorCorpse() -> void
{
  return Zynamic::Forward<void ()>(L"G_RemoveOneActorCorpse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RemoveAllActorCorpses() -> void
{
  return Zynamic::Forward<void ()>(L"G_RemoveAllActorCorpses")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RemoveActorCorpses(int allowedCorpseCount) -> void
{
  return Zynamic::Forward<void (int)>(L"G_RemoveActorCorpses")(allowedCorpseCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateActorCorpses() -> void
{
  return Zynamic::Forward<void ()>(L"G_UpdateActorCorpses")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorCorpse_Free(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"ActorCorpse_Free")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetBodyPlantAngle(const int iEntNum, const int iClipMask, const float* vOrigin, const float* vCenter, const float* vDir, float* pfAngle) -> float
{
  return Zynamic::Forward<float (const int, const int, const float*, const float*, const float*, float*)>(L"Actor_SetBodyPlantAngle")(iEntNum, iClipMask, vOrigin, vCenter, vDir, pfAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetBodyPlantAngles(int iEntNum, int iClipMask, const float* vOrigin, const float fYaw, float* pfPitch, float* pfRoll, float* pfHeight) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const float, float*, float*, float*)>(L"Actor_GetBodyPlantAngles")(iEntNum, iClipMask, vOrigin, fYaw, pfPitch, pfRoll, pfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_OrientCorpseToGround(struct gentity_s* self, int bLerp) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Actor_OrientCorpseToGround")(self, bLerp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_OrientPitchToGround(struct gentity_s* self, int bLerp) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"Actor_OrientPitchToGround")(self, bLerp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_BecomeCorpse(struct gentity_s* self) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"Actor_BecomeCorpse")(self);
}

#endif // __UNIMPLEMENTED__
