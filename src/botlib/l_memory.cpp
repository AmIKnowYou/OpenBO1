//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetMemory(unsigned long size) -> void*
{
  return Zynamic::Forward<void* (unsigned long)>(L"GetMemory")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClearedMemory(unsigned long size) -> void*
{
  return Zynamic::Forward<void* (unsigned long)>(L"GetClearedMemory")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FreeMemory(void* ptr) -> void
{
  return Zynamic::Forward<void (void*)>(L"FreeMemory")(ptr);
}

#endif // __UNIMPLEMENTED__
