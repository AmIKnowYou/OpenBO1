//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Eval_PrepareBinaryOpSameTypes(struct Eval* eval) -> void
{
  return Zynamic::Forward<void (struct Eval*)>(L"Eval_PrepareBinaryOpSameTypes")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_PrepareBinaryOpIntegers(struct Eval* eval) -> void
{
  return Zynamic::Forward<void (struct Eval*)>(L"Eval_PrepareBinaryOpIntegers")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_PrepareBinaryOpBoolean(struct Eval* eval) -> void
{
  return Zynamic::Forward<void (struct Eval*)>(L"Eval_PrepareBinaryOpBoolean")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_AnyMissingOperands(const struct Eval* eval) -> bool
{
  return Zynamic::Forward<bool (const struct Eval*)>(L"Eval_AnyMissingOperands")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_EvaluationStep(struct Eval* eval) -> bool
{
  return Zynamic::Forward<bool (struct Eval*)>(L"Eval_EvaluationStep")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_CanPushValue(const struct Eval* eval) -> bool
{
  return Zynamic::Forward<bool (const struct Eval*)>(L"Eval_CanPushValue")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_IsUnaryOp(const struct Eval* eval) -> bool
{
  return Zynamic::Forward<bool (const struct Eval*)>(L"Eval_IsUnaryOp")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_PushOperator(struct Eval* eval, enum EvalOperatorType op) -> bool
{
  return Zynamic::Forward<bool (struct Eval*, enum EvalOperatorType)>(L"Eval_PushOperator")(eval, op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_PushInteger(struct Eval* eval, int value) -> bool
{
  return Zynamic::Forward<bool (struct Eval*, int)>(L"Eval_PushInteger")(eval, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_PushNumber(struct Eval* eval, double value) -> bool
{
  return Zynamic::Forward<bool (struct Eval*, double)>(L"Eval_PushNumber")(eval, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_Solve(struct Eval* eval) -> struct EvalValue
{
  return Zynamic::Forward<struct EvalValue (struct Eval*)>(L"Eval_Solve")(eval);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Eval_OperatorForToken(const char* text, enum EvalOperatorType* op) -> bool
{
  return Zynamic::Forward<bool (const char*, enum EvalOperatorType*)>(L"Eval_OperatorForToken")(text, op);
}

#endif // __UNIMPLEMENTED__
