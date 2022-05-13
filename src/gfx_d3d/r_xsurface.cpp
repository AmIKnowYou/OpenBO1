//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XSurfaceGetNumVerts(const struct XSurface* surface) -> int
{
  return Zynamic::Forward<int (const struct XSurface*)>(L"XSurfaceGetNumVerts")(surface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceGetNumTris(const struct XSurface* surface) -> int
{
  return Zynamic::Forward<int (const struct XSurface*)>(L"XSurfaceGetNumTris")(surface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceGetVerts(const struct XSurface* surf, float* pVert, float* pTexCoord, float* pNormal) -> void
{
  return Zynamic::Forward<void (const struct XSurface*, float*, float*, float*)>(L"XSurfaceGetVerts")(surf, pVert, pTexCoord, pNormal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransferGetTexCoordRange(const struct XVertexInfo_s* v, int vertCount, float* texCoordAv) -> void
{
  return Zynamic::Forward<void (const struct XVertexInfo_s*, int, float*)>(L"XSurfaceTransferGetTexCoordRange")(v, vertCount, texCoordAv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer_Position<GfxPackedVertex>(struct GfxPackedVertex* out, const struct XVertexInfo_s* v) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const struct XVertexInfo_s*)>(L"XSurfaceTransfer_Position<GfxPackedVertex>")(out, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer_BinormalSign<GfxPackedVertex>(struct GfxPackedVertex* out, const struct XVertexInfo_s* v) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const struct XVertexInfo_s*)>(L"XSurfaceTransfer_BinormalSign<GfxPackedVertex>")(out, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer_NormalTangent<GfxPackedVertex>(struct GfxPackedVertex* out, const struct XVertexInfo_s* v) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const struct XVertexInfo_s*)>(L"XSurfaceTransfer_NormalTangent<GfxPackedVertex>")(out, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer_Texcoord<GfxPackedVertex>(struct GfxPackedVertex* out, const struct XVertexInfo_s* v, const float* texCoordAv) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const struct XVertexInfo_s*, const float*)>(L"XSurfaceTransfer_Texcoord<GfxPackedVertex>")(out, v, texCoordAv);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer_Color<GfxPackedVertex>(struct GfxPackedVertex* out, const struct XVertexInfo_s* v) -> void
{
  return Zynamic::Forward<void (struct GfxPackedVertex*, const struct XVertexInfo_s*)>(L"XSurfaceTransfer_Color<GfxPackedVertex>")(out, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceTransfer(const struct XVertexBuffer* surfVerts, struct GfxPackedVertex* verts0, struct GfxPackedVertex* verts1, int vertCount) -> void
{
  return Zynamic::Forward<void (const struct XVertexBuffer*, struct GfxPackedVertex*, struct GfxPackedVertex*, int)>(L"XSurfaceTransfer")(surfVerts, verts0, verts1, vertCount);
}

#endif // __UNIMPLEMENTED__
