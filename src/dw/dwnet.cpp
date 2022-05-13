//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto SecID::SecID() -> void
{
  return Zynamic::Forward<public void ()>(L"SecID::SecID")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto checkRconAddr(class bdAddr fromAddr) -> bool
{
  return Zynamic::Forward<bool (class bdAddr)>(L"checkRconAddr")(fromAddr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto dwRawInterceptor::acceptPacket(class bdSocket* socket, class bdAddr addr, void* data, const unsigned int size, const unsigned char type) -> bool
{
  return Zynamic::Forward<private bool (class bdSocket*, class bdAddr, void*, const unsigned int, const unsigned char)>(L"dwRawInterceptor::acceptPacket")(socket, addr, data, size, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'rawlistener''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'rawlistener''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRegisterRawInterceptor(class bdPacketInterceptor* rawinterceptor) -> void
{
  return Zynamic::Forward<void (class bdPacketInterceptor*)>(L"dwRegisterRawInterceptor")(rawinterceptor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRawSendTo(struct netadr_t* adr, void* data, const unsigned int size) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, void*, const unsigned int)>(L"dwRawSendTo")(adr, data, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwSendSysLogPacket(struct netadr_t* adr, void* data, const unsigned int size) -> int
{
  return Zynamic::Forward<int (struct netadr_t*, void*, const unsigned int)>(L"dwSendSysLogPacket")(adr, data, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_addrHandles''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_addrHandles''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwNetStart(const bool online) -> void
{
  return Zynamic::Forward<void (const bool)>(L"dwNetStart")(online);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwClearAddrHandle(struct CountedAddrHandle& countedAddrHandle) -> void
{
  return Zynamic::Forward<void (struct CountedAddrHandle&)>(L"dwClearAddrHandle")(countedAddrHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwHandleLostConnection(const class bdReference<bdAddrHandle> addrHandle) -> void
{
  return Zynamic::Forward<void (const class bdReference<bdAddrHandle>)>(L"dwHandleLostConnection")(addrHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCheckConnections() -> void
{
  return Zynamic::Forward<void ()>(L"dwCheckConnections")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwNetStop() -> void
{
  return Zynamic::Forward<void ()>(L"dwNetStop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwNetPump() -> void
{
  return Zynamic::Forward<void ()>(L"dwNetPump")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCreateSecIDAndKey(class bdSecurityID& id, class bdSecurityKey& key) -> void
{
  return Zynamic::Forward<void (class bdSecurityID&, class bdSecurityKey&)>(L"dwCreateSecIDAndKey")(id, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRegisterSecIDAndKey(const class bdSecurityID& id, const class bdSecurityKey& key) -> bool
{
  return Zynamic::Forward<bool (const class bdSecurityID&, const class bdSecurityKey&)>(L"dwRegisterSecIDAndKey")(id, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetNumFreeAddrHandleSlots() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"dwGetNumFreeAddrHandleSlots")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRegisterAddrHandle(const class bdReference<bdAddrHandle> addrHandle, const class bdSecurityID& secID, unsigned int& index, bool& newHandle) -> bool
{
  return Zynamic::Forward<bool (const class bdReference<bdAddrHandle>, const class bdSecurityID&, unsigned int&, bool&)>(L"dwRegisterAddrHandle")(addrHandle, secID, index, newHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwSendTo(const unsigned int length, const void* data, const struct netadr_t to) -> int
{
  return Zynamic::Forward<int (const unsigned int, const void*, const struct netadr_t)>(L"dwSendTo")(length, data, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRecvFrom(struct netadr_t* const from, void* const data, const unsigned int size) -> int
{
  return Zynamic::Forward<int (struct netadr_t* const, void* const, const unsigned int)>(L"dwRecvFrom")(from, data, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCommonAddrToNetadr(struct netadr_t* const adr, const unsigned char* const commonAddrBuf, const class bdSecurityID& secID) -> bool
{
  return Zynamic::Forward<bool (struct netadr_t* const, const unsigned char* const, const class bdSecurityID&)>(L"dwCommonAddrToNetadr")(adr, commonAddrBuf, secID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwAddrHandleIndexToAddrHandle(const int addrHandleIndex) -> class bdReference<bdAddrHandle>
{
  return Zynamic::Forward<class bdReference<bdAddrHandle> (const int)>(L"dwAddrHandleIndexToAddrHandle")(addrHandleIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwNetadrToAddrHandle(const struct netadr_t* const adr) -> class bdReference<bdAddrHandle>
{
  return Zynamic::Forward<class bdReference<bdAddrHandle> (const struct netadr_t* const)>(L"dwNetadrToAddrHandle")(adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetNumAddrHandles() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"dwGetNumAddrHandles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwCloseConnection(struct netadr_t* const adr) -> bool
{
  return Zynamic::Forward<bool (struct netadr_t* const)>(L"dwCloseConnection")(adr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetLoopbackIndex() -> int
{
  return Zynamic::Forward<int ()>(L"dwGetLoopbackIndex")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwAddrIndexToAddrString(const int addrHandleIndex, char* const str, const unsigned int size) -> bool
{
  return Zynamic::Forward<bool (const int, char* const, const unsigned int)>(L"dwAddrIndexToAddrString")(addrHandleIndex, str, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetAddrHandleConnectionTaskStatus(const int addrHandleIndex) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (const int)>(L"dwGetAddrHandleConnectionTaskStatus")(addrHandleIndex);
}

#endif // __UNIMPLEMENTED__
