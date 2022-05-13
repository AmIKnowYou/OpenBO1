//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_dvar() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_dvar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_CompareNames(const struct dvar_s* dvar0, const struct dvar_s* dvar1) -> bool
{
  return Zynamic::Forward<bool (const struct dvar_s*, const struct dvar_s*)>(L"Dvar_CompareNames")(dvar0, dvar1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Sort() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_Sort")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEach(function* callback, void* userData) -> void
{
  return Zynamic::Forward<void (function *, void*)>(L"Dvar_ForEach")(callback, userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachName(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"Dvar_ForEachName")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInAutoExec(bool inAutoExec) -> void
{
  return Zynamic::Forward<void (bool)>(L"Dvar_SetInAutoExec")(inAutoExec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IsSystemActive() -> bool
{
  return Zynamic::Forward<bool ()>(L"Dvar_IsSystemActive")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IsValidName(const char* dvarName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Dvar_IsValidName")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AllocNameString(const char* name) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Dvar_AllocNameString")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FreeNameString(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Dvar_FreeNameString")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_CopyString(const char* string, union DvarValue* value) -> void
{
  return Zynamic::Forward<void (const char*, union DvarValue*)>(L"Dvar_CopyString")(string, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_WeakCopyString(const char* string, union DvarValue* value) -> void
{
  return Zynamic::Forward<void (const char*, union DvarValue*)>(L"Dvar_WeakCopyString")(string, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ShouldFreeCurrentString(struct dvar_s* dvar) -> bool
{
  return Zynamic::Forward<bool (struct dvar_s*)>(L"Dvar_ShouldFreeCurrentString")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ShouldFreeLatchedString(struct dvar_s* dvar) -> bool
{
  return Zynamic::Forward<bool (struct dvar_s*)>(L"Dvar_ShouldFreeLatchedString")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ShouldFreeResetString(struct dvar_s* dvar) -> bool
{
  return Zynamic::Forward<bool (struct dvar_s*)>(L"Dvar_ShouldFreeResetString")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FreeString(union DvarValue* value) -> void
{
  return Zynamic::Forward<void (union DvarValue*)>(L"Dvar_FreeString")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AssignCurrentStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue*, const char*)>(L"Dvar_AssignCurrentStringValue")(dvar, dest, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AssignLatchedStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue*, const char*)>(L"Dvar_AssignLatchedStringValue")(dvar, dest, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AssignResetStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue*, const char*)>(L"Dvar_AssignResetStringValue")(dvar, dest, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_EnumToString(const struct dvar_s* dvar) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*)>(L"Dvar_EnumToString")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IndexStringToEnumString(const struct dvar_s* dvar, const char* indexString) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*, const char*)>(L"Dvar_IndexStringToEnumString")(dvar, indexString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ValueToString(const struct dvar_s* dvar, union DvarValue value) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*, union DvarValue)>(L"Dvar_ValueToString")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToBool(const char* string) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Dvar_StringToBool")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToInt(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Dvar_StringToInt")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToInt64(const char* string) -> __int64
{
  return Zynamic::Forward<__int64 (const char*)>(L"Dvar_StringToInt64")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToFloat(const char* string) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_StringToFloat")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToVec2(const char* string, float* vector) -> void
{
  return Zynamic::Forward<void (const char*, float*)>(L"Dvar_StringToVec2")(string, vector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToVec3(const char* string, float* vector) -> void
{
  return Zynamic::Forward<void (const char*, float*)>(L"Dvar_StringToVec3")(string, vector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToVec4(const char* string, float* vector) -> void
{
  return Zynamic::Forward<void (const char*, float*)>(L"Dvar_StringToVec4")(string, vector);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToEnum(const union DvarLimits* domain, const char* string) -> int
{
  return Zynamic::Forward<int (const union DvarLimits*, const char*)>(L"Dvar_StringToEnum")(domain, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToColor(const char* string, unsigned char* color) -> void
{
  return Zynamic::Forward<void (const char*, unsigned char*)>(L"Dvar_StringToColor")(string, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_StringToValue(const enum dvarType_t type, const union DvarLimits domain, const char* string) -> union DvarValue
{
  return Zynamic::Forward<union DvarValue (const enum dvarType_t, const union DvarLimits, const char*)>(L"Dvar_StringToValue")(type, domain, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableValue(const struct dvar_s* dvar) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*)>(L"Dvar_DisplayableValue")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableResetValue(const struct dvar_s* dvar) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*)>(L"Dvar_DisplayableResetValue")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableLatchedValue(const struct dvar_s* dvar) -> const char*
{
  return Zynamic::Forward<const char* (const struct dvar_s*)>(L"Dvar_DisplayableLatchedValue")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClampVectorToDomain(float* vector, int components, float min, float max) -> void
{
  return Zynamic::Forward<void (float*, int, float, float)>(L"Dvar_ClampVectorToDomain")(vector, components, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_VectorInDomain(const float* vector, int components, float min, float max) -> bool
{
  return Zynamic::Forward<bool (const float*, int, float, float)>(L"Dvar_VectorInDomain")(vector, components, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClampValueToDomain(enum dvarType_t type, union DvarValue value, const union DvarValue resetValue, const union DvarLimits domain) -> union DvarValue
{
  return Zynamic::Forward<union DvarValue (enum dvarType_t, union DvarValue, const union DvarValue, const union DvarLimits)>(L"Dvar_ClampValueToDomain")(type, value, resetValue, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ValueInDomain(enum dvarType_t type, union DvarValue value, union DvarLimits domain) -> bool
{
  return Zynamic::Forward<bool (enum dvarType_t, union DvarValue, union DvarLimits)>(L"Dvar_ValueInDomain")(type, value, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_VectorDomainToString(int components, union DvarLimits domain, char* outBuffer, int outBufferLen) -> void
{
  return Zynamic::Forward<void (int, union DvarLimits, char*, int)>(L"Dvar_VectorDomainToString")(components, domain, outBuffer, outBufferLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DomainToString_Internal(enum dvarType_t type, union DvarLimits domain, char* outBuffer, int outBufferLen, int* outLineCount) -> const char*
{
  return Zynamic::Forward<const char* (enum dvarType_t, union DvarLimits, char*, int, int*)>(L"Dvar_DomainToString_Internal")(type, domain, outBuffer, outBufferLen, outLineCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DomainToString(enum dvarType_t type, union DvarLimits domain, char* outBuffer, int outBufferLen) -> const char*
{
  return Zynamic::Forward<const char* (enum dvarType_t, union DvarLimits, char*, int)>(L"Dvar_DomainToString")(type, domain, outBuffer, outBufferLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DomainToString_GetLines(enum dvarType_t type, union DvarLimits domain, char* outBuffer, int outBufferLen, int* outLineCount) -> const char*
{
  return Zynamic::Forward<const char* (enum dvarType_t, union DvarLimits, char*, int, int*)>(L"Dvar_DomainToString_GetLines")(type, domain, outBuffer, outBufferLen, outLineCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_PrintDomain(enum dvarType_t type, union DvarLimits domain) -> void
{
  return Zynamic::Forward<void (enum dvarType_t, union DvarLimits)>(L"Dvar_PrintDomain")(type, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ValuesEqual(enum dvarType_t type, union DvarValue val0, union DvarValue val1) -> int
{
  return Zynamic::Forward<int (enum dvarType_t, union DvarValue, union DvarValue)>(L"Dvar_ValuesEqual")(type, val0, val1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetLatchedValue(struct dvar_s* dvar, union DvarValue value) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue)>(L"Dvar_SetLatchedValue")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_HasLatchedValue(const struct dvar_s* dvar) -> bool
{
  return Zynamic::Forward<bool (const struct dvar_s*)>(L"Dvar_HasLatchedValue")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_CanChangeValue(const struct dvar_s* dvar, union DvarValue value, enum DvarSetSource source) -> bool
{
  return Zynamic::Forward<bool (const struct dvar_s*, union DvarValue, enum DvarSetSource)>(L"Dvar_CanChangeValue")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVariant(struct dvar_s* dvar, union DvarValue value, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue, enum DvarSetSource)>(L"Dvar_SetVariant")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FindMalleableVar(long dvarHash) -> struct dvar_s*
{
  return Zynamic::Forward<struct dvar_s* (long)>(L"Dvar_FindMalleableVar")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FindMalleableVar(const char* dvarName) -> struct dvar_s*
{
  return Zynamic::Forward<struct dvar_s* (const char*)>(L"Dvar_FindMalleableVar")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FindVar(const char* dvarName) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*)>(L"Dvar_FindVar")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FindVar(long dvarHash) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (long)>(L"Dvar_FindVar")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClearModified(const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*)>(L"Dvar_ClearModified")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetModified(const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*)>(L"Dvar_SetModified")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_UpdateEnumDomain(const struct dvar_s* dvar, const char** stringTable) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, const char**)>(L"Dvar_UpdateEnumDomain")(dvar, stringTable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetBool(const char* dvarName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Dvar_GetBool")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetInt(const char* dvarName) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Dvar_GetInt")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetInt(const struct dvar_s* dvar) -> int
{
  return Zynamic::Forward<int (const struct dvar_s*)>(L"Dvar_GetInt")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetInt(long dvarHash) -> int
{
  return Zynamic::Forward<int (long)>(L"Dvar_GetInt")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetFloat(const char* dvarName) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_GetFloat")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetFloat(long dvarHash) -> float
{
  return Zynamic::Forward<float (long)>(L"Dvar_GetFloat")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetString(const char* dvarName) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Dvar_GetString")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetVariantString(const char* dvarName) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Dvar_GetVariantString")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetVariantString(long dvarHash) -> const char*
{
  return Zynamic::Forward<const char* (long)>(L"Dvar_GetVariantString")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetUnpackedColor(const struct dvar_s* dvar, float* expandedColor) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float*)>(L"Dvar_GetUnpackedColor")(dvar, expandedColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetUnpackedColorByName(const char* dvarName, float* expandedColor) -> void
{
  return Zynamic::Forward<void (const char*, float*)>(L"Dvar_GetUnpackedColorByName")(dvarName, expandedColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetUnpackedColor(long dvarHash, float* expandedColor) -> void
{
  return Zynamic::Forward<void (long, float*)>(L"Dvar_GetUnpackedColor")(dvarHash, expandedColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorRed(const char* dvarName) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_GetColorRed")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorRed(long dvarHash) -> float
{
  return Zynamic::Forward<float (long)>(L"Dvar_GetColorRed")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorGreen(const char* dvarName) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_GetColorGreen")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorGreen(long dvarHash) -> float
{
  return Zynamic::Forward<float (long)>(L"Dvar_GetColorGreen")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorBlue(const char* dvarName) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_GetColorBlue")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorBlue(long dvarHash) -> float
{
  return Zynamic::Forward<float (long)>(L"Dvar_GetColorBlue")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorAlpha(const char* dvarName) -> float
{
  return Zynamic::Forward<float (const char*)>(L"Dvar_GetColorAlpha")(dvarName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetColorAlpha(long dvarHash) -> float
{
  return Zynamic::Forward<float (long)>(L"Dvar_GetColorAlpha")(dvarHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_PerformUnregistration(struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (struct dvar_s*)>(L"Dvar_PerformUnregistration")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_UpdateResetValue(struct dvar_s* dvar, union DvarValue value) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue)>(L"Dvar_UpdateResetValue")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ChangeResetValue(const struct dvar_s* dvar, union DvarValue value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, union DvarValue)>(L"Dvar_ChangeResetValue")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_UpdateValue(struct dvar_s* dvar, union DvarValue value) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, union DvarValue)>(L"Dvar_UpdateValue")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_MakeExplicitType(struct dvar_s* dvar, const char* dvarName, enum dvarType_t type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, const char*, enum dvarType_t, unsigned short, union DvarValue, union DvarLimits)>(L"Dvar_MakeExplicitType")(dvar, dvarName, type, flags, resetValue, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetReinterpretedResetValue(struct dvar_s* __formal, union DvarValue value, enum dvarType_t type, unsigned short flags, union DvarLimits domain) -> union DvarValue
{
  return Zynamic::Forward<union DvarValue (struct dvar_s*, union DvarValue, enum dvarType_t, unsigned short, union DvarLimits)>(L"Dvar_GetReinterpretedResetValue")(__formal, value, type, flags, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ReinterpretDvar(struct dvar_s* dvar, const char* dvarName, enum dvarType_t type, unsigned short flags, union DvarValue value, union DvarLimits domain) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, const char*, enum dvarType_t, unsigned short, union DvarValue, union DvarLimits)>(L"Dvar_ReinterpretDvar")(dvar, dvarName, type, flags, value, domain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_MakeLatchedValueCurrent(const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*)>(L"Dvar_MakeLatchedValueCurrent")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClearLatchedValue(const struct dvar_s* dvar) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*)>(L"Dvar_ClearLatchedValue")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Reregister(struct dvar_s* dvar, const char* dvarName, enum dvarType_t type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain, const char* description) -> void
{
  return Zynamic::Forward<void (struct dvar_s*, const char*, enum dvarType_t, unsigned short, union DvarValue, union DvarLimits, const char*)>(L"Dvar_Reregister")(dvar, dvarName, type, flags, resetValue, domain, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterNew(const char* dvarName, enum dvarType_t type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, enum dvarType_t, unsigned short, union DvarValue, union DvarLimits, const char*)>(L"Dvar_RegisterNew")(dvarName, type, flags, value, domain, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterVariant(const char* dvarName, enum dvarType_t type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, enum dvarType_t, unsigned short, union DvarValue, union DvarLimits, const char*)>(L"Dvar_RegisterVariant")(dvarName, type, flags, value, domain, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterBool(const char* dvarName, bool value, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, bool, unsigned short, const char*)>(L"_Dvar_RegisterBool")(dvarName, value, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterInt(const char* dvarName, int value, int min, int max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, int, int, int, unsigned short, const char*)>(L"_Dvar_RegisterInt")(dvarName, value, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterInt64(const char* dvarName, __int64 value, __int64 min, __int64 max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, __int64, __int64, __int64, unsigned short, const char*)>(L"_Dvar_RegisterInt64")(dvarName, value, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterFloat(const char* dvarName, float value, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterFloat")(dvarName, value, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterVec2(const char* dvarName, float x, float y, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterVec2")(dvarName, x, y, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterVec3(const char* dvarName, float x, float y, float z, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterVec3")(dvarName, x, y, z, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterVec4(const char* dvarName, float x, float y, float z, float w, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterVec4")(dvarName, x, y, z, w, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterString(const char* dvarName, const char* value, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, const char*, unsigned short, const char*)>(L"_Dvar_RegisterString")(dvarName, value, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterEnum(const char* dvarName, const char** valueList, int defaultIndex, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, const char**, int, unsigned short, const char*)>(L"_Dvar_RegisterEnum")(dvarName, valueList, defaultIndex, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterColor(const char* dvarName, float r, float g, float b, float a, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterColor")(dvarName, r, g, b, a, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterLinearRGB(const char* dvarName, float x, float y, float z, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterLinearRGB")(dvarName, x, y, z, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _Dvar_RegisterColorXYZ(const char* dvarName, float x, float y, float z, float min, float max, unsigned short flags, const char* description) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, float, float, float, float, float, unsigned short, const char*)>(L"_Dvar_RegisterColorXYZ")(dvarName, x, y, z, min, max, flags, description);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetDvarValueFromSource(const struct dvar_s* dvar, union DvarValue newValue, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, union DvarValue, enum DvarSetSource)>(L"Dvar_SetDvarValueFromSource")(dvar, newValue, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBoolFromSource(const struct dvar_s* dvar, bool value, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, bool, enum DvarSetSource)>(L"Dvar_SetBoolFromSource")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetIntFromSource(const struct dvar_s* dvar, int value, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, int, enum DvarSetSource)>(L"Dvar_SetIntFromSource")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInt64FromSource(const struct dvar_s* dvar, __int64 value, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, __int64, enum DvarSetSource)>(L"Dvar_SetInt64FromSource")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloatFromSource(const struct dvar_s* dvar, float value, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, enum DvarSetSource)>(L"Dvar_SetFloatFromSource")(dvar, value, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2FromSource(const struct dvar_s* dvar, float x, float y, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, enum DvarSetSource)>(L"Dvar_SetVec2FromSource")(dvar, x, y, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3FromSource(const struct dvar_s* dvar, float x, float y, float z, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float, enum DvarSetSource)>(L"Dvar_SetVec3FromSource")(dvar, x, y, z, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4FromSource(const struct dvar_s* dvar, float x, float y, float z, float w, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float, float, enum DvarSetSource)>(L"Dvar_SetVec4FromSource")(dvar, x, y, z, w, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetStringFromSource(const struct dvar_s* dvar, const char* string, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, const char*, enum DvarSetSource)>(L"Dvar_SetStringFromSource")(dvar, string, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColorFromSource(const struct dvar_s* dvar, float r, float g, float b, float a, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float, float, enum DvarSetSource)>(L"Dvar_SetColorFromSource")(dvar, r, g, b, a, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBool(const struct dvar_s* dvar, bool value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, bool)>(L"Dvar_SetBool")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInt(const struct dvar_s* dvar, int value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, int)>(L"Dvar_SetInt")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInt64(const struct dvar_s* dvar, __int64 value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, __int64)>(L"Dvar_SetInt64")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloat(const struct dvar_s* dvar, float value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float)>(L"Dvar_SetFloat")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2(const struct dvar_s* dvar, float x, float y) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float)>(L"Dvar_SetVec2")(dvar, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3(const struct dvar_s* dvar, float x, float y, float z) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float)>(L"Dvar_SetVec3")(dvar, x, y, z);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4(const struct dvar_s* dvar, float x, float y, float z, float w) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float, float)>(L"Dvar_SetVec4")(dvar, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetString(const struct dvar_s* dvar, const char* value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, const char*)>(L"Dvar_SetString")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColor(const struct dvar_s* dvar, float r, float g, float b, float a) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float, float, float, float)>(L"Dvar_SetColor")(dvar, r, g, b, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromStringFromSource(const struct dvar_s* dvar, const char* string, enum DvarSetSource source) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, const char*, enum DvarSetSource)>(L"Dvar_SetFromStringFromSource")(dvar, string, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromString(const struct dvar_s* dvar, const char* string) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, const char*)>(L"Dvar_SetFromString")(dvar, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBoolByName(const char* dvarName, bool value) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"Dvar_SetBoolByName")(dvarName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetIntByName(const char* dvarName, int value) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"Dvar_SetIntByName")(dvarName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInt64ByName(const char* dvarName, __int64 value) -> void
{
  return Zynamic::Forward<void (const char*, __int64)>(L"Dvar_SetInt64ByName")(dvarName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloatByName(const char* dvarName, float value) -> void
{
  return Zynamic::Forward<void (const char*, float)>(L"Dvar_SetFloatByName")(dvarName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2ByName(const char* dvarName, float x, float y) -> void
{
  return Zynamic::Forward<void (const char*, float, float)>(L"Dvar_SetVec2ByName")(dvarName, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3ByName(const char* dvarName, float x, float y, float z) -> void
{
  return Zynamic::Forward<void (const char*, float, float, float)>(L"Dvar_SetVec3ByName")(dvarName, x, y, z);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4ByName(const char* dvarName, float x, float y, float z, float w) -> void
{
  return Zynamic::Forward<void (const char*, float, float, float, float)>(L"Dvar_SetVec4ByName")(dvarName, x, y, z, w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetStringByName(const char* dvarName, const char* value) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"Dvar_SetStringByName")(dvarName, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColorByName(const char* dvarName, float r, float g, float b, float a) -> void
{
  return Zynamic::Forward<void (const char*, float, float, float, float)>(L"Dvar_SetColorByName")(dvarName, r, g, b, a);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromStringByNameFromSource(const char* dvarName, const char* string, enum DvarSetSource source, unsigned short flags) -> const struct dvar_s*
{
  return Zynamic::Forward<const struct dvar_s* (const char*, const char*, enum DvarSetSource, unsigned short)>(L"Dvar_SetFromStringByNameFromSource")(dvarName, string, source, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromStringByName(const char* dvarName, const char* string) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"Dvar_SetFromStringByName")(dvarName, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetCommand(const char* dvarName, const char* string) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"Dvar_SetCommand")(dvarName, string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AddFlags(const struct dvar_s* dvar, int flags) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, int)>(L"Dvar_AddFlags")(dvar, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Reset(const struct dvar_s* dvar, enum DvarSetSource setSource) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, enum DvarSetSource)>(L"Dvar_Reset")(dvar, setSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetCheatState() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_SetCheatState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ResetScriptInfo() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_ResetScriptInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AnyLatchedValues() -> bool
{
  return Zynamic::Forward<bool ()>(L"Dvar_AnyLatchedValues")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RestoreDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_RestoreDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ResetDvars(unsigned int filter, enum DvarSetSource setSource) -> void
{
  return Zynamic::Forward<void (unsigned int, enum DvarSetSource)>(L"Dvar_ResetDvars")(filter, setSource);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachConsoleAccessName(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"Dvar_ForEachConsoleAccessName")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ResetConAccessDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Dvar_ResetConAccessDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SaveDvarsToBuffer(const char** dvarnames, unsigned int numDvars, char* buffer, unsigned int bufsize) -> int
{
  return Zynamic::Forward<int (const char**, unsigned int, char*, unsigned int)>(L"Com_SaveDvarsToBuffer")(dvarnames, numDvars, buffer, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadDvarsFromBuffer(const char** dvarnames, unsigned int numDvars, const char* buffer, const char* filename) -> int
{
  return Zynamic::Forward<int (const char**, unsigned int, const char*, const char*)>(L"Com_LoadDvarsFromBuffer")(dvarnames, numDvars, buffer, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadDvarsFromBufferOptional(const char** dvarnames, bool* isOptional, unsigned int numDvars, const char* buffer, const char* filename) -> int
{
  return Zynamic::Forward<int (const char**, bool*, unsigned int, const char*, const char*)>(L"Com_LoadDvarsFromBufferOptional")(dvarnames, isOptional, numDvars, buffer, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBoolIfChanged(const struct dvar_s* dvar, bool value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, bool)>(L"Dvar_SetBoolIfChanged")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetIntIfChanged(const struct dvar_s* dvar, int value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, int)>(L"Dvar_SetIntIfChanged")(dvar, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloatIfChanged(const struct dvar_s* dvar, float value) -> void
{
  return Zynamic::Forward<void (const struct dvar_s*, float)>(L"Dvar_SetFloatIfChanged")(dvar, value);
}

#endif // __UNIMPLEMENTED__
