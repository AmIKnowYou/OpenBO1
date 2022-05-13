//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Win_InitLocalization() -> enum language_t
{
  return Zynamic::Forward<enum language_t ()>(L"Win_InitLocalization")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_ShutdownLocalization() -> void
{
  return Zynamic::Forward<void ()>(L"Win_ShutdownLocalization")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_CopyLocalizationString(const char* string) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Win_CopyLocalizationString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_LocalizeRef(const char* ref) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Win_LocalizeRef")(ref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Win_GetLanguage() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Win_GetLanguage")();
}

#endif // __UNIMPLEMENTED__
