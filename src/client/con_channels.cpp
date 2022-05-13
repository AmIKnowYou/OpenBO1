//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Con_OpenChannel(const char* name, bool allowScript) -> bool
{
  return Zynamic::Forward<bool (const char*, bool)>(L"Con_OpenChannel")(name, allowScript);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CloseChannelInternal(int channel) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_CloseChannelInternal")(channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ScriptHasPermission(int channel) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Con_ScriptHasPermission")(channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetChannel(const char* name, int* channel_result) -> bool
{
  return Zynamic::Forward<bool (const char*, int*)>(L"Con_GetChannel")(name, channel_result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsChannelOpen(int channel) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Con_IsChannelOpen")(channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FilterShowChannel(enum print_msg_dest_t dest, const char* channelName, bool show) -> void
{
  return Zynamic::Forward<void (enum print_msg_dest_t, const char*, bool)>(L"Con_FilterShowChannel")(dest, channelName, show);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsChannelVisible(enum print_msg_dest_t dest, int channel, int errorflags) -> bool
{
  return Zynamic::Forward<bool (enum print_msg_dest_t, int, int)>(L"Con_IsChannelVisible")(dest, channel, errorflags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ChannelList_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ChannelList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FilterAdd(bool show) -> void
{
  return Zynamic::Forward<void (bool)>(L"Con_FilterAdd")(show);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FilterAdd_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_FilterAdd_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FilterRemove_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_FilterRemove_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FilterList_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_FilterList_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_WriteFilterConfigString(int f) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_WriteFilterConfigString")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitChannelsForDestFromList(enum print_msg_dest_t dest, const char* channelNames) -> void
{
  return Zynamic::Forward<void (enum print_msg_dest_t, const char*)>(L"Con_InitChannelsForDestFromList")(dest, channelNames);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitGameMsgChannels() -> void
{
  return Zynamic::Forward<void ()>(L"Con_InitGameMsgChannels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitChannels() -> void
{
  return Zynamic::Forward<void ()>(L"Con_InitChannels")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ShutdownChannels() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ShutdownChannels")();
}

#endif // __UNIMPLEMENTED__
