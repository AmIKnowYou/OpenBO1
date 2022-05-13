//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onNewNotification() -> void
{
  return Zynamic::Forward<public void ()>(L"dwLobbyEventHandler::onNewNotification")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onTeamMemberStatusUpdate(unsigned __int64 __formal, char* __formal, unsigned __int64 __formal, char* __formal, unsigned char __formal) -> void
{
  return Zynamic::Forward<public void (unsigned __int64, char*, unsigned __int64, char*, unsigned char)>(L"dwLobbyEventHandler::onTeamMemberStatusUpdate")(__formal, __formal, __formal, __formal, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onTeamProposal() -> void
{
  return Zynamic::Forward<public void ()>(L"dwLobbyEventHandler::onTeamProposal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onGlobalInstantMessage(unsigned __int64 senderID, char* senderName, void* message, unsigned int messageSize) -> void
{
  return Zynamic::Forward<public void (unsigned __int64, char*, void*, unsigned int)>(L"dwLobbyEventHandler::onGlobalInstantMessage")(senderID, senderName, message, messageSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onNotifyLeave(unsigned __int64 userID, class bdSessionID sessionID) -> void
{
  return Zynamic::Forward<public void (unsigned __int64, class bdSessionID)>(L"dwLobbyEventHandler::onNotifyLeave")(userID, sessionID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onSessionInvite(class bdSessionInvite& invite) -> void
{
  return Zynamic::Forward<public void (class bdSessionInvite&)>(L"dwLobbyEventHandler::onSessionInvite")(invite);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwLobbyEventHandler::onMultipleLogon(unsigned __int64 userID) -> void
{
  return Zynamic::Forward<public void (unsigned __int64)>(L"dwLobbyEventHandler::onMultipleLogon")(userID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwMessaging_SendInstantMessage(unsigned __int64 recipientID, const char* payload, int payloadsize) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (unsigned __int64, const char*, int)>(L"dwMessaging_SendInstantMessage")(recipientID, payload, payloadsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwMessaging_SendDeferredInstantMessage(unsigned __int64 recipientID, void* payload, int payloadsize) -> class bdRemoteTask*
{
  return Zynamic::Forward<class bdRemoteTask* (unsigned __int64, void*, int)>(L"dwMessaging_SendDeferredInstantMessage")(recipientID, payload, payloadsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_eventHandler''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_eventHandler''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_notifications''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_notifications''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwInitMessaging(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"dwInitMessaging")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwUpdateMessaging(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"dwUpdateMessaging")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwProcessNotifications(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"dwProcessNotifications")(task);
}

#endif // __UNIMPLEMENTED__
