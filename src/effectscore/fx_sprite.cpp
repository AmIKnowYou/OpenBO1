//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_BuildQuadStampCodeMeshVerts(struct Material* material, const float* viewAxis, const float* origin, const float* left, const float* up, const unsigned char* rgbaColor, float s0, float t0, float s1, float t1) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*, const float*, const float*, const float*, const unsigned char*, float, float, float, float)>(L"FX_BuildQuadStampCodeMeshVerts")(material, viewAxis, origin, left, up, rgbaColor, s0, t0, s1, t1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BuildSpriteCodeMeshVerts(struct Material* material, const float* pos, float worldRadius, const unsigned char* rgbaColor, int spriteFlags) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*, float, const unsigned char*, int)>(L"FX_BuildSpriteCodeMeshVerts")(material, pos, worldRadius, rgbaColor, spriteFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetClipSpaceW(const float* worldPoint, float* vieworg, float* viewaxis[0x3]) -> float
{
  return Zynamic::Forward<float (const float*, float*, float*[0x3])>(L"FX_GetClipSpaceW")(worldPoint, vieworg, viewaxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_HeightScreenToWorld(const float* worldOrigin, float screenHeight, float* worldHeight, struct FxGenerateVertsCmd* cmd) -> bool
{
  return Zynamic::Forward<bool (const float*, float, float*, struct FxGenerateVertsCmd*)>(L"FX_HeightScreenToWorld")(worldOrigin, screenHeight, worldHeight, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_HeightWorldToScreen(const float* worldOrigin, float worldHeight, float* screenHeight, struct FxGenerateVertsCmd* cmd) -> bool
{
  return Zynamic::Forward<bool (const float*, float, float*, struct FxGenerateVertsCmd*)>(L"FX_HeightWorldToScreen")(worldOrigin, worldHeight, screenHeight, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateSpriteCodeMeshVertsFixedScreenSize(struct Material* material, const float* pos, float radius, const unsigned char* rgbaColor, int spriteFlags, struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*, float, const unsigned char*, int, struct FxGenerateVertsCmd*)>(L"FX_GenerateSpriteCodeMeshVertsFixedScreenSize")(material, pos, radius, rgbaColor, spriteFlags, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateSpriteCodeMeshVertsFixedWorldSize(struct Material* material, const float* pos, float radius, float minScreenRadius, const unsigned char* rgbaColor, int spriteFlags, struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*, float, float, const unsigned char*, int, struct FxGenerateVertsCmd*)>(L"FX_GenerateSpriteCodeMeshVertsFixedWorldSize")(material, pos, radius, minScreenRadius, rgbaColor, spriteFlags, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateSpriteCodeMeshVerts(struct FxSprite* sprite, struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxSprite*, struct FxGenerateVertsCmd*)>(L"FX_GenerateSpriteCodeMeshVerts")(sprite, cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpriteGenerateVerts(struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxGenerateVertsCmd*)>(L"FX_SpriteGenerateVerts")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpriteBegin() -> void
{
  return Zynamic::Forward<void ()>(L"FX_SpriteBegin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpriteAdd(struct FxSprite* sprite) -> void
{
  return Zynamic::Forward<void (struct FxSprite*)>(L"FX_SpriteAdd")(sprite);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpriteGetInfo() -> struct FxSpriteInfo*
{
  return Zynamic::Forward<struct FxSpriteInfo* ()>(L"FX_SpriteGetInfo")();
}

#endif // __UNIMPLEMENTED__
