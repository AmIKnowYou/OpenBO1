//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_AcquireDXDeviceOwnership(function* pumpfunc) -> int
{
  return Zynamic::Forward<int (function *)>(L"R_AcquireDXDeviceOwnership")(pumpfunc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseDXDeviceOwnership() -> int
{
  return Zynamic::Forward<int ()>(L"R_ReleaseDXDeviceOwnership")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AssertDXDeviceOwnership() -> void
{
  return Zynamic::Forward<void ()>(L"R_AssertDXDeviceOwnership")();
}

#endif // __UNIMPLEMENTED__
