//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto LiveSteamServer::LiveSteamServer() -> void
{
  return Zynamic::Forward<public void ()>(L"LiveSteamServer::LiveSteamServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamServer::~LiveSteamServer() -> void
{
  return Zynamic::Forward<public void ()>(L"LiveSteamServer::~LiveSteamServer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto LiveSteamServer::RunFrame() -> void
{
  return Zynamic::Forward<public void ()>(L"LiveSteamServer::RunFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnSteamServersConnected(struct SteamServersConnected_t* pLogonSuccess) -> void
{
  return Zynamic::Forward<private void (struct SteamServersConnected_t*)>(L"LiveSteamServer::OnSteamServersConnected")(pLogonSuccess);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnSteamServersDisconnected(struct SteamServersDisconnected_t* pLoggedOff) -> void
{
  return Zynamic::Forward<private void (struct SteamServersDisconnected_t*)>(L"LiveSteamServer::OnSteamServersDisconnected")(pLoggedOff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnPolicyResponse(struct GSPolicyResponse_t* pPolicyResponse) -> void
{
  return Zynamic::Forward<private void (struct GSPolicyResponse_t*)>(L"LiveSteamServer::OnPolicyResponse")(pPolicyResponse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KickClientFromSteamGameServer(class CSteamID clientID, enum EDenyReason reason) -> void
{
  return Zynamic::Forward<void (class CSteamID, enum EDenyReason)>(L"KickClientFromSteamGameServer")(clientID, reason);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnGSClientApprove(struct GSClientApprove_t* pGSClientApprove) -> void
{
  return Zynamic::Forward<private void (struct GSClientApprove_t*)>(L"LiveSteamServer::OnGSClientApprove")(pGSClientApprove);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnGSClientDeny(struct GSClientDeny_t* pGSClientDeny) -> void
{
  return Zynamic::Forward<private void (struct GSClientDeny_t*)>(L"LiveSteamServer::OnGSClientDeny")(pGSClientDeny);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto LiveSteamServer::OnGSClientKick(struct GSClientKick_t* pGSClientKick) -> void
{
  return Zynamic::Forward<private void (struct GSClientKick_t*)>(L"LiveSteamServer::OnGSClientKick")(pGSClientKick);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_Init() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Server_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Server_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Server_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_RunCallbacks() -> void
{
  return Zynamic::Forward<void ()>(L"LiveSteam_Server_RunCallbacks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_ClientSteamAuthentication(unsigned __int64 clientSteamID, struct netadr_t netAddr, void* authBlob, unsigned int authBlobSize) -> void
{
  return Zynamic::Forward<void (unsigned __int64, struct netadr_t, void*, unsigned int)>(L"LiveSteam_Server_ClientSteamAuthentication")(clientSteamID, netAddr, authBlob, authBlobSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveSteam_Server_ClientSteamDisconnect(unsigned __int64 clientSteamID) -> void
{
  return Zynamic::Forward<void (unsigned __int64)>(L"LiveSteam_Server_ClientSteamDisconnect")(clientSteamID);
}

#endif // __UNIMPLEMENTED__
