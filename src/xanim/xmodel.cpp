//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XModelBad(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelBad")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_xmodel() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_xmodel")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelReleaseResources(struct XModel* model) -> void
{
  return Zynamic::Forward<void (struct XModel*)>(L"XModelReleaseResources")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPartsFree(struct XModelPartsLoad* modelParts) -> void
{
  return Zynamic::Forward<void (struct XModelPartsLoad*)>(L"XModelPartsFree")(modelParts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelCreateDefaultParts() -> struct XModelPartsLoad*
{
  return Zynamic::Forward<struct XModelPartsLoad* ()>(L"XModelCreateDefaultParts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelMakeDefault(struct XModel* model) -> void
{
  return Zynamic::Forward<void (struct XModel*)>(L"XModelMakeDefault")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelCreateDefault(function* Alloc) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (function *)>(L"XModelCreateDefault")(Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPartsFindData(const char* name) -> struct XModelPartsLoad*
{
  return Zynamic::Forward<struct XModelPartsLoad* (const char*)>(L"XModelPartsFindData")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPartsSetData(const char* name, struct XModelPartsLoad* modelParts, function* Alloc) -> void
{
  return Zynamic::Forward<void (const char*, struct XModelPartsLoad*, function *)>(L"XModelPartsSetData")(name, modelParts, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelSurfsFindData(const char* name) -> struct XModelSurfs*
{
  return Zynamic::Forward<struct XModelSurfs* (const char*)>(L"XModelSurfsFindData")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelSurfsSetData(const char* name, struct XModelSurfs* modelSurfs, function* Alloc) -> void
{
  return Zynamic::Forward<void (const char*, struct XModelSurfs*, function *)>(L"XModelSurfsSetData")(name, modelSurfs, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelDefaultModel(const char* name, function* Alloc) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *)>(L"XModelDefaultModel")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPrecache_LoadObj(const char* name, function* Alloc, function* AllocColl) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *, function *)>(L"XModelPrecache_LoadObj")(name, Alloc, AllocColl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPrecache_FastFile(const char* name, function* Alloc, function* AllocColl) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *, function *)>(L"XModelPrecache_FastFile")(name, Alloc, AllocColl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPrecache(const char* name, function* Alloc, function* AllocColl) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *, function *)>(L"XModelPrecache")(name, Alloc, AllocColl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelBoneNames(struct XModel* model) -> unsigned short*
{
  return Zynamic::Forward<unsigned short* (struct XModel*)>(L"XModelBoneNames")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetRadius(const struct XModel* model) -> float
{
  return Zynamic::Forward<float (const struct XModel*)>(L"XModelGetRadius")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBounds(const struct XModel* model, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct XModel*, float*, float*)>(L"XModelGetBounds")(model, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetMemUsage(const struct XModel* model) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"XModelGetMemUsage")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelRenderString(const float* pos, const char* string) -> void
{
  return Zynamic::Forward<void (const float*, const char*)>(L"XModelRenderString")(pos, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLine(const struct XModel* model, struct trace_t* results, const float* localStart, const float* localEnd, int contentmask) -> int
{
  return Zynamic::Forward<int (const struct XModel*, struct trace_t*, const float*, const float*, int)>(L"XModelTraceLine")(model, results, localStart, localEnd, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLineAnimated(const struct DObj* obj, unsigned int modelIndex, int baseBoneIndex, struct trace_t* results, const struct DObjAnimMat* boneMtxList, float* localStart, float* localEnd, int contentmask) -> int
{
  return Zynamic::Forward<int (const struct DObj*, unsigned int, int, struct trace_t*, const struct DObjAnimMat*, float*, float*, int)>(L"XModelTraceLineAnimated")(obj, modelIndex, baseBoneIndex, results, boneMtxList, localStart, localEnd, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLineAnimatedPartBits(const struct DObj* obj, unsigned int modelIndex, int baseBoneIndex, int contentmask, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int, int, int, int*)>(L"XModelTraceLineAnimatedPartBits")(obj, modelIndex, baseBoneIndex, contentmask, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb_ConvertAabb(const struct XSurfaceCollisionTree* tree, const float* aabbMins, const float* aabbMaxs, int* mins, int* maxs) -> void
{
  return Zynamic::Forward<void (const struct XSurfaceCollisionTree*, const float*, const float*, int*, int*)>(L"XSurfaceVisitTrianglesInAabb_ConvertAabb")(tree, aabbMins, aabbMaxs, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrefetchArrayIndexed(const void* mem, unsigned int elementCount, unsigned int index, unsigned int elementSize) -> void
{
  return Zynamic::Forward<void (const void*, unsigned int, unsigned int, unsigned int)>(L"PrefetchArrayIndexed")(mem, elementCount, index, elementSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb_ProcessVertices(struct XSurfaceGetTriCandidatesLocals& locals) -> bool
{
  return Zynamic::Forward<bool (struct XSurfaceGetTriCandidatesLocals&)>(L"XSurfaceVisitTrianglesInAabb_ProcessVertices")(locals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb_ProcessTriangles(struct XSurfaceGetTriCandidatesLocals& locals) -> bool
{
  return Zynamic::Forward<bool (struct XSurfaceGetTriCandidatesLocals&)>(L"XSurfaceVisitTrianglesInAabb_ProcessTriangles")(locals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb_ProcessLeaf(struct XSurfaceGetTriCandidatesLocals& locals) -> bool
{
  return Zynamic::Forward<bool (struct XSurfaceGetTriCandidatesLocals&)>(L"XSurfaceVisitTrianglesInAabb_ProcessLeaf")(locals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb_ProcessNode(struct XSurfaceGetTriCandidatesLocals& locals) -> bool
{
  return Zynamic::Forward<bool (struct XSurfaceGetTriCandidatesLocals&)>(L"XSurfaceVisitTrianglesInAabb_ProcessNode")(locals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb(const struct XSurface* surface, unsigned int vertListIndex, const float* aabbMins, const float* aabbMaxs, function* visitorFunc, void* visitorContext) -> bool
{
  return Zynamic::Forward<bool (const struct XSurface*, unsigned int, const float*, const float*, function *, void*)>(L"XSurfaceVisitTrianglesInAabb")(surface, vertListIndex, aabbMins, aabbMaxs, visitorFunc, visitorContext);
}

#endif // __UNIMPLEMENTED__
