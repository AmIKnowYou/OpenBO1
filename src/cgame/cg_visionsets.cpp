//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_RegisterVisionSetsDvars() -> void
{
  return Zynamic::Forward<void ()>(L"CG_RegisterVisionSetsDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddVisionSetMenuItem(union XAssetHeader header, void* __formal) -> void
{
  return Zynamic::Forward<void (union XAssetHeader, void*)>(L"CG_AddVisionSetMenuItem")(header, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitVisionSetsMenu() -> void
{
  return Zynamic::Forward<void ()>(L"CG_InitVisionSetsMenu")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RawBufferOpen(const char* name, const char* formatFullPath) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*)>(L"RawBufferOpen")(name, formatFullPath);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ApplyTokenToField(int fieldNum, const char* token, struct visionSetVars_t* settings) -> bool
{
  return Zynamic::Forward<bool (int, const char*, struct visionSetVars_t*)>(L"ApplyTokenToField")(fieldNum, token, settings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadVisionSettingsFromBuffer(const char* buffer, const char* filename, struct visionSetVars_t* settings) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, struct visionSetVars_t*)>(L"LoadVisionSettingsFromBuffer")(buffer, filename, settings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadVisionFile(const char* name, struct visionSetVars_t* resultSettings) -> bool
{
  return Zynamic::Forward<bool (const char*, struct visionSetVars_t*)>(L"LoadVisionFile")(name, resultSettings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetVisionSet(int localClientNum, const char* name, struct visionSetVars_t* resultSettings) -> bool
{
  return Zynamic::Forward<bool (int, const char*, struct visionSetVars_t*)>(L"GetVisionSet")(localClientNum, name, resultSettings);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpBool(bool from, bool to, const float fraction, enum visionSetLerpStyle_t style) -> bool
{
  return Zynamic::Forward<bool (bool, bool, const float, enum visionSetLerpStyle_t)>(L"LerpBool")(from, to, fraction, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpInteger(int from, int to, const float fraction, enum visionSetLerpStyle_t style) -> int
{
  return Zynamic::Forward<int (int, int, const float, enum visionSetLerpStyle_t)>(L"LerpInteger")(from, to, fraction, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpStepFloat(float from, float to, const float fraction, enum visionSetLerpStyle_t style) -> float
{
  return Zynamic::Forward<float (float, float, const float, enum visionSetLerpStyle_t)>(L"LerpStepFloat")(from, to, fraction, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpFloat(float from, float to, float fraction, enum visionSetLerpStyle_t style) -> float
{
  return Zynamic::Forward<float (float, float, float, enum visionSetLerpStyle_t)>(L"LerpFloat")(from, to, fraction, style);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpVec3(const float* from, const float* to, float fraction, enum visionSetLerpStyle_t style, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, enum visionSetLerpStyle_t, float*)>(L"LerpVec3")(from, to, fraction, style, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpVec4(const float* from, const float* to, float fraction, enum visionSetLerpStyle_t style, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, enum visionSetLerpStyle_t, float*)>(L"LerpVec4")(from, to, fraction, style, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateVarsLerpCustom(float flareRatio, const struct visionSetVars_t* from, const struct visionSetVars_t* to, struct visionSetLerpData_t* lerpData, struct visionSetVars_t* result) -> void
{
  return Zynamic::Forward<void (float, const struct visionSetVars_t*, const struct visionSetVars_t*, struct visionSetLerpData_t*, struct visionSetVars_t*)>(L"UpdateVarsLerpCustom")(flareRatio, from, to, lerpData, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateVarsLerp(int time, const struct visionSetVars_t* from, const struct visionSetVars_t* to, struct visionSetLerpData_t* lerpData, struct visionSetVars_t* result) -> void
{
  return Zynamic::Forward<void (int, const struct visionSetVars_t*, const struct visionSetVars_t*, struct visionSetLerpData_t*, struct visionSetVars_t*)>(L"UpdateVarsLerp")(time, from, to, lerpData, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitVisionSets(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_InitVisionSets")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalculateFlareRatio(float flareRatio, float flareRatioLastFrame) -> float
{
  return Zynamic::Forward<float (float, float)>(L"CalculateFlareRatio")(flareRatio, flareRatioLastFrame);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetsUpdate(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_VisionSetsUpdate")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VisionSetCurrent(int localClientNum, enum visionSetMode_t mode, const char* name) -> bool
{
  return Zynamic::Forward<bool (int, enum visionSetMode_t, const char*)>(L"VisionSetCurrent")(localClientNum, mode, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetStartLerp_To(int localClientNum, enum visionSetMode_t mode, enum visionSetLerpStyle_t style, const char* nameTo, int duration) -> bool
{
  return Zynamic::Forward<bool (int, enum visionSetMode_t, enum visionSetLerpStyle_t, const char*, int)>(L"CG_VisionSetStartLerp_To")(localClientNum, mode, style, nameTo, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetDefaultVision(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SetDefaultVision")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetConfigString_Naked(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_VisionSetConfigString_Naked")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetConfigString_Night(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_VisionSetConfigString_Night")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetMyChanges() -> void
{
  return Zynamic::Forward<void ()>(L"CG_VisionSetMyChanges")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadVisionFileForTweaks(struct visionSetVars_t* setVars) -> bool
{
  return Zynamic::Forward<bool (struct visionSetVars_t*)>(L"LoadVisionFileForTweaks")(setVars);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetUpdateTweaksFromFile_Film() -> void
{
  return Zynamic::Forward<void ()>(L"CG_VisionSetUpdateTweaksFromFile_Film")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetUpdateTweaksFromFile_CharPrimary() -> void
{
  return Zynamic::Forward<void ()>(L"CG_VisionSetUpdateTweaksFromFile_CharPrimary")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetUpdateTweaksFromFile_Bloom() -> void
{
  return Zynamic::Forward<void ()>(L"CG_VisionSetUpdateTweaksFromFile_Bloom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InFlareVision(const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"CG_InFlareVision")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LookingThroughNightVision(const int localClientNum) -> bool
{
  return Zynamic::Forward<bool (const int)>(L"CG_LookingThroughNightVision")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawVisionSetDebug(int localClientNum, enum visionSetMode_t curChannel) -> void
{
  return Zynamic::Forward<void (int, enum visionSetMode_t)>(L"DrawVisionSetDebug")(localClientNum, curChannel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VisionSetApplyToRefdef(int localClientNum, bool isExtracam) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"CG_VisionSetApplyToRefdef")(localClientNum, isExtracam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitExposure(int localClientNum, char* mapname) -> void
{
  return Zynamic::Forward<void (int, char*)>(L"CG_InitExposure")(localClientNum, mapname);
}

#endif // __UNIMPLEMENTED__
