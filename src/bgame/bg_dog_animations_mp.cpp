//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Dog_GetAnims() -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* ()>(L"Dog_GetAnims")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dog_DebugPrint(const char* msg) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Dog_DebugPrint")(msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_CreateAnimChildGroup(int index, int childindex, const char** animNames, int count, int flags) -> void
{
  return Zynamic::Forward<void (int, int, const char**, int, int)>(L"BG_Dog_CreateAnimChildGroup")(index, childindex, animNames, count, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dog_CreateAnims(function* xanimAlloc) -> void
{
  return Zynamic::Forward<void (function *)>(L"Dog_CreateAnims")(xanimAlloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dog_ShutdownAnims() -> void
{
  return Zynamic::Forward<void ()>(L"Dog_ShutdownAnims")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_FastForwardAnim(int anim, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, struct actorInfo_t*)>(L"BG_Dog_FastForwardAnim")(anim, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Actor_FastForwardAnimState(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Actor_FastForwardAnimState")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_GetRunAnimWeights(float leanAmount, float& center, float& left, float& right) -> void
{
  return Zynamic::Forward<void (float, float&, float&, float&)>(L"BG_Dog_GetRunAnimWeights")(leanAmount, center, left, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Look_At(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Look_At")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Clear_Look_At(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Clear_Look_At")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Init_Normal_Look_At(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Init_Normal_Look_At")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Init_Attack_Look_At(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Init_Attack_Look_At")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Start(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Start")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Stop(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Stop")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Run")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run_Think(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Move_Run_Think")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Walk(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Walk")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Walk_Think(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Move_Walk_Think")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Clear_All_Turns(struct DObj* obj) -> void
{
  return Zynamic::Forward<void (struct DObj*)>(L"BG_Dog_Clear_All_Turns")(obj);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Turn_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Turn_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Turn_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Turn_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run_Turn_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Run_Turn_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run_Turn_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Run_Turn_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Turn_Around_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Turn_Around_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Turn_Around_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Turn_Around_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run_Turn_Around_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Run_Turn_Around_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Move_Run_Turn_Around_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Move_Run_Turn_Around_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Stop_Init(int localClientNum, const struct entityState_s* es) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*)>(L"BG_Dog_Stop_Init")(localClientNum, es);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Stop_Idle(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Stop_Idle")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Stop_AttackIdle(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Stop_AttackIdle")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Stop_AttackIdle_Bark(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Stop_AttackIdle_Bark")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Stop_AttackIdle_Growl(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Stop_AttackIdle_Growl")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Pain_Main(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Pain_Main")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Pain_Front(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Pain_Front")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Pain_Back(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Pain_Back")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Pain_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Pain_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Pain_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Pain_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Run_Pain_Front(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Run_Pain_Front")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Run_Pain_Back(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Run_Pain_Back")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Run_Pain_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Run_Pain_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Run_Pain_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Run_Pain_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Front(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Death_Front")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Back(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Death_Back")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Death_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Death_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Fast_Forward_Front(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Dog_Death_Fast_Forward_Front")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Fast_Forward_Back(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Dog_Death_Fast_Forward_Back")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Fast_Forward_Left(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Dog_Death_Fast_Forward_Left")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Death_Fast_Forward_Right(int localClientNum, const struct entityState_s* es, struct actorInfo_t* actorInfo) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, struct actorInfo_t*)>(L"BG_Dog_Death_Fast_Forward_Right")(localClientNum, es, actorInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Flashed(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Flashed")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_AttackIdle(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_AttackIdle")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_AttackIdle_Bark(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_AttackIdle_Bark")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_AttackIdle_Growl(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_AttackIdle_Growl")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_Attack_Run(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_Attack_Run")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_Attack_Player_Close_Range(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_Attack_Player_Close_Range")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_Attack_Miss(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_Attack_Miss")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_Attack_Miss_Left(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_Attack_Miss_Left")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Combat_Attack_Miss_Right(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Combat_Attack_Miss_Right")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Clear_Traverse_Anims(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Clear_Traverse_Anims")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Jump_Up_40(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Jump_Up_40")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Jump_Up_80(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Jump_Up_80")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Jump_Down_40(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Jump_Down_40")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Jump_Down_80(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Jump_Down_80")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Wallhop(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Wallhop")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Window(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Window")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Dog_Traverse_Through_Hole_42(int localClientNum, const struct entityState_s* es, enum ActorAnimStates prevState) -> void
{
  return Zynamic::Forward<void (int, const struct entityState_s*, enum ActorAnimStates)>(L"BG_Dog_Traverse_Through_Hole_42")(localClientNum, es, prevState);
}

#endif // __UNIMPLEMENTED__
