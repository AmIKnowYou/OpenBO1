//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UniqueHandleToEffect(int localClientNum, unsigned int h) -> struct FxEffect*
{
  return Zynamic::Forward<struct FxEffect* (int, unsigned int)>(L"UniqueHandleToEffect")(localClientNum, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniqueHandleToEffect(struct FxSystem* system, unsigned int handle) -> struct FxEffect*
{
  return Zynamic::Forward<struct FxEffect* (struct FxSystem*, unsigned int)>(L"UniqueHandleToEffect")(system, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniqueHandleAssignHandle(struct FxSystem* system, struct FxEffect* effect, struct FxEffect* remoteEffect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*, struct FxEffect*)>(L"UniqueHandleAssignHandle")(system, effect, remoteEffect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniqueHandleRelease(struct FxSystem* system, struct FxEffect* effect) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, struct FxEffect*)>(L"UniqueHandleRelease")(system, effect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniqueHandleInit(struct FxUniqueHandleDb* uniqueHandleDb) -> void
{
  return Zynamic::Forward<void (struct FxUniqueHandleDb*)>(L"UniqueHandleInit")(uniqueHandleDb);
}

#endif // __UNIMPLEMENTED__
