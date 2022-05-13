//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_debugger() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_debugger")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindBreakpointInfo(enum scriptInstance_t inst, const char* codePos) -> char*
{
  return Zynamic::Forward<char* (enum scriptInstance_t, const char*)>(L"Scr_FindBreakpointInfo")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddBreakpoint(enum scriptInstance_t inst, const unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const unsigned char*)>(L"Scr_AddBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RemoveBreakpoint(enum scriptInstance_t inst, unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char*)>(L"Scr_RemoveBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddManualBreakpoint(enum scriptInstance_t inst, unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char*)>(L"Scr_AddManualBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RemoveManualBreakpoint(enum scriptInstance_t inst, unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char*)>(L"Scr_RemoveManualBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddAssignmentBreakpoint(enum scriptInstance_t inst, unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char*)>(L"Scr_AddAssignmentBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RemoveAssignmentBreakpoint(enum scriptInstance_t inst, unsigned char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char*)>(L"Scr_RemoveAssignmentBreakpoint")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitBreakpoints() -> void
{
  return Zynamic::Forward<void ()>(L"Scr_InitBreakpoints")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AllocBreakpoint() -> struct Scr_Breakpoint*
{
  return Zynamic::Forward<struct Scr_Breakpoint* ()>(L"Scr_AllocBreakpoint")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeBreakpoint(struct Scr_Breakpoint* breakpoint) -> void
{
  return Zynamic::Forward<void (struct Scr_Breakpoint*)>(L"Scr_FreeBreakpoint")(breakpoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::operator new(unsigned int size) -> void*
{
  return Zynamic::Forward<public void* (unsigned int)>(L"Scr_ScriptWindow::operator new")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::operator delete(void* ptr) -> void
{
  return Zynamic::Forward<public void (void*)>(L"Scr_ScriptWindow::operator delete")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::SetScriptFile(enum scriptInstance_t inst, const char* name) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, const char*)>(L"Scr_ScriptWindow::SetScriptFile")(inst, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::AddBreakpoint(enum scriptInstance_t inst, struct Scr_Breakpoint** pBreakpoint, char* codePos, int builtinIndex, struct Scr_WatchElement_s* element, unsigned char type) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_Breakpoint**, char*, int, struct Scr_WatchElement_s*, unsigned char)>(L"Scr_ScriptWindow::AddBreakpoint")(inst, pBreakpoint, codePos, builtinIndex, element, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_WriteElement(struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (struct Scr_WatchElement_s*)>(L"Scr_WriteElement")(element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadElement(enum scriptInstance_t inst) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<struct Scr_WatchElement_s* (enum scriptInstance_t)>(L"Scr_ReadElement")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeLineBreakpoint(enum scriptInstance_t inst, struct Scr_Breakpoint* breakpoint, bool deleteElement) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_Breakpoint*, bool)>(L"Scr_FreeLineBreakpoint")(inst, breakpoint, deleteElement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::GetSourcePos(enum scriptInstance_t inst, unsigned int* start, unsigned int* end) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, unsigned int*, unsigned int*)>(L"Scr_ScriptWindow::GetSourcePos")(inst, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::AddBreakpointAtSourcePos(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned char breakpointType, bool user, struct Scr_Breakpoint** pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos) -> bool
{
  return Zynamic::Forward<public bool (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned char, bool, struct Scr_Breakpoint**, unsigned int, unsigned int)>(L"Scr_ScriptWindow::AddBreakpointAtSourcePos")(inst, element, breakpointType, user, pBreakpoint, startSourcePos, endSourcePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::ToggleBreakpointInternal(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, bool force, bool overwrite, unsigned char breakpointType, bool user) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, bool, bool, unsigned char, bool)>(L"Scr_ScriptWindow::ToggleBreakpointInternal")(inst, element, force, overwrite, breakpointType, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::GetBreakpointCodePos(enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<public const char* (enum scriptInstance_t)>(L"Scr_ScriptWindow::GetBreakpointCodePos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ToggleBreakpointRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ToggleBreakpointRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ResumeBreakpoints(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ResumeBreakpoints")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MonitorCommand(const char* text, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_MonitorCommand")(text, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetTempBreakpoint(enum scriptInstance_t inst, const char* codePos, unsigned int threadId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int)>(L"Scr_SetTempBreakpoint")(inst, codePos, threadId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Step(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_Step")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_StepRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_StepRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::RunToCursor(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWindow::RunToCursor")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RunToCursorRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_RunToCursorRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::EnterCallInternal(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWindow::EnterCallInternal")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EnterCallRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_EnterCallRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWindow::Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AllocDebugMem(enum scriptInstance_t inst, int size, const char* name) -> void*
{
  return Zynamic::Forward<void* (enum scriptInstance_t, int, const char*)>(L"Scr_AllocDebugMem")(inst, size, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeDebugMem(enum scriptInstance_t inst, void* ptr) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, void*)>(L"Scr_FreeDebugMem")(inst, ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_AbstractScriptList::Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_AbstractScriptList::Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_AbstractScriptList::Shutdown(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_AbstractScriptList::Shutdown")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::AddFile(enum scriptInstance_t inst, const char* filename, struct Scr_AddFileInfo* info) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, const char*, struct Scr_AddFileInfo*)>(L"Scr_ScriptList::AddFile")(inst, filename, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompareScriptWindowsNames(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"Scr_CompareScriptWindowsNames")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptList::Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::Shutdown(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptList::Shutdown")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptCallStack::UpdateStack(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptCallStack::UpdateStack")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetElementRoot(struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<struct Scr_WatchElement_s* (struct Scr_WatchElement_s*)>(L"Scr_GetElementRoot")(element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementWithId_r(struct Scr_WatchElement_s* element, int id) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (struct Scr_WatchElement_s*, int)>(L"Scr_ScriptWatch::GetElementWithId_r")(element, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementWithId(int id) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (int)>(L"Scr_ScriptWatch::GetElementWithId")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementRef(struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s**
{
  return Zynamic::Forward<public struct Scr_WatchElement_s** (struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::GetElementRef")(element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementPrev(struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::GetElementPrev")(element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsSortWatchElement(struct Scr_WatchElement_s* element) -> bool
{
  return Zynamic::Forward<bool (struct Scr_WatchElement_s*)>(L"Scr_IsSortWatchElement")(element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleExpandElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::ToggleExpandElement")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ExpandElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, bool expand) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, bool)>(L"Scr_ScriptWatch::ExpandElement")(inst, element, expand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExpandElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ExpandElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CreateBreakpointElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned int bufferIndex, unsigned int sourcePos, bool user) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned int, unsigned int, bool)>(L"Scr_ScriptWatch::CreateBreakpointElement")(inst, element, bufferIndex, sourcePos, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::PasteNonBreakpointElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, const char* text, bool user) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*, const char*, bool)>(L"Scr_ScriptWatch::PasteNonBreakpointElement")(inst, element, text, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PasteElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_PasteElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InsertElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InsertElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::DeleteElementInternal(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::DeleteElementInternal")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DeleteElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DeleteElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::BackspaceElementInternal(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::BackspaceElementInternal")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BackspaceElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_BackspaceElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWatch::Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Shutdown(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWatch::Shutdown")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CreateWatchElement(enum scriptInstance_t inst, const char* text, struct Scr_WatchElement_s** prevElem, const char* name) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<struct Scr_WatchElement_s* (enum scriptInstance_t, const char*, struct Scr_WatchElement_s**, const char*)>(L"Scr_CreateWatchElement")(inst, text, prevElem, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RemoveValue(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_RemoveValue")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeWatchElementChildrenStrict(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_FreeWatchElementChildrenStrict")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeWatchElementText(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_FreeWatchElementText")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeWatchElementChildren(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_FreeWatchElementChildren")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::FreeWatchElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::FreeWatchElement")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareArrayIndices(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareArrayIndices")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareArrayIndicesClient(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareArrayIndicesClient")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetElementThreadPos(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_GetElementThreadPos")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PostSetText(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_PostSetText")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DeltaElementValueText(struct Scr_WatchElement_s* element, const char* oldValueText) -> void
{
  return Zynamic::Forward<void (struct Scr_WatchElement_s*, const char*)>(L"Scr_DeltaElementValueText")(element, oldValueText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetNonFieldElementRefText(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_SetNonFieldElementRefText")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetElementRefText(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, char* fieldText) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*, char*)>(L"Scr_SetElementRefText")(inst, element, fieldText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DeltaElementRefText(struct Scr_WatchElement_s* element, const char* oldRefText, char* fieldText) -> void
{
  return Zynamic::Forward<void (struct Scr_WatchElement_s*, const char*, char*)>(L"Scr_DeltaElementRefText")(element, oldRefText, fieldText);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareThreadElements(const void* arg1, const void* arg2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"CompareThreadElements")(arg1, arg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ConnectElementChildren(struct Scr_WatchElement_s* parentElement) -> void
{
  return Zynamic::Forward<void (struct Scr_WatchElement_s*)>(L"Scr_ConnectElementChildren")(parentElement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SortElementChildren(enum scriptInstance_t inst, struct Scr_WatchElement_s* parentElement) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_SortElementChildren")(inst, parentElement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchChildren(enum scriptInstance_t inst, struct Scr_WatchElement_s* parentElement) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::EvaluateWatchChildren")(inst, parentElement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::PostEvaluateWatchElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, struct VariableValue* value) -> bool
{
  return Zynamic::Forward<public bool (enum scriptInstance_t, struct Scr_WatchElement_s*, struct VariableValue*)>(L"Scr_ScriptWatch::PostEvaluateWatchElement")(inst, element, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchChildElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned int fieldName, struct Scr_WatchElement_s* childElement, bool hardcodedField) -> bool
{
  return Zynamic::Forward<public bool (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned int, struct Scr_WatchElement_s*, bool)>(L"Scr_ScriptWatch::EvaluateWatchChildElement")(inst, element, fieldName, childElement, hardcodedField);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchElementExpression(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, struct VariableValue* value) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, struct VariableValue*)>(L"Scr_ScriptWatch::EvaluateWatchElementExpression")(inst, element, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::EvaluateWatchElement")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CreateWatchElement(enum scriptInstance_t inst, const char* text, struct Scr_WatchElement_s** prevElem, const char* name) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, const char*, struct Scr_WatchElement_s**, const char*)>(L"Scr_ScriptWatch::CreateWatchElement")(inst, text, prevElem, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddTextRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_AddTextRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::AddElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, const char* text) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, const char*)>(L"Scr_ScriptWatch::AddElement")(inst, element, text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CloneElement(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::CloneElement")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CloneElementRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_CloneElementRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Evaluate(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWatch::Evaluate")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Evaluate(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_Evaluate")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AllowBreakpoint(enum scriptInstance_t inst, const char* pos) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, const char*)>(L"Scr_AllowBreakpoint")(inst, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SpecialBreakpoint(enum scriptInstance_t inst, struct VariableValue* top, const char* pos, unsigned int localId, int opcode, int type) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*, const char*, unsigned int, int, int)>(L"Scr_SpecialBreakpoint")(inst, top, pos, localId, opcode, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CheckBreakonNotify(enum scriptInstance_t inst, unsigned int notifyListOwnerId, unsigned int stringValue, struct VariableValue* top, const char* pos, unsigned int localId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, struct VariableValue*, const char*, unsigned int)>(L"Scr_CheckBreakonNotify")(inst, notifyListOwnerId, stringValue, top, pos, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::DisplayThreadPos(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::DisplayThreadPos")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DisplayThreadPosRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DisplayThreadPosRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BreakOnAllAssignmentPos(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_BreakOnAllAssignmentPos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UnbreakAllAssignmentPos(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_UnbreakAllAssignmentPos")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefToVariable(enum scriptInstance_t inst, unsigned int id, int isObject) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, unsigned int, int)>(L"Scr_RefToVariable")(inst, id, isObject);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::UpdateBreakpoints(enum scriptInstance_t inst, bool add) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, bool)>(L"Scr_ScriptWatch::UpdateBreakpoints")(inst, add);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::AddBreakpoint(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned char type) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned char)>(L"Scr_ScriptWatch::AddBreakpoint")(inst, element, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::RemoveBreakpoint(enum scriptInstance_t inst, struct Scr_WatchElement_s* element) -> struct Scr_WatchElement_s*
{
  return Zynamic::Forward<public struct Scr_WatchElement_s* (enum scriptInstance_t, struct Scr_WatchElement_s*)>(L"Scr_ScriptWatch::RemoveBreakpoint")(inst, element);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleWatchElementBreakpoint(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned char type) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned char)>(L"Scr_ScriptWatch::ToggleWatchElementBreakpoint")(inst, element, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleBreakpointInternal(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned char type) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned char)>(L"Scr_ScriptWatch::ToggleBreakpointInternal")(inst, element, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ToggleWatchElementBreakpointRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ToggleWatchElementBreakpointRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::SortHitBreakpointsTop(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<public void (enum scriptInstance_t)>(L"Scr_ScriptWatch::SortHitBreakpointsTop")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebuggerMain(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InitDebuggerMain")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebuggerMain(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ShutdownDebuggerMain")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InitDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ShutdownDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebuggerSystem(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_InitDebuggerSystem")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebuggerSystem(enum scriptInstance_t inst, int restart) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Scr_ShutdownDebuggerSystem")(inst, restart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ConnectRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ConnectRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddAssignmentPos(enum scriptInstance_t inst, char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, char*)>(L"Scr_AddAssignmentPos")(inst, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ResetAbortDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ResetAbortDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DisplayDebuggerRemoteInternal(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DisplayDebuggerRemoteInternal")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DisplayDebuggerRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DisplayDebuggerRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DisplayDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DisplayDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RunDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_RunDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DisplayHitBreakpointRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DisplayHitBreakpointRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_WatchElementHitBreakpoint(struct Scr_WatchElement_s* element, bool enabled) -> void
{
  return Zynamic::Forward<void (struct Scr_WatchElement_s*, bool)>(L"Scr_WatchElementHitBreakpoint")(element, enabled);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ConditionalExpression(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, unsigned int localId) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, struct Scr_WatchElement_s*, unsigned int)>(L"Scr_ConditionalExpression")(inst, element, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitBreakpointInternal(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_HitBreakpointInternal")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitBreakpoint(enum scriptInstance_t inst, struct VariableValue* top, const char* pos, unsigned int localId, int hitBreakpoint) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, struct VariableValue*, const char*, unsigned int, int)>(L"Scr_HitBreakpoint")(inst, top, pos, localId, hitBreakpoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitBuiltinBreakpoint(enum scriptInstance_t inst, struct VariableValue* top, const char* pos, unsigned int localId, int opcode, int builtinIndex, unsigned int outparamcount) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, struct VariableValue*, const char*, unsigned int, int, int, unsigned int)>(L"Scr_HitBuiltinBreakpoint")(inst, top, pos, localId, opcode, builtinIndex, outparamcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DebugKillThread(enum scriptInstance_t inst, unsigned int threadId, const char* codePos) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, const char*)>(L"Scr_DebugKillThread")(inst, threadId, codePos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DebugTerminateThread(enum scriptInstance_t inst, int topThread) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Scr_DebugTerminateThread")(inst, topThread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_WatchElementHasSameValue(enum scriptInstance_t inst, struct Scr_WatchElement_s* element, struct VariableValue* newValue) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, struct Scr_WatchElement_s*, struct VariableValue*)>(L"Scr_WatchElementHasSameValue")(inst, element, newValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_KeepAliveRemote(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_KeepAliveRemote")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ProcessDebugMessages(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ProcessDebugMessages")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ConsolePrintRemote(enum scriptInstance_t inst, int localClientNum) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Sys_ConsolePrintRemote")(inst, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateDebugSocket(enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t)>(L"Scr_UpdateDebugSocket")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateRemoteDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_UpdateRemoteDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateDebugger(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_UpdateDebugger")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitAssignmentBreakpoint(enum scriptInstance_t inst, struct VariableValue* top, const char* pos, unsigned int localId, int forceBreak) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, struct VariableValue*, const char*, unsigned int, int)>(L"Scr_HitAssignmentBreakpoint")(inst, top, pos, localId, forceBreak);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IgnoreErrors(enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t)>(L"Scr_IgnoreErrors")(inst);
}

#endif // __UNIMPLEMENTED__
