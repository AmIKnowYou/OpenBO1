//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

private auto DDraw::DDraw() -> void
{
  return Zynamic::Forward<private void ()>(L"DDraw::DDraw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto DDraw::Instance() -> const class DDraw&
{
  return Zynamic::Forward<public const class DDraw& ()>(L"DDraw::Instance")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VideoMemoryForDevice(struct _GUID* lpGUID, char* lpDriverDescription) -> unsigned long
{
  return Zynamic::Forward<unsigned long (struct _GUID*, char*)>(L"R_VideoMemoryForDevice")(lpGUID, lpDriverDescription);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DDEnumCallback(struct _GUID* lpGUID, char* lpDriverDescription, char* lpDriverName, void* lpContext, struct HMONITOR__* hm) -> int
{
  return Zynamic::Forward<int (struct _GUID*, char*, char*, void*, struct HMONITOR__*)>(L"R_DDEnumCallback")(lpGUID, lpDriverDescription, lpDriverName, lpContext, hm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrasticVideoMemoryForDevice(struct _GUID* lpGUID, char* lpDriverDescription) -> unsigned long
{
  return Zynamic::Forward<unsigned long (struct _GUID*, char*)>(L"R_DrasticVideoMemoryForDevice")(lpGUID, lpDriverDescription);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DDEnumDrasticCallback(struct _GUID* lpGUID, char* lpDriverDescription, char* lpDriverName, void* lpContext, struct HMONITOR__* hm) -> int
{
  return Zynamic::Forward<int (struct _GUID*, char*, char*, void*, struct HMONITOR__*)>(L"R_DDEnumDrasticCallback")(lpGUID, lpDriverDescription, lpDriverName, lpContext, hm);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_VideoMemory() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_VideoMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AvailableTextureMemory() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"R_AvailableTextureMemory")();
}

#endif // __UNIMPLEMENTED__
