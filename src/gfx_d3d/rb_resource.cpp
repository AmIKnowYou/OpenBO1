//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Lock() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Resource_Lock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Unlock() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Resource_Unlock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_AllocEntry() -> struct r_resource_action*
{
  return Zynamic::Forward<struct r_resource_action* ()>(L"RB_Resource_AllocEntry")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_CreateTexture(struct GfxImage* image, void* imageBuffer, int mipCount, int flags, enum _D3DFORMAT imageFormat) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, void*, int, int, enum _D3DFORMAT)>(L"RB_Resource_CreateTexture")(image, imageBuffer, mipCount, flags, imageFormat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Release(struct IUnknown* resource) -> void
{
  return Zynamic::Forward<void (struct IUnknown*)>(L"RB_Resource_Release")(resource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_ReloadTexture(struct GfxImage* image, void* data) -> void
{
  return Zynamic::Forward<void (struct GfxImage*, void*)>(L"RB_Resource_ReloadTexture")(image, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Callback(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"RB_Resource_Callback")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_CallbackParam(function* callback, void* data) -> void
{
  return Zynamic::Forward<void (function *, void*)>(L"RB_Resource_CallbackParam")(callback, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_CreateVertexDeclaration(struct _D3DVERTEXELEMENT9* elements, struct IDirect3DVertexDeclaration9** declaration) -> void
{
  return Zynamic::Forward<void (struct _D3DVERTEXELEMENT9*, struct IDirect3DVertexDeclaration9**)>(L"RB_Resource_CreateVertexDeclaration")(elements, declaration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_CreateVertexShader(unsigned long* function, struct IDirect3DVertexShader9** shader) -> void
{
  return Zynamic::Forward<void (unsigned long*, struct IDirect3DVertexShader9**)>(L"RB_Resource_CreateVertexShader")(function, shader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_CreatePixelShader(unsigned long* function, struct IDirect3DPixelShader9** shader) -> void
{
  return Zynamic::Forward<void (unsigned long*, struct IDirect3DPixelShader9**)>(L"RB_Resource_CreatePixelShader")(function, shader);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_LoadVertexBuffer(struct IDirect3DVertexBuffer9** vb, void* bufferData, int sizeInBytes) -> void
{
  return Zynamic::Forward<void (struct IDirect3DVertexBuffer9**, void*, int)>(L"RB_Resource_LoadVertexBuffer")(vb, bufferData, sizeInBytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Update_Internal() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Resource_Update_Internal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Update(int msec) -> void
{
  return Zynamic::Forward<void (int)>(L"RB_Resource_Update")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Resource_Flush() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Resource_Flush")();
}

#endif // __UNIMPLEMENTED__
