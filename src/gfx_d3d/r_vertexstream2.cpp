//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto AllocateVertexStream2Buffer(const unsigned int stream2ByteSize, int location) -> bool
{
  return Zynamic::Forward<bool (const unsigned int, int)>(L"AllocateVertexStream2Buffer")(stream2ByteSize, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeVertexStream2Buffer() -> void
{
  return Zynamic::Forward<void ()>(L"FreeVertexStream2Buffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_Init(unsigned int stream2ByteSize, int location) -> void
{
  return Zynamic::Forward<void (unsigned int, int)>(L"R_VertexStream2_Init")(stream2ByteSize, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"R_VertexStream2_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_Lock(unsigned int& stream2LockedSize) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (unsigned int&)>(L"R_VertexStream2_Lock")(stream2LockedSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_Unlock() -> void
{
  return Zynamic::Forward<void ()>(L"R_VertexStream2_Unlock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_Clear() -> void
{
  return Zynamic::Forward<void ()>(L"R_VertexStream2_Clear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VertexStream2_GetVB() -> struct IDirect3DVertexBuffer9*&
{
  return Zynamic::Forward<struct IDirect3DVertexBuffer9*& ()>(L"R_VertexStream2_GetVB")();
}

#endif // __UNIMPLEMENTED__
