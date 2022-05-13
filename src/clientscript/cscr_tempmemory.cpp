//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TempMemoryReset(struct HunkUser* user) -> void
{
  return Zynamic::Forward<void (struct HunkUser*)>(L"TempMemoryReset")(user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TempMalloc(int len) -> char*
{
  return Zynamic::Forward<char* (int)>(L"TempMalloc")(len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TempMemorySetPos(char* pos) -> void
{
  return Zynamic::Forward<void (char*)>(L"TempMemorySetPos")(pos);
}

#endif // __UNIMPLEMENTED__
