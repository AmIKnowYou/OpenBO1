//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_q_shared() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_q_shared")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ColorIndex(unsigned char c) -> unsigned char
{
  return Zynamic::Forward<unsigned char (unsigned char)>(L"ColorIndex")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetFilenameSubString(const char* pathname) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Com_GetFilenameSubString")(pathname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_GetExtensionSubString(const char* filename) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Com_GetExtensionSubString")(filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_StripExtension(const char* in, char* out) -> void
{
  return Zynamic::Forward<void (const char*, char*)>(L"Com_StripExtension")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_DefaultExtension(char* path, int maxSize, const char* extension) -> void
{
  return Zynamic::Forward<void (char*, int, const char*)>(L"Com_DefaultExtension")(path, maxSize, extension);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BigShort(short l) -> short
{
  return Zynamic::Forward<short (short)>(L"BigShort")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LittleLong64(unsigned __int64 l) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (unsigned __int64)>(L"LittleLong64")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShortSwap(short l) -> short
{
  return Zynamic::Forward<short (short)>(L"ShortSwap")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShortNoSwap(short l) -> short
{
  return Zynamic::Forward<short (short)>(L"ShortNoSwap")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LongSwap(int l) -> int
{
  return Zynamic::Forward<int (int)>(L"LongSwap")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_HandleBody(int ragdollHandle) -> struct RagdollBody*
{
  return Zynamic::Forward<struct RagdollBody* (int)>(L"Ragdoll_HandleBody")(ragdollHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Long64Swap(unsigned __int64 l) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (unsigned __int64)>(L"Long64Swap")(l);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Long64NoSwap(unsigned __int64 ll) -> unsigned __int64
{
  return Zynamic::Forward<unsigned __int64 (unsigned __int64)>(L"Long64NoSwap")(ll);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FloatReadSwap(int n) -> float
{
  return Zynamic::Forward<float (int)>(L"FloatReadSwap")(n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FloatReadNoSwap(int n) -> float
{
  return Zynamic::Forward<float (int)>(L"FloatReadNoSwap")(n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FloatWriteSwap(float f) -> int
{
  return Zynamic::Forward<int (float)>(L"FloatWriteSwap")(f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Swap_InitLittleEndian() -> void
{
  return Zynamic::Forward<void ()>(L"Swap_InitLittleEndian")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Swap_InitBigEndian() -> void
{
  return Zynamic::Forward<void ()>(L"Swap_InitBigEndian")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Swap_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Swap_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_atoi64(const char* str) -> __int64
{
  return Zynamic::Forward<__int64 (const char*)>(L"I_atoi64")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_islower(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_islower")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_isupper(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_isupper")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_isalpha(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_isalpha")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_isdigit(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_isdigit")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_isalnum(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_isalnum")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_isforfilename(int c) -> bool
{
  return Zynamic::Forward<bool (int)>(L"I_isforfilename")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strncpyz(char* dest, const char* src, int destsize) -> void
{
  return Zynamic::Forward<void (char*, const char*, int)>(L"I_strncpyz")(dest, src, destsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strnicmp(const char* s0, const char* s1, int n) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int)>(L"I_strnicmp")(s0, s1, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strncmp(const char* s0, const char* s1, int n) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int)>(L"I_strncmp")(s0, s1, n);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_stristr(const char* s0, const char* substr) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*)>(L"I_stristr")(s0, substr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_stricmp(const char* s0, const char* s1) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"I_stricmp")(s0, s1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strcmp(const char* s0, const char* s1) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"I_strcmp")(s0, s1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_stricmpwild(const char* wild, const char* s) -> int
{
  return Zynamic::Forward<int (const char*, const char*)>(L"I_stricmpwild")(wild, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strlwr(char* s) -> char*
{
  return Zynamic::Forward<char* (char*)>(L"I_strlwr")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strupr(char* s) -> char*
{
  return Zynamic::Forward<char* (char*)>(L"I_strupr")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_iscsym(int c) -> int
{
  return Zynamic::Forward<int (int)>(L"I_iscsym")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_strncat(char* dest, int size, const char* src) -> void
{
  return Zynamic::Forward<void (char*, int, const char*)>(L"I_strncat")(dest, size, src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_DrawStrlen(const char* str) -> int
{
  return Zynamic::Forward<int (const char*)>(L"I_DrawStrlen")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_CleanStr(char* string) -> char*
{
  return Zynamic::Forward<char* (char*)>(L"I_CleanStr")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_CleanChar(char character) -> char
{
  return Zynamic::Forward<char (char)>(L"I_CleanChar")(character);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_sprintf(char* dest, int size, const char* fmt, ...) -> int
{
  return Zynamic::Forward<int (char*, int, const char*, ...)>(L"Com_sprintf")(dest, size, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_sprintfPos(char* dest, const int destSize, int* destPos, const char* fmt, ...) -> int
{
  return Zynamic::Forward<int (char*, const int, int*, const char*, ...)>(L"Com_sprintfPos")(dest, destSize, destPos, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanKeepStringPointer(const char* string) -> int
{
  return Zynamic::Forward<int (const char*)>(L"CanKeepStringPointer")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto strreverse(char* begin, char* end) -> void
{
  return Zynamic::Forward<void (char*, char*)>(L"strreverse")(begin, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_itoa(int value, char* buf, int bufsize) -> char*
{
  return Zynamic::Forward<char* (int, char*, int)>(L"I_itoa")(value, buf, bufsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto va(const char* format, ...) -> char*
{
  return Zynamic::Forward<char* (const char*, ...)>(L"va")(format);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_InitThreadData(int threadContext) -> void
{
  return Zynamic::Forward<void (int)>(L"Com_InitThreadData")(threadContext);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_ValueForKey(const char* s, const char* key) -> const char*
{
  return Zynamic::Forward<const char* (const char*, const char*)>(L"Info_ValueForKey")(s, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_NextPair(const char** head, char* key, char* value) -> void
{
  return Zynamic::Forward<void (const char**, char*, char*)>(L"Info_NextPair")(head, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_RemoveKey(char* s, const char* key) -> void
{
  return Zynamic::Forward<void (char*, const char*)>(L"Info_RemoveKey")(s, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_RemoveKey_Big(char* s, const char* key) -> void
{
  return Zynamic::Forward<void (char*, const char*)>(L"Info_RemoveKey_Big")(s, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_Validate(const char* s) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Info_Validate")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_SetValueForKey(char* s, const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (char*, const char*, const char*)>(L"Info_SetValueForKey")(s, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Info_SetValueForKey_Big(char* s, const char* key, const char* value) -> void
{
  return Zynamic::Forward<void (char*, const char*, const char*)>(L"Info_SetValueForKey_Big")(s, key, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto KeyValueToField(unsigned char* pStruct, const struct cspField_t* pField, const char* pszKeyValue, const int iMaxFieldTypes, function* parseSpecialFieldType, function* parseStrcpy) -> int
{
  return Zynamic::Forward<int (unsigned char*, const struct cspField_t*, const char*, const int, function *, function *)>(L"KeyValueToField")(pStruct, pField, pszKeyValue, iMaxFieldTypes, parseSpecialFieldType, parseStrcpy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseConfigStringToStruct(unsigned char* pStruct, const struct cspField_t* pFieldList, const int iNumFields, const char* pszBuffer, const int iMaxFieldTypes, function* parseSpecialFieldType, function* parseStrCpy) -> int
{
  return Zynamic::Forward<int (unsigned char*, const struct cspField_t*, const int, const char*, const int, function *, function *)>(L"ParseConfigStringToStruct")(pStruct, pFieldList, iNumFields, pszBuffer, iMaxFieldTypes, parseSpecialFieldType, parseStrCpy);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseConfigStringToStructMerged(unsigned char* pStruct, const struct cspField_t* pFieldList, const int iNumFields, const char* mergedName, const char** pszBuffer, const char** sourceName, char* pszMergedBuffer, const int iMaxFieldTypes, function* parseSpecialFieldType, function* parseStrCpy, function* parseMergeSpecialCase) -> int
{
  return Zynamic::Forward<int (unsigned char*, const struct cspField_t*, const int, const char*, const char**, const char**, char*, const int, function *, function *, function *)>(L"ParseConfigStringToStructMerged")(pStruct, pFieldList, iNumFields, mergedName, pszBuffer, sourceName, pszMergedBuffer, iMaxFieldTypes, parseSpecialFieldType, parseStrCpy, parseMergeSpecialCase);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLeanFraction(const float fFrac) -> float
{
  return Zynamic::Forward<float (const float)>(L"GetLeanFraction")(fFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnGetLeanFraction(const float fFrac) -> float
{
  return Zynamic::Forward<float (const float)>(L"UnGetLeanFraction")(fFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddLeanToPosition(float* position, const float fViewYaw, const float fLeanFrac, const float fViewRoll, const float fLeanDist) -> void
{
  return Zynamic::Forward<void (float*, const float, const float, const float, const float)>(L"AddLeanToPosition")(position, fViewYaw, fLeanFrac, fViewRoll, fLeanDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OrientationPosToWorldPos(const struct orientation_t* orient, const float* pos, float* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const float*, float*)>(L"OrientationPosToWorldPos")(orient, pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OrientationDirToWorldDir(const struct orientation_t* orient, const float* dir, float* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const float*, float*)>(L"OrientationDirToWorldDir")(orient, dir, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OrientationConcatenate(const struct orientation_t* orFirst, const struct orientation_t* orSecond, struct orientation_t* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, const struct orientation_t*, struct orientation_t*)>(L"OrientationConcatenate")(orFirst, orSecond, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OrientationInvert(const struct orientation_t* orient, struct orientation_t* out) -> void
{
  return Zynamic::Forward<void (const struct orientation_t*, struct orientation_t*)>(L"OrientationInvert")(orient, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_IsLegacyXModelName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Com_IsLegacyXModelName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CMD_GetAnalogButtonValue(struct usercmd_s* cmd, int whichBit) -> float
{
  return Zynamic::Forward<float (struct usercmd_s*, int)>(L"CMD_GetAnalogButtonValue")(cmd, whichBit);
}

#endif // __UNIMPLEMENTED__
