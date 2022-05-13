//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetOperandAsString(struct Operand operand) -> const char*
{
  return Zynamic::Forward<const char* (struct Operand)>(L"GetOperandAsString")(operand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Free(struct ExpressionStatement* statement) -> void
{
  return Zynamic::Forward<void (struct ExpressionStatement*)>(L"Expression_Free")(statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Alloc(struct ExpressionAllocState* allocState, int size) -> struct expressionEntry*
{
  return Zynamic::Forward<struct expressionEntry* (struct ExpressionAllocState*, int)>(L"Expression_Alloc")(allocState, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_OpIsFunction(enum expOperationEnum op) -> bool
{
  return Zynamic::Forward<bool (enum expOperationEnum)>(L"Expression_OpIsFunction")(op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_ParseOperatorToken(const char* token) -> enum expOperationEnum
{
  return Zynamic::Forward<enum expOperationEnum (const char*)>(L"Expression_ParseOperatorToken")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_HashOperand(const char* str, struct ExpressionAllocState* alloc) -> struct expressionEntry*
{
  return Zynamic::Forward<struct expressionEntry* (const char*, struct ExpressionAllocState*)>(L"Expression_HashOperand")(str, alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_StringOperand(const char* str, struct ExpressionAllocState* alloc) -> struct expressionEntry*
{
  return Zynamic::Forward<struct expressionEntry* (const char*, struct ExpressionAllocState*)>(L"Expression_StringOperand")(str, alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MakeRPN(struct expressionEntry* entry, int* length) -> struct expressionRpn*
{
  return Zynamic::Forward<struct expressionRpn* (struct expressionEntry*, int*)>(L"MakeRPN")(entry, length);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Parse(const char** text, struct ExpressionStatement* statement, void* compileBuffer, int compileBufferSize) -> bool
{
  return Zynamic::Forward<bool (const char**, struct ExpressionStatement*, void*, int)>(L"Expression_Parse")(text, statement, compileBuffer, compileBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Read(int handle, struct ExpressionStatement* statement) -> bool
{
  return Zynamic::Forward<bool (int, struct ExpressionStatement*)>(L"Expression_Read")(handle, statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Expression_Init")();
}

#endif // __UNIMPLEMENTED__
