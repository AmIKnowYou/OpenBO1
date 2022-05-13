//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_g_xAnimInfo''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_g_xAnimInfo''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimTreeHasInfo(const struct XAnimTree_s* tree) -> bool
{
  return Zynamic::Forward<bool (const struct XAnimTree_s*)>(L"XAnimTreeHasInfo")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsLeafNode(const struct XAnimEntry* anim) -> bool
{
  return Zynamic::Forward<bool (const struct XAnimEntry*)>(L"IsLeafNode")(anim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsNodeAdditive(const struct XAnimEntry* node) -> bool
{
  return Zynamic::Forward<bool (const struct XAnimEntry*)>(L"IsNodeAdditive")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimInit() -> void
{
  return Zynamic::Forward<void ()>(L"XAnimInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"XAnimShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFree(struct XAnimParts* parts, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct XAnimParts*, enum scriptInstance_t)>(L"XAnimFree")(parts, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocXAnimTreePrecache(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"Hunk_AllocXAnimTreePrecache")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFindData_LoadObj(const char* name, function* Alloc) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (const char*, function *)>(L"XAnimFindData_LoadObj")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFindData_FastFile(const char* name, function* __formal) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (const char*, function *)>(L"XAnimFindData_FastFile")(name, __formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClone(struct XAnimParts* fromParts, function* Alloc) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (struct XAnimParts*, function *)>(L"XAnimClone")(fromParts, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimPrecache(const char* name, function* Alloc) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (const char*, function *)>(L"XAnimPrecache")(name, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreate(struct XAnim_s* anims, unsigned int animIndex, const char* name) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, const char*)>(L"XAnimCreate")(anims, animIndex, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimBlend(struct XAnim_s* anims, unsigned int animIndex, const char* name, unsigned int children, unsigned int num, unsigned int flags) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, const char*, unsigned int, unsigned int, unsigned int)>(L"XAnimBlend")(anims, animIndex, name, children, num, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetParamValue(struct XAnim_s* anims, unsigned int paramIndex, const char* strParamName, float paramValue) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, const char*, float)>(L"XAnimSetParamValue")(anims, paramIndex, strParamName, paramValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetValueSection(struct XAnim_s* anims, unsigned int animIndex, unsigned int iFirstValueIndex, unsigned int iValueCount) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, unsigned int, unsigned int)>(L"XAnimSetValueSection")(anims, animIndex, iFirstValueIndex, iValueCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateAnims(const char* debugName, int size, function* Alloc) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (const char*, int, function *)>(L"XAnimCreateAnims")(debugName, size, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateAnimsWithValues(const char* debugName, int size, int iTotalValueCount, function* Alloc) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (const char*, int, int, function *)>(L"XAnimCreateAnimsWithValues")(debugName, size, iTotalValueCount, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFreeList(struct XAnim_s* anims) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*)>(L"XAnimFreeList")(anims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateTree(struct XAnim_s* anims, function* Alloc) -> struct XAnimTree_s*
{
  return Zynamic::Forward<struct XAnimTree_s* (struct XAnim_s*, function *)>(L"XAnimCreateTree")(anims, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFreeTree(struct XAnimTree_s* tree, function* Free, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, function *, enum scriptInstance_t)>(L"XAnimFreeTree")(tree, Free, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnims(const struct XAnimTree_s* tree) -> struct XAnim_s*
{
  return Zynamic::Forward<struct XAnim_s* (const struct XAnimTree_s*)>(L"XAnimGetAnims")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimInitModelMap(struct XModel* const* models, unsigned int numModels, struct XModelNameMap* modelMap) -> void
{
  return Zynamic::Forward<void (struct XModel* const*, unsigned int, struct XModelNameMap*)>(L"XAnimInitModelMap")(models, numModels, modelMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimMap(const struct XAnimParts* parts, const struct XModelNameMap* modelMap) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XAnimParts*, const struct XModelNameMap*)>(L"XAnimGetAnimMap")(parts, modelMap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TransformToQuatRefFrame(const float* rot, float* trans) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"TransformToQuatRefFrame")(rot, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcRelDeltaParts(const struct XAnimParts* parts, const float weightScale, const float time1, const float time2, struct XAnimSimpleRotPos* rotPos, int quatIndex) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, const float, const float, const float, struct XAnimSimpleRotPos*, int)>(L"XAnimCalcRelDeltaParts")(parts, weightScale, time1, time2, rotPos, quatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcAbsDeltaParts(const struct XAnimParts* parts, const float weightScale, const float time, struct XAnimSimpleRotPos* rotPos) -> void
{
  return Zynamic::Forward<void (const struct XAnimParts*, const float, const float, struct XAnimSimpleRotPos*)>(L"XAnimCalcAbsDeltaParts")(parts, weightScale, time, rotPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearServerNotify(struct XAnimInfo* info, enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (struct XAnimInfo*, enum scriptInstance_t)>(L"XAnimClearServerNotify")(info, inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFreeInfo(struct XAnimTree_s* tree, unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int)>(L"XAnimFreeInfo")(tree, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCheckFreeInfo(struct XAnimTree_s* tree, unsigned int infoIndex, int hasWeight) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, int)>(L"XAnimCheckFreeInfo")(tree, infoIndex, hasWeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAverageRateFrequency(const struct XAnimTree_s* tree, unsigned int infoIndex) -> float
{
  return Zynamic::Forward<float (const struct XAnimTree_s*, unsigned int)>(L"XAnimGetAverageRateFrequency")(tree, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetNextNotifyIndex(const struct XAnimParts* parts, float time) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct XAnimParts*, float)>(L"XAnimGetNextNotifyIndex")(parts, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetNotifyFracLeaf(const struct XAnimState* state, const struct XAnimState* nextState, float time, float dtime) -> float
{
  return Zynamic::Forward<float (const struct XAnimState*, const struct XAnimState*, float, float)>(L"XAnimGetNotifyFracLeaf")(state, nextState, time, dtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetPartsForNotify(const struct XAnimTree_s* tree, struct XAnimInfo* info) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (const struct XAnimTree_s*, struct XAnimInfo*)>(L"XAnimGetPartsForNotify")(tree, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddSignalToNoteList(class XAnimClientNotifyList* pList, const struct ClientNotifyData& ourNote) -> void
{
  return Zynamic::Forward<void (class XAnimClientNotifyList*, const struct ClientNotifyData&)>(L"AddSignalToNoteList")(pList, ourNote);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAddClientNotify(unsigned int notetrackName, float frac, unsigned int notifyType) -> void
{
  return Zynamic::Forward<void (unsigned int, float, unsigned int)>(L"XAnimAddClientNotify")(notetrackName, frac, notifyType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAddClientNotifyNamed(unsigned int notetrackName, float frac, unsigned int notifyName) -> void
{
  return Zynamic::Forward<void (unsigned int, float, unsigned int)>(L"XAnimAddClientNotifyNamed")(notetrackName, frac, notifyName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimProcessClientNotify(struct XAnimInfo* info, float dtime) -> void
{
  return Zynamic::Forward<void (struct XAnimInfo*, float)>(L"XAnimProcessClientNotify")(info, dtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimUpdateInfoSync(const struct DObj* obj, unsigned int infoIndex, int notifyFlags, struct XAnimState* syncState, float dtime) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int, int, struct XAnimState*, float)>(L"XAnimUpdateInfoSync")(obj, infoIndex, notifyFlags, syncState, dtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimUpdateTimeAndNotetrackLeaf(const struct DObj* obj, const struct XAnimParts* parts, unsigned int infoIndex, float dtime, int notifyFlags) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const struct XAnimParts*, unsigned int, float, int)>(L"XAnimUpdateTimeAndNotetrackLeaf")(obj, parts, infoIndex, dtime, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimUpdateTimeAndNotetrackSyncSubTree(const struct DObj* obj, unsigned int infoIndex, float dtime, int notifyFlags) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int, float, int)>(L"XAnimUpdateTimeAndNotetrackSyncSubTree")(obj, infoIndex, dtime, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimUpdateTimeAndNotetrack(const struct DObj* obj, unsigned int infoIndex, float dtime, int notifyFlags) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int, float, int)>(L"XAnimUpdateTimeAndNotetrack")(obj, infoIndex, dtime, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimInitInfo(struct XAnimInfo* info) -> void
{
  return Zynamic::Forward<void (struct XAnimInfo*)>(L"XAnimInitInfo")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetTimeInternal(unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"XAnimResetTimeInternal")(infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetTime(unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"XAnimResetTime")(infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneInitTime(struct XAnimTree_s* tree, unsigned int infoIndex, unsigned int parentIndex, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct XAnimTree_s*, unsigned int, unsigned int, int)>(L"XAnimCloneInitTime")(tree, infoIndex, parentIndex, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimInitTime(struct XAnimTree_s* tree, unsigned int infoIndex, float goalTime, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimInitTime")(tree, infoIndex, goalTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimUpdateOldTime(struct DObj* obj, unsigned int infoIndex, struct XAnimState* syncState, float dtime, bool parentHasWeight, bool* childHasTimeForParent) -> void
{
  return Zynamic::Forward<void (struct DObj*, unsigned int, struct XAnimState*, float, bool, bool*)>(L"XAnimUpdateOldTime")(obj, infoIndex, syncState, dtime, parentHasWeight, childHasTimeForParent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NotifyServerNotetrack(const struct DObj* obj, unsigned int notifyName, unsigned int notetrackName, float fPercentage) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int, unsigned int, float)>(L"NotifyServerNotetrack")(obj, notifyName, notetrackName, fPercentage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimProcessServerNotify(const struct DObj* obj, struct XAnimInfo* info, float time) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct XAnimInfo*, float)>(L"XAnimProcessServerNotify")(obj, info, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetAnimMapLeaf(const struct XModelNameMap* modelMap, unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (const struct XModelNameMap*, unsigned int)>(L"XAnimResetAnimMapLeaf")(modelMap, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetAnimMap_r(struct XModelNameMap* modelMap, unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (struct XModelNameMap*, unsigned int)>(L"XAnimResetAnimMap_r")(modelMap, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetAnimMap(const struct DObj* obj, unsigned int infoIndex) -> void
{
  return Zynamic::Forward<void (const struct DObj*, unsigned int)>(L"XAnimResetAnimMap")(obj, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcDeltaTree(const struct DObj* obj, const unsigned int infoIndex, const float weightScale, const struct XAnimDeltaInfo deltaInfo, struct XAnimSimpleRotPos* rotPos) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const unsigned int, const float, const struct XAnimDeltaInfo, struct XAnimSimpleRotPos*)>(L"XAnimCalcDeltaTree")(obj, infoIndex, weightScale, deltaInfo, rotPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetLength(const struct XAnim_s* anims, unsigned int animIndex) -> float
{
  return Zynamic::Forward<float (const struct XAnim_s*, unsigned int)>(L"XAnimGetLength")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetFrameCount(const struct XAnim_s* anims, unsigned int animIndex) -> int
{
  return Zynamic::Forward<int (const struct XAnim_s*, unsigned int)>(L"XAnimGetFrameCount")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetLengthMsec(const struct XAnim_s* anims, unsigned int anim) -> int
{
  return Zynamic::Forward<int (const struct XAnim_s*, unsigned int)>(L"XAnimGetLengthMsec")(anims, anim);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetInfoIndex_r(unsigned int animIndex, unsigned int infoIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int)>(L"XAnimGetInfoIndex_r")(animIndex, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetInfoIndex(const struct XAnimTree_s* tree, unsigned int animIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XAnimTree_s*, unsigned int)>(L"XAnimGetInfoIndex")(tree, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetTime(const struct XAnimTree_s* tree, unsigned int animIndex) -> float
{
  return Zynamic::Forward<float (const struct XAnimTree_s*, unsigned int)>(L"XAnimGetTime")(tree, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetWeight(const struct XAnimTree_s* tree, unsigned int animIndex) -> float
{
  return Zynamic::Forward<float (const struct XAnimTree_s*, unsigned int)>(L"XAnimGetWeight")(tree, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimHasFinished(const struct XAnimTree_s* tree, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (const struct XAnimTree_s*, unsigned int)>(L"XAnimHasFinished")(tree, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetNumChildren(const struct XAnim_s* anims, unsigned int animIndex) -> int
{
  return Zynamic::Forward<int (const struct XAnim_s*, unsigned int)>(L"XAnimGetNumChildren")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetChildAt(const struct XAnim_s* anims, unsigned int animIndex, unsigned int childIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XAnim_s*, unsigned int, unsigned int)>(L"XAnimGetChildAt")(anims, animIndex, childIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimName(const struct XAnim_s* anims, unsigned int animIndex) -> const char*
{
  return Zynamic::Forward<const char* (const struct XAnim_s*, unsigned int)>(L"XAnimGetAnimName")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimDebugName(const struct XAnim_s* anims, unsigned int animIndex) -> const char*
{
  return Zynamic::Forward<const char* (const struct XAnim_s*, unsigned int)>(L"XAnimGetAnimDebugName")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimTreeSize(const struct XAnim_s* anims) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XAnim_s*)>(L"XAnimGetAnimTreeSize")(anims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjInitServerTime(struct DObj* obj, float dtime) -> void
{
  return Zynamic::Forward<void (struct DObj*, float)>(L"DObjInitServerTime")(obj, dtime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUpdateClientInfo(struct DObj* obj, float dtime, int notifyFlags) -> void
{
  return Zynamic::Forward<void (struct DObj*, float, int)>(L"DObjUpdateClientInfo")(obj, dtime, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearServerNotifies() -> void
{
  return Zynamic::Forward<void ()>(L"DObjClearServerNotifies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetServerNotifies(struct XAnimServerNotifyList* pNotifyList) -> void
{
  return Zynamic::Forward<void (struct XAnimServerNotifyList*)>(L"DObjSetServerNotifies")(pNotifyList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearClientNotifies() -> void
{
  return Zynamic::Forward<void ()>(L"DObjClearClientNotifies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetClientNotifies(class XAnimClientNotifyList* pNotifyList) -> void
{
  return Zynamic::Forward<void (class XAnimClientNotifyList*)>(L"DObjSetClientNotifies")(pNotifyList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetClientNotifies() -> const class XAnimClientNotifyList*
{
  return Zynamic::Forward<const class XAnimClientNotifyList* ()>(L"DObjGetClientNotifies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUpdateServerInfo(struct DObj* obj, float dtime, int notifyFlags) -> void
{
  return Zynamic::Forward<void (struct DObj*, float, int)>(L"DObjUpdateServerInfo")(obj, dtime, notifyFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimDisplay(const struct XAnimTree_s* tree, unsigned int infoIndex, int depth, char* buffer, int bufferSize, int* bufferPos) -> void
{
  return Zynamic::Forward<void (const struct XAnimTree_s*, unsigned int, int, char*, int, int*)>(L"XAnimDisplay")(tree, infoIndex, depth, buffer, bufferSize, bufferPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDisplayAnimToBuffer(const struct DObj* obj, const char* header, char* buffer, int bufferSize) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const char*, char*, int)>(L"DObjDisplayAnimToBuffer")(obj, header, buffer, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDisplayAnim(const struct DObj* obj, const char* header) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const char*)>(L"DObjDisplayAnim")(obj, header);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcDelta(struct DObj* obj, unsigned int animIndex, float* rot, float* trans, bool bUseGoalWeight) -> void
{
  return Zynamic::Forward<void (struct DObj*, unsigned int, float*, float*, bool)>(L"XAnimCalcDelta")(obj, animIndex, rot, trans, bUseGoalWeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcAbsDelta(struct DObj* obj, unsigned int animIndex, float* rot, float* trans) -> void
{
  return Zynamic::Forward<void (struct DObj*, unsigned int, float*, float*)>(L"XAnimCalcAbsDelta")(obj, animIndex, rot, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetRelDelta(const struct XAnim_s* anims, unsigned int animIndex, float* rot, float* trans, float time1, float time2) -> void
{
  return Zynamic::Forward<void (const struct XAnim_s*, unsigned int, float*, float*, float, float)>(L"XAnimGetRelDelta")(anims, animIndex, rot, trans, time1, time2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAbsDelta(const struct XAnim_s* anims, unsigned int animIndex, float* rot, float* trans, float time) -> void
{
  return Zynamic::Forward<void (const struct XAnim_s*, unsigned int, float*, float*, float)>(L"XAnimGetAbsDelta")(anims, animIndex, rot, trans, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAllocInfoWithParent(struct XAnimTree_s* tree, unsigned int animToModel, unsigned int animIndex, unsigned int parentInfoIndex, int after, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct XAnimTree_s*, unsigned int, unsigned int, unsigned int, int, int)>(L"XAnimAllocInfoWithParent")(tree, animToModel, animIndex, parentInfoIndex, after, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimEnsureGoalWeightParent(struct DObj* obj, unsigned int animIndex, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct DObj*, unsigned int, int)>(L"XAnimEnsureGoalWeightParent")(obj, animIndex, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAllocInfoIndex(struct DObj* obj, unsigned int animIndex, int after, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct DObj*, unsigned int, int, int)>(L"XAnimAllocInfoIndex")(obj, animIndex, after, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearGoalWeightInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float blendTime, int forceBlendTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int, int)>(L"XAnimClearGoalWeightInternal")(tree, infoIndex, blendTime, forceBlendTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearGoalWeight(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimClearGoalWeight")(tree, animIndex, blendTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTreeGoalWeightsInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float blendTime, int forceBlendTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int, int)>(L"XAnimClearTreeGoalWeightsInternal")(tree, infoIndex, blendTime, forceBlendTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTreeGoalWeights(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimClearTreeGoalWeights")(tree, animIndex, blendTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTreeGoalWeightsStrict(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimClearTreeGoalWeightsStrict")(tree, animIndex, blendTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearGoalWeightKnobInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, float, int)>(L"XAnimClearGoalWeightKnobInternal")(tree, infoIndex, goalWeight, goalTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightNode(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct XAnimTree_s*, unsigned int, float, float, float, unsigned int, unsigned int, int)>(L"XAnimSetCompleteGoalWeightNode")(tree, infoIndex, goalWeight, goalTime, rate, notifyName, notifyType, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightKnob(struct DObj* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetCompleteGoalWeightKnob")(obj, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeightKnobAll(struct DObj* obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetGoalWeightKnobAll")(obj, animIndex, rootIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightKnobAll(struct DObj* obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetCompleteGoalWeightKnobAll")(obj, animIndex, rootIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeightKnob(struct DObj* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetGoalWeightKnob")(obj, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTree(struct XAnimTree_s* tree) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*)>(L"XAnimClearTree")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetDescendantWithGreatestWeight(const struct XAnimTree_s* tree, unsigned int infoIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct XAnimTree_s*, unsigned int)>(L"XAnimGetDescendantWithGreatestWeight")(tree, infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeightNode(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct XAnimTree_s*, unsigned int, float, float, float, unsigned int, unsigned int, int)>(L"XAnimSetGoalWeightNode")(tree, infoIndex, goalWeight, goalTime, rate, notifyName, notifyType, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetupSyncNodes_r(struct XAnim_s* anims, unsigned int animIndex, int parFlags) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*, unsigned int, int)>(L"XAnimSetupSyncNodes_r")(anims, animIndex, parFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetupSyncNodes(struct XAnim_s* anims) -> void
{
  return Zynamic::Forward<void (struct XAnim_s*)>(L"XAnimSetupSyncNodes")(anims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimHasTime(const struct XAnim_s* anims, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int)>(L"XAnimHasTime")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsPrimitive(struct XAnim_s* anims, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (struct XAnim_s*, unsigned int)>(L"XAnimIsPrimitive")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetTime(struct XAnimTree_s* tree, unsigned int animIndex, float time, int cmdIndex) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimSetTime")(tree, animIndex, time, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimRestart(struct XAnimTree_s* tree, unsigned int infoIndex, float goalTime, int cmdIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct XAnimTree_s*, unsigned int, float, int)>(L"XAnimRestart")(tree, infoIndex, goalTime, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeight(struct DObj* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetGoalWeight")(obj, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetAnimRate(struct XAnimTree_s* tree, unsigned int animIndex, float rate) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, unsigned int, float)>(L"XAnimSetAnimRate")(tree, animIndex, rate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsLooped(const struct XAnim_s* anims, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int)>(L"XAnimIsLooped")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetBoneCount(const struct XAnim_s* anims, unsigned int animIndex) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const struct XAnim_s*, unsigned int)>(L"XAnimGetBoneCount")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimHasBone(const struct XAnim_s* anims, unsigned int animIndex, unsigned short boneName) -> int
{
  return Zynamic::Forward<int (const struct XAnim_s*, unsigned int, unsigned short)>(L"XAnimHasBone")(anims, animIndex, boneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsClientNode(const struct XAnim_s* anims, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int)>(L"XAnimIsClientNode")(anims, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsClientNode(struct XAnimTree_s* tree, unsigned int animIndex) -> bool
{
  return Zynamic::Forward<bool (struct XAnimTree_s*, unsigned int)>(L"XAnimIsClientNode")(tree, animIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimNotetrackExists(const struct XAnim_s* anims, unsigned int animIndex, unsigned int name) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int, unsigned int)>(L"XAnimNotetrackExists")(anims, animIndex, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAddNotetrackTimesToScriptArray(const struct XAnim_s* anims, unsigned int animIndex, unsigned int name) -> void
{
  return Zynamic::Forward<void (const struct XAnim_s*, unsigned int, unsigned int)>(L"XAnimAddNotetrackTimesToScriptArray")(anims, animIndex, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeight(struct DObj* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart, int cmdIndex) -> int
{
  return Zynamic::Forward<int (struct DObj*, unsigned int, float, float, float, unsigned int, unsigned int, int, int)>(L"XAnimSetCompleteGoalWeight")(obj, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, cmdIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneAnimInfo(struct XAnimTree_s* toTree, const struct XAnimInfo* from, struct XAnimInfo* to) -> void
{
  return Zynamic::Forward<void (struct XAnimTree_s*, const struct XAnimInfo*, struct XAnimInfo*)>(L"XAnimCloneAnimInfo")(toTree, from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneAnimTree_r(const struct XAnimTree_s* from, struct XAnimTree_s* to, unsigned int fromInfoIndex, unsigned int toInfoParentIndex) -> void
{
  return Zynamic::Forward<void (const struct XAnimTree_s*, struct XAnimTree_s*, unsigned int, unsigned int)>(L"XAnimCloneAnimTree_r")(from, to, fromInfoIndex, toInfoParentIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneAnimTree(const struct XAnimTree_s* from, struct XAnimTree_s* to) -> void
{
  return Zynamic::Forward<void (const struct XAnimTree_s*, struct XAnimTree_s*)>(L"XAnimCloneAnimTree")(from, to);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAnimInfo(int infoIndex) -> struct XAnimInfo*
{
  return Zynamic::Forward<struct XAnimInfo* (int)>(L"GetAnimInfo")(infoIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetParamValue(const struct XAnim_s* anims, unsigned int animIndex, const char* paramName, float* outValue) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int, const char*, float*)>(L"XAnimGetParamValue")(anims, animIndex, paramName, outValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetParamValueTree(const struct XAnim_s* anims, unsigned int animIndex, const char* paramName, float* outValue) -> bool
{
  return Zynamic::Forward<bool (const struct XAnim_s*, unsigned int, const char*, float*)>(L"XAnimGetParamValueTree")(anims, animIndex, paramName, outValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetParamValue(struct XAnimTree_s* tree, unsigned int animIndex, const char* paramName, float* outValue) -> bool
{
  return Zynamic::Forward<bool (struct XAnimTree_s*, unsigned int, const char*, float*)>(L"XAnimGetParamValue")(tree, animIndex, paramName, outValue);
}

#endif // __UNIMPLEMENTED__
