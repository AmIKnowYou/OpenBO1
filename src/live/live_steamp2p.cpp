//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto LiveSteamP2P::LiveSteamP2P() -> void
{
  return Zynamic::Forward<public void ()>(L"LiveSteamP2P::LiveSteamP2P")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamP2P::SendPacketToSteamID(class CSteamID remoteID, const void* data, unsigned int datasize) -> void
{
  return Zynamic::Forward<public void (class CSteamID, const void*, unsigned int)>(L"LiveSteamP2P::SendPacketToSteamID")(remoteID, data, datasize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamP2P::IsDataAvailable(unsigned int* messageSize) -> bool
{
  return Zynamic::Forward<public bool (unsigned int*)>(L"LiveSteamP2P::IsDataAvailable")(messageSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamP2P::ReadPacket(void* buf, unsigned int bufsize, unsigned int* msgsize, class CSteamID* remoteID) -> bool
{
  return Zynamic::Forward<public bool (void*, unsigned int, unsigned int*, class CSteamID*)>(L"LiveSteamP2P::ReadPacket")(buf, bufsize, msgsize, remoteID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamP2P::OnSessionRequest(struct P2PSessionRequest_t* sessionRequest) -> void
{
  return Zynamic::Forward<public void (struct P2PSessionRequest_t*)>(L"LiveSteamP2P::OnSessionRequest")(sessionRequest);
}

#endif // __UNIMPLEMENTED__
