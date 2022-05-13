//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sys_StartMiniDump(bool prompt) -> void
{
  return Zynamic::Forward<void (bool)>(L"Sys_StartMiniDump")(prompt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsMiniDumpStarted() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_IsMiniDumpStarted")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto miniDumper::miniDumper(bool bPromptUserForMiniDump) -> void
{
  return Zynamic::Forward<public void (bool)>(L"miniDumper::miniDumper")(bPromptUserForMiniDump);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto miniDumper::~miniDumper() -> void
{
  return Zynamic::Forward<public void ()>(L"miniDumper::~miniDumper")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::unhandledExceptionHandler(struct _EXCEPTION_POINTERS* pExceptionInfo) -> long
{
  return Zynamic::Forward<private long (struct _EXCEPTION_POINTERS*)>(L"miniDumper::unhandledExceptionHandler")(pExceptionInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::setMiniDumpFileName() -> void
{
  return Zynamic::Forward<private void ()>(L"miniDumper::setMiniDumpFileName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::getImpersonationToken(void** phToken) -> bool
{
  return Zynamic::Forward<private bool (void**)>(L"miniDumper::getImpersonationToken")(phToken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::enablePrivilege(const char* pszPriv, void* hToken, struct _TOKEN_PRIVILEGES* ptpOld) -> int
{
  return Zynamic::Forward<private int (const char*, void*, struct _TOKEN_PRIVILEGES*)>(L"miniDumper::enablePrivilege")(pszPriv, hToken, ptpOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::restorePrivilege(void* hToken, struct _TOKEN_PRIVILEGES* ptpOld) -> int
{
  return Zynamic::Forward<private int (void*, struct _TOKEN_PRIVILEGES*)>(L"miniDumper::restorePrivilege")(hToken, ptpOld);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto miniDumper::writeMiniDump(struct _EXCEPTION_POINTERS* pExceptionInfo) -> long
{
  return Zynamic::Forward<private long (struct _EXCEPTION_POINTERS*)>(L"miniDumper::writeMiniDump")(pExceptionInfo);
}

#endif // __UNIMPLEMENTED__
