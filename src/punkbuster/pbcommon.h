//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto PbCopyFile(char* sfn, char* tfn, long sizeLimit) -> int
{
  return Zynamic::Forward<int (char*, char*, long)>(L"PbCopyFile")(sfn, tfn, sizeLimit);
}

#endif // __UNIMPLEMENTED__
