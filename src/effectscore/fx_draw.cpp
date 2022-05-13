//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_RegionForReflect(const struct FxReflectParams& reflect) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct FxReflectParams&)>(L"FX_RegionForReflect")(reflect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetNullReflection(struct FxReflectParams& params) -> void
{
  return Zynamic::Forward<void (struct FxReflectParams&)>(L"FX_GetNullReflection")(params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetReflection(bool on, float height, struct FxReflectParams& params) -> void
{
  return Zynamic::Forward<void (bool, float, struct FxReflectParams&)>(L"FX_GetReflection")(on, height, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InterpolateColor(const struct FxElemVisStateSample* refState, float valueLerp, float valueLerpInv, float sampleLerp, float sampleLerpInv, int channel) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct FxElemVisStateSample*, float, float, float, float, int)>(L"FX_InterpolateColor")(refState, valueLerp, valueLerpInv, sampleLerp, sampleLerpInv, channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IntegrateRotationFromZero(const struct FxElemVisStateSample* refState, int randomSeed, enum FxRandKey randomKey, float sampleLerp, float msecLifeSpan) -> float
{
  return Zynamic::Forward<float (const struct FxElemVisStateSample*, int, enum FxRandKey, float, float)>(L"FX_IntegrateRotationFromZero")(refState, randomSeed, randomKey, sampleLerp, msecLifeSpan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateVisAlpha(struct FxElemPreVisualState* preVisState, struct FxElemVisualState* visState) -> void
{
  return Zynamic::Forward<void (struct FxElemPreVisualState*, struct FxElemVisualState*)>(L"FX_EvaluateVisAlpha")(preVisState, visState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetupVisualState(const struct FxElemDef* elemDef, const struct FxEffect* effect, int randomSeed, float normTimeUpdateEnd, struct FxElemPreVisualState* preVisState) -> void
{
  return Zynamic::Forward<void (const struct FxElemDef*, const struct FxEffect*, int, float, struct FxElemPreVisualState*)>(L"FX_SetupVisualState")(elemDef, effect, randomSeed, normTimeUpdateEnd, preVisState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateSize(struct FxElemPreVisualState* preVisState, struct FxElemVisualState* visState) -> void
{
  return Zynamic::Forward<void (struct FxElemPreVisualState*, struct FxElemVisualState*)>(L"FX_EvaluateSize")(preVisState, visState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LerpFloat(float grid, float tint, float fraction) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"FX_LerpFloat")(grid, tint, fraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateVisualState(int localClientNum, struct FxElemPreVisualState* preVisState, float msecLifeSpan, struct FxElemVisualState* visState) -> void
{
  return Zynamic::Forward<void (int, struct FxElemPreVisualState*, float, struct FxElemVisualState*)>(L"FX_EvaluateVisualState")(localClientNum, preVisState, msecLifeSpan, visState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSpriteTexCoords(const struct FxDrawState* draw, float* s0, float* ds, float* t0, float* dt) -> void
{
  return Zynamic::Forward<void (const struct FxDrawState*, float*, float*, float*, float*)>(L"FX_GetSpriteTexCoords")(draw, s0, ds, t0, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenSpriteVerts(struct FxDrawState* draw, const float* tangent, const float* binormal, const float* normal) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*, const float*, const float*, const float*)>(L"FX_GenSpriteVerts")(draw, tangent, binormal, normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenTrail_IndsForSegment(struct FxDrawState* draw, unsigned short reservedBaseVertex, struct r_double_index_t* outIndices) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*, unsigned short, struct r_double_index_t*)>(L"FX_GenTrail_IndsForSegment")(draw, reservedBaseVertex, outIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Fx_GenTrail_PopulateSegmentDrawState(struct FxDrawState* draw, float spawnDist, float uCoordOffset, const float* basis[0x3], struct FxTrailSegmentDrawState* outState) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*, float, float, const float*[0x3], struct FxTrailSegmentDrawState*)>(L"Fx_GenTrail_PopulateSegmentDrawState")(draw, spawnDist, uCoordOffset, basis, outState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenTrail_VertsForSegment(const struct FxTrailSegmentDrawState* segmentDrawState, struct GfxPackedVertex* remoteVerts) -> void
{
  return Zynamic::Forward<void (const struct FxTrailSegmentDrawState*, struct GfxPackedVertex*)>(L"FX_GenTrail_VertsForSegment")(segmentDrawState, remoteVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_FrustumPlaneCount(const struct FxDrawState* draw) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct FxDrawState*)>(L"FX_CullElementForDraw_FrustumPlaneCount")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_Sprite(const struct FxDrawState* draw) -> bool
{
  return Zynamic::Forward<bool (const struct FxDrawState*)>(L"FX_CullElementForDraw_Sprite")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_BillboardSprite_NoCull(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_BillboardSprite_NoCull")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_BillboardSprite(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_BillboardSprite")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_OrientedSprite_NoCull(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_OrientedSprite_NoCull")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_OrientedSprite(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_OrientedSprite")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetMsecForSamplingAxis(float msecElapsed, float msecLifeSpan, int atRestFraction) -> float
{
  return Zynamic::Forward<float (float, float, int)>(L"FX_GetMsecForSamplingAxis")(msecElapsed, msecLifeSpan, atRestFraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetPlacement(const struct FxDrawState* draw, struct GfxScaledPlacement* placement) -> void
{
  return Zynamic::Forward<void (const struct FxDrawState*, struct GfxScaledPlacement*)>(L"FX_SetPlacement")(draw, placement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullCylinder(const struct FxCamera* camera, unsigned int frustumPlaneCount, const float* posWorld0, const float* posWorld1, float radius) -> bool
{
  return Zynamic::Forward<bool (const struct FxCamera*, unsigned int, const float*, const float*, float)>(L"FX_CullCylinder")(camera, frustumPlaneCount, posWorld0, posWorld1, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_Tail(const struct FxDrawState* draw) -> bool
{
  return Zynamic::Forward<bool (const struct FxDrawState*)>(L"FX_CullElementForDraw_Tail")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Tail_Main(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Tail_Main")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Tail(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Tail")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElement_Line(const struct FxDrawState* draw) -> bool
{
  return Zynamic::Forward<bool (const struct FxDrawState*)>(L"FX_CullElement_Line")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Line_Main(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Line_Main")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Line(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Line")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_RotatedSprite_NoCull(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_RotatedSprite_NoCull")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_RotatedSprite(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_RotatedSprite")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateDistanceFade(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_EvaluateDistanceFade")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Cloud_Main(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Cloud_Main")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_Cloud(const struct FxDrawState* draw) -> bool
{
  return Zynamic::Forward<bool (const struct FxDrawState*)>(L"FX_CullElementForDraw_Cloud")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Cloud(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Cloud")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetPlacementFromPhysics(const struct FxDrawState* draw, struct GfxPlacement* placement) -> void
{
  return Zynamic::Forward<void (const struct FxDrawState*, struct GfxPlacement*)>(L"FX_SetPlacementFromPhysics")(draw, placement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Model(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Model")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_Light(const struct FxDrawState* draw) -> bool
{
  return Zynamic::Forward<bool (const struct FxDrawState*)>(L"FX_CullElementForDraw_Light")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Light_NoCull(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Light_NoCull")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_Light(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_Light")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_SpotLight_NoCull(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_SpotLight_NoCull")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_SpotLight(struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxDrawState*)>(L"FX_DrawElem_SpotLight")(draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElement_Setup<1>(struct FxSystem* system, struct FxDrawState* draw, int elemMsecBegin, int elemSequence, const float* elemOrigin, const float elemWindInterp, float* outRealNormTime) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxDrawState*, int, int, const float*, const float, float*)>(L"FX_DrawElement_Setup<1>")(system, draw, elemMsecBegin, elemSequence, elemOrigin, elemWindInterp, outRealNormTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElement(struct FxSystem* system, const struct FxElemDef* elemDef, struct FxElem* elem, struct FxDrawState* draw) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, const struct FxElemDef*, struct FxElem*, struct FxDrawState*)>(L"FX_DrawElement")(system, elemDef, elem, draw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawTrail(struct FxSystem* system, struct FxDrawState* draw, struct FxTrail* trail) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxDrawState*, struct FxTrail*)>(L"FX_DrawTrail")(system, draw, trail);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawTrailsForEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime, const struct FxReflectParams& reflect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, int, const struct FxReflectParams&)>(L"FX_DrawTrailsForEffect")(system, effect, drawTime, reflect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpriteEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime, const struct FxReflectParams& reflect, unsigned int cameraType) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, int, const struct FxReflectParams&, unsigned int)>(L"FX_DrawSpriteEffect")(system, effect, drawTime, reflect, cameraType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpotLightEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, int)>(L"FX_DrawSpotLightEffect")(system, effect, drawTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ElemSpawnedVisibleToCamera(unsigned int elemSpawnVisBits, unsigned int cameraType) -> bool
{
  return Zynamic::Forward<bool (unsigned int, unsigned int)>(L"FX_ElemSpawnedVisibleToCamera")(elemSpawnVisBits, cameraType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawNonSpriteEffect(struct FxSystem* system, struct FxEffect* effect, unsigned int elemClass, int drawTime, const struct FxReflectParams& reflect, unsigned int cameraType) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, unsigned int, int, const struct FxReflectParams&, unsigned int)>(L"FX_DrawNonSpriteEffect")(system, effect, elemClass, drawTime, reflect, cameraType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawNonSpriteElems(struct FxSystem* system, const struct FxReflectParams& reflect, unsigned int cameraType) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, const struct FxReflectParams&, unsigned int)>(L"FX_DrawNonSpriteElems")(system, reflect, cameraType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpotLight(struct FxSystem* system) -> void
{
  return Zynamic::Forward<void (struct FxSystem*)>(L"FX_DrawSpotLight")(system);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpriteElems(struct FxSystem* system, int drawTime, const struct FxReflectParams& reflect, unsigned int cameraType) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, int, const struct FxReflectParams&, unsigned int)>(L"FX_DrawSpriteElems")(system, drawTime, reflect, cameraType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateVerts(struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxGenerateVertsCmd*)>(L"FX_GenerateVerts")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillGenerateVertsCmd(int localClientNum, struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (int, struct FxGenerateVertsCmd*)>(L"FX_FillGenerateVertsCmd")(localClientNum, cmd);
}

#endif // __UNIMPLEMENTED__
