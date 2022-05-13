//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Actor_SetDesiredLookAngles(struct ai_orient_t* pOrient, const float fPitch, const float fYaw) -> void
{
  return Zynamic::Forward<void (struct ai_orient_t*, const float, const float)>(L"Actor_SetDesiredLookAngles")(pOrient, fPitch, fYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetDesiredBodyAngle(struct ai_orient_t* pOrient, const float fAngle) -> void
{
  return Zynamic::Forward<void (struct ai_orient_t*, const float)>(L"Actor_SetDesiredBodyAngle")(pOrient, fAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetDesiredAngles(struct ai_orient_t* pOrient, const float fPitch, const float fYaw) -> void
{
  return Zynamic::Forward<void (struct ai_orient_t*, const float, const float)>(L"Actor_SetDesiredAngles")(pOrient, fPitch, fYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetLookAngles(struct actor_s* self, const float fPitch, const float fYaw) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float, const float)>(L"Actor_SetLookAngles")(self, fPitch, fYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetBodyAngle(struct actor_s* self, const float fAngle) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float)>(L"Actor_SetBodyAngle")(self, fAngle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ChangeAngles(struct actor_s* self, const float fPitch, const float fYaw) -> void
{
  return Zynamic::Forward<void (struct actor_s*, const float, const float)>(L"Actor_ChangeAngles")(self, fPitch, fYaw);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateLookAngles(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateLookAngles")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcYaw(float dt, float& yaw, float& yawVeloc, float yawAccel) -> void
{
  return Zynamic::Forward<void (float, float&, float&, float)>(L"CalcYaw")(dt, yaw, yawVeloc, yawAccel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StepYaw(float dt, float& yaw, float& yawVeloc, float targetYaw, float targetVeloc) -> void
{
  return Zynamic::Forward<void (float, float&, float&, float, float)>(L"StepYaw")(dt, yaw, yawVeloc, targetYaw, targetVeloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_UpdateBodyAngle(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_UpdateBodyAngle")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceVector(struct ai_orient_t* pOrient, const float* v) -> void
{
  return Zynamic::Forward<void (struct ai_orient_t*, const float*)>(L"Actor_FaceVector")(pOrient, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceMotion(struct actor_s* self, struct ai_orient_t* pOrient) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct ai_orient_t*)>(L"Actor_FaceMotion")(self, pOrient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetAnglesToLikelyEnemyPath(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_SetAnglesToLikelyEnemyPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_GetAnglesToLikelyEnemyPath(struct actor_s* self) -> bool
{
  return Zynamic::Forward<bool (struct actor_s*)>(L"Actor_GetAnglesToLikelyEnemyPath")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceLikelyEnemyPath(struct actor_s* self, struct ai_orient_t* pOrient) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct ai_orient_t*)>(L"Actor_FaceLikelyEnemyPath")(self, pOrient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceEnemy(struct actor_s* self, struct ai_orient_t* pOrient) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct ai_orient_t*)>(L"Actor_FaceEnemy")(self, pOrient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceEnemyOrMotion(struct actor_s* self, struct ai_orient_t* pOrient) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct ai_orient_t*)>(L"Actor_FaceEnemyOrMotion")(self, pOrient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_FaceEnemyOrMotionSidestep(struct actor_s* self, struct ai_orient_t* pOrient) -> void
{
  return Zynamic::Forward<void (struct actor_s*, struct ai_orient_t*)>(L"Actor_FaceEnemyOrMotionSidestep")(self, pOrient);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_DecideOrientation(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_DecideOrientation")(self);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_SetOrientMode(struct actor_s* self, enum ai_orient_mode_t eMode) -> void
{
  return Zynamic::Forward<void (struct actor_s*, enum ai_orient_mode_t)>(L"Actor_SetOrientMode")(self, eMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Actor_ClearScriptOrient(struct actor_s* self) -> void
{
  return Zynamic::Forward<void (struct actor_s*)>(L"Actor_ClearScriptOrient")(self);
}

#endif // __UNIMPLEMENTED__
