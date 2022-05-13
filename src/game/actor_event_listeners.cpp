//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_actor_event_listener() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_actor_event_listener")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveSwapWithLast(int listenerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"RemoveSwapWithLast")(listenerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventListener_RemoveEntity(int entIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"Actor_EventListener_RemoveEntity")(entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventListener_First(enum ai_event_t event, int teamFlags) -> int
{
  return Zynamic::Forward<int (enum ai_event_t, int)>(L"Actor_EventListener_First")(event, teamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventListener_Next(int index, enum ai_event_t event, int teamFlags) -> int
{
  return Zynamic::Forward<int (int, enum ai_event_t, int)>(L"Actor_EventListener_Next")(index, event, teamFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventListener_GetEntity(int index) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (int)>(L"Actor_EventListener_GetEntity")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_EventListener_NotifyToListener(struct gentity_s* listener, struct gentity_s* originator, enum ai_event_t event, const float* position) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, enum ai_event_t, const float*)>(L"Actor_EventListener_NotifyToListener")(listener, originator, event, position);
}

#endif // __UNIMPLEMENTED__
