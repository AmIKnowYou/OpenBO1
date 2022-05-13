//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetEntityIndex(const unsigned short& targetname) -> int
{
  return Zynamic::Forward<int (const unsigned short&)>(L"GetEntityIndex")(targetname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_WriteGameState(struct msg_t& msg) -> void
{
  return Zynamic::Forward<void (struct msg_t&)>(L"Rope_WriteGameState")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rope_ReadGameState(struct msg_t& msg, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct msg_t&, int)>(L"Rope_ReadGameState")(msg, localClientNum);
}

#endif // __UNIMPLEMENTED__
