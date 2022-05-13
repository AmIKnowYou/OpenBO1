//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_GetProfileEntry(const struct FxEffectDef* effectDef, struct FxProfileEntry* entryPool, int* entryCount) -> struct FxProfileEntry*
{
  return Zynamic::Forward<struct FxProfileEntry* (const struct FxEffectDef*, struct FxProfileEntry*, int*)>(L"FX_GetProfileEntry")(effectDef, entryPool, entryCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ProfileSingleEffect(struct FxSystem* system, const struct FxEffect* effect, struct FxProfileEntry* entry) -> void
{
  return Zynamic::Forward<void (struct FxSystem*, const struct FxEffect*, struct FxProfileEntry*)>(L"FX_ProfileSingleEffect")(system, effect, entry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetProfileEntryCost(const struct FxProfileEntry* entry) -> float
{
  return Zynamic::Forward<float (const struct FxProfileEntry*)>(L"FX_GetProfileEntryCost")(entry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CompareProfileEntries(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"FX_CompareProfileEntries")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawProfile(int clientIndex, function* drawFunc, float* profilePos) -> void
{
  return Zynamic::Forward<void (int, function *, float*)>(L"FX_DrawProfile")(clientIndex, drawFunc, profilePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ComparePriorityDebugEntries(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"FX_ComparePriorityDebugEntries")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawPriorityDebug(int clientIndex, function* drawFunc, float* profilePos) -> void
{
  return Zynamic::Forward<void (int, function *, float*)>(L"FX_DrawPriorityDebug")(clientIndex, drawFunc, profilePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto typeAsString(unsigned char type) -> const char*
{
  return Zynamic::Forward<const char* (unsigned char)>(L"typeAsString")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawMarkProfile_MarkPrint(struct FxMarksSystem* marksSystem, unsigned short head, const char* name, int index, function* drawFunc, float* profilePos) -> void
{
  return Zynamic::Forward<void (struct FxMarksSystem*, unsigned short, const char*, int, function *, float*)>(L"FX_DrawMarkProfile_MarkPrint")(marksSystem, head, name, index, drawFunc, profilePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawMarkProfile(int clientIndex, function* drawFunc, float* profilePos) -> void
{
  return Zynamic::Forward<void (int, function *, float*)>(L"FX_DrawMarkProfile")(clientIndex, drawFunc, profilePos);
}

#endif // __UNIMPLEMENTED__
