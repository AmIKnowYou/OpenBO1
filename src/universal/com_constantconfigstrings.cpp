//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CCS_ClearConstantConfigStrings() -> void
{
  return Zynamic::Forward<void ()>(L"CCS_ClearConstantConfigStrings")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_ValidateChecksums(int serverChecksum, int clientChecksum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CCS_ValidateChecksums")(serverChecksum, clientChecksum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_GetChecksum() -> int
{
  return Zynamic::Forward<int ()>(L"CCS_GetChecksum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_ShouldLoadConstConfigStrings(int party) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CCS_ShouldLoadConstConfigStrings")(party);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_LoadConstantConfigStrings(const char* mapname, const char* gametype) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"CCS_LoadConstantConfigStrings")(mapname, gametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_GetConfigStringValue(const int rowNum) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"CCS_GetConfigStringValue")(rowNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CCS_GetConfigStringNum(const int rowNum) -> int
{
  return Zynamic::Forward<int (const int)>(L"CCS_GetConfigStringNum")(rowNum);
}

#endif // __UNIMPLEMENTED__
