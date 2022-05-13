//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_DebugAlloc(void** memPtr, int size, const char* name) -> void
{
  return Zynamic::Forward<void (void**, int, const char*)>(L"R_DebugAlloc")(memPtr, size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DebugFree(void** dataPtr) -> void
{
  return Zynamic::Forward<void (void**)>(L"R_DebugFree")(dataPtr);
}

#endif // __UNIMPLEMENTED__
