//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyBoneOrientations(struct RagdollBody* body) -> struct BoneOrientation*
{
  return Zynamic::Forward<struct BoneOrientation* (struct RagdollBody*)>(L"Ragdoll_BodyBoneOrientations")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyPrevBoneOrientations(struct RagdollBody* body) -> struct BoneOrientation*
{
  return Zynamic::Forward<struct BoneOrientation* (struct RagdollBody*)>(L"Ragdoll_BodyPrevBoneOrientations")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_DoControllers(const struct cpose_t* pose, const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct cpose_t*, const struct DObj*, int*)>(L"Ragdoll_DoControllers")(pose, obj, partBits);
}

#endif // __UNIMPLEMENTED__
