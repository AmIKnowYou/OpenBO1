//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto AddRefToObject(enum scriptInstance_t inst, unsigned int id) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"AddRefToObject")(inst, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto AddRefToVector(enum scriptInstance_t inst, const float* vectorValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const float*)>(L"AddRefToVector")(inst, vectorValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RemoveRefToVector(enum scriptInstance_t inst, const float* vectorValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const float*)>(L"RemoveRefToVector")(inst, vectorValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto AddRefToValue(enum scriptInstance_t inst, int type, union VariableUnion u) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, union VariableUnion)>(L"AddRefToValue")(inst, type, u);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RemoveRefToValue(enum scriptInstance_t inst, int type, union VariableUnion u) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, union VariableUnion)>(L"RemoveRefToValue")(inst, type, u);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto RemoveRefToValue(enum scriptInstance_t inst, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*)>(L"RemoveRefToValue")(inst, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Scr_GetArrayIndexValue(enum scriptInstance_t inst, unsigned int name) -> struct VariableValue
{
  return Zynamic::Forward<struct VariableValue (enum scriptInstance_t, unsigned int)>(L"Scr_GetArrayIndexValue")(inst, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FindVariableIndexInternal2(enum scriptInstance_t inst, unsigned int name, unsigned int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int)>(L"FindVariableIndexInternal2")(inst, name, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FindVariableIndexInternal(enum scriptInstance_t inst, unsigned int parentId, unsigned int name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int)>(L"FindVariableIndexInternal")(inst, parentId, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SetVariableValue(enum scriptInstance_t inst, unsigned int id, struct VariableValue* value) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableValue*)>(L"SetVariableValue")(inst, id, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Scr_EvalVariable(enum scriptInstance_t inst, unsigned int id) -> struct VariableValue
{
  return Zynamic::Forward<struct VariableValue (enum scriptInstance_t, unsigned int)>(L"Scr_EvalVariable")(inst, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FindFirstSibling(enum scriptInstance_t inst, unsigned int id) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int)>(L"FindFirstSibling")(inst, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FindNextSibling(enum scriptInstance_t inst, unsigned int id) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int)>(L"FindNextSibling")(inst, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FindLastSibling(enum scriptInstance_t inst, unsigned int parentId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int)>(L"FindLastSibling")(inst, parentId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto GetVariableName(enum scriptInstance_t inst, unsigned int id) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int)>(L"GetVariableName")(inst, id);
}

#endif // __UNIMPLEMENTED__
