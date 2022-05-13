//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_backend() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_rb_backend")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CopyBackendStats() -> void
{
  return Zynamic::Forward<void ()>(L"RB_CopyBackendStats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetIdentity() -> void
{
  return Zynamic::Forward<void ()>(L"RB_SetIdentity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex2d(struct GfxVertex* vert, float x, float y, float s, float t, unsigned long color) -> void
{
  return Zynamic::Forward<void (struct GfxVertex*, float, float, float, float, unsigned long)>(L"R_SetVertex2d")(vert, x, y, s, t, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex3d(struct GfxVertex* vert, float x, float y, float z, float s, float t, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (struct GfxVertex*, float, float, float, float, float, const unsigned char*)>(L"R_SetVertex3d")(vert, x, y, z, s, t, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex4d(struct GfxVertex* vert, float x, float y, float z, float w, float s, float t, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (struct GfxVertex*, float, float, float, float, float, float, const unsigned char*)>(L"R_SetVertex4d")(vert, x, y, z, w, s, t, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex4d(struct GfxVertex* vert, float x, float y, float z, float w, float s, float t, unsigned long color) -> void
{
  return Zynamic::Forward<void (struct GfxVertex*, float, float, float, float, float, float, unsigned long)>(L"R_SetVertex4d")(vert, x, y, z, w, s, t, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex4dWithNormal(struct GfxVertex* vert, float x, float y, float z, float w, float nx, float ny, float nz, float s, float t, const unsigned char* color) -> void
{
  return Zynamic::Forward<void (struct GfxVertex*, float, float, float, float, float, float, float, float, float, const unsigned char*)>(L"R_SetVertex4dWithNormal")(vert, x, y, z, w, nx, ny, nz, s, t, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawFullSceneQuad(const struct Material* material, unsigned char renderTargetId, float s0, float t0, float s1, float t1, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, unsigned char, float, float, float, float, enum GfxPrimStatsTarget)>(L"RB_DrawFullSceneQuad")(material, renderTargetId, s0, t0, s1, t1, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawSW4Quads(const struct Material* material, int ParticleCount) -> void
{
  return Zynamic::Forward<void (const struct Material*, int)>(L"RB_DrawSW4Quads")(material, ParticleCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPic(const struct Material* material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, float, float, float, float, unsigned long, enum GfxPrimStatsTarget)>(L"RB_DrawStretchPic")(material, x, y, w, h, s0, t0, s1, t1, color, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPicW(const struct Material* material, float x, float y, float w0, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, float, float, float, float, float, unsigned long, enum GfxPrimStatsTarget)>(L"RB_DrawStretchPicW")(material, x, y, w0, w, h, s0, t0, s1, t1, color, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPicZ(const struct Material* material, float x, float y, float z, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, float, float, float, float, float, unsigned long, enum GfxPrimStatsTarget)>(L"RB_DrawStretchPicZ")(material, x, y, z, w, h, s0, t0, s1, t1, color, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPicFlipST(const struct Material* material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, float, float, float, float, unsigned long, enum GfxPrimStatsTarget)>(L"RB_DrawStretchPicFlipST")(material, x, y, w, h, s0, t0, s1, t1, color, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPicRotate(const struct Material* material, float x, float y, float w, float width, float height, float s0, float t0, float s1, float t1, float sinAngle, float cosAngle, unsigned long color, enum GfxPrimStatsTarget statsTarget) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, float, float, float, float, float, float, float, unsigned long, enum GfxPrimStatsTarget)>(L"RB_DrawStretchPicRotate")(material, x, y, w, width, height, s0, t0, s1, t1, sinAngle, cosAngle, color, statsTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawFullScreenColoredQuad(const struct Material* material, float s0, float t0, float s1, float t1, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, float, float, float, float, unsigned long)>(L"RB_DrawFullScreenColoredQuad")(material, s0, t0, s1, t1, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullScreenColoredFilter(const struct Material* material, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, unsigned long)>(L"RB_FullScreenColoredFilter")(material, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullScreenFilter(const struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct Material*)>(L"RB_FullScreenFilter")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Filter(const struct Material* material, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct Material*, const struct GfxViewInfo*)>(L"RB_Filter")(material, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ColoredFilter(const struct Material* material, const struct GfxViewInfo* viewInfo, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, const struct GfxViewInfo*, unsigned long)>(L"RB_ColoredFilter")(material, viewInfo, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SplitScreenTexCoords(float x, float y, float w, float h, float* s0, float* t0, float* s1, float* t1) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float*, float*, float*, float*)>(L"RB_SplitScreenTexCoords")(x, y, w, h, s0, t0, s1, t1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SplitScreenFilter(const struct Material* material, const struct GfxViewInfo* viewInfo, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, const struct GfxViewInfo*, unsigned long)>(L"RB_SplitScreenFilter")(material, viewInfo, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetIntZHandles() -> void
{
  return Zynamic::Forward<void ()>(L"R_GetIntZHandles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveIntZ_PC() -> void
{
  return Zynamic::Forward<void ()>(L"R_ResolveIntZ_PC")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Resolve(struct GfxCmdBufContext context, struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct GfxImage*)>(L"R_Resolve")(context, image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveSection(struct GfxCmdBufContext context, struct GfxImage* image, float s0, float t0, float ds, float dt) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct GfxImage*, float, float, float, float)>(L"R_ResolveSection")(context, image, s0, t0, ds, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchCompositeCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchCompositeCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchPicCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchPicCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchPicCmdFlipST(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchPicCmdFlipST")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchPicRotateXYCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchPicRotateXYCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchPicRotateSTCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchPicRotateSTCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawQuadPicCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawQuadPicCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawQuadList2DCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawQuadList2DCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawEmblemLayer(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawEmblemLayer")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawFullScreenColoredQuadCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawFullScreenColoredQuadCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchRaw(int x, int y, int w, int h, int cols, int rows, const unsigned char* data, int client, int dirty) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, int, const unsigned char*, int, int)>(L"RB_StretchRaw")(x, y, w, h, cols, rows, data, client, dirty);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_StretchRawCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_StretchRawCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TessQuad(unsigned short v0, unsigned short v1, unsigned short v2, unsigned short v3) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned short, unsigned short, unsigned short)>(L"TessQuad")(v0, v1, v2, v3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawFramedCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawFramedCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkipDrawSurfListMaterial(const union GfxDrawSurf* drawSurfList, unsigned int drawSurfCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union GfxDrawSurf*, unsigned int)>(L"R_SkipDrawSurfListMaterial")(drawSurfList, drawSurfCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderDrawSurfListMaterial(const struct GfxDrawSurfListArgs* listArgs, struct GfxCmdBufContext prepassContext) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct GfxDrawSurfListArgs*, struct GfxCmdBufContext)>(L"R_RenderDrawSurfListMaterial")(listArgs, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TessEnd(struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct GfxCmdBufContext)>(L"R_TessEnd")(context, prepassContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetEyeOffsetConstant(struct GfxCmdBufSourceState* source, const float* drawSurfListViewOrigin) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, const float*)>(L"RB_SetEyeOffsetConstant")(source, drawSurfListViewOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawSurfListInfo* info) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufContext, struct GfxCmdBufState*, const struct GfxDrawSurfListInfo*)>(L"R_DrawSurfs")(context, prepassState, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ClearScreenCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_ClearScreenCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetGammaRamp(const struct GfxGammaRamp* gammaTable) -> void
{
  return Zynamic::Forward<void (const struct GfxGammaRamp*)>(L"RB_SetGammaRamp")(gammaTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SaveScreenCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_SaveScreenCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPoints2D(const struct GfxCmdDrawPoints* cmd) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdDrawPoints*)>(L"RB_DrawPoints2D")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPoints3D(const struct GfxCmdDrawPoints* cmd) -> void
{
  return Zynamic::Forward<void (const struct GfxCmdDrawPoints*)>(L"RB_DrawPoints3D")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPointsCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawPointsCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawLines2D(int count, int width, const struct GfxPointVertex* verts) -> void
{
  return Zynamic::Forward<void (int, int, const struct GfxPointVertex*)>(L"RB_DrawLines2D")(count, width, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawLines3D(int count, int width, const struct GfxPointVertex* verts, bool depthTest) -> void
{
  return Zynamic::Forward<void (int, int, const struct GfxPointVertex*, bool)>(L"RB_DrawLines3D")(count, width, verts, depthTest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawLinesCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawLinesCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawTriangles_Internal(const struct Material* material, unsigned char techType, short indexCount, const unsigned short* indices, short vertexCount, const float* xyzw[0x4], const float* normal[0x3], const union GfxColor* color, const float* st[0x2]) -> void
{
  return Zynamic::Forward<void (const struct Material*, unsigned char, short, const unsigned short*, short, const float*[0x4], const float*[0x3], const union GfxColor*, const float*[0x2])>(L"RB_DrawTriangles_Internal")(material, techType, indexCount, indices, vertexCount, xyzw, normal, color, st);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawTrianglesCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawTrianglesCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetCustomConstantCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_SetCustomConstantCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetMaterialColorCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_SetMaterialColorCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetViewportCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_SetViewportCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetScissorCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_SetScissorCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ResolveCompositeCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_ResolveCompositeCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PCCopyImageGenMIPCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_PCCopyImageGenMIPCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LookupColor(unsigned char c, unsigned char* color) -> void
{
  return Zynamic::Forward<void (unsigned char, unsigned char*)>(L"RB_LookupColor")(c, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawHudIcon(const char* text, float x, float y, float sinAngle, float cosAngle, struct Font_s* font, float xScale, float yScale, unsigned long color) -> float
{
  return Zynamic::Forward<float (const char*, float, float, float, float, struct Font_s*, float, float, unsigned long)>(L"RB_DrawHudIcon")(text, x, y, sinAngle, cosAngle, font, xScale, yScale, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ProcessLetterColor(unsigned long color, unsigned int letter) -> unsigned long
{
  return Zynamic::Forward<unsigned long (unsigned long, unsigned int)>(L"RB_ProcessLetterColor")(color, letter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCursor(const struct Material* material, unsigned char cursor, float x, float y, float sinAngle, float cosAngle, struct Font_s* font, float xScale, float yScale, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, unsigned char, float, float, float, float, struct Font_s*, float, float, unsigned long)>(L"RB_DrawCursor")(material, cursor, x, y, sinAngle, cosAngle, font, xScale, yScale, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotateXY(float cosAngle, float sinAngle, float pivotX, float pivotY, float x, float y, float* outX, float* outY) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float*, float*)>(L"RotateXY")(cosAngle, sinAngle, pivotX, pivotY, x, y, outX, outY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMonospaceWidth(struct Font_s* font, int renderFlags) -> float
{
  return Zynamic::Forward<float (struct Font_s*, int)>(L"GetMonospaceWidth")(font, renderFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GlowColor(union GfxColor* result, union GfxColor baseColor, union GfxColor forcedGlowColor, int renderFlags) -> void
{
  return Zynamic::Forward<void (union GfxColor*, union GfxColor, union GfxColor, int)>(L"GlowColor")(result, baseColor, forcedGlowColor, renderFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupFadeinFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool* resultDrawRandChar, int* resultRandSeed, bool* resultDecaying, int* resultdecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int, bool*, int*, bool*, int*)>(L"SetupFadeinFXVars")(text, maxLength, renderFlags, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, resultDrawRandChar, resultRandSeed, resultDecaying, resultdecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupCOD7DecodeFXVars(const char* text, int maxLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, int* randSeed, int* resultRandomCharsLength, int* resultMaxLength, bool* resultDecaying, int* resultDecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int*, int*, int*, bool*, int*)>(L"SetupCOD7DecodeFXVars")(text, maxLength, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, randSeed, resultRandomCharsLength, resultMaxLength, resultDecaying, resultDecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupTypewriterFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool* resultDrawRandChar, int* resultRandSeed, int* resultMaxLength, bool* resultDecaying, int* resultdecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int, bool*, int*, int*, bool*, int*)>(L"SetupTypewriterFXVars")(text, maxLength, renderFlags, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, resultDrawRandChar, resultRandSeed, resultMaxLength, resultDecaying, resultdecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupPopInFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, float* sizeIncrease, int* resultRandSeed, int* resultMaxLength, bool* resultDecaying, int* resultdecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int, float*, int*, int*, bool*, int*)>(L"SetupPopInFXVars")(text, maxLength, renderFlags, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, sizeIncrease, resultRandSeed, resultMaxLength, resultDecaying, resultdecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupPulseFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool* resultDrawRandChar, int* resultRandSeed, int* resultMaxLength, bool* resultDecaying, int* resultdecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int, bool*, int*, int*, bool*, int*)>(L"SetupPulseFXVars")(text, maxLength, renderFlags, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, resultDrawRandChar, resultRandSeed, resultMaxLength, resultDecaying, resultdecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetShiftColor(union GfxColor targetColor, int fxBirthTime, int fxDecayStart, int fxDecayDuration, union GfxColor startColor, union GfxColor* shiftColor) -> void
{
  return Zynamic::Forward<void (union GfxColor, int, int, int, union GfxColor, union GfxColor*)>(L"GetShiftColor")(targetColor, fxBirthTime, fxDecayStart, fxDecayDuration, startColor, shiftColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupRedactTextFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool* resultDrawRandChar, int* resultRandSeed, int* resultMaxLength, bool* resultDecaying, int* resultdecayTimeElapsed) -> bool
{
  return Zynamic::Forward<bool (const char*, int, int, int, int, int, int, bool*, int*, int*, bool*, int*)>(L"SetupRedactTextFXVars")(text, maxLength, renderFlags, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, resultDrawRandChar, resultRandSeed, resultMaxLength, resultDecaying, resultdecayTimeElapsed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupRedactFXVars(int* randSeed, int fxBirthTime, int maxLength, int fxRedactDecayStartTime, int fxRedactDecayDuration, int mode, float* src_rect, float* max_rect, float* out_rect, float* u, struct Material** mat) -> void
{
  return Zynamic::Forward<void (int*, int, int, int, int, int, float*, float*, float*, float*, struct Material**)>(L"SetupRedactFXVars")(randSeed, fxBirthTime, maxLength, fxRedactDecayStartTime, fxRedactDecayDuration, mode, src_rect, max_rect, out_rect, u, mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDecayingStringAlphaInfo(int decayTimeElapsed, int fxDecayDuration, unsigned char alpha, unsigned char* resultAlpha) -> void
{
  return Zynamic::Forward<void (int, int, unsigned char, unsigned char*)>(L"GetDecayingStringAlphaInfo")(decayTimeElapsed, fxDecayDuration, alpha, resultAlpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawTextFxExtraCharacter(const struct Material* material, int charIndex, float x, float y, float w, float h, float sinAngle, float cosAngle, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, int, float, float, float, float, float, float, unsigned long)>(L"DrawTextFxExtraCharacter")(material, charIndex, x, y, w, h, sinAngle, cosAngle, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ModulateByteColors(unsigned char colorA, unsigned char colorB) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char, unsigned char)>(L"ModulateByteColors")(colorA, colorB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawText2D(const char* text, float x, float y, float w, struct Font_s* font, float xScale, float yScale, float sinAngle, float cosAngle, const union GfxColor color, int maxLength, int renderFlags, int cursorPos, char cursorLetter, float padding, union GfxColor glowForcedColor, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, int fxRedactDecayStartTime, int fxRedactDecayDuration, const struct Material* fxMaterial, const struct Material* fxMaterialGlow) -> void
{
  return Zynamic::Forward<void (const char*, float, float, float, struct Font_s*, float, float, float, float, const union GfxColor, int, int, int, char, float, union GfxColor, int, int, int, int, int, int, const struct Material*, const struct Material*)>(L"DrawText2D")(text, x, y, w, font, xScale, yScale, sinAngle, cosAngle, color, maxLength, renderFlags, cursorPos, cursorLetter, padding, glowForcedColor, fxBirthTime, fxLetterTime, fxDecayStartTime, fxDecayDuration, fxRedactDecayStartTime, fxRedactDecayDuration, fxMaterial, fxMaterialGlow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawText(const char* text, struct Font_s* font, float x, float y, const union GfxColor color) -> void
{
  return Zynamic::Forward<void (const char*, struct Font_s*, float, float, const union GfxColor)>(L"RB_DrawText")(text, font, x, y, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCharInSpace(const struct Material* material, const float* xyz, const float* dx, const float* dy, const struct Glyph* glyph, unsigned long color) -> void
{
  return Zynamic::Forward<void (const struct Material*, const float*, const float*, const float*, const struct Glyph*, unsigned long)>(L"RB_DrawCharInSpace")(material, xyz, dx, dy, glyph, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawTextInSpace(const char* text, struct Font_s* font, const float* org, const float* xPixelStep, const float* yPixelStep, unsigned long color) -> void
{
  return Zynamic::Forward<void (const char*, struct Font_s*, const float*, const float*, const float*, unsigned long)>(L"RB_DrawTextInSpace")(text, font, org, xPixelStep, yPixelStep, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawText2DCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawText2DCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawText3DCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_DrawText3DCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ProjectionSetCmd(struct GfxRenderCommandExecState* execState) -> void
{
  return Zynamic::Forward<void (struct GfxRenderCommandExecState*)>(L"RB_ProjectionSetCmd")(execState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PatchStaticModelCache() -> void
{
  return Zynamic::Forward<void ()>(L"RB_PatchStaticModelCache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ResetStatTracking(int viewIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"RB_ResetStatTracking")(viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BeginFrame(const void* data) -> void
{
  return Zynamic::Forward<void (const void*)>(L"RB_BeginFrame")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BackendTimeout(int gpuIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"RB_BackendTimeout")(gpuIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SwapBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"RB_SwapBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndFrame(unsigned int drawType) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"RB_EndFrame")(drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UpdateBackEndDvarOptions() -> void
{
  return Zynamic::Forward<void ()>(L"RB_UpdateBackEndDvarOptions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ExecuteRenderCommandsLoop(const void* cmds, int* ui3dTextureWindow) -> void
{
  return Zynamic::Forward<void (const void*, int*)>(L"RB_ExecuteRenderCommandsLoop")(cmds, ui3dTextureWindow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Draw3D() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Draw3D")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CallExecuteRenderCommands() -> void
{
  return Zynamic::Forward<void ()>(L"RB_CallExecuteRenderCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_RenderCommandFrame(const void* data) -> void
{
  return Zynamic::Forward<void (const void*)>(L"RB_RenderCommandFrame")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UpdateDynamicBuffers(struct GfxBackEndData* backendData) -> void
{
  return Zynamic::Forward<void (struct GfxBackEndData*)>(L"RB_UpdateDynamicBuffers")(backendData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_RenderThread(unsigned int threadContext) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"RB_RenderThread")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitBackendGlobalStructs() -> void
{
  return Zynamic::Forward<void ()>(L"RB_InitBackendGlobalStructs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetBspImages() -> void
{
  return Zynamic::Forward<void ()>(L"RB_SetBspImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitSingleCodeImage(unsigned int codeTexture, const struct GfxImage* image, unsigned char samplerState, const char* name) -> void
{
  return Zynamic::Forward<void (unsigned int, const struct GfxImage*, unsigned char, const char*)>(L"RB_InitSingleCodeImage")(codeTexture, image, samplerState, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitCodeImages() -> void
{
  return Zynamic::Forward<void ()>(L"RB_InitCodeImages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_RegisterBackendAssets() -> void
{
  return Zynamic::Forward<void ()>(L"RB_RegisterBackendAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SaveScreen_BlendBlurred(const struct GfxBlendSaveScreenBlurredParam* p, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxBlendSaveScreenBlurredParam*, const struct GfxViewInfo*)>(L"RB_SaveScreen_BlendBlurred")(p, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SaveScreen_BlendFlashed(const struct GfxBlendSaveScreenFlashedParam* p, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxBlendSaveScreenFlashedParam*, const struct GfxViewInfo*)>(L"RB_SaveScreen_BlendFlashed")(p, viewInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SaveScreen(const struct GfxSaveScreenParam* p, const struct GfxViewInfo* viewInfo) -> void
{
  return Zynamic::Forward<void (const struct GfxSaveScreenParam*, const struct GfxViewInfo*)>(L"RB_SaveScreen")(p, viewInfo);
}

#endif // __UNIMPLEMENTED__
