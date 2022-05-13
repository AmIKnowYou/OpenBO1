//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_Netchan_TransmitNextFragment(struct netchan_t* chan) -> void
{
  return Zynamic::Forward<void (struct netchan_t*)>(L"CL_Netchan_TransmitNextFragment")(chan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Netchan_Transmit(struct netchan_t* chan, unsigned char* data, int length) -> void
{
  return Zynamic::Forward<void (struct netchan_t*, unsigned char*, int)>(L"CL_Netchan_Transmit")(chan, data, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Netchan_AddOOBProfilePacket(int localClientNum, int iLength) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_Netchan_AddOOBProfilePacket")(localClientNum, iLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Netchan_UpdateProfileStats(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CL_Netchan_UpdateProfileStats")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ProfDraw(int y, const char* pszString) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CL_ProfDraw")(y, pszString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Netchan_PrintProfileStats(int localClientNum, int bPrintToConsole) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CL_Netchan_PrintProfileStats")(localClientNum, bPrintToConsole);
}

#endif // __UNIMPLEMENTED__
