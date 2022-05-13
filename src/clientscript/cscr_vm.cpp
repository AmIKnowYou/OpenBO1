//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_gScrVmDebugPub''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_gScrVmDebugPub''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_vm() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_scr_vm")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClearErrorMessage(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ClearErrorMessage")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_VM_Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_VM_Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_Shutdown(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"VM_Shutdown")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Init(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_Init")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Settings(int developer, int developer_script, int abort_on_error, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (int, int, int, enum scriptInstance_t)>(L"Scr_Settings")(developer, developer_script, abort_on_error, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Shutdown(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_Shutdown")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetLoading(int bLoading, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (int, enum scriptInstance_t)>(L"Scr_SetLoading")(bLoading, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ErrorInternal(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ErrorInternal")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNumScriptThreads(enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t)>(L"Scr_GetNumScriptThreads")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ClearOutParams(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ClearOutParams")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDummyObject(enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t)>(L"GetDummyObject")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDummyFieldValue(enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t)>(L"GetDummyFieldValue")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_PrintJumpHistory(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"VM_PrintJumpHistory")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_Execute(enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t)>(L"VM_Execute")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetReturnPos(enum scriptInstance_t inst, unsigned int* localId) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int*)>(L"Scr_GetReturnPos")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNextCodepos(enum scriptInstance_t inst, struct VariableValue* top, const char* pos, int opcode, int mode, unsigned int* localId) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, struct VariableValue*, const char*, int, int, unsigned int*)>(L"Scr_GetNextCodepos")(inst, top, pos, opcode, mode, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_CancelNotifyInternal(enum scriptInstance_t inst, unsigned int notifyListOwnerId, unsigned int startLocalId, unsigned int notifyListId, unsigned int notifyNameListId, unsigned int stringValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)>(L"VM_CancelNotifyInternal")(inst, notifyListOwnerId, startLocalId, notifyListId, notifyNameListId, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_CancelNotify(enum scriptInstance_t inst, unsigned int notifyListOwnerId, unsigned int startLocalId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"VM_CancelNotify")(inst, notifyListOwnerId, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_ArchiveStack(enum scriptInstance_t inst, struct function_stack_t* stack) -> struct VariableStackBuffer*
{
  return Zynamic::Forward<struct VariableStackBuffer* (enum scriptInstance_t, struct function_stack_t*)>(L"VM_ArchiveStack")(inst, stack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddLocalVars(enum scriptInstance_t inst, unsigned int localId) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, unsigned int)>(L"Scr_AddLocalVars")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_UnarchiveStack(enum scriptInstance_t inst, unsigned int startLocalId, const struct VariableStackBuffer* stackValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, const struct VariableStackBuffer*)>(L"VM_UnarchiveStack")(inst, startLocalId, stackValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_TerminateStack(enum scriptInstance_t inst, unsigned int endLocalId, unsigned int startLocalId, struct VariableStackBuffer* stackValue) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, struct VariableStackBuffer*)>(L"VM_TerminateStack")(inst, endLocalId, startLocalId, stackValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetStackThreadPos(enum scriptInstance_t inst, unsigned int endLocalId, struct VariableStackBuffer* stackValue, bool killThread) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int, struct VariableStackBuffer*, bool)>(L"Scr_GetStackThreadPos")(inst, endLocalId, stackValue, killThread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_TrimStack(enum scriptInstance_t inst, unsigned int startLocalId, struct VariableStackBuffer* stackValue, bool fromEndon) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, struct VariableStackBuffer*, bool)>(L"VM_TrimStack")(inst, startLocalId, stackValue, fromEndon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TerminateRunningThread(enum scriptInstance_t inst, unsigned int localId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_TerminateRunningThread")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetRunningThreadPos(enum scriptInstance_t inst, unsigned int localId) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int)>(L"Scr_GetRunningThreadPos")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TerminateWaitThread(enum scriptInstance_t inst, unsigned int localId, unsigned int startLocalId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_TerminateWaitThread")(inst, localId, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetWaitThreadStackId(enum scriptInstance_t inst, unsigned int localId, unsigned int startLocalId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_GetWaitThreadStackId")(inst, localId, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CancelWaittill(enum scriptInstance_t inst, unsigned int startLocalId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_CancelWaittill")(inst, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TerminateWaittillThread(enum scriptInstance_t inst, unsigned int localId, unsigned int startLocalId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_TerminateWaittillThread")(inst, localId, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetWaittillThreadStackId(enum scriptInstance_t inst, unsigned int localId, unsigned int startLocalId) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, unsigned int)>(L"Scr_GetWaittillThreadStackId")(inst, localId, startLocalId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsEndonThread(enum scriptInstance_t inst, unsigned int localId) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, unsigned int)>(L"Scr_IsEndonThread")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TerminateThread(enum scriptInstance_t inst, unsigned int localId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_TerminateThread")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetThreadPos(enum scriptInstance_t inst, unsigned int localId) -> const char*
{
  return Zynamic::Forward<const char* (enum scriptInstance_t, unsigned int)>(L"Scr_GetThreadPos")(inst, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_Notify(enum scriptInstance_t inst, unsigned int notifyListOwnerId, unsigned int stringValue, struct VariableValue* top) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int, unsigned int, struct VariableValue*)>(L"VM_Notify")(inst, notifyListOwnerId, stringValue, top);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_NotifyNum_Internal(enum scriptInstance_t inst, int clientNum, int entnum, unsigned int classnum, unsigned int stringValue, unsigned int paramcount) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, int, unsigned int, unsigned int, unsigned int)>(L"Scr_NotifyNum_Internal")(inst, clientNum, entnum, classnum, stringValue, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_NotifyNum(int entnum, unsigned int classnum, unsigned int stringValue, unsigned int paramcount) -> void
{
  return Zynamic::Forward<void (int, unsigned int, unsigned int, unsigned int)>(L"Scr_NotifyNum")(entnum, classnum, stringValue, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CScr_NotifyNum(int clientNum, int entnum, unsigned int classnum, unsigned int stringValue, unsigned int paramcount) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int, unsigned int, unsigned int)>(L"CScr_NotifyNum")(clientNum, entnum, classnum, stringValue, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CancelNotifyList(enum scriptInstance_t inst, unsigned int notifyListOwnerId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"Scr_CancelNotifyList")(inst, notifyListOwnerId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_TerminateTime(enum scriptInstance_t inst, unsigned int timeId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"VM_TerminateTime")(inst, timeId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_Resume(enum scriptInstance_t inst, unsigned int timeId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned int)>(L"VM_Resume")(inst, timeId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IncInParam(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"IncInParam")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_Execute(enum scriptInstance_t inst, unsigned int localId, const char* pos, unsigned int paramcount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int, const char*, unsigned int)>(L"VM_Execute")(inst, localId, pos, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExecThread(enum scriptInstance_t inst, int handle, unsigned int paramcount) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum scriptInstance_t, int, unsigned int)>(L"Scr_ExecThread")(inst, handle, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExecEntThreadNum(enum scriptInstance_t inst, int entnum, unsigned int classnum, int handle, unsigned int paramcount, unsigned int localClientNum) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum scriptInstance_t, int, unsigned int, int, unsigned int, unsigned int)>(L"Scr_ExecEntThreadNum")(inst, entnum, classnum, handle, paramcount, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddExecThread(enum scriptInstance_t inst, int handle, unsigned int paramcount) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int, unsigned int)>(L"Scr_AddExecThread")(inst, handle, paramcount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeThread(unsigned short handle, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned short, enum scriptInstance_t)>(L"Scr_FreeThread")(handle, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExecCode(enum scriptInstance_t inst, const char* pos, unsigned int localId) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, unsigned int)>(L"Scr_ExecCode")(inst, pos, localId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VM_SetTime(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"VM_SetTime")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsSystemInitied(enum scriptInstance_t inst) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t)>(L"Scr_IsSystemInitied")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitSystem(enum scriptInstance_t inst, int sys) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Scr_InitSystem")(inst, sys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownSystem(enum scriptInstance_t inst, unsigned char sys, int bComplete) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char, int)>(L"Scr_ShutdownSystem")(inst, sys, bComplete);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsSystemActive(unsigned char sys, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (unsigned char, enum scriptInstance_t)>(L"Scr_IsSystemActive")(sys, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetInt(unsigned int index, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (unsigned int, enum scriptInstance_t)>(L"Scr_GetInt")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnim(unsigned int index, struct XAnimTree_s* tree, enum scriptInstance_t inst) -> struct scr_anim_s
{
  return Zynamic::Forward<struct scr_anim_s (unsigned int, struct XAnimTree_s*, enum scriptInstance_t)>(L"Scr_GetAnim")(index, tree, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetAnimTree(unsigned int index, unsigned int user, enum scriptInstance_t inst) -> struct scr_animtree_t
{
  return Zynamic::Forward<struct scr_animtree_t (unsigned int, unsigned int, enum scriptInstance_t)>(L"Scr_GetAnimTree")(index, user, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFloat(unsigned int index, enum scriptInstance_t inst) -> float
{
  return Zynamic::Forward<float (unsigned int, enum scriptInstance_t)>(L"Scr_GetFloat")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetConstString(unsigned int index, enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum scriptInstance_t)>(L"Scr_GetConstString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetConstLowercaseString(unsigned int index, enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum scriptInstance_t)>(L"Scr_GetConstLowercaseString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetString(unsigned int index, enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int, enum scriptInstance_t)>(L"Scr_GetString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetConstStringIncludeNull(unsigned int index, enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum scriptInstance_t)>(L"Scr_GetConstStringIncludeNull")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetDebugString(unsigned int index, enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int, enum scriptInstance_t)>(L"Scr_GetDebugString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetConstIString(unsigned int index, enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum scriptInstance_t)>(L"Scr_GetConstIString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetIString(unsigned int index, enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int, enum scriptInstance_t)>(L"Scr_GetIString")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetVector(unsigned int index, float* vectorValue, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, float*, enum scriptInstance_t)>(L"Scr_GetVector")(index, vectorValue, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunc(unsigned int index, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (unsigned int, enum scriptInstance_t)>(L"Scr_GetFunc")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetEntityRef(unsigned int index, enum scriptInstance_t inst) -> struct scr_entref_t
{
  return Zynamic::Forward<struct scr_entref_t (unsigned int, enum scriptInstance_t)>(L"Scr_GetEntityRef")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetObject(unsigned int index, enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, enum scriptInstance_t)>(L"Scr_GetObject")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetType(unsigned int index, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (unsigned int, enum scriptInstance_t)>(L"Scr_GetType")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetTypeName(unsigned int index, enum scriptInstance_t inst) -> const char*
{
  return Zynamic::Forward<const char* (unsigned int, enum scriptInstance_t)>(L"Scr_GetTypeName")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPointerType(unsigned int index, enum scriptInstance_t inst) -> int
{
  return Zynamic::Forward<int (unsigned int, enum scriptInstance_t)>(L"Scr_GetPointerType")(index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetNumParam(enum scriptInstance_t inst) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t)>(L"Scr_GetNumParam")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddBool(int value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (int, enum scriptInstance_t)>(L"Scr_AddBool")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddInt(int value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (int, enum scriptInstance_t)>(L"Scr_AddInt")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddFloat(float value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (float, enum scriptInstance_t)>(L"Scr_AddFloat")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddAnim(struct scr_anim_s value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct scr_anim_s, enum scriptInstance_t)>(L"Scr_AddAnim")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddUndefined(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_AddUndefined")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddObject(unsigned int id, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, enum scriptInstance_t)>(L"Scr_AddObject")(id, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddEntityNum(int entnum, unsigned int classnum, enum scriptInstance_t inst, int clientNum) -> void
{
  return Zynamic::Forward<void (int, unsigned int, enum scriptInstance_t, int)>(L"Scr_AddEntityNum")(entnum, classnum, inst, clientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddStruct(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_AddStruct")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddString(const char* value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_AddString")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddIString(const char* value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_AddIString")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddConstString(unsigned int value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, enum scriptInstance_t)>(L"Scr_AddConstString")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddVector(const float* value, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const float*, enum scriptInstance_t)>(L"Scr_AddVector")(value, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MakeArray(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_MakeArray")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddArray(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_AddArray")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddArrayStringIndexed(unsigned int stringValue, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, enum scriptInstance_t)>(L"Scr_AddArrayStringIndexed")(stringValue, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetErrorMessage(enum scriptInstance_t inst, const char* error) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*)>(L"Scr_SetErrorMessage")(inst, error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Error(const char* error, bool force_terminal) -> void
{
  return Zynamic::Forward<void (const char*, bool)>(L"Scr_Error")(error, force_terminal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Error(enum scriptInstance_t inst, const char* error, bool force_terminal) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, const char*, bool)>(L"Scr_Error")(inst, error, force_terminal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_TerminalError(const char* error, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_TerminalError")(error, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_NeverTerminalError(const char* error, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_NeverTerminalError")(error, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ParamError(unsigned int index, const char* error, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, const char*, enum scriptInstance_t)>(L"Scr_ParamError")(index, error, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ObjectError(const char* error, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (const char*, enum scriptInstance_t)>(L"Scr_ObjectError")(error, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetEntityFieldValue(enum scriptInstance_t inst, unsigned int classnum, int entnum, unsigned short clientNum, int offset, struct VariableValue* value) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t, unsigned int, int, unsigned short, int, struct VariableValue*)>(L"SetEntityFieldValue")(inst, classnum, entnum, clientNum, offset, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetEntityFieldValue(enum scriptInstance_t inst, unsigned int classnum, int entnum, unsigned short clientNum, int offset) -> struct VariableValue
{
  return Zynamic::Forward<struct VariableValue (enum scriptInstance_t, unsigned int, int, unsigned short, int)>(L"GetEntityFieldValue")(inst, classnum, entnum, clientNum, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetStructField(unsigned int structId, unsigned int index, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, enum scriptInstance_t)>(L"Scr_SetStructField")(structId, index, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetDynamicEntityField(int entnum, unsigned int classnum, unsigned int index, enum scriptInstance_t inst, int localClientNum) -> void
{
  return Zynamic::Forward<void (int, unsigned int, unsigned int, enum scriptInstance_t, int)>(L"Scr_SetDynamicEntityField")(entnum, classnum, index, inst, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IncTime(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_IncTime")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DecTime(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_DecTime")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RunCurrentThreads(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_RunCurrentThreads")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ResetTimeout(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_ResetTimeout")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsStackClear(enum scriptInstance_t inst) -> bool
{
  return Zynamic::Forward<bool (enum scriptInstance_t)>(L"Scr_IsStackClear")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_StackClear(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_StackClear")(inst);
}

#endif // __UNIMPLEMENTED__
