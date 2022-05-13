//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_WriteVoicePacket(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_WriteVoicePacket")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoicePacket(int localClientNum, struct msg_t* msg) -> void
{
  return Zynamic::Forward<void (int, struct msg_t*)>(L"CL_VoicePacket")(localClientNum, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsPlayerTalking(int localClientNum, int talkingClientIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CL_IsPlayerTalking")(localClientNum, talkingClientIndex);
}

#endif // __UNIMPLEMENTED__
