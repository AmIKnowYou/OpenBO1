//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TL_Warning(const char* Text) -> void
{
  return Zynamic::Forward<void (const char*)>(L"TL_Warning")(Text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_ReadFile(const char* FileName, struct tlFileBuf* File, unsigned int Align, unsigned int Flags) -> bool
{
  return Zynamic::Forward<bool (const char*, struct tlFileBuf*, unsigned int, unsigned int)>(L"TL_ReadFile")(FileName, File, Align, Flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_ReleaseFile(struct tlFileBuf* File) -> void
{
  return Zynamic::Forward<void (struct tlFileBuf*)>(L"TL_ReleaseFile")(File);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_DebugPrint(const char* Text) -> void
{
  return Zynamic::Forward<void (const char*)>(L"TL_DebugPrint")(Text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_MemAlloc(unsigned int Size, unsigned int Align, unsigned int Flags) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int, unsigned int)>(L"TL_MemAlloc")(Size, Align, Flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_MemFree(void* Ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"TL_MemFree")(Ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TL_CriticalError(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"TL_CriticalError")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SetupTLCallbacks(int hunkMemSize) -> void
{
  return Zynamic::Forward<void (int)>(L"Sys_SetupTLCallbacks")(hunkMemSize);
}

#endif // __UNIMPLEMENTED__
