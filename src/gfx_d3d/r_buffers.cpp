//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_buffers() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_r_buffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LockVertexBuffer(struct IDirect3DVertexBuffer9* handle, int offset, int bytes, int lockFlags) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DVertexBuffer9*, int, int, int)>(L"R_LockVertexBuffer")(handle, offset, bytes, lockFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlockVertexBuffer(struct IDirect3DVertexBuffer9* handle) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9*)>(L"R_UnlockVertexBuffer")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LockIndexBuffer(struct IDirect3DIndexBuffer9* handle, int offset, int bytes, int lockFlags) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DIndexBuffer9*, int, int, int)>(L"R_LockIndexBuffer")(handle, offset, bytes, lockFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlockIndexBuffer(struct IDirect3DIndexBuffer9* handle) -> void
{
  return Zynamic::Forward<void (struct IDirect3DIndexBuffer9*)>(L"R_UnlockIndexBuffer")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocDynamicVertexBuffer(struct IDirect3DVertexBuffer9** vb, int sizeInBytes, bool writeOnly, unsigned int __formal, const char* __formal) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DVertexBuffer9**, int, bool, unsigned int, const char*)>(L"R_AllocDynamicVertexBuffer")(vb, sizeInBytes, writeOnly, __formal, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticVertexBuffer(struct IDirect3DVertexBuffer9** vb, int sizeInBytes, unsigned int __formal, const char* __formal) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DVertexBuffer9**, int, unsigned int, const char*)>(L"R_AllocStaticVertexBuffer")(vb, sizeInBytes, __formal, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishStaticVertexBuffer(struct IDirect3DVertexBuffer9* vb) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9*)>(L"R_FinishStaticVertexBuffer")(vb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeStaticVertexBuffer(struct IDirect3DVertexBuffer9* vb) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9*)>(L"R_FreeStaticVertexBuffer")(vb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocDynamicIndexBuffer(struct IDirect3DIndexBuffer9** ib, int sizeInBytes, bool writeOnly, unsigned int __formal, const char* __formal) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DIndexBuffer9**, int, bool, unsigned int, const char*)>(L"R_AllocDynamicIndexBuffer")(ib, sizeInBytes, writeOnly, __formal, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticIndexBuffer(struct IDirect3DIndexBuffer9** ib, int sizeInBytes, unsigned int __formal, const char* __formal) -> void*
{
  return Zynamic::Forward<void* (struct IDirect3DIndexBuffer9**, int, unsigned int, const char*)>(L"R_AllocStaticIndexBuffer")(ib, sizeInBytes, __formal, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishStaticIndexBuffer(struct IDirect3DIndexBuffer9* ib) -> void
{
  return Zynamic::Forward<void (struct IDirect3DIndexBuffer9*)>(L"R_FinishStaticIndexBuffer")(ib);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FreeStaticIndexBuffer(struct IDirect3DIndexBuffer9* ib) -> void
{
  return Zynamic::Forward<void (struct IDirect3DIndexBuffer9*)>(L"R_FreeStaticIndexBuffer")(ib);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_VertexBuffer(struct IDirect3DVertexBuffer9** vb, void* bufferData, int sizeInBytes) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9**, void*, int)>(L"Load_VertexBuffer")(vb, bufferData, sizeInBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDynamicVertexBufferState(struct GfxVertexBufferState* vb, int bytes, bool writeOnly, unsigned int location) -> void
{
  return Zynamic::Forward<void (struct GfxVertexBufferState*, int, bool, unsigned int)>(L"R_InitDynamicVertexBufferState")(vb, bytes, writeOnly, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDynamicIndexBufferState(struct GfxIndexBufferState* ib, int indexCount, bool writeOnly, unsigned int location) -> void
{
  return Zynamic::Forward<void (struct GfxIndexBufferState*, int, bool, unsigned int)>(L"R_InitDynamicIndexBufferState")(ib, indexCount, writeOnly, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitDynamicIndices(struct GfxDynamicIndices* ib, int indexCount, unsigned int location) -> void
{
  return Zynamic::Forward<void (struct GfxDynamicIndices*, int, unsigned int)>(L"R_InitDynamicIndices")(ib, indexCount, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateDynamicBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateDynamicBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DestroyDynamicBuffers() -> void
{
  return Zynamic::Forward<void ()>(L"R_DestroyDynamicBuffers")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownDynamicIndices(struct GfxDynamicIndices* ib) -> void
{
  return Zynamic::Forward<void (struct GfxDynamicIndices*)>(L"R_ShutdownDynamicIndices")(ib);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CreateParticleCloudBuffer() -> void
{
  return Zynamic::Forward<void ()>(L"R_CreateParticleCloudBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DestroyParticleCloudBuffer() -> void
{
  return Zynamic::Forward<void ()>(L"R_DestroyParticleCloudBuffer")();
}

#endif // __UNIMPLEMENTED__
