//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Hunk_FirstFitInit(void* buffer, int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (void*, int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_FirstFitInit")(buffer, size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FirstFitReset(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_FirstFitReset")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FirstFitDestroy(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_FirstFitDestroy")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FirstFitAlloc(struct HunkUser* _user, int size, int alignment, const char* name) -> void*
{
  return Zynamic::Forward<void* (struct HunkUser*, int, int, const char*)>(L"Hunk_FirstFitAlloc")(_user, size, alignment, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_FirstFitFree(struct HunkUser* _user, void* ptr) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_FirstFitFree")(_user, ptr);
}

#endif // __UNIMPLEMENTED__
