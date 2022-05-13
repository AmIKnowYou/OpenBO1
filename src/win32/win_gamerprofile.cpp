//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetProfileSettings(int controllerIndex) -> struct GamerSettingState*
{
  return Zynamic::Forward<struct GamerSettingState* (int)>(L"GamerProfile_GetProfileSettings")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_IsProfileLoggedIn(int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"GamerProfile_IsProfileLoggedIn")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_WasErrorOnRead(int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"GamerProfile_WasErrorOnRead")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_AppendDvarListToConfig(char* buffer, const unsigned int size, const char** dvarNameList) -> void
{
  return Zynamic::Forward<void (char*, const unsigned int, const char**)>(L"GamerProfile_AppendDvarListToConfig")(buffer, size, dvarNameList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_AppendByteListToConfig(char* buffer, const unsigned int bufSize, const unsigned char* data, unsigned short dataSize) -> void
{
  return Zynamic::Forward<void (char*, const unsigned int, const unsigned char*, unsigned short)>(L"GamerProfile_AppendByteListToConfig")(buffer, bufSize, data, dataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugReportProfileDVars(const char* headerMsg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"DebugReportProfileDVars")(headerMsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_CreateExeBindingsConfig(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_CreateExeBindingsConfig")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_CreateCommonBindingsConfig(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_CreateCommonBindingsConfig")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_SaveProfile(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_SaveProfile")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetPlaylistNum(int controllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"GamerProfile_GetPlaylistNum")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_SetPlaylistNum(int controllerIndex, int playlistNum) -> void
{
  return Zynamic::Forward<void (int, int)>(L"GamerProfile_SetPlaylistNum")(controllerIndex, playlistNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_ExecControllerBindings(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_ExecControllerBindings")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetDvarFromLocString(const int controllerIndex, const char* dvarName, const char* preLocalizedText) -> void
{
  return Zynamic::Forward<void (const int, const char*, const char*)>(L"SetDvarFromLocString")(controllerIndex, dvarName, preLocalizedText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ResetCreateAClassNames(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"ResetCreateAClassNames")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateDvarsFromProfile(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_UpdateDvarsFromProfile")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_IsNewLocalProfile(const int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"GamerProfile_IsNewLocalProfile")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateProfileFromDvars(int controllerIndex, enum profileWriteState_t profileWriteState) -> void
{
  return Zynamic::Forward<void (int, enum profileWriteState_t)>(L"GamerProfile_UpdateProfileFromDvars")(controllerIndex, profileWriteState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_InitAllProfiles() -> void
{
  return Zynamic::Forward<void ()>(L"GamerProfile_InitAllProfiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_LogInProfile(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_LogInProfile")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_LogOutProfile(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_LogOutProfile")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
