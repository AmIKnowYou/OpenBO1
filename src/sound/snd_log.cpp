//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_InitLog() -> void
{
  return Zynamic::Forward<void ()>(L"SND_InitLog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogLookupAlias(unsigned int hash, char* string) -> void
{
  return Zynamic::Forward<void (unsigned int, char*)>(L"SND_LogLookupAlias")(hash, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogRegisterString(const char* name, unsigned int hash) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"SND_LogRegisterString")(name, hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogSkip(unsigned int hash, unsigned int skipCount, unsigned int* skipHash, unsigned int* skipTime) -> bool
{
  return Zynamic::Forward<bool (unsigned int, unsigned int, unsigned int*, unsigned int*)>(L"SND_LogSkip")(hash, skipCount, skipHash, skipTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogMissingAliasId(unsigned int hash) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SND_LogMissingAliasId")(hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogPlayedAliasId(unsigned int hash) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SND_LogPlayedAliasId")(hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogCommandQHWM(unsigned int event_count) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SND_LogCommandQHWM")(event_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LogNotifyQHWM(unsigned int event_count) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SND_LogNotifyQHWM")(event_count);
}

#endif // __UNIMPLEMENTED__
