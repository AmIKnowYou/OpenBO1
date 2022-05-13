//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MSG_WritePosition(struct msg_t& msg, float* origin) -> void
{
  return Zynamic::Forward<void (struct msg_t&, float*)>(L"MSG_WritePosition")(msg, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadPosition(struct msg_t& msg, float* origin) -> void
{
  return Zynamic::Forward<void (struct msg_t&, float*)>(L"MSG_ReadPosition")(msg, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteQuat(struct msg_t& msg, float* quat) -> void
{
  return Zynamic::Forward<void (struct msg_t&, float*)>(L"MSG_WriteQuat")(msg, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadQuat(struct msg_t& msg, float* quat) -> void
{
  return Zynamic::Forward<void (struct msg_t&, float*)>(L"MSG_ReadQuat")(msg, quat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_WriteGameState(struct msg_t& msg) -> void
{
  return Zynamic::Forward<void (struct msg_t&)>(L"DynEnt_WriteGameState")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ReadGameState(struct msg_t& msg, int localClientNum) -> void
{
  return Zynamic::Forward<void (struct msg_t&, int)>(L"DynEnt_ReadGameState")(msg, localClientNum);
}

#endif // __UNIMPLEMENTED__
