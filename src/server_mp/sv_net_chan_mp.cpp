//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SV_Netchan_OutgoingSequenceIncremented(struct client_t* client, struct netchan_t* chan) -> void
{
  return Zynamic::Forward<void (struct client_t*, struct netchan_t*)>(L"SV_Netchan_OutgoingSequenceIncremented")(client, chan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Netchan_TransmitNextFragment(struct client_t* client, struct netchan_t* chan) -> bool
{
  return Zynamic::Forward<bool (struct client_t*, struct netchan_t*)>(L"SV_Netchan_TransmitNextFragment")(client, chan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Netchan_Transmit(struct client_t* client, unsigned char* data, int length, bool reliable) -> bool
{
  return Zynamic::Forward<bool (struct client_t*, unsigned char*, int, bool)>(L"SV_Netchan_Transmit")(client, data, length, reliable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Netchan_AddOOBProfilePacket(int iLength) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_Netchan_AddOOBProfilePacket")(iLength);
}

#endif // __UNIMPLEMENTED__
