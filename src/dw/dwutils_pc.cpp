//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto dwGetOnlineUserID(const int controllerIndex, unsigned __int64& userID) -> bool
{
  return Zynamic::Forward<bool (const int, unsigned __int64&)>(L"dwGetOnlineUserID")(controllerIndex, userID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetOnlineUserName(int controllerIndex, char* buf, const unsigned int bufsize) -> bool
{
  return Zynamic::Forward<bool (int, char*, const unsigned int)>(L"dwGetOnlineUserName")(controllerIndex, buf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwXnaddrtonetadr(unsigned char* xnaddr, struct netadr_t* privadr, struct netadr_t* pubadr) -> void
{
  return Zynamic::Forward<void (unsigned char*, struct netadr_t*, struct netadr_t*)>(L"dwXnaddrtonetadr")(xnaddr, privadr, pubadr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendClientChallenge(unsigned int nonce, unsigned int challenge, unsigned __int64 userID) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int, unsigned __int64)>(L"SV_SendClientChallenge")(nonce, challenge, userID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_HandleSVDWChallenge(unsigned int nonce, unsigned int serverchallenge, unsigned int clientchallenge) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, unsigned int)>(L"CL_HandleSVDWChallenge")(nonce, serverchallenge, clientchallenge);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GametypeToInt(const char* gametype) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"Com_GametypeToInt")(gametype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_IntToGametype(char* gametype_out, unsigned int gametype_in) -> void
{
  return Zynamic::Forward<void (char*, unsigned int)>(L"Com_IntToGametype")(gametype_out, gametype_in);
}

#endif // __UNIMPLEMENTED__
