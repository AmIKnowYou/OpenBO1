//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ScriptMover_UpdateMove(struct trajectory_t* pTr, float* vCurrPos, const float fSpeed, const float fMidTime, const float fDecelTime, const float* vPos1, const float* vPos2, const float* vPos3) -> int
{
  return Zynamic::Forward<int (struct trajectory_t*, float*, const float, const float, const float, const float*, const float*, const float*)>(L"ScriptMover_UpdateMove")(pTr, vCurrPos, fSpeed, fMidTime, fDecelTime, vPos1, vPos2, vPos3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Reached_ScriptMover(struct gentity_s* pEnt) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"Reached_ScriptMover")(pEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_SetupMove(struct trajectory_t* pTr, const float* vPos, const float fTotalTime, const float fAccelTime, const float fDecelTime, float* vCurrPos, float* pfSpeed, float* pfMidTime, float* pfDecelTime, float* vPos1, float* vPos2, float* vPos3) -> void
{
  return Zynamic::Forward<void (struct trajectory_t*, const float*, const float, const float, const float, float*, float*, float*, float*, float*, float*, float*)>(L"ScriptMover_SetupMove")(pTr, vPos, fTotalTime, fAccelTime, fDecelTime, vCurrPos, pfSpeed, pfMidTime, pfDecelTime, vPos1, vPos2, vPos3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_SetupPhysicsLaunch(struct trajectory_t* pTr, struct trajectory_t* paTr, const float* contact_point, const float* initial_force) -> void
{
  return Zynamic::Forward<void (struct trajectory_t*, struct trajectory_t*, const float*, const float*)>(L"ScriptMover_SetupPhysicsLaunch")(pTr, paTr, contact_point, initial_force);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_SetupMoveSpeed(struct trajectory_t* pTr, const float* vSpeed, const float fTotalTime, const float fAccelTime, const float fDecelTime, float* vCurrPos, float* pfSpeed, float* pfMidTime, float* pfDecelTime, float* vPos1, float* vPos2, float* vPos3) -> void
{
  return Zynamic::Forward<void (struct trajectory_t*, const float*, const float, const float, const float, float*, float*, float*, float*, float*, float*, float*)>(L"ScriptMover_SetupMoveSpeed")(pTr, vSpeed, fTotalTime, fAccelTime, fDecelTime, vCurrPos, pfSpeed, pfMidTime, pfDecelTime, vPos1, vPos2, vPos3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_Move(struct gentity_s* pEnt, const float* vPos, const float fTotalTime, const float fAccelTime, const float fDecelTime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float, const float, const float)>(L"ScriptMover_Move")(pEnt, vPos, fTotalTime, fAccelTime, fDecelTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_GravityMove(struct gentity_s* mover, const float* velocity, const float totalTime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float)>(L"ScriptMover_GravityMove")(mover, velocity, totalTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_Rotate(struct gentity_s* pEnt, const float* vRot, const float fTotalTime, const float fAccelTime, const float fDecelTime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float, const float, const float)>(L"ScriptMover_Rotate")(pEnt, vRot, fTotalTime, fAccelTime, fDecelTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptMover_RotateSpeed(struct gentity_s* pEnt, const float* vRotSpeed, const float fTotalTime, const float fAccelTime, const float fDecelTime) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const float*, const float, const float, const float)>(L"ScriptMover_RotateSpeed")(pEnt, vRotSpeed, fTotalTime, fAccelTime, fDecelTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitScriptMover(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"InitScriptMover")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_script_brushmodel(struct gentity_s* self, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_script_brushmodel")(self, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_script_model(struct gentity_s* pSelf, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_script_model")(pSelf, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_script_origin(struct gentity_s* pSelf, struct SpawnVar* spawnVar) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct SpawnVar*)>(L"SP_script_origin")(pSelf, spawnVar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetEntity(struct scr_entref_t entref) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct scr_entref_t)>(L"GetEntity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmdGetCommandTimes(float* pfTotalTime, float* pfAccelTime, float* pfDecelTime) -> void
{
  return Zynamic::Forward<void (float*, float*, float*)>(L"ScriptEntCmdGetCommandTimes")(pfTotalTime, pfAccelTime, pfDecelTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_MoveTo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_MoveTo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_GravityMove(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_GravityMove")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEnt_MoveAxis(struct scr_entref_t entref, int iAxis) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, int)>(L"ScriptEnt_MoveAxis")(entref, iAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_MoveX(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_MoveX")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_MoveY(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_MoveY")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_MoveZ(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_MoveZ")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_RotateTo(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_RotateTo")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEnt_DevAddRotate(struct scr_entref_t entref, int iAxis) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, int)>(L"ScriptEnt_DevAddRotate")(entref, iAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_DevAddPitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_DevAddPitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_DevAddYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_DevAddYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_DevAddRoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_DevAddRoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEnt_RotateAxis(struct scr_entref_t entref, int iAxis) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t, int)>(L"ScriptEnt_RotateAxis")(entref, iAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_RotatePitch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_RotatePitch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_RotateYaw(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_RotateYaw")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_RotateRoll(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_RotateRoll")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_Vibrate(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_Vibrate")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_RotateVelocity(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_RotateVelocity")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_SetCanDamage(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_SetCanDamage")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_PhysicsLaunch(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_PhysicsLaunch")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_Solid(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_Solid")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEntCmd_NotSolid(struct scr_entref_t entref) -> void
{
  return Zynamic::Forward<void (struct scr_entref_t)>(L"ScriptEntCmd_NotSolid")(entref);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptEnt_GetMethod(const char** pName) -> function*
{
  return Zynamic::Forward<function * (const char**)>(L"ScriptEnt_GetMethod")(pName);
}

#endif // __UNIMPLEMENTED__
