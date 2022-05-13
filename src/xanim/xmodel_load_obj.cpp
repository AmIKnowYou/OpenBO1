//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XModel_PhysPresetPrecache(const char* name, function* Alloc) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*, function *)>(L"XModel_PhysPresetPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModel_PhysConstraintsPrecache(const char* name, function* Alloc) -> struct PhysConstraints*
{
  return Zynamic::Forward<struct PhysConstraints* (const char*, function *)>(L"XModel_PhysConstraintsPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConsumeQuatNoSwap(const unsigned char** pos, short* out) -> void
{
  return Zynamic::Forward<void (const unsigned char**, short*)>(L"ConsumeQuatNoSwap")(pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelCalcBasePose(struct XModelPartsLoad* modelParts) -> void
{
  return Zynamic::Forward<void (struct XModelPartsLoad*)>(L"XModelCalcBasePose")(modelParts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FS_GetModTime(const char* qpath, bool useSearchPath) -> __int64
{
  return Zynamic::Forward<__int64 (const char*, bool)>(L"FS_GetModTime")(qpath, useSearchPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPartsLoadFile(struct XModel* model, const char* name, function* Alloc, __int64* xmodelModifiedTime) -> struct XModelPartsLoad*
{
  return Zynamic::Forward<struct XModelPartsLoad* (struct XModel*, const char*, function *, __int64*)>(L"XModelPartsLoadFile")(model, name, Alloc, xmodelModifiedTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelLoadConfigFile(const char* name, const unsigned char** pos, struct XModelConfig* config) -> bool
{
  return Zynamic::Forward<bool (const char*, const unsigned char**, struct XModelConfig*)>(L"XModelLoadConfigFile")(name, pos, config);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelLoadCollData(const unsigned char** pos, struct XModel* model, function* AllocColl, const char* name) -> void
{
  return Zynamic::Forward<void (const unsigned char**, struct XModel*, function *, const char*)>(L"XModelLoadCollData")(pos, model, AllocColl, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPartsPrecache(struct XModel* model, const char* name, function* Alloc, __int64* xmodelModifiedTime) -> struct XModelPartsLoad*
{
  return Zynamic::Forward<struct XModelPartsLoad* (struct XModel*, const char*, function *, __int64*)>(L"XModelPartsPrecache")(model, name, Alloc, xmodelModifiedTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelCopyXModelParts(const struct XModelPartsLoad* modelParts, struct XModel* model) -> void
{
  return Zynamic::Forward<void (const struct XModelPartsLoad*, struct XModel*)>(L"XModelCopyXModelParts")(modelParts, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelAllowLoadMesh() -> bool
{
  return Zynamic::Forward<bool ()>(L"XModelAllowLoadMesh")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelLoadFile(const char* name, function* Alloc, function* AllocColl, __int64* xmodelModifiedTime) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *, function *, __int64*)>(L"XModelLoadFile")(name, Alloc, AllocColl, xmodelModifiedTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelReadSurfaces(struct XModel* model, const char* name, struct XModelSurfs* modelSurfs, int* modelPartBits, int surfCount, const unsigned char** pos, function* AllocMesh) -> void
{
  return Zynamic::Forward<void (struct XModel*, const char*, struct XModelSurfs*, int*, int, const unsigned char**, function *)>(L"XModelReadSurfaces")(model, name, modelSurfs, modelPartBits, surfCount, pos, AllocMesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoxMaxDimension(const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"BoxMaxDimension")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_IncludesImage(struct Material* mat, struct GfxImage* image) -> bool
{
  return Zynamic::Forward<bool (struct Material*, struct GfxImage*)>(L"Material_IncludesImage")(mat, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Material_FirstIncludesSecond(struct Material* mat1, struct Material* mat2) -> bool
{
  return Zynamic::Forward<bool (struct Material*, struct Material*)>(L"Material_FirstIncludesSecond")(mat1, mat2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurfaceVertexPos(const struct XSurface* surface, int vertIndex, float* out) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, int, float*)>(L"XModelGetSurfaceVertexPos")(surface, vertIndex, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetSurfaceTexCoords(const struct XSurface* surface, int vertIndex, float* out) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, int, float*)>(L"XModelGetSurfaceTexCoords")(surface, vertIndex, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGenerateHighMipVolume(struct XModel* model) -> void
{
  return Zynamic::Forward<void (struct XModel*)>(L"XModelGenerateHighMipVolume")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_XModelSurfsLoadFile(struct XModel* model, const char* name, function* Alloc, short modelNumsurfs, const char* modelName, __int64* xmodelModifiedTime) -> struct XModelSurfs*
{
  return Zynamic::Forward<struct XModelSurfs* (struct XModel*, const char*, function *, short, const char*, __int64*)>(L"R_XModelSurfsLoadFile")(model, name, Alloc, modelNumsurfs, modelName, xmodelModifiedTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelSurfsPrecache(struct XModel* model, const char* name, function* Alloc, short modelNumsurfs, const char* modelName, struct XModelSurfs* outModelSurfs, __int64* xmodelModifiedTime) -> int
{
  return Zynamic::Forward<int (struct XModel*, const char*, function *, short, const char*, struct XModelSurfs*, __int64*)>(L"XModelSurfsPrecache")(model, name, Alloc, modelNumsurfs, modelName, outModelSurfs, xmodelModifiedTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetXModelBounds(struct XModel* model, const float* axes[0x3], float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (struct XModel*, const float*[0x3], float*, float*)>(L"R_GetXModelBounds")(model, axes, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelLoad(const char* name, function* Alloc, function* AllocColl) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*, function *, function *)>(L"XModelLoad")(name, Alloc, AllocColl);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetFlags(const struct XModel* model) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XModel*)>(L"XModelGetFlags")(model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPiecesLoadFile(const char* name, function* Alloc) -> struct XModelPieces*
{
  return Zynamic::Forward<struct XModelPieces* (const char*, function *)>(L"XModelPiecesLoadFile")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPiecesPrecache(const char* name, function* Alloc) -> struct XModelPieces*
{
  return Zynamic::Forward<struct XModelPieces* (const char*, function *)>(L"XModelPiecesPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetStaticBounds(const struct XModel* model, float* axis[0x3], float* mins, float* maxs) -> int
{
  return Zynamic::Forward<int (const struct XModel*, float*[0x3], float*, float*)>(L"XModelGetStaticBounds")(model, axis, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetStaticBoundsExact(const struct XModel* model, float* axis[0x3], float* mins, float* maxs) -> int
{
  return Zynamic::Forward<int (const struct XModel*, float*[0x3], float*, float*)>(L"XModelGetStaticBoundsExact")(model, axis, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetStaticBounds(const struct XModel* model, float* mins, float* maxs) -> int
{
  return Zynamic::Forward<int (const struct XModel*, float*, float*)>(L"XModelGetStaticBounds")(model, mins, maxs);
}

#endif // __UNIMPLEMENTED__
