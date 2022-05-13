//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto FixedSizeAllocator<GlassShard*>::FixedSizeAllocator<GlassShard*>(void* buffer, unsigned int num, class SmallAllocator& al) -> void
{
  return Zynamic::Forward<public void (void*, unsigned int, class SmallAllocator&)>(L"FixedSizeAllocator<GlassShard *>::FixedSizeAllocator<GlassShard *>")(buffer, num, al);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto FixedSizeAllocator<GlassShard*>::Allocate() -> struct GlassShard*
{
  return Zynamic::Forward<public struct GlassShard* ()>(L"FixedSizeAllocator<GlassShard *>::Allocate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto FixedSizeAllocator<GlassShard*>::Free(struct GlassShard* mem) -> void
{
  return Zynamic::Forward<public void (struct GlassShard*)>(L"FixedSizeAllocator<GlassShard *>::Free")(mem);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto FixedSizeAllocator<GlassShard*>::FreeAll() -> void
{
  return Zynamic::Forward<public void ()>(L"FixedSizeAllocator<GlassShard *>::FreeAll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto FixedSizeAllocator<GlassShard*>::IsValidUsedPtr(struct GlassShard* ptr) -> bool
{
  return Zynamic::Forward<public bool (struct GlassShard*)>(L"FixedSizeAllocator<GlassShard *>::IsValidUsedPtr")(ptr);
}

#endif // __UNIMPLEMENTED__
