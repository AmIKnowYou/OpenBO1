//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_AddPlayerSpriteDrawSurf(int localClientNum, const struct centity_s* cent, struct Material* material, float additionalRadiusSize, int height, bool fixedScreenSize) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, struct Material*, float, int, bool)>(L"CG_AddPlayerSpriteDrawSurf")(localClientNum, cent, material, additionalRadiusSize, height, fixedScreenSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPlayerSpriteDrawSurfs(int localClientNum, const struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*)>(L"CG_AddPlayerSpriteDrawSurfs")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddAllPlayerSpriteDrawSurfs(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_AddAllPlayerSpriteDrawSurfs")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurretPositionAndBlend(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_PlayerTurretPositionAndBlend")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Player_ApplyVehicleAnimOffsets(int localClientNum, const struct entityState_s* es, struct centity_s* cent, struct clientInfo_t* ci) -> bool
{
  return Zynamic::Forward<bool (int, const struct entityState_s*, struct centity_s*, struct clientInfo_t*)>(L"CG_Player_ApplyVehicleAnimOffsets")(localClientNum, es, cent, ci);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerUpdateUserRigidBody(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_PlayerUpdateUserRigidBody")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePerkSounds(int localClientNum, const struct cg_s* cgameGlob) -> void
{
  return Zynamic::Forward<void (int, const struct cg_s*)>(L"CG_UpdatePerkSounds")(localClientNum, cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_HighlightPlayer(int localClientNum, struct centity_s* cent, struct ShaderConstantSet& constantSet, bool isExtraCam) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, struct ShaderConstantSet&, bool)>(L"CG_HighlightPlayer")(localClientNum, cent, constantSet, isExtraCam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Player(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Player")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Corpse(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_Corpse")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePlayerDObj(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdatePlayerDObj")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetPlayerEntity(int localClientNum, struct cg_s* cgameGlob, struct centity_s* cent, int resetAnimation) -> void
{
  return Zynamic::Forward<void (int, struct cg_s*, struct centity_s*, int)>(L"CG_ResetPlayerEntity")(localClientNum, cgameGlob, cent, resetAnimation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetTeamName(enum team_t team) -> const char*
{
  return Zynamic::Forward<const char* (enum team_t)>(L"CG_GetTeamName")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetFFATeamName(enum ffa_team_t team) -> const char*
{
  return Zynamic::Forward<const char* (enum ffa_team_t)>(L"CG_GetFFATeamName")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetOpposingTeamName(enum team_t team) -> const char*
{
  return Zynamic::Forward<const char* (enum team_t)>(L"CG_GetOpposingTeamName")(team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerTeamName(const int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"CG_GetPlayerTeamName")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerOpposingTeamName(const int localClientNum) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"CG_GetPlayerOpposingTeamName")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsPlayerDead(const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"CG_IsPlayerDead")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerClipAmmoCount(const int localClientNum) -> int
{
  return Zynamic::Forward<int (const int)>(L"CG_GetPlayerClipAmmoCount")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcWeaponVisTrace(struct XModel* weapModel, float* origin, float* forward, float* start, float* end, float* modelLen) -> void
{
  return Zynamic::Forward<void (struct XModel*, float*, float*, float*, float*, float*)>(L"CG_CalcWeaponVisTrace")(weapModel, origin, forward, start, end, modelLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsWeaponVisible(int localClientNum, struct centity_s* cent, struct XModel* weapModel, float* origin, float* forward) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*, struct XModel*, float*, float*)>(L"CG_IsWeaponVisible")(localClientNum, cent, weapModel, origin, forward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWeaponVisibilityInternal(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateWeaponVisibilityInternal")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWeaponVisibility(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateWeaponVisibility")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerInViewFrustum(int localClientNum, const struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (int, const struct centity_s*)>(L"CG_PlayerInViewFrustum")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
