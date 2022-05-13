//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_InitWind() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitWind")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWindDirection(float* dir, float speed) -> void
{
  return Zynamic::Forward<void (float*, float)>(L"R_SetWindDirection")(dir, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVariantWindSpringAngle(unsigned int index, float angle) -> void
{
  return Zynamic::Forward<void (unsigned int, float)>(L"R_SetVariantWindSpringAngle")(index, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVariantWindRustleAngle(unsigned int windIndex, const float* angles) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"R_SetVariantWindRustleAngle")(windIndex, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WindStartBackend() -> void
{
  return Zynamic::Forward<void ()>(L"R_WindStartBackend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWindShaderConstants(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_SetWindShaderConstants")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetCustomWindConstants(struct GfxCmdBufSourceState* source, const float* drawSurfListViewOrigin) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const float*)>(L"RB_SetCustomWindConstants")(source, drawSurfListViewOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLocalWind(const float* position, float radius, const float* rustleAngle) -> void
{
  return Zynamic::Forward<void (const float*, float, const float*)>(L"R_SetLocalWind")(position, radius, rustleAngle);
}

#endif // __UNIMPLEMENTED__
