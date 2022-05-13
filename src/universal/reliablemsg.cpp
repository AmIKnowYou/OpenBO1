//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RMsg_FindMessageSlot(const int clientSlot, unsigned char sequenceNum) -> int
{
  return Zynamic::Forward<int (const int, unsigned char)>(L"RMsg_FindMessageSlot")(clientSlot, sequenceNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_FindOldestSeq(const int clientSlot) -> int
{
  return Zynamic::Forward<int (const int)>(L"RMsg_FindOldestSeq")(clientSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_DropAllPacketsForClient(const int clientSlot) -> void
{
  return Zynamic::Forward<void (const int)>(L"RMsg_DropAllPacketsForClient")(clientSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_FindSlotForAddr(struct netadr_t* to) -> int
{
  return Zynamic::Forward<int (struct netadr_t*)>(L"RMsg_FindSlotForAddr")(to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_Init() -> void
{
  return Zynamic::Forward<void ()>(L"RMsg_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AddRMsgsToPacket(const int clientSlot, struct msg_t* outMsg) -> void
{
  return Zynamic::Forward<void (const int, struct msg_t*)>(L"RMsg_AddRMsgsToPacket")(clientSlot, outMsg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_SendMessages() -> void
{
  return Zynamic::Forward<void ()>(L"RMsg_SendMessages")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AckSequence(struct netadr_t* from, unsigned char sequenceNum) -> void
{
  return Zynamic::Forward<void (struct netadr_t*, unsigned char)>(L"RMsg_AckSequence")(from, sequenceNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_CountOutstandingMessages(const int clientSlot) -> int
{
  return Zynamic::Forward<int (const int)>(L"RMsg_CountOutstandingMessages")(clientSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AckMsgSlot(struct reliableClient* client, int clientSlot, int msgSlot) -> void
{
  return Zynamic::Forward<void (struct reliableClient*, int, int)>(L"RMsg_AckMsgSlot")(client, clientSlot, msgSlot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_MarkPacketReceived(struct netadr_t* from, unsigned char sequenceNum) -> void
{
  return Zynamic::Forward<void (struct netadr_t*, unsigned char)>(L"RMsg_MarkPacketReceived")(from, sequenceNum);
}

#endif // __UNIMPLEMENTED__
