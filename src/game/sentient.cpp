//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sentient_Alloc() -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* ()>(L"Sentient_Alloc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_Free(struct sentient_s* sentient) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Sentient_Free")(sentient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_Dissociate(struct sentient_s* pSentient) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Sentient_Dissociate")(pSentient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_DissociateSentient(struct sentient_s* self, struct sentient_s* other, enum team_t eOtherTeam) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, struct sentient_s*, enum team_t)>(L"Sentient_DissociateSentient")(self, other, eOtherTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetOrigin(const struct sentient_s* self, float* vOriginOut) -> void
{
  return Zynamic::Forward<void (const struct sentient_s*, float*)>(L"Sentient_GetOrigin")(self, vOriginOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetVelocity(const struct sentient_s* self, float* vVelOut) -> void
{
  return Zynamic::Forward<void (const struct sentient_s*, float*)>(L"Sentient_GetVelocity")(self, vVelOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetEyePosition(const struct sentient_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (const struct sentient_s*, float*)>(L"Sentient_GetEyePosition")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetThirdPersonEyePosition(const struct sentient_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (const struct sentient_s*, float*)>(L"Sentient_GetThirdPersonEyePosition")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_GetDebugEyePosition(const struct sentient_s* self, float* vEyePosOut) -> void
{
  return Zynamic::Forward<void (const struct sentient_s*, float*)>(L"Sentient_GetDebugEyePosition")(self, vEyePosOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NearestNode(struct sentient_s* self) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (struct sentient_s*)>(L"Sentient_NearestNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NearestNodeSuppressed(struct sentient_s* self, float* vNormal[0x2], float* fDist, int iPlaneCount) -> struct pathnode_t*
{
  return Zynamic::Forward<struct pathnode_t* (struct sentient_s*, float*[0x2], float*, int)>(L"Sentient_NearestNodeSuppressed")(self, vNormal, fDist, iPlaneCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_InvalidateNearestNode(struct sentient_s* self) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Sentient_InvalidateNearestNode")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_SetEnemy(struct sentient_s* self, struct gentity_s* enemy, int bNotify) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, struct gentity_s*, int)>(L"Sentient_SetEnemy")(self, enemy, bNotify);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_FirstSentient(const int iTeamFlags) -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* (const int)>(L"Sentient_FirstSentient")(iTeamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NextSentient(struct sentient_s* pPrevSentient, const int iTeamFlags) -> struct sentient_s*
{
  return Zynamic::Forward<struct sentient_s* (struct sentient_s*, const int)>(L"Sentient_NextSentient")(pPrevSentient, iTeamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NameForTeam(enum team_t eTeam) -> const char*
{
  return Zynamic::Forward<const char* (enum team_t)>(L"Sentient_NameForTeam")(eTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_SetTeam(struct sentient_s* self, enum team_t eTeam) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, enum team_t)>(L"Sentient_SetTeam")(self, eTeam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_ClaimNode(struct sentient_s* self, struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, struct pathnode_t*)>(L"Sentient_ClaimNode")(self, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NodeClaimRevoked(struct sentient_s* self, struct pathnode_t* node) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, struct pathnode_t*)>(L"Sentient_NodeClaimRevoked")(self, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_StealClaimNode(struct sentient_s* self, struct sentient_s* other) -> void
{
  return Zynamic::Forward<void (struct sentient_s*, struct sentient_s*)>(L"Sentient_StealClaimNode")(self, other);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_BanNearNodes(struct sentient_s* self) -> void
{
  return Zynamic::Forward<void (struct sentient_s*)>(L"Sentient_BanNearNodes")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitSentients() -> void
{
  return Zynamic::Forward<void ()>(L"G_InitSentients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sentient_NearestNodeDirty(struct sentient_s* self, bool originChanged) -> bool
{
  return Zynamic::Forward<bool (struct sentient_s*, bool)>(L"Sentient_NearestNodeDirty")(self, originChanged);
}

#endif // __UNIMPLEMENTED__
