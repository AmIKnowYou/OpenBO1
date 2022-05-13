//! SPDX-License-Identifier: GPL-3.0-or-later

auto Com_GetBuildVersion() -> const char*
{
  static auto build_version = std::format("{}-{} {}", GIT_DESCRIBE, GIT_IS_DIRTY ? "dirty" : "", GIT_COMMIT_DATE_ISO8601);
  return build_version.c_str();
}

#ifdef    __UNIMPLEMENTED__

auto Com_GetBuildNumber() -> int
{
  return Zynamic::Forward<int ()>(L"Com_GetBuildNumber")();
}

#endif // __UNIMPLEMENTED__

auto Com_GetBuildDisplayName() -> const char*
{
  return "";
}

#ifdef    __UNIMPLEMENTED__

auto Com_GetBuildOfficialNameR() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Com_GetBuildOfficialNameR")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetBuildDisplayNameR() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Com_GetBuildDisplayNameR")();
}

#endif // __UNIMPLEMENTED__

auto Com_GetBuildName() -> const char*
{
  return "OpenBO1";
}

#ifdef    __UNIMPLEMENTED__

auto Com_GetChangelist() -> int
{
  return Zynamic::Forward<int ()>(L"Com_GetChangelist")();
}

#endif // __UNIMPLEMENTED__
