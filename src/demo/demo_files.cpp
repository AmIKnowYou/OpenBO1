//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Demo_InitFileHandlerSystem() -> void
{
  return Zynamic::Forward<void ()>(L"Demo_InitFileHandlerSystem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_AllocateMemoryFromStreamBuffer(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_AllocateMemoryFromStreamBuffer")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_ReturnStreamBufferMemory(int size) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_ReturnStreamBufferMemory")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsStreamBufferAllocated() -> bool
{
  return Zynamic::Forward<bool ()>(L"Demo_IsStreamBufferAllocated")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetCurrentAllocatedFileSize() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetCurrentAllocatedFileSize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetStreamAllocatedBuffer() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetStreamAllocatedBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetDemoPath(char* demoPath) -> void
{
  return Zynamic::Forward<void (char*)>(L"Demo_GetDemoPath")(demoPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_OpenFileWrite(const char* filename, const char* dir, bool supressErrors) -> int
{
  return Zynamic::Forward<int (const char*, const char*, bool)>(L"Demo_OpenFileWrite")(filename, dir, supressErrors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_OpenFileRead(const char* filename, const char* dir, bool supressErrors) -> int
{
  return Zynamic::Forward<int (const char*, const char*, bool)>(L"Demo_OpenFileRead")(filename, dir, supressErrors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_Write(const void* buffer, int len, int handle) -> int
{
  return Zynamic::Forward<int (const void*, int, int)>(L"Demo_Write")(buffer, len, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_Read(void* buffer, int len, int handle) -> int
{
  return Zynamic::Forward<int (void*, int, int)>(L"Demo_Read")(buffer, len, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_CloseFile(int handle) -> void
{
  return Zynamic::Forward<void (int)>(L"Demo_CloseFile")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_SeekFile(int handle, long offset, int origin) -> int
{
  return Zynamic::Forward<int (int, long, int)>(L"Demo_SeekFile")(handle, offset, origin);
}

#endif // __UNIMPLEMENTED__
