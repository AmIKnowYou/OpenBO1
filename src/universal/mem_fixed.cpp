//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Hunk_FixedInit(void* buffer, int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (void*, int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_FixedInit")(buffer, size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FixedReset(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_FixedReset")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FixedDestroy(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_FixedDestroy")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FixedAlloc(struct HunkUser* _user, int size, int alignment, const char* name) -> void*
{
  return Zynamic::Forward<void* (struct HunkUser*, int, int, const char*)>(L"Hunk_FixedAlloc")(_user, size, alignment, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FixedFree(struct HunkUser* _user, void* ptr) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_FixedFree")(_user, ptr);
}

#endif // __UNIMPLEMENTED__
