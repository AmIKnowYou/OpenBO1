//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_debug() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_rb_debug")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AddDebugLine(const float* start, const float* end, const float* color, bool depthTest, int vertCount, int vertLimit, struct GfxPointVertex* verts) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*, bool, int, int, struct GfxPointVertex*)>(L"RB_AddDebugLine")(start, end, color, depthTest, vertCount, vertLimit, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndDebugLines(int vertCount, const struct GfxPointVertex* verts) -> int
{
  return Zynamic::Forward<int (int, const struct GfxPointVertex*)>(L"RB_EndDebugLines")(vertCount, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetPolyVert(const float* xyz, union GfxColor color, int tessVertIndex) -> void
{
  return Zynamic::Forward<void (const float*, union GfxColor, int)>(L"RB_SetPolyVert")(xyz, color, tessVertIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DebugPolyGetMaterialByDepthTest(bool depthTest, bool blend) -> const struct Material*
{
  return Zynamic::Forward<const struct Material* (bool, bool)>(L"RB_DebugPolyGetMaterialByDepthTest")(depthTest, blend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPolyInteriors(struct PolySet* polySet) -> void
{
  return Zynamic::Forward<void (struct PolySet*)>(L"RB_DrawPolyInteriors")(polySet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPolyOutlines(struct PolySet* polySet) -> void
{
  return Zynamic::Forward<void (struct PolySet*)>(L"RB_DrawPolyOutlines")(polySet);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugPolys() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DrawDebugPolys")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugSphere(struct trDebugSphere_t* sphere) -> void
{
  return Zynamic::Forward<void (struct trDebugSphere_t*)>(L"RB_DrawDebugSphere")(sphere);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugSpheres(struct trDebugSphere_t* spheres, int sphereCount) -> void
{
  return Zynamic::Forward<void (struct trDebugSphere_t*, int)>(L"RB_DrawDebugSpheres")(spheres, sphereCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugLines(struct trDebugLine_t* lines, int lineCount, struct GfxPointVertex* verts) -> void
{
  return Zynamic::Forward<void (struct trDebugLine_t*, int, struct GfxPointVertex*)>(L"RB_DrawDebugLines")(lines, lineCount, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugStrings(struct trDebugString_t* strings, int stringCount) -> void
{
  return Zynamic::Forward<void (struct trDebugString_t*, int)>(L"RB_DrawDebugStrings")(strings, stringCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AddPlumeStrings(const struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*)>(L"RB_AddPlumeStrings")(viewParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetDebugBrushesAndPatchesCallback(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"RB_SetDebugBrushesAndPatchesCallback")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebugBrushesAndPatches() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DrawDebugBrushesAndPatches")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawDebug(const struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*)>(L"RB_DrawDebug")(viewParms);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ApplySunLight(const float* verts[0x3], const float* color, float* out_color) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, float*)>(L"RB_ApplySunLight")(verts, color, out_color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BeginCollisionPolygons(bool faceDepthTest, bool faceBlend) -> void
{
  return Zynamic::Forward<void (bool, bool)>(L"RB_BeginCollisionPolygons")(faceDepthTest, faceBlend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCollisionPolygon(int vertCount, const float* verts[0x3], const float* faceColor, bool faceDepthTest, int debug_partition) -> void
{
  return Zynamic::Forward<void (int, const float*[0x3], const float*, bool, int)>(L"RB_DrawCollisionPolygon")(vertCount, verts, faceColor, faceDepthTest, debug_partition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GetCmd() -> struct materialCommands_t*
{
  return Zynamic::Forward<struct materialCommands_t* ()>(L"RB_GetCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndCollisionPolygons() -> void
{
  return Zynamic::Forward<void ()>(L"RB_EndCollisionPolygons")();
}

#endif // __UNIMPLEMENTED__
