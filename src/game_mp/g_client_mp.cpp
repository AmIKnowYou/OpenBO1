//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SetClientViewAngle(struct gentity_s* ent, const float* angle) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*)>(L"SetClientViewAngle")(ent, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerViewOrigin_Internal(const struct playerState_s* ps, float* origin, bool useBodyPosition) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*, bool)>(L"G_GetPlayerViewOrigin_Internal")(ps, origin, useBodyPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerViewOrigin(const struct playerState_s* ps, float* origin) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*)>(L"G_GetPlayerViewOrigin")(ps, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerBodyViewOrigin(const struct playerState_s* ps, float* origin) -> void
{
  return Zynamic::Forward<void (const struct playerState_s*, float*)>(L"G_GetPlayerBodyViewOrigin")(ps, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerViewDirection(const struct gentity_s* ent, float* forward, float* right, float* up) -> void
{
  return Zynamic::Forward<void (const struct gentity_s*, float*, float*, float*)>(L"G_GetPlayerViewDirection")(ent, forward, right, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientCleanName(const char* in, char* out, int outSize) -> void
{
  return Zynamic::Forward<void (const char*, char*, int)>(L"ClientCleanName")(in, out, outSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientUserinfoChanged(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"ClientUserinfoChanged")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientClearFields(struct gclient_s* client) -> void
{
  return Zynamic::Forward<void (struct gclient_s*)>(L"ClientClearFields")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientConnect(int clientNum, unsigned int scriptPersId) -> const char*
{
  return Zynamic::Forward<const char* (int, unsigned int)>(L"ClientConnect")(clientNum, scriptPersId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientBegin(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"ClientBegin")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientSpawn(struct gentity_s* ent, const float* spawn_origin, const float* spawn_angles) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float*)>(L"ClientSpawn")(ent, spawn_origin, spawn_angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClientDisconnect(int clientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"ClientDisconnect")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetNonPVSPlayerInfo(struct gentity_s* pSelf, float* vPosition, int iLastUpdateEnt) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, float*, int)>(L"G_GetNonPVSPlayerInfo")(pSelf, vPosition, iLastUpdateEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_BroadcastVoice(struct gentity_s* talker, struct VoicePacket_t* voicePacket) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct VoicePacket_t*)>(L"G_BroadcastVoice")(talker, voicePacket);
}

#endif // __UNIMPLEMENTED__
