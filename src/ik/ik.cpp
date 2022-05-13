//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto IK_AllocateLocalClientMemory(void* ikStatesBuf, int localClientIndex) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"IK_AllocateLocalClientMemory")(ikStatesBuf, localClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_InitSystem() -> void
{
  return Zynamic::Forward<void ()>(L"IK_InitSystem")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_FindFreeIKState(int entityNum, unsigned char* model) -> struct IKState*
{
  return Zynamic::Forward<struct IKState* (int, unsigned char*)>(L"IK_FindFreeIKState")(entityNum, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_GetIKStateForEntity(int entityNum, unsigned char* model, bool bScanAll) -> struct IKState*
{
  return Zynamic::Forward<struct IKState* (int, unsigned char*, bool)>(L"IK_GetIKStateForEntity")(entityNum, model, bScanAll);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_InitializeIKState(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_InitializeIKState")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_CreateIKForEntity(int entityNum, unsigned char* model) -> struct IKState*
{
  return Zynamic::Forward<struct IKState* (int, unsigned char*)>(L"IK_CreateIKForEntity")(entityNum, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_GetJointVars(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_GetJointVars")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_IsCalcBone(struct IKState* ikState, int ikBoneIndex) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, int)>(L"IK_IsCalcBone")(ikState, ikBoneIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_UpdateTimeAll(int time, int localClientIndex, bool inViewer) -> void
{
  return Zynamic::Forward<void (int, int, bool)>(L"IK_UpdateTimeAll")(time, localClientIndex, inViewer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_ResetTime() -> void
{
  return Zynamic::Forward<void ()>(L"IK_ResetTime")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_UpdateDvarValues(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_UpdateDvarValues")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_UpdateLayerLerps(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_UpdateLayerLerps")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_GetStatus(struct IKState* ikState, enum IKEntityStatusFunctions statusFunc) -> bool
{
  return Zynamic::Forward<bool (struct IKState*, enum IKEntityStatusFunctions)>(L"IK_GetStatus")(ikState, statusFunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_CheckSolverLayers(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_CheckSolverLayers")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_UpdateStatusFunctions(struct IKState* ikState) -> void
{
  return Zynamic::Forward<void (struct IKState*)>(L"IK_UpdateStatusFunctions")(ikState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IK_UpdateEntity(int entityNum, unsigned char* model, bool isLocalBones, int* calcBoneBits) -> void
{
  return Zynamic::Forward<void (int, unsigned char*, bool, int*)>(L"IK_UpdateEntity")(entityNum, model, isLocalBones, calcBoneBits);
}

#endif // __UNIMPLEMENTED__
