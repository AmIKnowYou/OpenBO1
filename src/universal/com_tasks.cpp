//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_taskRecords''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_taskRecords''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_taskFreeHead''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_taskFreeHead''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_taskActiveHead''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_taskActiveHead''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_DeferredTasks''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_DeferredTasks''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ChunkNext(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"ChunkNext")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ChunkAllocate(int index, int blocks) -> int
{
  return Zynamic::Forward<int (int, int)>(L"ChunkAllocate")(index, blocks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ChunkFree(int index, int blocks) -> void
{
  return Zynamic::Forward<void (int, int)>(L"ChunkFree")(index, blocks);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Task_Allocate(int bytes) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Task_Allocate")(bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Task_Deallocate(void* ptr, int bytes) -> void
{
  return Zynamic::Forward<void (void*, int)>(L"Task_Deallocate")(ptr, bytes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_Init() -> void
{
  return Zynamic::Forward<void ()>(L"TaskManager2_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_IsValidServerTask(const struct TaskDefinition* definition) -> bool
{
  return Zynamic::Forward<bool (const struct TaskDefinition*)>(L"TaskManager2_IsValidServerTask")(definition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CreateTaskFromServerThread(const struct TaskDefinition* definition, const int controllerIndex, struct TaskRecord* nestTask, int timeout) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (const struct TaskDefinition*, const int, struct TaskRecord*, int)>(L"TaskManager2_CreateTaskFromServerThread")(definition, controllerIndex, nestTask, timeout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CreateDeferredTasks() -> void
{
  return Zynamic::Forward<void ()>(L"TaskManager2_CreateDeferredTasks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_DeferTaskToMainThread(class bdRemoteTask* dwTask, const struct TaskDefinition* taskDef, void* payload) -> void
{
  return Zynamic::Forward<void (class bdRemoteTask*, const struct TaskDefinition*, void*)>(L"TaskManager2_DeferTaskToMainThread")(dwTask, taskDef, payload);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_PickUpDeferredTasks() -> void
{
  return Zynamic::Forward<void ()>(L"TaskManager2_PickUpDeferredTasks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_FreeAllPendingTasksInternal(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"TaskManager2_FreeAllPendingTasksInternal")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_FreeAllPendingTasksForController(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"TaskManager2_FreeAllPendingTasksForController")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_HandleTimedOutTask(struct TaskRecord* TimedOutTask) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"TaskManager2_HandleTimedOutTask")(TimedOutTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_FreeDeadTasks(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"TaskManager2_FreeDeadTasks")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_ProcessXOverlappedTask(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"TaskManager2_ProcessXOverlappedTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CancelEndlessTasks(int localControllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"TaskManager2_CancelEndlessTasks")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_ComErrorCleanup() -> void
{
  return Zynamic::Forward<void ()>(L"TaskManager2_ComErrorCleanup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_ProcessDemonwareTask(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"TaskManager2_ProcessDemonwareTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_ProcessNestedTask(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"TaskManager2_ProcessNestedTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_ProcessTasks(const int localControllerIndex) -> void
{
  return Zynamic::Forward<void (const int)>(L"TaskManager2_ProcessTasks")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CreateTask(const struct TaskDefinition* definition, const int controllerIndex, struct TaskRecord* nestTask, int timeout) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (const struct TaskDefinition*, const int, struct TaskRecord*, int)>(L"TaskManager2_CreateTask")(definition, controllerIndex, nestTask, timeout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_StartTask(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"TaskManager2_StartTask")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManger2_TaskGetInProgressForControllerByName(const char* taskName, const int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (const char*, const int)>(L"TaskManger2_TaskGetInProgressForControllerByName")(taskName, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskGetInProgressForController(const struct TaskDefinition* definition, const int controllerIndex) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (const struct TaskDefinition*, const int)>(L"TaskManager2_TaskGetInProgressForController")(definition, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskGetInProgress(const struct TaskDefinition* definition) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (const struct TaskDefinition*)>(L"TaskManager2_TaskGetInProgress")(definition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskIsInProgressForController(const struct TaskDefinition* definition, const int controllerIndex) -> bool
{
  return Zynamic::Forward<bool (const struct TaskDefinition*, const int)>(L"TaskManager2_TaskIsInProgressForController")(definition, controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskIsInProgress(const struct TaskDefinition* definition) -> bool
{
  return Zynamic::Forward<bool (const struct TaskDefinition*)>(L"TaskManager2_TaskIsInProgress")(definition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CountTasksInProgress(const struct TaskDefinition* definition) -> int
{
  return Zynamic::Forward<int (const struct TaskDefinition*)>(L"TaskManager2_CountTasksInProgress")(definition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_CountTasksInProgressForController(const int controllerindex) -> int
{
  return Zynamic::Forward<int (const int)>(L"TaskManager2_CountTasksInProgressForController")(controllerindex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskIsPending(const struct TaskRecord* task) -> bool
{
  return Zynamic::Forward<bool (const struct TaskRecord*)>(L"TaskManager2_TaskIsPending")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_TaskIsTimedOut(const struct TaskRecord* task) -> bool
{
  return Zynamic::Forward<bool (const struct TaskRecord*)>(L"TaskManager2_TaskIsTimedOut")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_StateToString(enum TaskState state, char* string, int stringsize) -> void
{
  return Zynamic::Forward<void (enum TaskState, char*, int)>(L"TaskManager2_StateToString")(state, string, stringsize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager2_DumpTasks() -> void
{
  return Zynamic::Forward<void ()>(L"TaskManager2_DumpTasks")();
}

#endif // __UNIMPLEMENTED__
