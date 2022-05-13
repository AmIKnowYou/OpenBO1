//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetControlAndDuplicatePartBits(const struct DObj* obj, const int* partBits, const int* ignorePartBits, const int* savedDuplicatePartBits, int* calcPartBits, int* controlPartBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, const int*, const int*, const int*, int*, int*)>(L"GetControlAndDuplicatePartBits")(obj, partBits, ignorePartBits, savedDuplicatePartBits, calcPartBits, controlPartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcSkelDuplicateBones(const struct XModel* model, struct DSkel* skel, int minBoneIndex, const unsigned char* pos) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (const struct XModel*, struct DSkel*, int, const unsigned char*)>(L"CalcSkelDuplicateBones")(model, skel, minBoneIndex, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcSkelRootBonesNoParentOrDuplicate(const struct XModel* model, struct DSkel* skel, int minBoneIndex, int* calcPartBits) -> void
{
  return Zynamic::Forward<void (const struct XModel*, struct DSkel*, int, int*)>(L"CalcSkelRootBonesNoParentOrDuplicate")(model, skel, minBoneIndex, calcPartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcSkelRootBonesWithParent(const struct XModel* model, struct DSkel* skel, unsigned int minBoneIndex, unsigned int modelParent, int* calcPartBits, const int* controlPartBits) -> void
{
  return Zynamic::Forward<void (const struct XModel*, struct DSkel*, unsigned int, unsigned int, int*, const int*)>(L"CalcSkelRootBonesWithParent")(model, skel, minBoneIndex, modelParent, calcPartBits, controlPartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcSkelNonRootBones(const struct XModel* model, struct DSkel* skel, int minBoneIndex, int* calcPartBits, const int* controlPartBits) -> void
{
  return Zynamic::Forward<void (const struct XModel*, struct DSkel*, int, int*, const int*)>(L"CalcSkelNonRootBones")(model, skel, minBoneIndex, calcPartBits, controlPartBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DobjHasAnyPartBits(const int* partBits) -> bool
{
  return Zynamic::Forward<bool (const int*)>(L"DobjHasAnyPartBits")(partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcSkel(const struct DObj* obj, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, int*)>(L"DObjCalcSkel")(obj, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcBaseAnim(const struct DObj* obj, struct DObjAnimMat* mat, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct DObjAnimMat*, int*)>(L"DObjCalcBaseAnim")(obj, mat, partBits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcBaseSkel(const struct DObj* obj, struct DObjAnimMat* mat, int* partBits) -> void
{
  return Zynamic::Forward<void (const struct DObj*, struct DObjAnimMat*, int*)>(L"DObjCalcBaseSkel")(obj, mat, partBits);
}

#endif // __UNIMPLEMENTED__
