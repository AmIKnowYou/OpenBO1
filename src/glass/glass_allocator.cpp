//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto SmallAllocator::Init(void* buffer, unsigned int bs, unsigned int nb) -> void
{
  return Zynamic::Forward<public void (void*, unsigned int, unsigned int)>(L"SmallAllocator::Init")(buffer, bs, nb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto SmallAllocator::Allocate(unsigned int size) -> void*
{
  return Zynamic::Forward<public void* (unsigned int)>(L"SmallAllocator::Allocate")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto SmallAllocator::Free(void* ptr, unsigned int num) -> void
{
  return Zynamic::Forward<public void (void*, unsigned int)>(L"SmallAllocator::Free")(ptr, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto SmallAllocator::IsValidPointer(void* ptr) -> bool
{
  return Zynamic::Forward<public bool (void*)>(L"SmallAllocator::IsValidPointer")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto Allocator::Memory::Init() -> void
{
  return Zynamic::Forward<private void ()>(L"Allocator::Memory::Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto Allocator::Memory::MakeFree() -> bool
{
  return Zynamic::Forward<private bool ()>(L"Allocator::Memory::MakeFree")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::Init(void* buf, int size) -> void
{
  return Zynamic::Forward<public void (void*, int)>(L"Allocator::Init")(buf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::FreeAll() -> void
{
  return Zynamic::Forward<public void ()>(L"Allocator::FreeAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::Allocate(int size, void* userData) -> void*
{
  return Zynamic::Forward<public void* (int, void*)>(L"Allocator::Allocate")(size, userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::Free(void* ptr) -> void
{
  return Zynamic::Forward<public void (void*)>(L"Allocator::Free")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::GetMemorySize(void* ptr) -> int
{
  return Zynamic::Forward<public int (void*)>(L"Allocator::GetMemorySize")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto Allocator::Split(class Allocator::Memory* mem, int size) -> void
{
  return Zynamic::Forward<private void (class Allocator::Memory*, int)>(L"Allocator::Split")(mem, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto Allocator::Merge(class Allocator::Memory* mem1, class Allocator::Memory* mem2) -> void
{
  return Zynamic::Forward<private void (class Allocator::Memory*, class Allocator::Memory*)>(L"Allocator::Merge")(mem1, mem2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::Defrag(function* func, int count) -> int
{
  return Zynamic::Forward<public int (function *, int)>(L"Allocator::Defrag")(func, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::GetFree() -> int
{
  return Zynamic::Forward<public int ()>(L"Allocator::GetFree")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Allocator::GetLargestFree() -> int
{
  return Zynamic::Forward<public int ()>(L"Allocator::GetLargestFree")();
}

#endif // __UNIMPLEMENTED__
