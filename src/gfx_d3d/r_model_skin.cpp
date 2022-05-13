//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSseBlock<1, Sse_SkinVertex_0>(const struct GfxPackedVertex* srcVerts, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* dstVerts, int* pVertexIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*, int*)>(L"R_SkinXSurfaceWeightSseBlock<1,Sse_SkinVertex_0>")(srcVerts, vertexBlend, vertCount, boneMatrix, dstVerts, pVertexIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSseBlockOut<1, Sse_SkinVertex_0>(const struct GfxPackedVertex* srcVerts, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertexNormal* dstVertNormals, struct GfxPackedVertex* dstVerts, int* pVertexIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*, int*)>(L"R_SkinXSurfaceWeightSseBlockOut<1,Sse_SkinVertex_0>")(srcVerts, vertexBlend, vertCount, boneMatrix, dstVertNormals, dstVerts, pVertexIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSseBlockInOut<1, Sse_SkinVertexSimple_0>(const struct GfxPackedVertex* srcVerts, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, const struct GfxPackedVertexNormal* srcVertNormals, struct GfxPackedVertexNormal* dstVertNormals, struct GfxPackedVertex* dstVerts, int* pVertexIndex) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, const struct GfxPackedVertexNormal*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*, int*)>(L"R_SkinXSurfaceWeightSseBlockInOut<1,Sse_SkinVertexSimple_0>")(srcVerts, vertexBlend, vertCount, boneMatrix, srcVertNormals, dstVertNormals, dstVerts, pVertexIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVertexAndBasis(const float* offset, float binormalSign, const union PackedUnitVec normal, const union PackedUnitVec tangent, const struct DObjSkelMat* mat, struct GfxPackedVertex* vert) -> void
{
  return Zynamic::Forward<void (const float*, float, const union PackedUnitVec, const union PackedUnitVec, const struct DObjSkelMat*, struct GfxPackedVertex*)>(L"MatrixTransformVertexAndBasis")(offset, binormalSign, normal, tangent, mat, vert);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeight0(const struct GfxPackedVertex* vertsIn, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* vertsOut, float* tension) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*, float*)>(L"R_SkinXSurfaceWeight0")(vertsIn, vertexBlend, vertCount, boneMatrix, vertsOut, tension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeight1(const struct GfxPackedVertex* vertsIn, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* vertsOut, float* tension) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*, float*)>(L"R_SkinXSurfaceWeight1")(vertsIn, vertexBlend, vertCount, boneMatrix, vertsOut, tension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeight2(const struct GfxPackedVertex* vertsIn, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* vertsOut, float* tension) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*, float*)>(L"R_SkinXSurfaceWeight2")(vertsIn, vertexBlend, vertCount, boneMatrix, vertsOut, tension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeight3(const struct GfxPackedVertex* vertsIn, const unsigned short* vertexBlend, const int vertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* vertsOut, float* tension) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const unsigned short*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*, float*)>(L"R_SkinXSurfaceWeight3")(vertsIn, vertexBlend, vertCount, boneMatrix, vertsOut, tension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_shortBoneWeightPerm''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_shortBoneWeightPerm''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeight(const struct XSurface* xsurf, const struct GfxPackedVertex* inVerts, const struct XSurfaceVertexInfo* vertexInfo, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* outVerts) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const struct GfxPackedVertex*, const struct XSurfaceVertexInfo*, const struct DObjSkelMat*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceWeight")(xsurf, inVerts, vertexInfo, boneMatrix, outVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSse(const struct GfxPackedVertex* inVerts, const struct XSurfaceVertexInfo* vertexInfo, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* outVerts) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const struct XSurfaceVertexInfo*, const struct DObjSkelMat*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceWeightSse")(inVerts, vertexInfo, boneMatrix, outVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSseOut(const struct GfxPackedVertex* inVerts, const struct XSurfaceVertexInfo* vertexInfo, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertexNormal* outVertNormals, struct GfxPackedVertex* outVerts) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const struct XSurfaceVertexInfo*, const struct DObjSkelMat*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceWeightSseOut")(inVerts, vertexInfo, boneMatrix, outVertNormals, outVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceWeightSseInOut(const struct GfxPackedVertex* inVerts, const struct XSurfaceVertexInfo* vertexInfo, const struct DObjSkelMat* boneMatrix, const struct GfxPackedVertexNormal* inVertNormals, struct GfxPackedVertexNormal* outVertNormals, struct GfxPackedVertex* outVerts) -> void
{
  return Zynamic::Forward<void (const struct GfxPackedVertex*, const struct XSurfaceVertexInfo*, const struct DObjSkelMat*, const struct GfxPackedVertexNormal*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceWeightSseInOut")(inVerts, vertexInfo, boneMatrix, inVertNormals, outVertNormals, outVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceRigid(const struct XSurface* surf, const int totalVertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* vertices) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceRigid")(surf, totalVertCount, boneMatrix, vertices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceRigidSse(const struct XSurface* surf, const int totalVertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertex* dstVerts) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const int, const struct DObjSkelMat*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceRigidSse")(surf, totalVertCount, boneMatrix, dstVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceRigidSseOut(const struct XSurface* surf, const int totalVertCount, const struct DObjSkelMat* boneMatrix, struct GfxPackedVertexNormal* dstVertNormals, struct GfxPackedVertex* dstVerts) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const int, const struct DObjSkelMat*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceRigidSseOut")(surf, totalVertCount, boneMatrix, dstVertNormals, dstVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceRigidSseInOut(const struct XSurface* surf, const int totalVertCount, const struct DObjSkelMat* boneMatrix, const struct GfxPackedVertexNormal* srcVertNormals, struct GfxPackedVertexNormal* dstVertNormals, struct GfxPackedVertex* dstVerts) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const int, const struct DObjSkelMat*, const struct GfxPackedVertexNormal*, struct GfxPackedVertexNormal*, struct GfxPackedVertex*)>(L"R_SkinXSurfaceRigidSseInOut")(surf, totalVertCount, boneMatrix, srcVertNormals, dstVertNormals, dstVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceSkinned(const struct XSurface* xsurf, const struct DObjSkelMat* boneMatrix, void* skinVerticesOut) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const struct DObjSkelMat*, void*)>(L"R_SkinXSurfaceSkinned")(xsurf, boneMatrix, skinVerticesOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXSurfaceSkinnedSse(const struct XSurface* xsurf, const struct DObjSkelMat* boneMatrix, const struct GfxPackedVertexNormal* skinVertNormalIn, struct GfxPackedVertexNormal* skinVertNormalOut, void* skinVerticesOut) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, const struct DObjSkelMat*, const struct GfxPackedVertexNormal*, struct GfxPackedVertexNormal*, void*)>(L"R_SkinXSurfaceSkinnedSse")(xsurf, boneMatrix, skinVertNormalIn, skinVertNormalOut, skinVerticesOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MultiplySkelMat(const struct DObjSkelMat* mat0, const struct DObjSkelMat* mat1, struct DObjSkelMat* out) -> void
{
  return Zynamic::Forward<void (const struct DObjSkelMat*, const struct DObjSkelMat*, struct DObjSkelMat*)>(L"R_MultiplySkelMat")(mat0, mat1, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinXModelCmd(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_SkinXModelCmd")(data);
}

#endif // __UNIMPLEMENTED__
