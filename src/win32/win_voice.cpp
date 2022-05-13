//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Voice_Init() -> bool
{
  return Zynamic::Forward<bool ()>(L"Voice_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_StopClientSamples() -> void
{
  return Zynamic::Forward<void ()>(L"Voice_StopClientSamples")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Voice_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_GetVoiceLevel() -> float
{
  return Zynamic::Forward<float ()>(L"Voice_GetVoiceLevel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_Playback() -> void
{
  return Zynamic::Forward<void ()>(L"Voice_Playback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_GetLocalVoiceData(struct ClientVoicePacket_t* voiceData) -> int
{
  return Zynamic::Forward<int (struct ClientVoicePacket_t*)>(L"Voice_GetLocalVoiceData")(voiceData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IncomingVoiceData(unsigned char talker, unsigned char* data, int packetDataSize) -> void
{
  return Zynamic::Forward<void (unsigned char, unsigned char*, int)>(L"Voice_IncomingVoiceData")(talker, data, packetDataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsClientTalking(int clientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Voice_IsClientTalking")(clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_StartRecording() -> bool
{
  return Zynamic::Forward<bool ()>(L"Voice_StartRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_StopRecording() -> bool
{
  return Zynamic::Forward<bool ()>(L"Voice_StopRecording")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mixerGetRecordLevel(char* SrcName) -> int
{
  return Zynamic::Forward<int (char*)>(L"mixerGetRecordLevel")(SrcName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mixerSetRecordLevel(char* SrcName, unsigned short newLevel) -> int
{
  return Zynamic::Forward<int (char*, unsigned short)>(L"mixerSetRecordLevel")(SrcName, newLevel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mixerGetRecordSource(char* srcName) -> int
{
  return Zynamic::Forward<int (char*)>(L"mixerGetRecordSource")(srcName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mixerSetRecordSource(char* SrcName) -> int
{
  return Zynamic::Forward<int (char*)>(L"mixerSetRecordSource")(SrcName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mixerSetMicrophoneMute(unsigned char bMute) -> int
{
  return Zynamic::Forward<int (unsigned char)>(L"mixerSetMicrophoneMute")(bMute);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetClientNumForXuid(const struct SessionData_s* session, const unsigned __int64 xuid) -> int
{
  return Zynamic::Forward<int (const struct SessionData_s*, const unsigned __int64)>(L"Live_GetClientNumForXuid")(session, xuid);
}

#endif // __UNIMPLEMENTED__
