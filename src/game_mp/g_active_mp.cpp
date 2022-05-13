//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pmove''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pmove''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto P_DamageFeedback(struct gentity_s* player) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"P_DamageFeedback")(player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Player_WaterUpdate(struct gentity_s* ent, struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct pmove_t*)>(L"Player_WaterUpdate")(ent, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientImpacts(struct gentity_s* ent, struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct pmove_t*)>(L"ClientImpacts")(ent, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DoTouchTriggers(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_DoTouchTriggers")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpectatorThink(struct gentity_s* ent, struct usercmd_s* ucmd) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct usercmd_s*)>(L"SpectatorThink")(ent, ucmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientInactivityTimer(struct gclient_s* client) -> int
{
  return Zynamic::Forward<int (struct gclient_s*)>(L"ClientInactivityTimer")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientIntermissionThink(struct gentity_s* ent, struct usercmd_s* ucmd) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct usercmd_s*)>(L"ClientIntermissionThink")(ent, ucmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NotifyGrenadePullback(struct gentity_s* ent, unsigned int weaponIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, unsigned int)>(L"NotifyGrenadePullback")(ent, weaponIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsLiveGrenade(struct gentity_s* ent) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*)>(L"IsLiveGrenade")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AttemptLiveGrenadePickup(struct gentity_s* clientEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"AttemptLiveGrenadePickup")(clientEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HandleClientEvent(struct gclient_s* client, struct gentity_s* ent, int event, int eventParm) -> void
{
  return Zynamic::Forward<void (struct gclient_s*, struct gentity_s*, int, int)>(L"HandleClientEvent")(client, ent, event, eventParm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientEvents(struct gentity_s* ent, short oldEventSequence) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, short)>(L"ClientEvents")(ent, oldEventSequence);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetLastServerTime(int clientNum, int lastServerTime) -> void
{
  return Zynamic::Forward<void (int, int)>(L"G_SetLastServerTime")(clientNum, lastServerTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetClientContents(struct gentity_s* pEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_SetClientContents")(pEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerStateToEntityStateExtrapolate(struct playerState_s* ps, struct entityState_s* s, int time, int snap) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, struct entityState_s*, int, int)>(L"G_PlayerStateToEntityStateExtrapolate")(ps, s, time, snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddPlayerMantleBlockage(float* endPos, int duration, struct pmove_t* pm) -> void
{
  return Zynamic::Forward<void (float*, int, struct pmove_t*)>(L"G_AddPlayerMantleBlockage")(endPos, duration, pm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientVehicleInteraction(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"ClientVehicleInteraction")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientVehicleJumpOff(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"ClientVehicleJumpOff")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerVehiclePositionAndBlend(struct gentity_s* ent, struct gentity_s* pTurretEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"G_PlayerVehiclePositionAndBlend")(ent, pTurretEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DrawServerAiming(const struct gclient_s* client) -> void
{
  return Zynamic::Forward<void (const struct gclient_s*)>(L"G_DrawServerAiming")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_BuildWeaponState(struct gclient_s* client, const struct viewState_t* vs, struct weaponState_t* ws) -> void
{
  return Zynamic::Forward<void (struct gclient_s*, const struct viewState_t*, struct weaponState_t*)>(L"G_BuildWeaponState")(client, vs, ws);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SaveWeaponState(const struct weaponState_t* ws, struct gclient_s* client) -> void
{
  return Zynamic::Forward<void (const struct weaponState_t*, struct gclient_s*)>(L"G_SaveWeaponState")(ws, client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientThink_real(struct gentity_s* ent, struct usercmd_s* ucmd) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct usercmd_s*)>(L"ClientThink_real")(ent, ucmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientThink(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"ClientThink")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunClient(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_RunClient")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IntermissionClientEndFrame(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"IntermissionClientEndFrame")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClientCanSpectateTeam(struct gclient_s* client, enum team_t team) -> int
{
  return Zynamic::Forward<int (struct gclient_s*, enum team_t)>(L"G_ClientCanSpectateTeam")(client, team);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClientCanSpectateTeamOrLocalPlayer(struct gclient_s* client, struct clientState_s* cs) -> int
{
  return Zynamic::Forward<int (struct gclient_s*, struct clientState_s*)>(L"G_ClientCanSpectateTeamOrLocalPlayer")(client, cs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpectatorClientEndFrame(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"SpectatorClientEndFrame")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFollowPlayerState(int clientNum, struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (int, struct playerState_s*)>(L"GetFollowPlayerState")(clientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StuckInClient(struct gentity_s* self) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"StuckInClient")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_CheckForTraps(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"CM_CheckForTraps")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerController(const struct gentity_s* self, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, int*)>(L"G_PlayerController")(self, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateClientInfo(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"G_UpdateClientInfo")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddClientKnife(struct clientInfo_t* ci, struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (struct clientInfo_t*, struct playerState_s*)>(L"G_AddClientKnife")(ci, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientEndFrame(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"ClientEndFrame")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayer(int clientNum) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (int)>(L"G_GetPlayer")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlayerEvent(int clientNum, int event) -> void
{
  return Zynamic::Forward<void (int, int)>(L"G_PlayerEvent")(clientNum, event);
}

#endif // __UNIMPLEMENTED__
