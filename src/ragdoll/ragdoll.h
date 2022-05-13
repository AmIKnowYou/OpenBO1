//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Ragdoll_BodyPoseValid(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_BodyPoseValid")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Ragdoll_BodyBound(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_BodyBound")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Ragdoll_BodyInUse(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_BodyInUse")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Ragdoll_BodyHasPhysics(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_BodyHasPhysics")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Ragdoll_BodyIdle(struct RagdollBody* body) -> bool
{
  return Zynamic::Forward<bool (struct RagdollBody*)>(L"Ragdoll_BodyIdle")(body);
}

#endif // __UNIMPLEMENTED__
