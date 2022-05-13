//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_smodelLightGlob''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_smodelLightGlob''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ModelLightingIndexFromHandle(unsigned short handle) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned short)>(L"R_ModelLightingIndexFromHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingCoords(unsigned short handle, float* out) -> void
{
  return Zynamic::Forward<void (unsigned short, float*)>(L"R_SetModelLightingCoords")(handle, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticModelLighting(const struct GfxStaticModelDrawInst* smodelDrawInst, unsigned int smodelIndex) -> bool
{
  return Zynamic::Forward<bool (const struct GfxStaticModelDrawInst*, unsigned int)>(L"R_AllocStaticModelLighting")(smodelDrawInst, smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting(const float* lightingOrigin, float lightingOriginToleranceSq, bool useHeroLighting, unsigned short* cachedLightingHandle, function* GetPrimaryLightCallback, const void* userData, struct GfxLightingInfo* lightingInfoOut) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, float, bool, unsigned short*, function *, const void*, struct GfxLightingInfo*)>(L"R_AllocModelLighting")(lightingOrigin, lightingOriginToleranceSq, useHeroLighting, cachedLightingHandle, GetPrimaryLightCallback, userData, lightingInfoOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DynEntPrimaryLightCallback(const void* userData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const void*)>(L"R_DynEntPrimaryLightCallback")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightForBoxCallback(const void* userData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const void*)>(L"R_GetPrimaryLightForBoxCallback")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightForSphereCallback(const void* userData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const void*)>(L"R_GetPrimaryLightForSphereCallback")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PassbackPrimaryLightCallback(const void* userData) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const void*)>(L"R_PassbackPrimaryLightCallback")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_DynEnts(const float* lightingOrigin, unsigned int dynEntId, bool useHeroLighting, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, unsigned int, bool, unsigned short*, struct GfxLightingInfo*)>(L"R_AllocModelLighting_DynEnts")(lightingOrigin, dynEntId, useHeroLighting, cachedLightingHandle, lightingInfoOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_PrimaryLight(const float* lightingOrigin, unsigned int primaryLightIndex, bool useHeroLighting, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*, unsigned int, bool, unsigned short*, struct GfxLightingInfo*)>(L"R_AllocModelLighting_PrimaryLight")(lightingOrigin, primaryLightIndex, useHeroLighting, cachedLightingHandle, lightingInfoOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_Box(const struct GfxViewInfo* viewInfo, const float* lightingOrigin, float originToleranceSq, const float* boxMins, const float* boxMaxs, bool useHeroLighting, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxViewInfo*, const float*, float, const float*, const float*, bool, unsigned short*, struct GfxLightingInfo*)>(L"R_AllocModelLighting_Box")(viewInfo, lightingOrigin, originToleranceSq, boxMins, boxMaxs, useHeroLighting, cachedLightingHandle, lightingInfoOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_Sphere(const struct GfxViewInfo* viewInfo, const float* lightingOrigin, float originToleranceSq, const float* origin, float radius, bool useHeroLighting, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxViewInfo*, const float*, float, const float*, float, bool, unsigned short*, struct GfxLightingInfo*)>(L"R_AllocModelLighting_Sphere")(viewInfo, lightingOrigin, originToleranceSq, origin, radius, useHeroLighting, cachedLightingHandle, lightingInfoOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ToggleModelLightingFrame() -> void
{
  return Zynamic::Forward<void ()>(L"R_ToggleModelLightingFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcModelLightingCmd(struct CalcLightingCmd* data) -> void
{
  return Zynamic::Forward<void (struct CalcLightingCmd*)>(L"R_CalcModelLightingCmd")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcModelLighting(unsigned int entryIndex, const float* lightingOrigin, unsigned int nonSunPrimaryLightIndex, enum GfxModelLightExtrapolation extrapolateBehavior, bool useHeroLighting, unsigned char* primaryLightIndex1, unsigned char* primaryLightIndex2) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, unsigned int, enum GfxModelLightExtrapolation, bool, unsigned char*, unsigned char*)>(L"R_CalcModelLighting")(entryIndex, lightingOrigin, nonSunPrimaryLightIndex, extrapolateBehavior, useHeroLighting, primaryLightIndex1, primaryLightIndex2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelGroundLighting(unsigned int entryIndex, const unsigned char* groundLighting) -> void
{
  return Zynamic::Forward<void (unsigned int, const unsigned char*)>(L"R_SetModelGroundLighting")(entryIndex, groundLighting);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelLighting(unsigned int smodelIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_SetStaticModelLighting")(smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginAllStaticModelLighting() -> void
{
  return Zynamic::Forward<void ()>(L"R_BeginAllStaticModelLighting")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAllStaticModelLighting() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetAllStaticModelLighting")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelLightingCoords(unsigned int smodelIndex, float* out) -> void
{
  return Zynamic::Forward<void (unsigned int, float*)>(L"R_SetStaticModelLightingCoords")(smodelIndex, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetStaticModelLightingCoordsForSource(unsigned int smodelIndex, struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (unsigned int, struct GfxCmdBufSourceState*)>(L"R_SetStaticModelLightingCoordsForSource")(smodelIndex, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPackedStaticModelLightingCoords(unsigned int smodelIndex, union PackedLightingCoords* packedCoords) -> void
{
  return Zynamic::Forward<void (unsigned int, union PackedLightingCoords*)>(L"R_GetPackedStaticModelLightingCoords")(smodelIndex, packedCoords);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_StaticModelHasLighting(unsigned int smodelIndex) -> bool
{
  return Zynamic::Forward<bool (unsigned int)>(L"R_StaticModelHasLighting")(smodelIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingSampleDeltas() -> void
{
  return Zynamic::Forward<void ()>(L"R_SetModelLightingSampleDeltas")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PatchModelLighting(const struct GfxModelLightingPatch* patchList, unsigned int patchCount) -> void
{
  return Zynamic::Forward<void (const struct GfxModelLightingPatch*, unsigned int)>(L"RB_PatchModelLighting")(patchList, patchCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingLookupScale(struct GfxCmdBufInput* input) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*)>(L"R_SetModelLightingLookupScale")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupDynamicModelLighting(struct GfxCmdBufInput* input) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufInput*)>(L"R_SetupDynamicModelLighting")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupCachedStaticModelLighting(struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*)>(L"R_SetupCachedStaticModelLighting")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLightingGlobal(unsigned int bytes) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"R_AllocModelLightingGlobal")(bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitModelLightingGlobals() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitModelLightingGlobals")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownModelLightingGlobals() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownModelLightingGlobals")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResetModelLighting() -> void
{
  return Zynamic::Forward<void ()>(L"R_ResetModelLighting")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitModelLightingImage() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitModelLightingImage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownModelLightingImage() -> void
{
  return Zynamic::Forward<void ()>(L"R_ShutdownModelLightingImage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitStaticModelLighting(unsigned int smodelCount) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_InitStaticModelLighting")(smodelCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingCoordsForSource(unsigned short handle, struct GfxCmdBufSourceState* source) -> void
{
  return Zynamic::Forward<void (unsigned short, struct GfxCmdBufSourceState*)>(L"R_SetModelLightingCoordsForSource")(handle, source);
}

#endif // __UNIMPLEMENTED__
