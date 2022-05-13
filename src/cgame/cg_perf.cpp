//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_PerfInit() -> void
{
  return Zynamic::Forward<void ()>(L"CG_PerfInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateData(struct CG_PerfData* data, int value) -> void
{
  return Zynamic::Forward<void (struct CG_PerfData*, int)>(L"UpdateData")(data, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PerfUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"CG_PerfUpdate")();
}

#endif // __UNIMPLEMENTED__
