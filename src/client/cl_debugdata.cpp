//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_DebugInitSVThreadVariables() -> void
{
  return Zynamic::Forward<void ()>(L"CL_DebugInitSVThreadVariables")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateDebugStringsIfNeeded() -> bool
{
  return Zynamic::Forward<bool ()>(L"CreateDebugStringsIfNeeded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddDebugStringInternal(const float* xyz, const float* color, float scale, const char* text, int duration, struct clientDebugStringInfo_t* info) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, const char*, int, struct clientDebugStringInfo_t*)>(L"AddDebugStringInternal")(xyz, color, scale, text, duration, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugString(const float* xyz, const float* color, float scale, const char* text, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, const char*, int)>(L"CL_AddDebugString")(xyz, color, scale, text, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateDebugSpheresIfNeeded() -> bool
{
  return Zynamic::Forward<bool ()>(L"CreateDebugSpheresIfNeeded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddDebugSphereInternal(const float* center, const float radius, const float* color, int sideCount, int depthTest, int duration, struct clientDebugSphereInfo_t* info) -> void
{
  return Zynamic::Forward<void (const float*, const float, const float*, int, int, int, struct clientDebugSphereInfo_t*)>(L"AddDebugSphereInternal")(center, radius, color, sideCount, depthTest, duration, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugSphere(const float* center, const float radius, const float* color, int sideCount, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float, const float*, int, int, int)>(L"CL_AddDebugSphere")(center, radius, color, sideCount, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateDebugLinesIfNeeded() -> bool
{
  return Zynamic::Forward<bool ()>(L"CreateDebugLinesIfNeeded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddDebugLineInternal(const float* start, const float* end, const float* color, int depthTest, int duration, struct clientDebugLineInfo_t* info) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int, int, struct clientDebugLineInfo_t*)>(L"AddDebugLineInternal")(start, end, color, depthTest, duration, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugLine(const float* start, const float* end, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int, int)>(L"CL_AddDebugLine")(start, end, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugAxis(const float* origin, const float* axis[0x3], float length, int doDepthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float, int, int)>(L"CL_AddDebugAxis")(origin, axis, length, doDepthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugStarWithText(const float* point, const float* starColor, const float* textColor, const char* string, float fontsize, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, const char*, float, int)>(L"CL_AddDebugStarWithText")(point, starColor, textColor, string, fontsize, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugStar(const float* point, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, int)>(L"CL_AddDebugStar")(point, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugBox(const float* origin, const float* mins, const float* maxs, float yaw, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float, const float*, int, int)>(L"CL_AddDebugBox")(origin, mins, maxs, yaw, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddDebugBox(const float* axis[0x3], const float* origin, const float* mins, const float* maxs, const float* color, int depthTest, int duration) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, const float*, const float*, const float*, int, int)>(L"CL_AddDebugBox")(axis, origin, mins, maxs, color, depthTest, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FlushDebugStrings(struct clientDebugStringInfo_t* info, int fromServer) -> void
{
  return Zynamic::Forward<void (struct clientDebugStringInfo_t*, int)>(L"FlushDebugStrings")(info, fromServer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FlushDebugLines(struct clientDebugLineInfo_t* info, int fromServer) -> void
{
  return Zynamic::Forward<void (struct clientDebugLineInfo_t*, int)>(L"FlushDebugLines")(info, fromServer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FlushDebugSpheres(struct clientDebugSphereInfo_t* info, int fromServer) -> void
{
  return Zynamic::Forward<void (struct clientDebugSphereInfo_t*, int)>(L"FlushDebugSpheres")(info, fromServer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FlushDebugClientData() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FlushDebugClientData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateDebugClientData() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateDebugClientData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_FlushDebugServerData() -> void
{
  return Zynamic::Forward<void ()>(L"CL_FlushDebugServerData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateDebugServerData() -> void
{
  return Zynamic::Forward<void ()>(L"CL_UpdateDebugServerData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShutdownDebugData() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ShutdownDebugData")();
}

#endif // __UNIMPLEMENTED__
