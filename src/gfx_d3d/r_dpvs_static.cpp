//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_CullBoxLeaf(const float* minmax, struct DpvsClipPlanes* planes) -> int
{
  return Zynamic::Forward<int (const float*, struct DpvsClipPlanes*)>(L"R_CullBoxLeaf")(minmax, planes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TestOccluders(const float* bounds[0x3], int numOccluders, float* plane[0x4]) -> bool
{
  return Zynamic::Forward<bool (const float*[0x3], int, float*[0x4])>(L"TestOccluders")(bounds, numOccluders, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TestOccludersPartial(const float* bounds[0x3], int* numOccludersPtr, float* plane[0x4]) -> float*
{
  return Zynamic::Forward<float* (const float*[0x3], int*, float*[0x4])>(L"TestOccludersPartial")(bounds, numOccludersPtr, plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAabbTreeSurfacesInFrustum_r(const struct GfxAabbTree* tree, const struct DpvsClipPlanes* planes, int treeDepth, int numOccluders, float* occluderPlanes[0x4]) -> int
{
  return Zynamic::Forward<int (const struct GfxAabbTree*, const struct DpvsClipPlanes*, int, int, float*[0x4])>(L"R_AddAabbTreeSurfacesInFrustum_r")(tree, planes, treeDepth, numOccluders, occluderPlanes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CopyClipPlanes(const struct DpvsPlane* in, struct DpvsPlane* out) -> void
{
  return Zynamic::Forward<void (const struct DpvsPlane*, struct DpvsPlane*)>(L"R_CopyClipPlanes")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcSurfaceNoDynamicShadow(unsigned int bits, struct GfxSurface* localSurfaces, union GfxDrawSurf* localDrawSurfaces) -> bool
{
  return Zynamic::Forward<bool (unsigned int, struct GfxSurface*, union GfxDrawSurf*)>(L"R_CalcSurfaceNoDynamicShadow")(bits, localSurfaces, localDrawSurfaces);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellStaticSurfacesInFrustum(struct DpvsStaticCellCmd* dpvsCell) -> int
{
  return Zynamic::Forward<int (struct DpvsStaticCellCmd*)>(L"R_AddCellStaticSurfacesInFrustum")(dpvsCell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellCullGroupsInFrustum(struct DpvsStaticCellCmd* dpvsCell) -> void
{
  return Zynamic::Forward<void (struct DpvsStaticCellCmd*)>(L"R_AddCellCullGroupsInFrustum")(dpvsCell);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellStaticSurfacesInFrustumCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_AddCellStaticSurfacesInFrustumCmd")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSkySurfacesDpvs(const struct DpvsPlane* planes, int planeCount) -> void
{
  return Zynamic::Forward<void (const struct DpvsPlane*, int)>(L"R_AddSkySurfacesDpvs")(planes, planeCount);
}

#endif // __UNIMPLEMENTED__
