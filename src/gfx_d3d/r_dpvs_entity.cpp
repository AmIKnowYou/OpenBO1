//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_BoundsInCell_r(struct mnode_t* node, int findCellIndex, const float* mins, const float* maxs) -> int
{
  return Zynamic::Forward<int (struct mnode_t*, int, const float*, const float*)>(L"R_BoundsInCell_r")(node, findCellIndex, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BoundsInCell(struct mnode_t* node, int findCellIndex, const float* mins, const float* maxs) -> int
{
  return Zynamic::Forward<int (struct mnode_t*, int, const float*, const float*)>(L"R_BoundsInCell")(node, findCellIndex, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddEntitySurfacesInFrustumCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_AddEntitySurfacesInFrustumCmd")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceAddEntitySurfacesInFrustumCmd(struct GfxSceneEntity* sceneEnt, unsigned char* entVisData) -> void
{
  return Zynamic::Forward<void (struct GfxSceneEntity*, unsigned char*)>(L"R_ForceAddEntitySurfacesInFrustumCmd")(sceneEnt, entVisData);
}

#endif // __UNIMPLEMENTED__
