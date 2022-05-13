//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_Filter(const char* filter, const char* name, int casesensitive) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, int)>(L"Com_Filter")(filter, name, casesensitive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_FilterPath(const char* filter, const char* name, int casesensitive) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, int)>(L"Com_FilterPath")(filter, name, casesensitive);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_HashKey(const char* string, int maxlen) -> int
{
  return Zynamic::Forward<int (const char*, int)>(L"Com_HashKey")(string, maxlen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetQTime(int time, struct qtime_s* qtime, bool useLocalTime) -> void
{
  return Zynamic::Forward<void (int, struct qtime_s*, bool)>(L"Com_GetQTime")(time, qtime, useLocalTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_RealTime(struct qtime_s* qtime, bool useLocalTime) -> int
{
  return Zynamic::Forward<int (struct qtime_s*, bool)>(L"Com_RealTime")(qtime, useLocalTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _copyDWord(unsigned int* dest, const unsigned int constant, const unsigned int count) -> void
{
  return Zynamic::Forward<void (unsigned int*, const unsigned int, const unsigned int)>(L"_copyDWord")(dest, constant, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Memcpy(void* dest, const void* src, int count) -> void
{
  return Zynamic::Forward<void (void*, const void*, int)>(L"Com_Memcpy")(dest, src, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_Memset(void* dest, const int val, int count) -> void
{
  return Zynamic::Forward<void (void*, const int, int)>(L"Com_Memset")(dest, val, count);
}

#endif // __UNIMPLEMENTED__
