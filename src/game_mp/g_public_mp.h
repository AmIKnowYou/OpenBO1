//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto EntHandle::isDefined() -> int
{
  return Zynamic::Forward<public int ()>(L"EntHandle::isDefined")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto EntHandle::ent() -> struct gentity_s*
{
  return Zynamic::Forward<public struct gentity_s* ()>(L"EntHandle::ent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto EntHandle::entnum() -> unsigned int
{
  return Zynamic::Forward<public unsigned int ()>(L"EntHandle::entnum")();
}

#endif // __UNIMPLEMENTED__
