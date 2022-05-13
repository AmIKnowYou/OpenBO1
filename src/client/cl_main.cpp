//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_RunNetworkFrame(int localClientNum, int msec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_RunNetworkFrame")(localClientNum, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AnyLocalClientsRunning() -> bool
{
  return Zynamic::Forward<bool ()>(L"CL_AnyLocalClientsRunning")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DontUnlockControllers(bool flag) -> void
{
  return Zynamic::Forward<void (bool)>(L"CL_DontUnlockControllers")(flag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_ProvisionallyDisableAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_ProvisionallyDisableAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_DisableAllButPrimaryClients() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_DisableAllButPrimaryClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_DisableAllClients() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_DisableAllClients")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientBeingUsedAndPrimary() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientBeingUsedAndPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientBeingUsedAndPrimaryAndActive() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientBeingUsedAndPrimaryAndActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientPrimary() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientBeingUsed() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientBeingUsed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientBeingUsedAndActive() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientBeingUsedAndActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Command_SetClientNotBeingUsed() -> void
{
  return Zynamic::Forward<void ()>(L"CL_Command_SetClientNotBeingUsed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetupClientsForIngame(const char* mapname) -> void
{
  return Zynamic::Forward<void (const char*)>(L"CL_SetupClientsForIngame")(mapname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SetupClientsForFrontend() -> void
{
  return Zynamic::Forward<void ()>(L"CL_SetupClientsForFrontend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawFramedPicPhysical(float x, float y, float w, float h, float thicknessW, float thicknessH, float thicknessTex, int sides, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, int, const float*, struct Material*)>(L"CL_DrawFramedPicPhysical")(x, y, w, h, thicknessW, thicknessH, thicknessTex, sides, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateDvarsFromProfile() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateDvarsFromProfile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateGamerProfile() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateGamerProfile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CommitDvarToProfiles() -> void
{
  return Zynamic::Forward<void ()>(L"CL_CommitDvarToProfiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateProfileFromStats() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateProfileFromStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RegisterCommands() -> void
{
  return Zynamic::Forward<void ()>(L"CL_RegisterCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawSpinnerPhysical(float x, float y, float w, float h, const float* color) -> void
{
  return Zynamic::Forward<void (float, float, float, float, const float*)>(L"CL_DrawSpinnerPhysical")(x, y, w, h, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawSpinner(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const float* color) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, const float*)>(L"CL_DrawSpinner")(scrPlace, x, y, w, h, horzAlign, vertAlign, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawSpinnerLoadbarPhysical(float x, float y, float w, float h, const float* color, float percentDone) -> void
{
  return Zynamic::Forward<void (float, float, float, float, const float*, float)>(L"CL_DrawSpinnerLoadbarPhysical")(x, y, w, h, color, percentDone);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DrawSpinnerLoadbar(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const float* color, float percentDone) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, const float*, float)>(L"CL_DrawSpinnerLoadbar")(scrPlace, x, y, w, h, horzAlign, vertAlign, color, percentDone);
}

#endif // __UNIMPLEMENTED__
