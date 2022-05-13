//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_debug() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_debug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugPolygonInternal(struct PolySet* polySet, int pointCount, const float* points[0x3], const float* faceColor, bool faceDepthTest, const float* edgeColor, bool edgeDepthTest) -> void
{
  return Zynamic::Forward<void (struct PolySet*, int, const float*[0x3], const float*, bool, const float*, bool)>(L"R_AddDebugPolygonInternal")(polySet, pointCount, points, faceColor, faceDepthTest, edgeColor, edgeDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugPolygon(struct DebugGlobals* debugGlobalsEntry, int pointCount, const float* points[0x3], const float* faceColor, bool faceDepthTest, const float* edgeColor, bool edgeDepthTest) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, int, const float*[0x3], const float*, bool, const float*, bool)>(L"R_AddDebugPolygon")(debugGlobalsEntry, pointCount, points, faceColor, faceDepthTest, edgeColor, edgeDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddPersistentDebugPolygon(struct DebugGlobals* debugGlobalsEntry, int pointCount, const float* points[0x3], const float* faceColor, bool faceDepthTest, const float* edgeColor, bool edgeDepthTest) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, int, const float*[0x3], const float*, bool, const float*, bool)>(L"R_AddPersistentDebugPolygon")(debugGlobalsEntry, pointCount, points, faceColor, faceDepthTest, edgeColor, edgeDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearPersistentDebugPolygons() -> void
{
  return Zynamic::Forward<void ()>(L"R_ClearPersistentDebugPolygons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugAxis(struct DebugGlobals* debugGlobalsEntry, const float* origin, const float* axis[0x3], float length, int doDepthTest) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, const float*, const float*[0x3], float, int)>(L"R_AddDebugAxis")(debugGlobalsEntry, origin, axis, length, doDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugLine(struct DebugGlobals* debugGlobalsEntry, const float* start, const float* end, const float* color, int doDepthTest) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, const float*, const float*, const float*, int)>(L"R_AddDebugLine")(debugGlobalsEntry, start, end, color, doDepthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugBox(struct DebugGlobals* debugGlobalsEntry, const float* mins, const float* maxs, const float* color) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, const float*, const float*, const float*)>(L"R_AddDebugBox")(debugGlobalsEntry, mins, maxs, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDebugString(struct DebugGlobals* debugGlobalsEntry, const float* origin, const float* color, float scale, const char* string) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, const float*, const float*, float, const char*)>(L"R_AddDebugString")(debugGlobalsEntry, origin, color, scale, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddScaledDebugString(struct DebugGlobals* debugGlobalsEntry, const struct GfxViewParms* viewParms, const float* origin, const float* color, const char* string) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*, const struct GfxViewParms*, const float*, const float*, const char*)>(L"R_AddScaledDebugString")(debugGlobalsEntry, viewParms, origin, color, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDebugEntry(struct DebugGlobals* debugGlobalsEntry) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*)>(L"R_InitDebugEntry")(debugGlobalsEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDebug() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownDebugEntry(struct DebugGlobals* debugGlobalsEntry) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*)>(L"R_ShutdownDebugEntry")(debugGlobalsEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdatePersistentDebugPolys(struct DebugGlobals* debugGlobalsEntry) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*)>(L"R_UpdatePersistentDebugPolys")(debugGlobalsEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TransferDebugGlobals(struct DebugGlobals* debugGlobalsEntry) -> void
{
  return Zynamic::Forward<void (struct DebugGlobals*)>(L"R_TransferDebugGlobals")(debugGlobalsEntry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownDebug() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownDebug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyDebugStrings(struct trDebugString_t* clStrings, int clStringCnt, struct trDebugString_t* svStrings, int svStringCnt, int maxStringCount) -> void
{
  return Zynamic::Forward<void (struct trDebugString_t*, int, struct trDebugString_t*, int, int)>(L"R_CopyDebugStrings")(clStrings, clStringCnt, svStrings, svStringCnt, maxStringCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyDebugLines(struct trDebugLine_t* clLines, int clLineCnt, struct trDebugLine_t* svLines, int svLineCnt, int maxLineCount) -> void
{
  return Zynamic::Forward<void (struct trDebugLine_t*, int, struct trDebugLine_t*, int, int)>(L"R_CopyDebugLines")(clLines, clLineCnt, svLines, svLineCnt, maxLineCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyDebugSpheres(struct trDebugSphere_t* clSpheres, int clSphereCnt, struct trDebugSphere_t* svSpheres, int svSphereCnt, int maxSphereCount) -> void
{
  return Zynamic::Forward<void (struct trDebugSphere_t*, int, struct trDebugSphere_t*, int, int)>(L"R_CopyDebugSpheres")(clSpheres, clSphereCnt, svSpheres, svSphereCnt, maxSphereCount);
}

#endif // __UNIMPLEMENTED__
