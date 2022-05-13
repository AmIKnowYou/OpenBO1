//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_InterpolateSamples(int dimensions, float time0, const float* samples0, float time1, const float* samples1, float timeEval, float* result) -> void
{
  return Zynamic::Forward<void (int, float, const float*, float, const float*, float, float*)>(L"FX_InterpolateSamples")(dimensions, time0, samples0, time1, samples1, timeEval, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleCurve1D(const struct FxCurve* curve, float scale, float time) -> float
{
  return Zynamic::Forward<float (const struct FxCurve*, float, float)>(L"FX_SampleCurve1D")(curve, scale, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleCurve3D(const struct FxCurve* curve, float scale, float time, float* value) -> void
{
  return Zynamic::Forward<void (const struct FxCurve*, float, float, float*)>(L"FX_SampleCurve3D")(curve, scale, time, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MaxErrorForIntervalCount(int dimensions, int sampleCount, const float* samples, int intervalCount, float errorCutoff) -> float
{
  return Zynamic::Forward<float (int, int, const float*, int, float)>(L"FX_MaxErrorForIntervalCount")(dimensions, sampleCount, samples, intervalCount, errorCutoff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DecideSampleCount(int curveCount, const struct FxCurve** curves, int intervalLimit) -> int
{
  return Zynamic::Forward<int (int, const struct FxCurve**, int)>(L"FX_DecideSampleCount")(curveCount, curves, intervalLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DecideVelocitySampleCount(const struct FxEditorElemDef* edElem, int intervalLimit) -> int
{
  return Zynamic::Forward<int (const struct FxEditorElemDef*, int)>(L"FX_DecideVelocitySampleCount")(edElem, intervalLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetVisualSampleRouting(const struct FxEditorElemDef* edElem, enum FxSampleChannel* routing) -> void
{
  return Zynamic::Forward<void (const struct FxEditorElemDef*, enum FxSampleChannel*)>(L"FX_GetVisualSampleRouting")(edElem, routing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DecideVisualSampleCount(const struct FxEditorElemDef* edElem, const enum FxSampleChannel* routing, int intervalLimit) -> int
{
  return Zynamic::Forward<int (const struct FxEditorElemDef*, const enum FxSampleChannel*, int)>(L"FX_DecideVisualSampleCount")(edElem, routing, intervalLimit);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DecideIntervalLimit(const struct FxEditorElemDef* edElemDef) -> int
{
  return Zynamic::Forward<int (const struct FxEditorElemDef*)>(L"FX_DecideIntervalLimit")(edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleVelocityInFrame(struct FxElemDef* elemDef, const float* velScale[0x3], struct FxElemVelStateInFrame* velState, int velStateStride, int useGraphBit, const struct FxEditorElemDef* edElemDef) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, const float*[0x3], struct FxElemVelStateInFrame*, int, int, const struct FxEditorElemDef*)>(L"FX_SampleVelocityInFrame")(elemDef, velScale, velState, velStateStride, useGraphBit, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleVelocity(struct FxElemDef* elemDef, const struct FxEditorElemDef* edElemDef) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, const struct FxEditorElemDef*)>(L"FX_SampleVelocity")(elemDef, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleVisualStateScalar(const struct FxEditorElemDef* edElemDef, float sampleTime, enum FxSampleChannel routing, float scaleFactor, float* base, float* amplitude) -> void
{
  return Zynamic::Forward<void (const struct FxEditorElemDef*, float, enum FxSampleChannel, float, float*, float*)>(L"FX_SampleVisualStateScalar")(edElemDef, sampleTime, routing, scaleFactor, base, amplitude);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SampleVisualState(struct FxElemDef* elemDef, const struct FxEditorElemDef* edElemDef) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, const struct FxEditorElemDef*)>(L"FX_SampleVisualState")(elemDef, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ElemUsesMaterial(const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorElemDef*)>(L"FX_ElemUsesMaterial")(edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ValidateAtlasSettings(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_ValidateAtlasSettings")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertAtlas(struct FxElemDef* elemDef, const struct FxEditorElemDef* edElemDef) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, const struct FxEditorElemDef*)>(L"FX_ConvertAtlas")(elemDef, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ScaleFloatRange(struct FxFloatRange* to, const struct FxFloatRange* from, float scale) -> void
{
  return Zynamic::Forward<void (struct FxFloatRange*, const struct FxFloatRange*, float)>(L"FX_ScaleFloatRange")(to, from, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ReserveElemDefMemory(struct FxElemDef* elemDef, unsigned char** memPool) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, unsigned char**)>(L"FX_ReserveElemDefMemory")(elemDef, memPool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyMarkVisuals(const struct FxEditorElemDef* edElemDef, struct FxElemMarkVisuals* markVisualsArray) -> void
{
  return Zynamic::Forward<void (const struct FxEditorElemDef*, struct FxElemMarkVisuals*)>(L"FX_CopyMarkVisuals")(edElemDef, markVisualsArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyVisuals(const struct FxEditorElemDef* edElemDef, union FxElemVisuals* visualsArray) -> void
{
  return Zynamic::Forward<void (const struct FxEditorElemDef*, union FxElemVisuals*)>(L"FX_CopyVisuals")(edElemDef, visualsArray);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertEffectDefRef(union FxEffectDefRef* ref, const struct FxEffectDef* effectDef) -> void
{
  return Zynamic::Forward<void (union FxEffectDefRef*, const struct FxEffectDef*)>(L"FX_ConvertEffectDefRef")(ref, effectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyCanonicalRange<FxFloatRange, FxFloatRange>(struct FxFloatRange* to, const struct FxFloatRange* from) -> void
{
  return Zynamic::Forward<void (struct FxFloatRange*, const struct FxFloatRange*)>(L"FX_CopyCanonicalRange<FxFloatRange,FxFloatRange>")(to, from);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BoundFloatRange(struct FxFloatRange* range, float lower, float upper) -> void
{
  return Zynamic::Forward<void (struct FxFloatRange*, float, float)>(L"FX_BoundFloatRange")(range, lower, upper);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AdditionalBytesNeededForGeomTrail(const struct FxEditorElemDef* elemDef) -> int
{
  return Zynamic::Forward<int (const struct FxEditorElemDef*)>(L"FX_AdditionalBytesNeededForGeomTrail")(elemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertTrail_CalcNormForSegment(const float* vert0, const float* vert1, float* outNormal) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"FX_ConvertTrail_CalcNormForSegment")(vert0, vert1, outNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertTrail_CompileVertices(const struct FxEditorElemDef* edElemDef, struct FxTrailDef* outTrailDef, unsigned char** mempool) -> void
{
  return Zynamic::Forward<void (const struct FxEditorElemDef*, struct FxTrailDef*, unsigned char**)>(L"FX_ConvertTrail_CompileVertices")(edElemDef, outTrailDef, mempool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertTrail(struct FxTrailDef** outTrailDef, const struct FxEditorElemDef* edElemDef, unsigned char** mempool) -> void
{
  return Zynamic::Forward<void (struct FxTrailDef**, const struct FxEditorElemDef*, unsigned char**)>(L"FX_ConvertTrail")(outTrailDef, edElemDef, mempool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertElemSpawnSound(struct FxElemSpawnSound* dest, const struct FxElemSpawnSound* src, unsigned char** memPool) -> void
{
  return Zynamic::Forward<void (struct FxElemSpawnSound*, const struct FxElemSpawnSound*, unsigned char**)>(L"FX_ConvertElemSpawnSound")(dest, src, memPool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertElemDef(struct FxElemDef* elemDef, const struct FxEditorElemDef* edElemDef, int velStateCount, int visStateCount, int emitIndex, unsigned char** memPool) -> void
{
  return Zynamic::Forward<void (struct FxElemDef*, const struct FxEditorElemDef*, int, int, int, unsigned char**)>(L"FX_ConvertElemDef")(elemDef, edElemDef, velStateCount, visStateCount, emitIndex, memPool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FindEmission(const struct FxEffectDef* emission, const struct FxEditorEffectDef* editorEffect) -> int
{
  return Zynamic::Forward<int (const struct FxEffectDef*, const struct FxEditorEffectDef*)>(L"FX_FindEmission")(emission, editorEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ConvertElemDefsOfType(struct FxElemDef* elemDefArray, const struct FxEditorEffectDef* editorEffect, int loopingFlagState, const int* velStateCount, const int* visStateCount, const int* emitIndex, unsigned char** memPool) -> int
{
  return Zynamic::Forward<int (struct FxElemDef*, const struct FxEditorEffectDef*, int, const int*, const int*, const int*, unsigned char**)>(L"FX_ConvertElemDefsOfType")(elemDefArray, editorEffect, loopingFlagState, velStateCount, visStateCount, emitIndex, memPool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CopyEmittedElemDefs(struct FxElemDef* elemDefArray, const struct FxEditorEffectDef* editorEffect, unsigned char** memPool) -> int
{
  return Zynamic::Forward<int (struct FxElemDef*, const struct FxEditorEffectDef*, unsigned char**)>(L"FX_CopyEmittedElemDefs")(elemDefArray, editorEffect, memPool);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AdditionalBytesNeededForElemDef(unsigned char elemType, int velStateSampleCount, int visStateSampleCount, int visualCount, const struct FxElemSpawnSound* elemSpawnSound) -> int
{
  return Zynamic::Forward<int (unsigned char, int, int, int, const struct FxElemSpawnSound*)>(L"FX_AdditionalBytesNeededForElemDef")(elemType, velStateSampleCount, visStateSampleCount, visualCount, elemSpawnSound);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AdditionalBytesNeededForEmission(const struct FxEffectDef* emission) -> int
{
  return Zynamic::Forward<int (const struct FxEffectDef*)>(L"FX_AdditionalBytesNeededForEmission")(emission);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetLoopingLife(const struct FxEffectDef* effectDef) -> int
{
  return Zynamic::Forward<int (const struct FxEffectDef*)>(L"FX_GetLoopingLife")(effectDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ValidateFlags(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_ValidateFlags")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ValidateColor(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_ValidateColor")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ValidateVisuals(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_ValidateVisuals")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ValidatePhysics(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_ValidatePhysics")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Validate(const struct FxEditorEffectDef* editorEffect, const struct FxEditorElemDef* edElemDef) -> bool
{
  return Zynamic::Forward<bool (const struct FxEditorEffectDef*, const struct FxEditorElemDef*)>(L"FX_Validate")(editorEffect, edElemDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Convert(const struct FxEditorEffectDef* editorEffect, function* Alloc) -> const struct FxEffectDef*
{
  return Zynamic::Forward<const struct FxEffectDef* (const struct FxEditorEffectDef*, function *)>(L"FX_Convert")(editorEffect, Alloc);
}

#endif // __UNIMPLEMENTED__
