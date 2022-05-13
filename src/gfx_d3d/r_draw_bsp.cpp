//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SetStreamsForBspSurface(struct GfxCmdBufPrimState* state, const struct srfTriangles_t* tris) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct srfTriangles_t*)>(L"R_SetStreamsForBspSurface")(state, tris);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBspTris(struct GfxCmdBufPrimState* state, const struct srfTriangles_t* tris, unsigned int triCount) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct srfTriangles_t*, unsigned int)>(L"R_DrawBspTris")(state, tris, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawPreTessTris(struct GfxCmdBufPrimState* state, const struct srfTriangles_t* tris, unsigned int baseIndex, unsigned int triCount) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, const struct srfTriangles_t*, unsigned int, unsigned int)>(L"R_DrawPreTessTris")(state, tris, baseIndex, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReadBspDrawSurfs(const unsigned int** primDrawSurfPos, const unsigned short** list, unsigned int* count) -> int
{
  return Zynamic::Forward<int (const unsigned int**, const unsigned short**, unsigned int*)>(L"R_ReadBspDrawSurfs")(primDrawSurfPos, list, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReadBspPreTessDrawSurfs(struct GfxReadCmdBuf* cmdBuf, const struct GfxBspPreTessDrawSurf** list, unsigned int* count, unsigned int* baseIndex) -> int
{
  return Zynamic::Forward<int (struct GfxReadCmdBuf*, const struct GfxBspPreTessDrawSurf**, unsigned int*, unsigned int*)>(L"R_ReadBspPreTessDrawSurfs")(cmdBuf, list, count, baseIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawTrianglesLit(struct GfxTrianglesDrawStream* drawStream, struct GfxCmdBufPrimState* primState, struct GfxCmdBufPrimState* prepassPrimState) -> void
{
  return Zynamic::Forward<void (struct GfxTrianglesDrawStream*, struct GfxCmdBufPrimState*, struct GfxCmdBufPrimState*)>(L"R_DrawTrianglesLit")(drawStream, primState, prepassPrimState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawTriangles(struct GfxTrianglesDrawStream* drawStream, struct GfxCmdBufPrimState* state) -> void
{
  return Zynamic::Forward<void (struct GfxTrianglesDrawStream*, struct GfxCmdBufPrimState*)>(L"R_DrawTriangles")(drawStream, state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBspDrawSurfsLit(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext, struct GfxCmdBufContext, const struct GfxDrawSurfListInfo*)>(L"R_DrawBspDrawSurfsLit")(primDrawSurfPos, context, prepassContext, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBspDrawSurfsLitPreTess(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawBspDrawSurfsLitPreTess")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBspDrawSurfsPreTess(const unsigned int* primDrawSurfPos, struct GfxCmdBufContext context) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufContext)>(L"R_DrawBspDrawSurfsPreTess")(primDrawSurfPos, context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawBspDrawSurfs(const unsigned int* primDrawSurfPos, struct GfxCmdBufState* state, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (const unsigned int*, struct GfxCmdBufState*, const struct GfxDrawSurfListInfo*)>(L"R_DrawBspDrawSurfs")(primDrawSurfPos, state, info);
}

#endif // __UNIMPLEMENTED__
