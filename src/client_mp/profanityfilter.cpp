//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto isBadWord(int controllerIndex, char* testString) -> bool
{
  return Zynamic::Forward<bool (int, char*)>(L"isBadWord")(controllerIndex, testString);
}

#endif // __UNIMPLEMENTED__
