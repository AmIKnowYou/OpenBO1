//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TaskManager_ClearOverlappedTasks(struct overlappedTask* overlappedTasks) -> void
{
  return Zynamic::Forward<void (struct overlappedTask*)>(L"TaskManager_ClearOverlappedTasks")(overlappedTasks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_GetOpenTaskSlot(struct overlappedTask* overlappedTasks, const int controllerIndex, const int type) -> struct overlappedTask*
{
  return Zynamic::Forward<struct overlappedTask* (struct overlappedTask*, const int, const int)>(L"TaskManager_GetOpenTaskSlot")(overlappedTasks, controllerIndex, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_ClearTask(struct overlappedTask* task) -> void
{
  return Zynamic::Forward<void (struct overlappedTask*)>(L"TaskManager_ClearTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_AnyTaskInProgress(struct overlappedTask* overlappedTasks) -> bool
{
  return Zynamic::Forward<bool (struct overlappedTask*)>(L"TaskManager_AnyTaskInProgress")(overlappedTasks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskIsInProgress(struct overlappedTask* overlappedTasks, const int type) -> bool
{
  return Zynamic::Forward<bool (struct overlappedTask*, const int)>(L"TaskManager_TaskIsInProgress")(overlappedTasks, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_GetTaskData(struct overlappedTask* overlappedTask) -> void*
{
  return Zynamic::Forward<void* (struct overlappedTask*)>(L"TaskManager_GetTaskData")(overlappedTask);
}

#endif // __UNIMPLEMENTED__
