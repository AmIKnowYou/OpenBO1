//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto channel_t<short>::channel_t<short>() -> void
{
  return Zynamic::Forward<public void ()>(L"channel_t<short>::channel_t<short>")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto channel_t<float4>::Alloc(int location) -> void
{
  return Zynamic::Forward<public void (int)>(L"channel_t<float4>::Alloc")(location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto channel_t<float4>::Free() -> void
{
  return Zynamic::Forward<public void ()>(L"channel_t<float4>::Free")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto channel_t<float4>::Cache(int y, bool modify, bool flush) -> union float4*
{
  return Zynamic::Forward<public union float4* (int, bool, bool)>(L"channel_t<float4>::Cache")(y, modify, flush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto channel_t<float4>::cache_t::cache_t() -> void
{
  return Zynamic::Forward<public void ()>(L"channel_t<float4>::cache_t::cache_t")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto fifo_t<debugpoint_t, 16>::add(const struct debugpoint_t& t) -> void
{
  return Zynamic::Forward<public void (const struct debugpoint_t&)>(L"fifo_t<debugpoint_t,16>::add")(t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'data''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'data''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_swizzleXAYA''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_swizzleXAYA''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_swizzleYABA''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_swizzleYABA''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'debugPoints''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'debugPoints''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'expiredMeshes''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'expiredMeshes''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FlushBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"FlushBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBuffersForPoint(int u, int v, int& bufId, float& interpolate) -> void
{
  return Zynamic::Forward<void (int, int, int&, float&)>(L"GetBuffersForPoint")(u, v, bufId, interpolate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterFindCells(int gridX, int gridY, struct ComWaterCell** cells) -> bool
{
  return Zynamic::Forward<bool (int, int, struct ComWaterCell**)>(L"R_WaterFindCells")(gridX, gridY, cells);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationFillTile(struct tile_t& tile) -> bool
{
  return Zynamic::Forward<bool (struct tile_t&)>(L"R_WaterSimulationFillTile")(tile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Float4LoadFloats(float x, float y, float z, float w, union float4& result) -> void
{
  return Zynamic::Forward<void (float, float, float, float, union float4&)>(L"Float4LoadFloats")(x, y, z, w, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LockUpdateMutex() -> void
{
  return Zynamic::Forward<void ()>(L"LockUpdateMutex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnlockUpdateMutex() -> void
{
  return Zynamic::Forward<void ()>(L"UnlockUpdateMutex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationUpdateFrame(const struct WaterSimulationCmd* cmd) -> void
{
  return Zynamic::Forward<void (const struct WaterSimulationCmd*)>(L"R_WaterSimulationUpdateFrame")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpireMesh(struct tile_t& tile) -> void
{
  return Zynamic::Forward<void (struct tile_t&)>(L"ExpireMesh")(tile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpireAllMeshes(struct tile_t& tile) -> void
{
  return Zynamic::Forward<void (struct tile_t&)>(L"ExpireAllMeshes")(tile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationTeleport(int posX, int posY) -> void
{
  return Zynamic::Forward<void (int, int)>(L"R_WaterSimulationTeleport")(posX, posY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationTrackView(const float* eyePos) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_WaterSimulationTrackView")(eyePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitWaterSimulation() -> void
{
  return Zynamic::Forward<void ()>(L"R_InitWaterSimulation")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationRestart() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaterSimulationRestart")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllocMeshVerts() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"AllocMeshVerts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NumMeshVertsFree() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"NumMeshVertsFree")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeMeshVerts(unsigned int baseVertex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"FreeMeshVerts")(baseVertex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitWaterSimulationBuffers(int location) -> void
{
  return Zynamic::Forward<void (int)>(L"R_InitWaterSimulationBuffers")(location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeWaterSimulationBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_FreeWaterSimulationBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationUpdateConfig() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaterSimulationUpdateConfig")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SurfaceAlloc(unsigned int size) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"R_SurfaceAlloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderWaterModel(unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_RenderWaterModel")(viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetWaterSimulationConstants(struct GfxCmdBufSourceState* state, float interp) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufSourceState*, float)>(L"R_SetWaterSimulationConstants")(state, interp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationRender(const float* eyePos, int time, unsigned int viewIndex) -> void
{
  return Zynamic::Forward<void (const float*, int, unsigned int)>(L"R_WaterSimulationRender")(eyePos, time, viewIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationSwitchOff() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaterSimulationSwitchOff")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FillIndexBuffer(unsigned short* lockedindex, unsigned int lodMask, unsigned short* verts) -> int
{
  return Zynamic::Forward<int (unsigned short*, unsigned int, unsigned short*)>(L"FillIndexBuffer")(lockedindex, lodMask, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Water_AllocVertexBuffer(struct IDirect3DVertexBuffer9** vb, unsigned int buffersize, unsigned int location) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DVertexBuffer9**, unsigned int, unsigned int)>(L"Water_AllocVertexBuffer")(vb, buffersize, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Water_AllocIndexBuffer(struct IDirect3DIndexBuffer9** ib, unsigned int buffersize, unsigned int location) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DIndexBuffer9**, unsigned int, unsigned int)>(L"Water_AllocIndexBuffer")(ib, buffersize, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitWaterSimulationVertexBuffers(unsigned int location) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"R_InitWaterSimulationVertexBuffers")(location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeWaterSimulationVertexBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_FreeWaterSimulationVertexBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationNotifyBullet(const float* hitpos) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_WaterSimulationNotifyBullet")(hitpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConvertWorldToGrid(const float* worldPos, int& u, int& v) -> bool
{
  return Zynamic::Forward<bool (const float*, int&, int&)>(L"ConvertWorldToGrid")(worldPos, u, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationSetHeight(const float* center, float radius, float targetHeight, float lerpRate) -> void
{
  return Zynamic::Forward<void (const float*, float, float, float)>(L"R_WaterSimulationSetHeight")(center, radius, targetHeight, lerpRate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationSimpleDisplace(const float* hitpos, float radius, float height) -> void
{
  return Zynamic::Forward<void (const float*, float, float)>(L"R_WaterSimulationSimpleDisplace")(hitpos, radius, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationNotifyExplosionEx(const float* hitpos, int size, float height) -> void
{
  return Zynamic::Forward<void (const float*, int, float)>(L"R_WaterSimulationNotifyExplosionEx")(hitpos, size, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationNotifyExplosion(const float* hitpos) -> void
{
  return Zynamic::Forward<void (const float*)>(L"R_WaterSimulationNotifyExplosion")(hitpos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReadValue(int u, int v, unsigned int bufnum) -> union float4
{
  return Zynamic::Forward<union float4 (int, int, unsigned int)>(L"ReadValue")(u, v, bufnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationSkinMesh(const struct WaterSimulationCmd* cmd) -> void
{
  return Zynamic::Forward<void (const struct WaterSimulationCmd*)>(L"R_WaterSimulationSkinMesh")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto water_rand() -> int
{
  return Zynamic::Forward<int ()>(L"water_rand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationApplyWaveSeed() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaterSimulationApplyWaveSeed")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationCmd(void* rawdata) -> void
{
  return Zynamic::Forward<void (void*)>(L"R_WaterSimulationCmd")(rawdata);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetGridPosition(int sx, int sy, int timeOffset, float* v) -> void
{
  return Zynamic::Forward<void (int, int, int, float*)>(L"R_WaterSimulationGetGridPosition")(sx, sy, timeOffset, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetBaseHeight(const float* queryPos) -> float
{
  return Zynamic::Forward<float (const float*)>(L"R_WaterSimulationGetBaseHeight")(queryPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetHeight(const float* queryPos) -> float
{
  return Zynamic::Forward<float (const float*)>(L"R_WaterSimulationGetHeight")(queryPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetInfo(const float* queryPos, struct WaterSimInfo* info) -> void
{
  return Zynamic::Forward<void (const float*, struct WaterSimInfo*)>(L"R_WaterSimulationGetInfo")(queryPos, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetHeightGlobal(const float* queryPos) -> float
{
  return Zynamic::Forward<float (const float*)>(L"R_WaterSimulationGetHeightGlobal")(queryPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaterSimulationGetAverageHeight(float* pHeight) -> bool
{
  return Zynamic::Forward<bool (float*)>(L"R_WaterSimulationGetAverageHeight")(pHeight);
}

#endif // __UNIMPLEMENTED__
