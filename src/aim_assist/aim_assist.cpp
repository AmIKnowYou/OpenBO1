//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'aaGlobArray''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'aaGlobArray''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'topDownState''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'topDownState''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_aim_assist() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_aim_assist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_LerpDvars(const struct dvar_s* from, const struct dvar_s* to, float frac) -> float
{
  return Zynamic::Forward<float (const struct dvar_s*, const struct dvar_s*, float)>(L"AimAssist_LerpDvars")(from, to, frac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateTweakables(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimAssist_UpdateTweakables")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateAdsLerp(const struct AimInput* input) -> void
{
  return Zynamic::Forward<void (const struct AimInput*)>(L"AimAssist_UpdateAdsLerp")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"AimAssist_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_Init(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimAssist_Init")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_Setup(int localClientNum, const struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*)>(L"AimAssist_Setup")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_PlayerDisabledTargetAssist(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"AimAssist_PlayerDisabledTargetAssist")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_BackupPlayerState(int localClientNum, const struct playerState_s* ps) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*)>(L"AimAssist_BackupPlayerState")(localClientNum, ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_FovScale(struct AimAssistGlobals* aaGlob, float tanHalfFovY) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*, float)>(L"AimAssist_FovScale")(aaGlob, tanHalfFovY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_CreateScreenMatrix(struct AimAssistGlobals* aaGlob, float tanHalfFovX, float tanHalfFovY) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*, float, float)>(L"AimAssist_CreateScreenMatrix")(aaGlob, tanHalfFovX, tanHalfFovY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_XfmWorldPointToClipSpace(const struct AimAssistGlobals* aaGlob, const float* in, float* out) -> bool
{
  return Zynamic::Forward<bool (const struct AimAssistGlobals*, const float*, float*)>(L"AimAssist_XfmWorldPointToClipSpace")(aaGlob, in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ConvertToClipBounds(const struct AimAssistGlobals* aaGlob, const float* bounds[0x3], const float* mtx[0x3], float* clipBounds[0x3]) -> bool
{
  return Zynamic::Forward<bool (const struct AimAssistGlobals*, const float*[0x3], const float*[0x3], float*[0x3])>(L"AimAssist_ConvertToClipBounds")(aaGlob, bounds, mtx, clipBounds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetCrosshairDistSqr(const float* clipMins, const float* clipMaxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"AimAssist_GetCrosshairDistSqr")(clipMins, clipMaxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_DoBoundsIntersectCenterBox(const float* clipMins, const float* clipMaxs, float clipHalfWidth, float clipHalfHeight) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, float)>(L"AimAssist_DoBoundsIntersectCenterBox")(clipMins, clipMaxs, clipHalfWidth, clipHalfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetAimAssistRange(int weapIndex, float adsLerp) -> float
{
  return Zynamic::Forward<float (int, float)>(L"AimAssist_GetAimAssistRange")(weapIndex, adsLerp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetAutoAimRange(int weapIndex) -> float
{
  return Zynamic::Forward<float (int)>(L"AimAssist_GetAutoAimRange")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_CompareTargets(const struct AimScreenTarget* screenTargetA, const struct AimScreenTarget* screenTargetB) -> int
{
  return Zynamic::Forward<int (const struct AimScreenTarget*, const struct AimScreenTarget*)>(L"AimAssist_CompareTargets")(screenTargetA, screenTargetB);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_AddToTargetList(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*, const struct AimScreenTarget*)>(L"AimAssist_AddToTargetList")(aaGlob, screenTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimTarget_GetTagPos(int localClientNum, const struct centity_s* cent, unsigned int tagName, float* pos) -> int
{
  return Zynamic::Forward<int (int, const struct centity_s*, unsigned int, float*)>(L"AimTarget_GetTagPos")(localClientNum, cent, tagName, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_CalcAimPos(int localClientNum, const struct centity_s* targetEnt, const struct AimTarget* target, float* aimPos) -> int
{
  return Zynamic::Forward<int (int, const struct centity_s*, const struct AimTarget*, float*)>(L"AimAssist_CalcAimPos")(localClientNum, targetEnt, target, aimPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateScreenTargets(int localClientNum, const float* viewOrg, const float* viewAngles, float tanHalfFovX, float tanHalfFovY) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, float, float)>(L"AimAssist_UpdateScreenTargets")(localClientNum, viewOrg, viewAngles, tanHalfFovX, tanHalfFovY);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetScreenTargetCount(int localClientNum) -> int
{
  return Zynamic::Forward<int (int)>(L"AimAssist_GetScreenTargetCount")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetScreenTargetEntity(int localClientNum, int targetIndex) -> int
{
  return Zynamic::Forward<int (int, int)>(L"AimAssist_GetScreenTargetEntity")(localClientNum, targetIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ClearEntityReference(int localClientNum, int entIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"AimAssist_ClearEntityReference")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_IsPrevTargetEntity(int localClientNum, int entIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"AimAssist_IsPrevTargetEntity")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetTargetFromEntity(const struct AimAssistGlobals* aaGlob, int entIndex) -> const struct AimScreenTarget*
{
  return Zynamic::Forward<const struct AimScreenTarget* (const struct AimAssistGlobals*, int)>(L"AimAssist_GetTargetFromEntity")(aaGlob, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetBestTarget(const struct AimAssistGlobals* aaGlob, float range, float regionWidth, float regionHeight) -> const struct AimScreenTarget*
{
  return Zynamic::Forward<const struct AimScreenTarget* (const struct AimAssistGlobals*, float, float, float)>(L"AimAssist_GetBestTarget")(aaGlob, range, regionWidth, regionHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetPrevOrBestTarget(const struct AimAssistGlobals* aaGlob, float range, float regionWidth, float regionHeight, int prevTargetEnt) -> const struct AimScreenTarget*
{
  return Zynamic::Forward<const struct AimScreenTarget* (const struct AimAssistGlobals*, float, float, float, int)>(L"AimAssist_GetPrevOrBestTarget")(aaGlob, range, regionWidth, regionHeight, prevTargetEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_CalcAdjustedAxis(const struct AimInput* input, float* pitchAxis, float* yawAxis) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, float*, float*)>(L"AimAssist_CalcAdjustedAxis")(input, pitchAxis, yawAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_IsPlayerUsingOffhand(const struct AimAssistPlayerState* ps) -> bool
{
  return Zynamic::Forward<bool (const struct AimAssistPlayerState*)>(L"AimAssist_IsPlayerUsingOffhand")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_IsSlowdownActive(const struct AimAssistPlayerState* ps) -> int
{
  return Zynamic::Forward<int (const struct AimAssistPlayerState*)>(L"AimAssist_IsSlowdownActive")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_CalcSlowdown(const struct AimInput* input, float* pitchScale, float* yawScale) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, float*, float*)>(L"AimAssist_CalcSlowdown")(input, pitchScale, yawScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetProfileSensitivity(int localClientNum) -> float
{
  return Zynamic::Forward<float (int)>(L"AimAssist_GetProfileSensitivity")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ApplyTurnRates(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_ApplyTurnRates")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ClearAutoAimTarget(struct AimAssistGlobals* aaGlob) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*)>(L"AimAssist_ClearAutoAimTarget")(aaGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateAutoAimTarget(struct AimAssistGlobals* aaGlob) -> bool
{
  return Zynamic::Forward<bool (struct AimAssistGlobals*)>(L"AimAssist_UpdateAutoAimTarget")(aaGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_SetAutoAimTarget(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*, const struct AimScreenTarget*)>(L"AimAssist_SetAutoAimTarget")(aaGlob, screenTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ApplyAutoAim(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_ApplyAutoAim")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ApplyLockOn(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_ApplyLockOn")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ClearAutoMeleeTarget(struct AimAssistGlobals* aaGlob) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*)>(L"AimAssist_ClearAutoMeleeTarget")(aaGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateAutoMeleeTarget(struct AimAssistGlobals* aaGlob, int localClientNum) -> bool
{
  return Zynamic::Forward<bool (struct AimAssistGlobals*, int)>(L"AimAssist_UpdateAutoMeleeTarget")(aaGlob, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_SetAutoMeleeTarget(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget) -> void
{
  return Zynamic::Forward<void (struct AimAssistGlobals*, const struct AimScreenTarget*)>(L"AimAssist_SetAutoMeleeTarget")(aaGlob, screenTarget);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ApplyAutoMelee(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_ApplyAutoMelee")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateGamePadInput(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_UpdateGamePadInput")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateMouseInput(const struct AimInput* input, struct AimOutput* output) -> void
{
  return Zynamic::Forward<void (const struct AimInput*, struct AimOutput*)>(L"AimAssist_UpdateMouseInput")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_DrawCenterBox(const struct AimAssistGlobals* aaGlob, float clipHalfWidth, float clipHalfHeight, const float* color, bool centerOnCrosshair) -> void
{
  return Zynamic::Forward<void (const struct AimAssistGlobals*, float, float, const float*, bool)>(L"AimAssist_DrawCenterBox")(aaGlob, clipHalfWidth, clipHalfHeight, color, centerOnCrosshair);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_DrawTargets(int localClientNum, const struct playerState_s* ps, const float* color) -> void
{
  return Zynamic::Forward<void (int, const struct playerState_s*, const float*)>(L"AimAssist_DrawTargets")(localClientNum, ps, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_DrawDebugOverlay(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"AimAssist_DrawDebugOverlay")(localClientNum);
}

#endif // __UNIMPLEMENTED__
