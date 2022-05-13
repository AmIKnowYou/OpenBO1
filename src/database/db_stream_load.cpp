//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Load_Stream(bool atStreamStart, const void* ptr, int size) -> void
{
  return Zynamic::Forward<void (bool, const void*, int)>(L"Load_Stream")(atStreamStart, ptr, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_DelayStream() -> void
{
  return Zynamic::Forward<void ()>(L"Load_DelayStream")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ConvertOffsetToAlias(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"DB_ConvertOffsetToAlias")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_ConvertOffsetToPointer(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"DB_ConvertOffsetToPointer")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_XStringCustom(const char** str) -> void
{
  return Zynamic::Forward<void (const char**)>(L"Load_XStringCustom")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_TempStringCustom(const char** str) -> void
{
  return Zynamic::Forward<void (const char**)>(L"Load_TempStringCustom")(str);
}

#endif // __UNIMPLEMENTED__
