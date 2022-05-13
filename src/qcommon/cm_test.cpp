//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_PointLeafnum_r(const float* p, int num) -> int
{
  return Zynamic::Forward<int (const float*, int)>(L"CM_PointLeafnum_r")(p, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointLeafnum(const float* p) -> int
{
  return Zynamic::Forward<int (const float*)>(L"CM_PointLeafnum")(p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_StoreLeafs(struct leafList_s* ll, int nodenum) -> void
{
  return Zynamic::Forward<void (struct leafList_s*, int)>(L"CM_StoreLeafs")(ll, nodenum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BoxLeafnums_r(struct leafList_s* ll, int nodenum) -> void
{
  return Zynamic::Forward<void (struct leafList_s*, int)>(L"CM_BoxLeafnums_r")(ll, nodenum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BoxLeafnums(const float* mins, const float* maxs, unsigned short* list, int listsize, int* lastLeaf) -> int
{
  return Zynamic::Forward<int (const float*, const float*, unsigned short*, int, int*)>(L"CM_BoxLeafnums")(mins, maxs, list, listsize, lastLeaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointContentsLeafBrushNode_r(const float* p, struct cLeafBrushNode_s* node) -> int
{
  return Zynamic::Forward<int (const float*, struct cLeafBrushNode_s*)>(L"CM_PointContentsLeafBrushNode_r")(p, node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointContents(const float* p, unsigned int model) -> int
{
  return Zynamic::Forward<int (const float*, unsigned int)>(L"CM_PointContents")(p, model);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedPointContents(const float* p, unsigned int model, const float* origin, const float* angles) -> int
{
  return Zynamic::Forward<int (const float*, unsigned int, const float*, const float*)>(L"CM_TransformedPointContents")(p, model, origin, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClusterPVS(int cluster) -> unsigned char*
{
  return Zynamic::Forward<unsigned char* (int)>(L"CM_ClusterPVS")(cluster);
}

#endif // __UNIMPLEMENTED__
