//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto compare_floats(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compare_floats")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PickAabbSplitPlane(float* mins[0x3], float* maxs[0x3], int* remap, int count, int* chosenAxis, float* chosenDist) -> int
{
  return Zynamic::Forward<int (float*[0x3], float*[0x3], int*, int, int*, float*)>(L"PickAabbSplitPlane")(mins, maxs, remap, count, chosenAxis, chosenDist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddedVolume(const float* addedmins, const float* addedmaxs, const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*, const float*)>(L"AddedVolume")(addedmins, addedmaxs, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SplitAabbTree(int count, const struct GenericAabbTreeOptions* options, int* remap, int* midStart, int* lastStart) -> int
{
  return Zynamic::Forward<int (int, const struct GenericAabbTreeOptions*, int*, int*, int*)>(L"SplitAabbTree")(count, options, remap, midStart, lastStart);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AllocAabbTreeNode(const struct GenericAabbTreeOptions* options) -> struct GenericAabbTree*
{
  return Zynamic::Forward<struct GenericAabbTree* (const struct GenericAabbTreeOptions*)>(L"AllocAabbTreeNode")(options);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateAabbSubTrees(struct GenericAabbTree* tree, const struct GenericAabbTreeOptions* options, int* remap, int firstIndex, int count) -> void
{
  return Zynamic::Forward<void (struct GenericAabbTree*, const struct GenericAabbTreeOptions*, int*, int, int)>(L"CreateAabbSubTrees")(tree, options, remap, firstIndex, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BuildAabbTree_r(struct GenericAabbTree* tree, const struct GenericAabbTreeOptions* options, int* remap) -> void
{
  return Zynamic::Forward<void (struct GenericAabbTree*, const struct GenericAabbTreeOptions*, int*)>(L"BuildAabbTree_r")(tree, options, remap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BuildAabbTree(const struct GenericAabbTreeOptions* options) -> int
{
  return Zynamic::Forward<int (const struct GenericAabbTreeOptions*)>(L"BuildAabbTree")(options);
}

#endif // __UNIMPLEMENTED__
