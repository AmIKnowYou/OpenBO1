//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto dwClearTask(struct overlappedTask* const task) -> void
{
  return Zynamic::Forward<void (struct overlappedTask* const)>(L"dwClearTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwGetTaskStatus(struct overlappedTask* const task) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (struct overlappedTask* const)>(L"dwGetTaskStatus")(task);
}

#endif // __UNIMPLEMENTED__
