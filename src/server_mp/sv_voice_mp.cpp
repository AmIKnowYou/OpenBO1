//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_VoiceEnabled() -> bool
{
  return Zynamic::Forward<bool ()>(L"SV_VoiceEnabled")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteVoiceDataToClient(struct client_t* client, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_WriteVoiceDataToClient")(client, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendClientVoiceData(struct client_t* client) -> void
{
  return Zynamic::Forward<void (struct client_t*)>(L"SV_SendClientVoiceData")(client);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClientWantsVoiceData(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SV_ClientWantsVoiceData")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_ClientHasClientMuted(int listener, int talker) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"SV_ClientHasClientMuted")(listener, talker);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_QueueVoicePacket(int talkerNum, int clientNum, struct VoicePacket_t* voicePacket) -> void
{
  return Zynamic::Forward<void (int, int, struct VoicePacket_t*)>(L"SV_QueueVoicePacket")(talkerNum, clientNum, voicePacket);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UserVoice(struct client_t* cl, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_UserVoice")(cl, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PreGameUserVoice(struct client_t* cl, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct msg_t*)>(L"SV_PreGameUserVoice")(cl, msg);
}

#endif // __UNIMPLEMENTED__
