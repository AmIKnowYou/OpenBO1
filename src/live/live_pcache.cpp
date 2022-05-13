//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PCache_Time() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"PCache_Time")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_Lock() -> void
{
  return Zynamic::Forward<void ()>(L"PCache_Lock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_Unlock() -> void
{
  return Zynamic::Forward<void ()>(L"PCache_Unlock")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_IsLocked() -> bool
{
  return Zynamic::Forward<bool ()>(L"PCache_IsLocked")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_Hash(int controllerIndex, unsigned __int64 xuid) -> unsigned int
{
  return Zynamic::Forward<unsigned int (int, unsigned __int64)>(L"PCache_Hash")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetRank_f() -> void
{
  return Zynamic::Forward<void ()>(L"PCache_GetRank_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_Init() -> void
{
  return Zynamic::Forward<void ()>(L"PCache_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_Update(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"PCache_Update")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetOrphanComponent(int controllerIndex, unsigned __int64 xuid, int type) -> struct PCacheComponent*
{
  return Zynamic::Forward<struct PCacheComponent* (int, unsigned __int64, int)>(L"PCache_GetOrphanComponent")(controllerIndex, xuid, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetEntry(int controllerIndex, unsigned __int64 xuid) -> struct PCacheEntry*
{
  return Zynamic::Forward<struct PCacheEntry* (int, unsigned __int64)>(L"PCache_GetEntry")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetEntryComponent(struct PCacheEntry* entry, int type) -> struct PCacheComponent*
{
  return Zynamic::Forward<struct PCacheComponent* (struct PCacheEntry*, int)>(L"PCache_GetEntryComponent")(entry, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetComponent(int controllerIndex, unsigned __int64 xuid, int type) -> struct PCacheComponent*
{
  return Zynamic::Forward<struct PCacheComponent* (int, unsigned __int64, int)>(L"PCache_GetComponent")(controllerIndex, xuid, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_TouchComponent(struct PCacheComponent* component) -> bool
{
  return Zynamic::Forward<bool (struct PCacheComponent*)>(L"PCache_TouchComponent")(component);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_InvalidateComponent(struct PCacheComponent* component) -> void
{
  return Zynamic::Forward<void (struct PCacheComponent*)>(L"PCache_InvalidateComponent")(component);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_ReleasePlayerEmblem(struct PCacheComponent* comp) -> void
{
  return Zynamic::Forward<void (struct PCacheComponent*)>(L"PCache_ReleasePlayerEmblem")(comp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetClientNumForXuid(int localClientNum, unsigned __int64 xuid) -> int
{
  return Zynamic::Forward<int (int, unsigned __int64)>(L"PCache_GetClientNumForXuid")(localClientNum, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_BatchUpdatePlayerEmblems(int controllerIndex, struct PCachePlayerEmblem* emblems, int count) -> void
{
  return Zynamic::Forward<void (int, struct PCachePlayerEmblem*, int)>(L"PCache_BatchUpdatePlayerEmblems")(controllerIndex, emblems, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_InvalidatePlayerEmblem(int controllerIndex, unsigned __int64 xuid) -> void
{
  return Zynamic::Forward<void (int, unsigned __int64)>(L"PCache_InvalidatePlayerEmblem")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPlayerEmblem(int controllerIndex, unsigned __int64 xuid) -> struct GfxImage*
{
  return Zynamic::Forward<struct GfxImage* (int, unsigned __int64)>(L"PCache_GetPlayerEmblem")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPlayerEmblemBackgroundID(int controllerIndex, unsigned __int64 xuid) -> short
{
  return Zynamic::Forward<short (int, unsigned __int64)>(L"PCache_GetPlayerEmblemBackgroundID")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
