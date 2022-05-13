//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto UILocalVar_Init(struct UILocalVarContext* context) -> void
{
  return Zynamic::Forward<void (struct UILocalVarContext*)>(L"UILocalVar_Init")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_Shutdown(struct UILocalVarContext* context) -> void
{
  return Zynamic::Forward<void (struct UILocalVarContext*)>(L"UILocalVar_Shutdown")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_HashName(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"UILocalVar_HashName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_FindLocation(struct UILocalVarContext* context, const char* name, unsigned int* hashForName) -> bool
{
  return Zynamic::Forward<bool (struct UILocalVarContext*, const char*, unsigned int*)>(L"UILocalVar_FindLocation")(context, name, hashForName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_Find(struct UILocalVarContext* context, const char* name) -> const struct UILocalVar*
{
  return Zynamic::Forward<const struct UILocalVar* (struct UILocalVarContext*, const char*)>(L"UILocalVar_Find")(context, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_FindOrCreate(struct UILocalVarContext* context, const char* name) -> const struct UILocalVar*
{
  return Zynamic::Forward<const struct UILocalVar* (struct UILocalVarContext*, const char*)>(L"UILocalVar_FindOrCreate")(context, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_GetBool(const struct UILocalVar* var) -> bool
{
  return Zynamic::Forward<bool (const struct UILocalVar*)>(L"UILocalVar_GetBool")(var);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_GetInt(const struct UILocalVar* var) -> int
{
  return Zynamic::Forward<int (const struct UILocalVar*)>(L"UILocalVar_GetInt")(var);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_GetFloat(const struct UILocalVar* var) -> float
{
  return Zynamic::Forward<float (const struct UILocalVar*)>(L"UILocalVar_GetFloat")(var);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_GetString(const struct UILocalVar* var, char* stringBuf, int size) -> const char*
{
  return Zynamic::Forward<const char* (const struct UILocalVar*, char*, int)>(L"UILocalVar_GetString")(var, stringBuf, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_SetBool(const struct UILocalVar* var, bool b) -> void
{
  return Zynamic::Forward<void (const struct UILocalVar*, bool)>(L"UILocalVar_SetBool")(var, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_SetInt(const struct UILocalVar* var, int i) -> void
{
  return Zynamic::Forward<void (const struct UILocalVar*, int)>(L"UILocalVar_SetInt")(var, i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_SetFloat(const struct UILocalVar* var, float f) -> void
{
  return Zynamic::Forward<void (const struct UILocalVar*, float)>(L"UILocalVar_SetFloat")(var, f);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UILocalVar_SetString(const struct UILocalVar* var, const char* s) -> void
{
  return Zynamic::Forward<void (const struct UILocalVar*, const char*)>(L"UILocalVar_SetString")(var, s);
}

#endif // __UNIMPLEMENTED__
