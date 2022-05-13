//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructibleStage(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_DestructibleStage")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructibleStageArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_DestructibleStageArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructiblePiece(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_DestructiblePiece")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructiblePieceArray(bool atStreamStart, int count) -> void
{
  return Zynamic::Forward<void (bool, int)>(L"Load_DestructiblePieceArray")(atStreamStart, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructibleDef(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_DestructibleDef")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Load_DestructibleDefPtr(bool atStreamStart) -> void
{
  return Zynamic::Forward<void (bool)>(L"Load_DestructibleDefPtr")(atStreamStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructibleStage() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_DestructibleStage")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructibleStageArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_DestructibleStageArray")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructiblePiece() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_DestructiblePiece")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructiblePieceArray(int count) -> void
{
  return Zynamic::Forward<void (int)>(L"Mark_DestructiblePieceArray")(count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructibleDef() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_DestructibleDef")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Mark_DestructibleDefPtr() -> void
{
  return Zynamic::Forward<void ()>(L"Mark_DestructibleDefPtr")();
}

#endif // __UNIMPLEMENTED__
