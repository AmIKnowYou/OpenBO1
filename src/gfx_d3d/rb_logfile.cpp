//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_CloseLogFile() -> void
{
  return Zynamic::Forward<void ()>(L"RB_CloseLogFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_OpenLogFile() -> void
{
  return Zynamic::Forward<void ()>(L"RB_OpenLogFile")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_IsLogging() -> bool
{
  return Zynamic::Forward<bool ()>(L"RB_IsLogging")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UpdateLogging() -> void
{
  return Zynamic::Forward<void ()>(L"RB_UpdateLogging")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogPrint(const char* text) -> void
{
  return Zynamic::Forward<void (const char*)>(L"RB_LogPrint")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogTechniqueType(unsigned char techType) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"RB_LogTechniqueType")(techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogBlend(const char* format, int blend) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"RB_LogBlend")(format, blend);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogBlendOp(const char* format, int blendOp) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"RB_LogBlendOp")(format, blendOp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogBool(const char* keyName, int stateBits, int changedBits, int bitMask, const char* trueName, const char* falseName) -> void
{
  return Zynamic::Forward<void (const char*, int, int, int, const char*, const char*)>(L"RB_LogBool")(keyName, stateBits, changedBits, bitMask, trueName, falseName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogFromTable(const char* keyName, int stateBits, int changedBits, int bitMask, int bitShift, const struct StateBitsTable* table, int tableCount) -> void
{
  return Zynamic::Forward<void (const char*, int, int, int, int, const struct StateBitsTable*, int)>(L"RB_LogFromTable")(keyName, stateBits, changedBits, bitMask, bitShift, table, tableCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogStencilState(int stateBits1, int changedBits1, const struct StencilLogBits* desc) -> void
{
  return Zynamic::Forward<void (int, int, const struct StencilLogBits*)>(L"RB_LogStencilState")(stateBits1, changedBits1, desc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogPrintState_0(int stateBits0, int changedBits0) -> void
{
  return Zynamic::Forward<void (int, int)>(L"RB_LogPrintState_0")(stateBits0, changedBits0);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LogPrintState_1(int stateBits1, int changedBits1) -> void
{
  return Zynamic::Forward<void (int, int)>(L"RB_LogPrintState_1")(stateBits1, changedBits1);
}

#endif // __UNIMPLEMENTED__
