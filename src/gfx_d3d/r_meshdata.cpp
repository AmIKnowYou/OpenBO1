//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_BeginMeshVerts(struct GfxMeshData* mesh) -> void
{
  return Zynamic::Forward<void (struct GfxMeshData*)>(L"R_BeginMeshVerts")(mesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndMeshVerts(struct GfxMeshData* mesh) -> void
{
  return Zynamic::Forward<void (struct GfxMeshData*)>(L"R_EndMeshVerts")(mesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveMeshIndices(struct GfxMeshData* mesh, int indexCount, struct r_double_index_t** indicesOut, bool align) -> bool
{
  return Zynamic::Forward<bool (struct GfxMeshData*, int, struct r_double_index_t**, bool)>(L"R_ReserveMeshIndices")(mesh, indexCount, indicesOut, align);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveMeshVerts(struct GfxMeshData* mesh, int vertCount, unsigned short* baseVertex) -> bool
{
  return Zynamic::Forward<bool (struct GfxMeshData*, int, unsigned short*)>(L"R_ReserveMeshVerts")(mesh, vertCount, baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetMeshVerts(struct GfxMeshData* mesh, unsigned short baseVertex) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (struct GfxMeshData*, unsigned short)>(L"R_GetMeshVerts")(mesh, baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResetMesh(struct GfxMeshData* mesh) -> void
{
  return Zynamic::Forward<void (struct GfxMeshData*)>(L"R_ResetMesh")(mesh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetQuadMeshData(struct GfxMeshData* mesh, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color) -> void
{
  return Zynamic::Forward<void (struct GfxMeshData*, float, float, float, float, float, float, float, float, unsigned long)>(L"R_SetQuadMeshData")(mesh, x, y, w, h, s0, t0, s1, t1, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetQuadMesh(struct GfxQuadMeshData* quadMesh, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color) -> void
{
  return Zynamic::Forward<void (struct GfxQuadMeshData*, float, float, float, float, float, float, float, float, unsigned long)>(L"R_SetQuadMesh")(quadMesh, x, y, w, h, s0, t0, s1, t1, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawQuadMesh(struct GfxCmdBufContext context, const struct Material* material, struct GfxMeshData* quadMesh) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, const struct Material*, struct GfxMeshData*)>(L"R_DrawQuadMesh")(context, material, quadMesh);
}

#endif // __UNIMPLEMENTED__
