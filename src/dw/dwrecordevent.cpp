//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto dwRecordEvent(struct overlappedTask* const task, char* buff, int buffSize, unsigned int category) -> void
{
  return Zynamic::Forward<void (struct overlappedTask* const, char*, int, unsigned int)>(L"dwRecordEvent")(task, buff, buffSize, category);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRecordEventAscii(struct overlappedTask* const task, char* buff, int buffSize, unsigned int category) -> void
{
  return Zynamic::Forward<void (struct overlappedTask* const, char*, int, unsigned int)>(L"dwRecordEventAscii")(task, buff, buffSize, category);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'overlappedTasks''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'overlappedTasks''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRecordEventFormat(struct overlappedTask* const task, unsigned int category, const char* fmt, ...) -> void
{
  return Zynamic::Forward<void (struct overlappedTask* const, unsigned int, const char*, ...)>(L"dwRecordEventFormat")(task, category, fmt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwRecordEventComplete(struct overlappedTask* const task, int controllerIndex) -> enum taskCompleteResults
{
  return Zynamic::Forward<enum taskCompleteResults (struct overlappedTask* const, int)>(L"dwRecordEventComplete")(task, controllerIndex);
}

#endif // __UNIMPLEMENTED__
