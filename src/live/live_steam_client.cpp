//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto LiveSteamClient::LiveSteamClient() -> void
{
  return Zynamic::Forward<public void ()>(L"LiveSteamClient::LiveSteamClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamClient::RequestEncryptedAppTicket(const void* data, const unsigned int size) -> void
{
  return Zynamic::Forward<public void (const void*, const unsigned int)>(L"LiveSteamClient::RequestEncryptedAppTicket")(data, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamClient::GetRetrievedEncryptedAppTicket(void* ticketBuf, const unsigned int ticketBufSize, unsigned int* ticketSize) -> bool
{
  return Zynamic::Forward<public bool (void*, const unsigned int, unsigned int*)>(L"LiveSteamClient::GetRetrievedEncryptedAppTicket")(ticketBuf, ticketBufSize, ticketSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamClient::OnRequestEncryptedAppTicket(struct EncryptedAppTicketResponse_t* pEncryptedAppTicketResponse, bool bIOFailure) -> void
{
  return Zynamic::Forward<public void (struct EncryptedAppTicketResponse_t*, bool)>(L"LiveSteamClient::OnRequestEncryptedAppTicket")(pEncryptedAppTicketResponse, bIOFailure);
}

#endif // __UNIMPLEMENTED__
