//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDebugInit(void* buffer, int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (void*, int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_UserDebugInit")(buffer, size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDebugReset(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserDebugReset")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDebugDestroy(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserDebugDestroy")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDebugAlloc(struct HunkUser* _user, int size, int alignment, const char* name) -> void*
{
  return Zynamic::Forward<void* (struct HunkUser*, int, int, const char*)>(L"Hunk_UserDebugAlloc")(_user, size, alignment, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDebugFree(struct HunkUser* _user, void* ptr) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_UserDebugFree")(_user, ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDefaultInit(void* buffer, int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (void*, int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_UserDefaultInit")(buffer, size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDefaultReset(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserDefaultReset")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDefaultDestroy(struct HunkUser* _user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserDefaultDestroy")(_user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDefaultAlloc(struct HunkUser* _user, int size, int alignment, const char* name) -> void*
{
  return Zynamic::Forward<void* (struct HunkUser*, int, int, const char*)>(L"Hunk_UserDefaultAlloc")(_user, size, alignment, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDefaultFree(struct HunkUser* user, void* ptr) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_UserDefaultFree")(user, ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserStartup() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_UserStartup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Hunk_UserShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserCreateFromBuffer(void* buffer, int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (void*, int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_UserCreateFromBuffer")(buffer, size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserCreate(int size, enum HU_ALLOCATION_SCHEME scheme, unsigned long flags, void* scheme_specific_data, const char* name, int type) -> struct HunkUser*
{
  return Zynamic::Forward<struct HunkUser* (int, enum HU_ALLOCATION_SCHEME, unsigned long, void*, const char*, int)>(L"Hunk_UserCreate")(size, scheme, flags, scheme_specific_data, name, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserAlloc(struct HunkUser* user, int size, int alignment, const char* name) -> void*
{
  return Zynamic::Forward<void* (struct HunkUser*, int, int, const char*)>(L"Hunk_UserAlloc")(user, size, alignment, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserFree(struct HunkUser* user, void* ptr) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_UserFree")(user, ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserReset(struct HunkUser* user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserReset")(user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserDestroy(struct HunkUser* user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"Hunk_UserDestroy")(user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_UserSetPos(struct HunkUser* _user, void* pos) -> void
{
  return Zynamic::Forward<void (struct HunkUser*, void*)>(L"Hunk_UserSetPos")(_user, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_CopyString(struct HunkUser* user, const char* in) -> char*
{
  return Zynamic::Forward<char* (struct HunkUser*, const char*)>(L"Hunk_CopyString")(user, in);
}

#endif // __UNIMPLEMENTED__
