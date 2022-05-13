//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sys_WorkerCmdInit() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_WorkerCmdInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jqCommitMemory(struct jqBatch* batch, void* input, unsigned int dataSize) -> void*
{
  return Zynamic::Forward<void* (struct jqBatch*, void*, unsigned int)>(L"jqCommitMemory")(batch, input, dataSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jqSafeFlush(struct jqBatchGroup* group, unsigned __int64 batchCount) -> void
{
  return Zynamic::Forward<void (struct jqBatchGroup*, unsigned __int64)>(L"jqSafeFlush")(group, batchCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jqLockData(struct jqBatch* batch) -> void*
{
  return Zynamic::Forward<void* (struct jqBatch*)>(L"jqLockData")(batch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jqUnlockData(struct jqBatch* batch, void* data) -> void
{
  return Zynamic::Forward<void (struct jqBatch*, void*)>(L"jqUnlockData")(batch, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AddWorkerCmdInternal(struct jqWorkerCmd* name, void* data, struct WorkerCmdConditional* cond) -> void
{
  return Zynamic::Forward<void (struct jqWorkerCmd*, void*, struct WorkerCmdConditional*)>(L"Sys_AddWorkerCmdInternal")(name, data, cond);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_WaitWorkerCmdInternal(struct jqWorkerCmd* name) -> void
{
  return Zynamic::Forward<void (struct jqWorkerCmd*)>(L"Sys_WaitWorkerCmdInternal")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AssistAndWaitWorkerCmdInternalCallback(void* context) -> bool
{
  return Zynamic::Forward<bool (void*)>(L"Sys_AssistAndWaitWorkerCmdInternalCallback")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AssistAndWaitWorkerCmdInternal(struct jqWorkerCmd* name) -> void
{
  return Zynamic::Forward<void (struct jqWorkerCmd*)>(L"Sys_AssistAndWaitWorkerCmdInternal")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AssistSingleCallback(void* context) -> bool
{
  return Zynamic::Forward<bool (void*)>(L"Sys_AssistSingleCallback")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AssistSingle() -> void
{
  return Zynamic::Forward<void ()>(L"Sys_AssistSingle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_AssistNeeded() -> bool
{
  return Zynamic::Forward<bool ()>(L"Sys_AssistNeeded")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FinishedFrontendWorkerCmds() -> int
{
  return Zynamic::Forward<int ()>(L"R_FinishedFrontendWorkerCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaitFrontendWorkerCmds() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaitFrontendWorkerCmds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_WaitWorkerCmds() -> void
{
  return Zynamic::Forward<void ()>(L"R_WaitWorkerCmds")();
}

#endif // __UNIMPLEMENTED__
