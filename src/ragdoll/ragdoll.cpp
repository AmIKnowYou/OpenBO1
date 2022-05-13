//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_ragdoll() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_ragdoll")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_DebugDraw() -> void
{
  return Zynamic::Forward<void ()>(L"Ragdoll_DebugDraw")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_InitBody(struct RagdollBody* body) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*)>(L"Ragdoll_InitBody")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetUnusedBody() -> int
{
  return Zynamic::Forward<int ()>(L"Ragdoll_GetUnusedBody")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ReferenceDObjBody(int dobj) -> int
{
  return Zynamic::Forward<int (int)>(L"Ragdoll_ReferenceDObjBody")(dobj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_FreeBody(int ragdollBody) -> void
{
  return Zynamic::Forward<void (int)>(L"Ragdoll_FreeBody")(ragdollBody);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyDef(struct RagdollBody* body) -> struct RagdollDef*
{
  return Zynamic::Forward<struct RagdollDef* (struct RagdollBody*)>(L"Ragdoll_BodyDef")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyDObj(struct RagdollBody* body) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (struct RagdollBody*)>(L"Ragdoll_BodyDObj")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyPose(struct RagdollBody* body) -> const struct cpose_t*
{
  return Zynamic::Forward<const struct cpose_t* (struct RagdollBody*)>(L"Ragdoll_BodyPose")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyRootOrigin(struct RagdollBody* body, float* origin) -> void
{
  return Zynamic::Forward<void (struct RagdollBody*, float*)>(L"Ragdoll_BodyRootOrigin")(body, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GetRootOrigin(int ragdollHandle, float* origin) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"Ragdoll_GetRootOrigin")(ragdollHandle, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ValidateDef(int ragdollDef) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Ragdoll_ValidateDef")(ragdollDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BindDef(int ragdollDef) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Ragdoll_BindDef")(ragdollDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CountPhysicsBodies() -> int
{
  return Zynamic::Forward<int ()>(L"Ragdoll_CountPhysicsBodies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_CreateRagdollForDObj(int localClientNum, int ragdollDef, int dobj, bool reset, bool share) -> int
{
  return Zynamic::Forward<int (int, int, int, bool, bool)>(L"Ragdoll_CreateRagdollForDObj")(localClientNum, ragdollDef, dobj, reset, share);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Remove(int ragdoll) -> void
{
  return Zynamic::Forward<void (int)>(L"Ragdoll_Remove")(ragdoll);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_InitDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Ragdoll_InitDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Register() -> void
{
  return Zynamic::Forward<void ()>(L"Ragdoll_Register")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Ragdoll_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Ragdoll_Shutdown")();
}

#endif // __UNIMPLEMENTED__
