//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto dwGetLobby(int controllerIndex) -> class bdLobbyService* const
{
  return Zynamic::Forward<class bdLobbyService* const (int)>(L"dwGetLobby")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetMatchmaking(int controllerIndex) -> class bdMatchMaking*
{
  return Zynamic::Forward<class bdMatchMaking* (int)>(L"dwGetMatchmaking")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetGroup(int controllerIndex) -> class bdGroup*
{
  return Zynamic::Forward<class bdGroup* (int)>(L"dwGetGroup")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetCounter(int controllerIndex) -> class bdCounter*
{
  return Zynamic::Forward<class bdCounter* (int)>(L"dwGetCounter")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetContentStreaming(int controllerIndex) -> class bdContentStreaming*
{
  return Zynamic::Forward<class bdContentStreaming* (int)>(L"dwGetContentStreaming")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetPooledStorage(int controllerIndex) -> class bdPooledStorage*
{
  return Zynamic::Forward<class bdPooledStorage* (int)>(L"dwGetPooledStorage")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetTagService(int controllerIndex) -> class bdTags*
{
  return Zynamic::Forward<class bdTags* (int)>(L"dwGetTagService")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetVoteRankService(int controllerIndex) -> class bdVoteRank*
{
  return Zynamic::Forward<class bdVoteRank* (int)>(L"dwGetVoteRankService")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetStorage(int controllerIndex) -> class bdStorage*
{
  return Zynamic::Forward<class bdStorage* (int)>(L"dwGetStorage")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetStats(int controllerIndex) -> class bdStats*
{
  return Zynamic::Forward<class bdStats* (int)>(L"dwGetStats")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetSecurityKeyMap() -> class bdSecurityKeyMap*
{
  return Zynamic::Forward<class bdSecurityKeyMap* ()>(L"dwGetSecurityKeyMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetSocketRouter() -> class bdSocketRouter*
{
  return Zynamic::Forward<class bdSocketRouter* ()>(L"dwGetSocketRouter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetAddressMap() -> class bdAddressMap*
{
  return Zynamic::Forward<class bdAddressMap* ()>(L"dwGetAddressMap")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetQoSProbe() -> class bdQoSProbe*
{
  return Zynamic::Forward<class bdQoSProbe* ()>(L"dwGetQoSProbe")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetLocalCommonAddr() -> class bdReference<bdCommonAddr>
{
  return Zynamic::Forward<class bdReference<bdCommonAddr> ()>(L"dwGetLocalCommonAddr")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetAuthService(const class bdInetAddr authAddr, const unsigned short authPort, const unsigned int titleID) -> class bdAuthService*
{
  return Zynamic::Forward<class bdAuthService* (const class bdInetAddr, const unsigned short, const unsigned int)>(L"dwGetAuthService")(authAddr, authPort, titleID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwAuthServiceCleanup() -> void
{
  return Zynamic::Forward<void ()>(L"dwAuthServiceCleanup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetTitleUtilities(int controllerIndex) -> class bdTitleUtilities*
{
  return Zynamic::Forward<class bdTitleUtilities* (int)>(L"dwGetTitleUtilities")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetMessaging(int controllerIndex) -> class bdMessaging*
{
  return Zynamic::Forward<class bdMessaging* (int)>(L"dwGetMessaging")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCloseRemoteTask(struct overlappedTask* task) -> void
{
  return Zynamic::Forward<void (struct overlappedTask*)>(L"dwCloseRemoteTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCloseRemoteTask(class bdReference<bdRemoteTask>* remoteTask) -> void
{
  return Zynamic::Forward<void (class bdReference<bdRemoteTask>*)>(L"dwCloseRemoteTask")(remoteTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwTaskStatusConvert(const enum bdRemoteTask::bdStatus taskStatus, const enum bdLobbyErrorCode lobbyError) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const enum bdRemoteTask::bdStatus, const enum bdLobbyErrorCode)>(L"dwTaskStatusConvert")(taskStatus, lobbyError);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwLobbyErrorCodeToString(const enum bdLobbyErrorCode code) -> const char*
{
  return Zynamic::Forward<const char* (const enum bdLobbyErrorCode)>(L"dwLobbyErrorCodeToString")(code);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwLobbyErrorCodeToString(const enum bdLobbyErrorCode code, char* const buffer, const unsigned int bufferSize) -> void
{
  return Zynamic::Forward<void (const enum bdLobbyErrorCode, char* const, const unsigned int)>(L"dwLobbyErrorCodeToString")(code, buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwConnectionErrorHandler(int error_context) -> void
{
  return Zynamic::Forward<void (int)>(L"dwConnectionErrorHandler")(error_context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwEnterDeferredCritsec() -> void
{
  return Zynamic::Forward<void ()>(L"dwEnterDeferredCritsec")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwLeaveDeferredCritsec() -> void
{
  return Zynamic::Forward<void ()>(L"dwLeaveDeferredCritsec")();
}

#endif // __UNIMPLEMENTED__
