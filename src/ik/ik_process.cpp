//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto IK_GeneratePreIKMatrices(struct IKState* ikState, bool isLocalBones) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool)>(L"IK_GeneratePreIKMatrices")(ikState, isLocalBones);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_GenerateIKXformMatrices(struct IKState* ikState, bool isLocalBones) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool)>(L"IK_GenerateIKXformMatrices")(ikState, isLocalBones);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_HasAnimatedBones(struct IKState* ikState) -> bool
{
  return Zynamic::Forward<bool (struct IKState*)>(L"IK_HasAnimatedBones")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_Process(struct IKState* ikState, bool isLocalBones) -> void
{
  return Zynamic::Forward<void (struct IKState*, bool)>(L"IK_Process")(ikState, isLocalBones);
}

#endif // __UNIMPLEMENTED__
